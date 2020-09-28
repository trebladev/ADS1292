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
# The default rule, which causes the cs_clock_source_init example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/cs_clock_source_init.axf

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
# Rules for building the cs_clock_source_init example.
#
${COMPILER}/cs_clock_source_init.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/cs_clock_source_init.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/cs_clock_source_init.axf: ${COMPILER}/cs_clock_source_init.o
${COMPILER}/cs_clock_source_init.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/cs_clock_source_init.axf: cs_clock_source_init_gcc.ld
SCATTERgcc_cs_clock_source_init=cs_clock_source_init_gcc.ld
ENTRY_cs_clock_source_init=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
