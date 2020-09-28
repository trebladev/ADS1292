# invoke SourceDir generated makefile for main_rtos.pem4f
main_rtos.pem4f: .libraries,main_rtos.pem4f
.libraries,main_rtos.pem4f: package/cfg/main_rtos_pem4f.xdl
	$(MAKE) -f D:\Firmware\TIDAFI~1\Swaroop\TIDA-2~1\TIDA-01614-Firmware/src/makefile.libs

clean::
	$(MAKE) -f D:\Firmware\TIDAFI~1\Swaroop\TIDA-2~1\TIDA-01614-Firmware/src/makefile.libs clean

