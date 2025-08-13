push() {
	adb push libVkLayer_khronos_validation.so /data/local/tmp/
	adb shell su -c "cp /data/local/tmp/libVkLayer_khronos_validation.so /data/data/com.winlator.cmod/files/imagefs/usr/lib/libVkLayer_khronos_validation.so"
}

push

adb shell su -c "sha1sum /data/data/com.winlator.cmod/files/imagefs/usr/lib/libVkLayer_khronos_validation.so"