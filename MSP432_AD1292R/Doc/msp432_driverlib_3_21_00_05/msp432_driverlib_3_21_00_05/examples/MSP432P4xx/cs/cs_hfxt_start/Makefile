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
# The default rule, which causes the cs_hfxt_start example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/cs_hfxt_start.axf

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
# Rules for building the cs_hfxt_start example.
#
${COMPILER}/cs_hfxt_start.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/cs_hfxt_start.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/cs_hfxt_start.axf: ${COMPILER}/cs_hfxt_start.o
${COMPILER}/cs_hfxt_start.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/cs_hfxt_start.axf: cs_hfxt_start_gcc.ld
SCATTERgcc_cs_hfxt_start=cs_hfxt_start_gcc.ld
ENTRY_cs_hfxt_start=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
