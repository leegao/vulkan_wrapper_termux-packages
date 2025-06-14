# cp ~/.termux-build/vulkan-wrapper-android/build/src/vulkan/wrapper/libvulkan_wrapper.so ./
# NDK=/home/builder/lib/android-ndk-r27c ./build-package.sh --library bionic vulkan-wrapper-android -s

APK="$1"

if [ ! -f "$APK" ]; then
	echo "Please run $0 <PATH_TO_WINLATOR_BIONIC>.apk"
	exit 1
fi

echo "Copying $APK to base.apk"
cp "$APK" base.apk

echo "Building assets/graphics_driver/wrapper.tzst"
tar -cvf wrapper.tar usr
rm assets/graphics_driver/wrapper.tzst
zstd wrapper.tar -o assets/graphics_driver/wrapper.tzst

echo "Adding Wrapper to base.apk"
zip -u base.apk assets/graphics_driver/wrapper.tzst

echo "Signing base.apk"
java -Xmx256m -jar uber-apk-signer-1.3.0.jar -a base.apk --allowResign --overwrite
rm base.apk.idsig

echo "Patched Winlator built at base.apk"
# adb install base.apk
