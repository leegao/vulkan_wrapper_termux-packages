# cp ~/.termux-build/vulkan-wrapper-android/build/src/vulkan/wrapper/libvulkan_wrapper.so ./
# NDK=/home/builder/lib/android-ndk-r27c ./build-package.sh --library bionic vulkan-wrapper-android -s

APK="$1"

if [ ! -f "$APK" ]; then
	echo "Please run $0 <PATH_TO_WINLATOR_BIONIC>.apk"
	exit 1
fi

echo "Copying $APK to base.apk"
cp "$APK" base.apk

find usr/lib -mindepth 1 -not -name "libvulkan_wrapper.so" -delete
ls -lh usr/lib
echo "Adding other wrapper libraries"
unzip -p "$APK" assets/graphics_driver/wrapper.tzst | zstd -d | tar -x --exclude='usr/lib/libvulkan_wrapper.so'
ls -lh usr/lib

echo "Building assets/graphics_driver/wrapper.tzst"
tar -cvf wrapper.tar usr
rm assets/graphics_driver/wrapper.tzst
zstd wrapper.tar -o assets/graphics_driver/wrapper.tzst

echo "Adding Wrapper to base.apk"
zip -u base.apk assets/graphics_driver/wrapper.tzst

# Need to re-align the APK if we add libVkLayer_khronos_validation.so as an uncompressed native lib
# zip -u base.apk -n .so lib/arm64-v8a/libVkLayer_khronos_validation.so
# ~/Android/Sdk/build-tools/35.0.0/zipalign -P 16 16 -f base.apk

echo "Signing base.apk"
java -Xmx256m -jar uber-apk-signer-1.3.0.jar -a base.apk --allowResign --overwrite
# Less jankiness by disabling incfs install over adb (I'm sorry mapatt/zyy/alexbuy, it's for the greater good)
rm base.apk.idsig

echo "Patched Winlator built at base.apk"
echo "Run adb install base.apk to install it"
