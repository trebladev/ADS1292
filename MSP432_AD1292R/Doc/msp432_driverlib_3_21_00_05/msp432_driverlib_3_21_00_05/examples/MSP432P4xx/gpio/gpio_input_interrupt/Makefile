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
# The default rule, which causes the gpio_input_interrupt example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/gpio_input_interrupt.axf

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
# Rules for building the gpio_input_interrupt example.
#
${COMPILER}/gpio_input_interrupt.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/gpio_input_interrupt.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/gpio_input_interrupt.axf: ${COMPILER}/gpio_input_interrupt.o
${COMPILER}/gpio_input_interrupt.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/gpio_input_interrupt.axf: gpio_input_interrupt_gcc.ld
SCATTERgcc_gpio_input_interrupt=gpio_input_interrupt_gcc.ld
ENTRY_gpio_input_interrupt=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
