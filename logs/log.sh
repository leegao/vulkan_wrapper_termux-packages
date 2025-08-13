adb pull "$(adb shell ls /sdcard/Download/*_d3d*.log -t | head -1)"; 
adb pull "$(adb shell ls /sdcard/Documents/Wrapper/wrapper_log_* -t | head -1)"; 
adb pull "$(adb shell ls /sdcard/Documents/Wrapper/wrapper_cmds_* -t | head -1)";
adb pull "$(adb shell ls /sdcard/Documents/Wrapper/vvl_* -t | head -1)";
adb pull "$(adb shell ls /sdcard/Download/Winlator/logs/* -t | head -1)";
adb logcat -d > logcat.txt; adb logcat -c;