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
# The default rule, which causes the interrupt_software_pending example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/interrupt_software_pending.axf

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
# Rules for building the interrupt_software_pending example.
#
${COMPILER}/interrupt_software_pending.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/interrupt_software_pending.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/interrupt_software_pending.axf: ${COMPILER}/interrupt_software_pending.o
${COMPILER}/interrupt_software_pending.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/interrupt_software_pending.axf: interrupt_software_pending_gcc.ld
SCATTERgcc_interrupt_software_pending=interrupt_software_pending_gcc.ld
ENTRY_interrupt_software_pending=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
