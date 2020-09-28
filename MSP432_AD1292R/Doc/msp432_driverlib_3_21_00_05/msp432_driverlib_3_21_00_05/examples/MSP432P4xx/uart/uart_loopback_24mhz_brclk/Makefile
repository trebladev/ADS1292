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
# The default rule, which causes the uart_loopback_24mhz_brclk example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/uart_loopback_24mhz_brclk.axf

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
# Rules for building the uart_loopback_24mhz_brclk example.
#
${COMPILER}/uart_loopback_24mhz_brclk.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/uart_loopback_24mhz_brclk.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/uart_loopback_24mhz_brclk.axf: ${COMPILER}/uart_loopback_24mhz_brclk.o
${COMPILER}/uart_loopback_24mhz_brclk.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/uart_loopback_24mhz_brclk.axf: uart_loopback_24mhz_brclk_gcc.ld
SCATTERgcc_uart_loopback_24mhz_brclk=uart_loopback_24mhz_brclk_gcc.ld
ENTRY_uart_loopback_24mhz_brclk=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
