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
# The default rule, which causes the dma_eusci_spi_loopback example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/dma_eusci_spi_loopback.axf

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
# Rules for building the dma_eusci_spi_loopback example.
#
${COMPILER}/dma_eusci_spi_loopback.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/dma_eusci_spi_loopback.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/dma_eusci_spi_loopback.axf: ${COMPILER}/dma_eusci_spi_loopback.o
${COMPILER}/dma_eusci_spi_loopback.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/dma_eusci_spi_loopback.axf: dma_eusci_spi_loopback_gcc.ld
SCATTERgcc_dma_eusci_spi_loopback=dma_eusci_spi_loopback_gcc.ld
ENTRY_dma_eusci_spi_loopback=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
