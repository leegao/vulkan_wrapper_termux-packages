# cp ~/.termux-build/vulkan-wrapper-android/build/src/vulkan/wrapper/libvulkan_wrapper.so ./
# NDK=/home/builder/lib/android-ndk-r27c ./build-package.sh --library bionic vulkan-wrapper-android -s

APK="$1"

if [ ! -f "$APK" ]; then
	echo "Please run $0 <PATH_TO_WINLATOR_BIONIC>.apk"
	exit 1
fi

echo "Copying $APK to base.apk"
cp "$APK" base.apk

mkdir -p termux/data/data/com.termux/files
cd termux/data/data/com.termux/files
find usr/lib -mindepth 1 -not -name "libvulkan_wrapper.so" -delete
ls -lh usr/lib
echo "Adding other wrapper libraries"
unzip -p "$APK" assets/graphics_driver/wrapper.tzst | zstd -d | tar -x --exclude='usr/lib/libvulkan_wrapper.so'
ls -lh usr/lib
echo "Adding libadrenotools.so"
unzip -p "$APK" assets/imagefs.txz | tar -xJ usr/lib/libandroid-sysvshm.so usr/lib/libadrenotools.so usr/share/vulkan/icd.d/wrapper_icd.aarch64.json
patchelf --add-rpath /data/data/com.termux/files/usr/lib usr/lib/libadrenotools.so
sed -i 's/com\.winlator\.cmod\/files\/imagefs/com\.termux\/files/' usr/share/vulkan/icd.d/wrapper_icd.aarch64.json
cd -
mkdir -p termux/DEBIAN
cat <<EOF > termux/DEBIAN/control
Package: mesa-vulkan-icd-wrapper
Architecture: aarch64
Installed-Size: 26216
Maintainer: @leegao
Version: 0.0.4r8
Homepage: https://www.mesa3d.org
Depends: libandroid-shmem, libc++, libdrm, libx11, libxcb, libxshmfence, libwayland, vulkan-loader-generic, zlib, zstd
Description: Android Vulkan wrapper (Lee Gao's fork)
EOF
dpkg-deb -b termux