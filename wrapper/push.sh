push() {
	adb push usr/lib/$1 /data/local/tmp/
	adb shell su -c "cp /data/local/tmp/$1 /data/data/com.winlator.cmod/files/imagefs/usr/lib/$1"
}

# push libadrenotools.so
# push libfile_redirect_hook.so
# push libgsl_alloc_hook.so
# push libhook_impl.so
# push libmain_hook.so
push libvulkan_wrapper.so