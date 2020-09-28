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
# The default rule, which causes the systick_interrupt_gpio_blink example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/systick_interrupt_gpio_blink.axf

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
# Rules for building the systick_interrupt_gpio_blink example.
#
${COMPILER}/systick_interrupt_gpio_blink.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/systick_interrupt_gpio_blink.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/systick_interrupt_gpio_blink.axf: ${COMPILER}/systick_interrupt_gpio_blink.o
${COMPILER}/systick_interrupt_gpio_blink.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/systick_interrupt_gpio_blink.axf: systick_interrupt_gpio_blink_gcc.ld
SCATTERgcc_systick_interrupt_gpio_blink=systick_interrupt_gpio_blink_gcc.ld
ENTRY_systick_interrupt_gpio_blink=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
