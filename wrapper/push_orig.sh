push() {
	adb push libvulkan_wrapper.so.orig /data/local/tmp/
	adb shell su -c "cp /data/local/tmp/libvulkan_wrapper.so.orig /data/data/com.winlator.cmod/files/imagefs/usr/lib/libvulkan_wrapper.so"
}

push