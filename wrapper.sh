cd mesa_bionic
git diff > ../packages/vulkan-wrapper-android/0004-leegao.patch
cd -

sudo ./scripts/run-docker.sh sudo bash -c "NDK=/home/builder/lib/android-ndk-r27c ./build-package.sh --library bionic vulkan-wrapper-android -s -F && cp ~/.termux-build/vulkan-wrapper-android/build/src/vulkan/wrapper/libvulkan_wrapper.so wrapper/usr/lib/libvulkan_wrapper.so"

cd wrapper
sh push.sh
cd -