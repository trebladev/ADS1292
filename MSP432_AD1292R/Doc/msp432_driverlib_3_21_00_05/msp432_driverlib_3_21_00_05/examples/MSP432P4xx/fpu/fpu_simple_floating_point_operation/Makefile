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
# The default rule, which causes the fpu_simple_floating_point_operation example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/fpu_simple_floating_point_operation.axf

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
# Rules for building the fpu_simple_floating_point_operation example.
#
${COMPILER}/fpu_simple_floating_point_operation.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/fpu_simple_floating_point_operation.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/fpu_simple_floating_point_operation.axf: ${COMPILER}/fpu_simple_floating_point_operation.o
${COMPILER}/fpu_simple_floating_point_operation.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/fpu_simple_floating_point_operation.axf: fpu_simple_floating_point_operation_gcc.ld
SCATTERgcc_fpu_simple_floating_point_operation=fpu_simple_floating_point_operation_gcc.ld
ENTRY_fpu_simple_floating_point_operation=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
