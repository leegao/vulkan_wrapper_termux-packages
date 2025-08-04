push() {
	adb push libvulkan_wrapper_pb.so /data/local/tmp/
	adb shell su -c "cp /data/local/tmp/libvulkan_wrapper_pb.so /data/data/com.winlator.cmod/files/imagefs/usr/lib/libvulkan_wrapper.so"
}

push

adb shell su -c "sha1sum /data/data/com.winlator.cmod/files/imagefs/usr/lib/libvulkan_wrapper.so"