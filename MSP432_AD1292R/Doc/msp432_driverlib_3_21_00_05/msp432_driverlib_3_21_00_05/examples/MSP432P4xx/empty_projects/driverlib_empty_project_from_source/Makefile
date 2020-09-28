#
# Defines the part type that this project uses.
#
PART=__MSP432P401R__

#
# The base directory for MSPWare.
#
ROOT=../../
DLIB_ROOT=../../../../driverlib/MSP432P4xx/

#
# Include the common make definitions.
#
include Makefile.defs

#
# Where to find header files that do not live in the source directory.
#
IPATH=../../
IPATH+=../../../../inc/
IPATH+=../../../../inc/CMSIS/
IPATH+=${DLIB_ROOT}

#
# The default rule, which causes the driverlib_empty_project example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/driverlib_empty_project.axf

#
# The rule to clean out all the build products.
#
clean:
	@rm -rf ${COMPILER} ${wildcard *~}
	@rm -rf ${DLIB_ROOT}/*.o

#
# The rule to create the target directory.
#
${COMPILER}:
	@mkdir -p ${COMPILER}

#
# Rules for building the driverlib_empty_project example.
#
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}adc14.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}aes256.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}comp_e.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}cpu.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}crc32.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}cs.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}dma.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}flash.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}fpu.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}gpio.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}i2c.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}interrupt.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}mpu.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}pcm.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}pmap.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}pss.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}ref_a.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}reset.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}rtc_c.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}spi.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}sysctl.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}systick.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}timer32.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}timer_a.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}uart.o
${COMPILER}/driverlib_empty_project.axf: ${DLIB_ROOT}wdt_a.o
${COMPILER}/driverlib_empty_project.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/driverlib_empty_project.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/driverlib_empty_project.axf: ${COMPILER}/main.o
${COMPILER}/driverlib_empty_project.axf: driverlib_empty_project_from_source_gcc.ld
SCATTERgcc_driverlib_empty_project=driverlib_empty_project_from_source_gcc.ld
ENTRY_driverlib_empty_project=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
