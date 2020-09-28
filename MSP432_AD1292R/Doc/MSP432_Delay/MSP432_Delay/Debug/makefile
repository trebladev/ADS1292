################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := D:/Program Files (x86)/Texas Instruments/ccsv6/tools/compiler/ti-cgt-arm_5.2.6

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./msp432_startup_ccs.obj" \
"./sys/delay.obj" \
"./MSP432P4xx/adc14.obj" \
"./MSP432P4xx/aes256.obj" \
"./MSP432P4xx/comp_e.obj" \
"./MSP432P4xx/cpu.obj" \
"./MSP432P4xx/crc32.obj" \
"./MSP432P4xx/cs.obj" \
"./MSP432P4xx/dma.obj" \
"./MSP432P4xx/flash.obj" \
"./MSP432P4xx/fpu.obj" \
"./MSP432P4xx/gpio.obj" \
"./MSP432P4xx/i2c.obj" \
"./MSP432P4xx/interrupt.obj" \
"./MSP432P4xx/mpu.obj" \
"./MSP432P4xx/pcm.obj" \
"./MSP432P4xx/pmap.obj" \
"./MSP432P4xx/pss.obj" \
"./MSP432P4xx/ref_a.obj" \
"./MSP432P4xx/reset.obj" \
"./MSP432P4xx/rtc_c.obj" \
"./MSP432P4xx/spi.obj" \
"./MSP432P4xx/sysctl.obj" \
"./MSP432P4xx/systick.obj" \
"./MSP432P4xx/timer32.obj" \
"./MSP432P4xx/timer_a.obj" \
"./MSP432P4xx/uart.obj" \
"./MSP432P4xx/wdt_a.obj" \
"../msp432p401r.cmd" \
"../MSP432P4xx/keil/msp432p4xx_driverlib.lib" \
"../MSP432P4xx/ccs/msp432p4xx_driverlib.lib" \
$(GEN_CMDS__FLAG) \
-l"libc.a" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include sys/subdir_vars.mk
-include MSP432P4xx/subdir_vars.mk
-include MSP432P4xx/keil/subdir_vars.mk
-include MSP432P4xx/gcc/subdir_vars.mk
-include MSP432P4xx/ewarm/subdir_vars.mk
-include MSP432P4xx/ccs/subdir_vars.mk
-include subdir_rules.mk
-include sys/subdir_rules.mk
-include MSP432P4xx/subdir_rules.mk
-include MSP432P4xx/keil/subdir_rules.mk
-include MSP432P4xx/gcc/subdir_rules.mk
-include MSP432P4xx/ewarm/subdir_rules.mk
-include MSP432P4xx/ccs/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
MSP432_Delay.out \

EXE_OUTPUTS__QUOTED += \
"MSP432_Delay.out" \

BIN_OUTPUTS += \
MSP432_Delay.hex \

BIN_OUTPUTS__QUOTED += \
"MSP432_Delay.hex" \


# All Target
all: MSP432_Delay.out

# Tool invocations
MSP432_Delay.out: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(A_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: MSP432 Linker'
	"D:/Program Files (x86)/Texas Instruments/ccsv6/tools/compiler/ti-cgt-arm_5.2.6/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --advice:power=all -g --gcc --define=__MSP432P401R__ --define=TARGET_IS_MSP432P4XX --define=ccs --diag_warning=225 --display_error_number --diag_wrap=off -z -m"MSP432_Delay.map" --heap_size=1024 --stack_size=512 -i"D:/Program Files (x86)/Texas Instruments/ccsv6/ccs_base/arm/include" -i"D:/Program Files (x86)/Texas Instruments/ccsv6/tools/compiler/ti-cgt-arm_5.2.6/lib" -i"D:/Program Files (x86)/Texas Instruments/ccsv6/tools/compiler/ti-cgt-arm_5.2.6/include" --reread_libs --warn_sections --diag_wrap=off --display_error_number --xml_link_info="MSP432_Delay_linkInfo.xml" --rom_model -o "MSP432_Delay.out" $(ORDERED_OBJS) $(A_SRCS)
	@echo 'Finished building target: $@'
	@echo ' '

MSP432_Delay.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: MSP432 Hex Utility'
	"D:/Program Files (x86)/Texas Instruments/ccsv6/tools/compiler/ti-cgt-arm_5.2.6/bin/armhex"  -o "MSP432_Delay.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)$(BIN_OUTPUTS__QUOTED)
	-$(RM) "main.pp" "msp432_startup_ccs.pp" "sys\delay.pp" "MSP432P4xx\adc14.pp" "MSP432P4xx\aes256.pp" "MSP432P4xx\comp_e.pp" "MSP432P4xx\cpu.pp" "MSP432P4xx\crc32.pp" "MSP432P4xx\cs.pp" "MSP432P4xx\dma.pp" "MSP432P4xx\flash.pp" "MSP432P4xx\fpu.pp" "MSP432P4xx\gpio.pp" "MSP432P4xx\i2c.pp" "MSP432P4xx\interrupt.pp" "MSP432P4xx\mpu.pp" "MSP432P4xx\pcm.pp" "MSP432P4xx\pmap.pp" "MSP432P4xx\pss.pp" "MSP432P4xx\ref_a.pp" "MSP432P4xx\reset.pp" "MSP432P4xx\rtc_c.pp" "MSP432P4xx\spi.pp" "MSP432P4xx\sysctl.pp" "MSP432P4xx\systick.pp" "MSP432P4xx\timer32.pp" "MSP432P4xx\timer_a.pp" "MSP432P4xx\uart.pp" "MSP432P4xx\wdt_a.pp" 
	-$(RM) "main.obj" "msp432_startup_ccs.obj" "sys\delay.obj" "MSP432P4xx\adc14.obj" "MSP432P4xx\aes256.obj" "MSP432P4xx\comp_e.obj" "MSP432P4xx\cpu.obj" "MSP432P4xx\crc32.obj" "MSP432P4xx\cs.obj" "MSP432P4xx\dma.obj" "MSP432P4xx\flash.obj" "MSP432P4xx\fpu.obj" "MSP432P4xx\gpio.obj" "MSP432P4xx\i2c.obj" "MSP432P4xx\interrupt.obj" "MSP432P4xx\mpu.obj" "MSP432P4xx\pcm.obj" "MSP432P4xx\pmap.obj" "MSP432P4xx\pss.obj" "MSP432P4xx\ref_a.obj" "MSP432P4xx\reset.obj" "MSP432P4xx\rtc_c.obj" "MSP432P4xx\spi.obj" "MSP432P4xx\sysctl.obj" "MSP432P4xx\systick.obj" "MSP432P4xx\timer32.obj" "MSP432P4xx\timer_a.obj" "MSP432P4xx\uart.obj" "MSP432P4xx\wdt_a.obj" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

