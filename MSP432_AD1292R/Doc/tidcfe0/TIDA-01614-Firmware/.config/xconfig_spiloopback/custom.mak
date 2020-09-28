## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,em4f linker.cmd package/cfg/spiloopback_pem4f.oem4f

# To simplify configuro usage in makefiles:
#     o create a generic linker command file name 
#     o set modification times of compiler.opt* files to be greater than
#       or equal to the generated config header
#
linker.cmd: package/cfg/spiloopback_pem4f.xdl
	$(SED) 's"^\"\(package/cfg/spiloopback_pem4fcfg.cmd\)\"$""\"D:/TIDA/CCS Codes/spiloopback_MSP_EXP432P401R_TI/.config/xconfig_spiloopback/\1\""' package/cfg/spiloopback_pem4f.xdl > $@
	-$(SETDATE) -r:max package/cfg/spiloopback_pem4f.h compiler.opt compiler.opt.defs
