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
# The default rule, which causes the comp_e_output_toggle_Vcomp_Vref2V example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/comp_e_output_toggle_Vcomp_Vref2V.axf

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
# Rules for building the comp_e_output_toggle_Vcomp_Vref2V example.
#
${COMPILER}/comp_e_output_toggle_Vcomp_Vref2V.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/comp_e_output_toggle_Vcomp_Vref2V.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/comp_e_output_toggle_Vcomp_Vref2V.axf: ${COMPILER}/comp_e_output_toggle_Vcomp_Vref2V.o
${COMPILER}/comp_e_output_toggle_Vcomp_Vref2V.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/comp_e_output_toggle_Vcomp_Vref2V.axf: comp_e_output_toggle_Vcomp_Vref2V_gcc.ld
SCATTERgcc_comp_e_output_toggle_Vcomp_Vref2V=comp_e_output_toggle_Vcomp_Vref2V_gcc.ld
ENTRY_comp_e_output_toggle_Vcomp_Vref2V=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
