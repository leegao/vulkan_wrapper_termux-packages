# Continue a build if wrapper.sh has already been called to set up all of the proper patches

cd mesa_bionic
rm ../packages/vulkan-wrapper-android/*.patch
git log -1
# git format-patch 8c8e0079152a247dc37f1d81bb0162afcdba9e60..HEAD --no-binary -o ../packages/vulkan-wrapper-android/
git diff 8c8e0079152a247dc37f1d81bb0162afcdba9e60 HEAD  > ../packages/vulkan-wrapper-android/leegao.patch
git diff -p HEAD > ../packages/vulkan-wrapper-android/staging.patch
cd -

sudo ./scripts/run-docker.sh sudo bash -c "
echo Applying patches ...
cd /root/.termux-build/vulkan-wrapper-android/src
git restore .
git clean -fd
git apply --allow-empty /home/builder/termux-packages/packages/vulkan-wrapper-android/*.patch
mkdir -p src/vulkan/wrapper/lib/
cp /home/builder/termux-packages/mesa_bionic/src/vulkan/wrapper/lib/*.a src/vulkan/wrapper/lib/
cd -

echo Building ...
cd /root/.termux-build/vulkan-wrapper-android/build
export PATH='/root/.termux-build/_cache/ninja-1.12.1:/root/.termux-build/vulkan-wrapper-android/build/_wrapper/bin:/root/.termux-build/vulkan-wrapper-android/build/_wrapper/bin:/root/.termux-build/_cache/cmake-3.31.4/bin:/root/.termux-build/_cache/android-r27c-api-26-v1/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin'
ninja
cd -

echo Moving files
cp /root/.termux-build/vulkan-wrapper-android/build/src/vulkan/wrapper/libvulkan_wrapper.so wrapper/usr/lib/libvulkan_wrapper.so
cp /root/.termux-build/vulkan-wrapper-android/build/src/vulkan/wrapper/libvulkan_wrapper.so wrapper/termux/data/data/com.termux/files/usr/lib/libvulkan_wrapper.so
cp /root/.termux-build/vulkan-wrapper-android/build/src/vulkan/wrapper/* tmp/
cp /root/.termux-build/vulkan-wrapper-android/build/src/vulkan/wsi/* tmp_wsi/
cp /root/.termux-build/vulkan-wrapper-android/build/src/vulkan/util/* tmp_util/
cp /root/.termux-build/vulkan-wrapper-android/build/src/vulkan/runtime/* tmp_runtime/
"

cd wrapper
sh push.sh
cd -