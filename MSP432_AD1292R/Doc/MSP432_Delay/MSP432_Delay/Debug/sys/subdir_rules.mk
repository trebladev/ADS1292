################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
sys/delay.obj: ../sys/delay.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP432 Compiler'
	"D:/Program Files (x86)/Texas Instruments/ccsv6/tools/compiler/ti-cgt-arm_5.2.6/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --include_path="D:/Program Files (x86)/Texas Instruments/ccsv6/ccs_base/arm/include" --include_path="F:/LEARN/MSP430/code/MSP432_Delay/MSP432P4xx" --include_path="F:/LEARN/MSP430/code/MSP432_Delay/sys" --include_path="D:/Program Files (x86)/Texas Instruments/ccsv6/tools/compiler/ti-cgt-arm_5.2.6/include" --include_path="D:/Program Files (x86)/Texas Instruments/ccsv6/ccs_base/arm/include/CMSIS" --advice:power=all -g --gcc --define=__MSP432P401R__ --define=TARGET_IS_MSP432P4XX --define=ccs --diag_warning=225 --display_error_number --diag_wrap=off --preproc_with_compile --preproc_dependency="sys/delay.pp" --obj_directory="sys" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


