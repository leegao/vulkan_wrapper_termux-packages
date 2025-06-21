rm packages/vulkan-wrapper-android/*.patch

cd mesa_bionic
rm ../packages/vulkan-wrapper-android/*.patch
git diff 8c8e0079152a247dc37f1d81bb0162afcdba9e60 HEAD  > ../packages/vulkan-wrapper-android/leegao.patch
git diff -p > ../packages/vulkan-wrapper-android/staging.patch
cd -

time sudo ./scripts/run-docker.sh sudo bash -c "NDK=/home/builder/lib/android-ndk-r27c ./build-package.sh --library bionic vulkan-wrapper-android -s -f && cp ~/.termux-build/vulkan-wrapper-android/build/src/vulkan/wrapper/libvulkan_wrapper.so wrapper/usr/lib/libvulkan_wrapper.so"

cd wrapper
sh push.sh
cd -