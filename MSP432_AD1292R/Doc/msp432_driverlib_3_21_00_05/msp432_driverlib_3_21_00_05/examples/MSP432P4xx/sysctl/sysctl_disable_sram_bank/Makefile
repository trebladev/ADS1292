#
# Defines the part type that this project uses.
#
PART=__MSP432P401R__

#
# The base directory for MSPWare.
#
ROOT=../../../..

#
# Include the common make definitions.
#
include ../../Makefile.defs

#
# Where to find header files that do not live in the source directory.
#
IPATH=../../../..
IPATH+=../../../../inc/
IPATH+=../../../../inc/CMSIS/
IPATH+=../../../../driverlib/MSP432P4xx

#
# The default rule, which causes the sysctl_disable_sram_bank example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/sysctl_disable_sram_bank.axf

#
# The rule to clean out all the build products.
#
clean:
	@rm -rf ${COMPILER} ${wildcard *~}

#
# The rule to create the target directory.
#
${COMPILER}:
	@mkdir -p ${COMPILER}

#
# Rules for building the sysctl_disable_sram_bank example.
#
${COMPILER}/sysctl_disable_sram_bank.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/sysctl_disable_sram_bank.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/sysctl_disable_sram_bank.axf: ${COMPILER}/sysctl_disable_sram_bank.o
${COMPILER}/sysctl_disable_sram_bank.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/sysctl_disable_sram_bank.axf: sysctl_disable_sram_bank_gcc.ld
SCATTERgcc_sysctl_disable_sram_bank=sysctl_disable_sram_bank_gcc.ld
ENTRY_sysctl_disable_sram_bank=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
