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
# The default rule, which causes the pss_high_enable_disable example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/pss_high_enable_disable.axf

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
# Rules for building the pss_high_enable_disable example.
#
${COMPILER}/pss_high_enable_disable.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/pss_high_enable_disable.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/pss_high_enable_disable.axf: ${COMPILER}/pss_high_enable_disable.o
${COMPILER}/pss_high_enable_disable.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/pss_high_enable_disable.axf: pss_high_enable_disable_gcc.ld
SCATTERgcc_pss_high_enable_disable=pss_high_enable_disable_gcc.ld
ENTRY_pss_high_enable_disable=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
