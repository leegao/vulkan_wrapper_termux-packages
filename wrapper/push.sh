push() {
	adb push usr/lib/$1 /data/local/tmp/
	adb shell su -c "cp /data/local/tmp/$1 /data/data/com.winlator.cmod/files/imagefs/usr/lib/$1"
}

push2() {
	adb push $1 /data/local/tmp/
	adb shell su -c "cp /data/local/tmp/$1 /data/user/0/com.winlator.cmod/files/imagefs/usr/share/vulkan/implicit_layer.d/$1"
}

# push libadrenotools.so
# push libfile_redirect_hook.so
# push libgsl_alloc_hook.so
# push libhook_impl.so
# push libmain_hook.so
push libvulkan_wrapper.so
# push libVkLayer_khronos_validation.so
# push2 VkLayer_khronos_validation.aarch64.json

cp usr/lib/libvulkan_wrapper.so ./
rm libvulkan_wrapper.so.zip
zip libvulkan_wrapper.so.zip libvulkan_wrapper.so

adb shell rm /sdcard/Documents/Wrapper/*.txt