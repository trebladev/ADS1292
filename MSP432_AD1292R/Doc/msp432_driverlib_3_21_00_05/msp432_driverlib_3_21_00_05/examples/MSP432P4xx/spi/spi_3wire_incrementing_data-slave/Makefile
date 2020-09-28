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
# The default rule, which causes the spi_3wire_incrementing_data-slave example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/spi_3wire_incrementing_data-slave.axf

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
# Rules for building the spi_3wire_incrementing_data-slave example.
#
${COMPILER}/spi_3wire_incrementing_data-slave.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/spi_3wire_incrementing_data-slave.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/spi_3wire_incrementing_data-slave.axf: ${COMPILER}/spi_3wire_incrementing_data-slave.o
${COMPILER}/spi_3wire_incrementing_data-slave.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/spi_3wire_incrementing_data-slave.axf: spi_3wire_incrementing_data-slave_gcc.ld
SCATTERgcc_spi_3wire_incrementing_data-slave=spi_3wire_incrementing_data-slave_gcc.ld
ENTRY_spi_3wire_incrementing_data-slave=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
