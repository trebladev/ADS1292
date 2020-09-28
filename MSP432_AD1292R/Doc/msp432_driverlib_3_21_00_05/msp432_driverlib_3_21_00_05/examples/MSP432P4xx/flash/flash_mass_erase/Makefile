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
# The default rule, which causes the flash_mass_erase example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/flash_mass_erase.axf

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
# Rules for building the flash_mass_erase example.
#
${COMPILER}/flash_mass_erase.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/flash_mass_erase.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/flash_mass_erase.axf: ${COMPILER}/flash_mass_erase.o
${COMPILER}/flash_mass_erase.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/flash_mass_erase.axf: flash_mass_erase_gcc.ld
SCATTERgcc_flash_mass_erase=flash_mass_erase_gcc.ld
ENTRY_flash_mass_erase=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
