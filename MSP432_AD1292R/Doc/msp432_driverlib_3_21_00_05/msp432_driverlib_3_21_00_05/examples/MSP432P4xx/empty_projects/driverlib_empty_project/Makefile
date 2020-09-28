#
# Defines the part type that this project uses.
#
PART=__MSP432P401R__

#
# The base directory for MSPWare.
#
ROOT=../../../../
DLIB_ROOT=../../../../driverlib/MSP432P4xx/

#
# Include the common make definitions.
#
include Makefile.defs

#
# Where to find header files that do not live in the source directory.
#
IPATH=../../
IPATH+=../../../../inc/
IPATH+=${DLIB_ROOT}
IPATH+=../../../../inc/CMSIS/

#
# The default rule, which causes the driverlib_empty_project example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/driverlib_empty_project.axf

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
# Rules for building the driverlib_empty_project example.
#
${COMPILER}/driverlib_empty_project.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/driverlib_empty_project.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/driverlib_empty_project.axf: ${COMPILER}/main.o
${COMPILER}/driverlib_empty_project.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/driverlib_empty_project.axf: driverlib_empty_project_gcc.ld
SCATTERgcc_driverlib_empty_project=driverlib_empty_project_gcc.ld
ENTRY_driverlib_empty_project=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
