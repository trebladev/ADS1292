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
# The default rule, which causes the timer32_one_shot_free_run example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/timer32_one_shot_free_run.axf

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
# Rules for building the timer32_one_shot_free_run example.
#
${COMPILER}/timer32_one_shot_free_run.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/timer32_one_shot_free_run.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/timer32_one_shot_free_run.axf: ${COMPILER}/timer32_one_shot_free_run.o
${COMPILER}/timer32_one_shot_free_run.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/timer32_one_shot_free_run.axf: timer32_one_shot_free_run_gcc.ld
SCATTERgcc_timer32_one_shot_free_run=timer32_one_shot_free_run_gcc.ld
ENTRY_timer32_one_shot_free_run=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
