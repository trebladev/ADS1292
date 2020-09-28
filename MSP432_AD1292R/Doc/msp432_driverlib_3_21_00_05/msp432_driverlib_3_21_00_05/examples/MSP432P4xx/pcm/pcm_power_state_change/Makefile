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
# The default rule, which causes the pcm_power_state_change example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/pcm_power_state_change.axf

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
# Rules for building the pcm_power_state_change example.
#
${COMPILER}/pcm_power_state_change.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/pcm_power_state_change.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/pcm_power_state_change.axf: ${COMPILER}/pcm_power_state_change.o
${COMPILER}/pcm_power_state_change.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/pcm_power_state_change.axf: pcm_power_state_change_gcc.ld
SCATTERgcc_pcm_power_state_change=pcm_power_state_change_gcc.ld
ENTRY_pcm_power_state_change=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
