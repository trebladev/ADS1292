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
# The default rule, which causes the adc14_single_conversion_repeat example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/adc14_single_conversion_repeat.axf

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
# Rules for building the adc14_single_conversion_repeat example.
#
${COMPILER}/adc14_single_conversion_repeat.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/adc14_single_conversion_repeat.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/adc14_single_conversion_repeat.axf: ${COMPILER}/adc14_single_conversion_repeat.o
${COMPILER}/adc14_single_conversion_repeat.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/adc14_single_conversion_repeat.axf: adc14_single_conversion_repeat_gcc.ld
SCATTERgcc_adc14_single_conversion_repeat=adc14_single_conversion_repeat_gcc.ld
ENTRY_adc14_single_conversion_repeat=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
