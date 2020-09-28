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
# The default rule, which causes the gpio_toggle_output example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/gpio_toggle_output.axf

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
# Rules for building the gpio_toggle_output example.
#
${COMPILER}/gpio_toggle_output.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/gpio_toggle_output.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/gpio_toggle_output.axf: ${COMPILER}/gpio_toggle_output.o
${COMPILER}/gpio_toggle_output.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/gpio_toggle_output.axf: gpio_toggle_output_gcc.ld
SCATTERgcc_gpio_toggle_output=gpio_toggle_output_gcc.ld
ENTRY_gpio_toggle_output=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
