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
# The default rule, which causes the pmap_timera_redirection example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/pmap_timera_redirection.axf

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
# Rules for building the pmap_timera_redirection example.
#
${COMPILER}/pmap_timera_redirection.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/pmap_timera_redirection.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/pmap_timera_redirection.axf: ${COMPILER}/pmap_timera_redirection.o
${COMPILER}/pmap_timera_redirection.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/pmap_timera_redirection.axf: pmap_timera_redirection_gcc.ld
SCATTERgcc_pmap_timera_redirection=pmap_timera_redirection_gcc.ld
ENTRY_pmap_timera_redirection=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
