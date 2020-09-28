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
# The default rule, which causes the dma_array_transfer_software_trigger example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/dma_array_transfer_software_trigger.axf

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
# Rules for building the dma_array_transfer_software_trigger example.
#
${COMPILER}/dma_array_transfer_software_trigger.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/dma_array_transfer_software_trigger.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/dma_array_transfer_software_trigger.axf: ${COMPILER}/dma_array_transfer_software_trigger.o
${COMPILER}/dma_array_transfer_software_trigger.axf: ${COMPILER}/dataarray.o
${COMPILER}/dma_array_transfer_software_trigger.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/dma_array_transfer_software_trigger.axf: dma_array_transfer_software_trigger_gcc.ld
SCATTERgcc_dma_array_transfer_software_trigger=dma_array_transfer_software_trigger_gcc.ld
ENTRY_dma_array_transfer_software_trigger=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
