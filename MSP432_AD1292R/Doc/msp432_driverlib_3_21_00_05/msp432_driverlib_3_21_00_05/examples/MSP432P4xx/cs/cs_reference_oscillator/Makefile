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
# The default rule, which causes the cs_reference_oscillator example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/cs_reference_oscillator.axf

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
# Rules for building the cs_reference_oscillator example.
#
${COMPILER}/cs_reference_oscillator.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/cs_reference_oscillator.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/cs_reference_oscillator.axf: ${COMPILER}/cs_reference_oscillator.o
${COMPILER}/cs_reference_oscillator.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/cs_reference_oscillator.axf: cs_reference_oscillator_gcc.ld
SCATTERgcc_cs_reference_oscillator=cs_reference_oscillator_gcc.ld
ENTRY_cs_reference_oscillator=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
