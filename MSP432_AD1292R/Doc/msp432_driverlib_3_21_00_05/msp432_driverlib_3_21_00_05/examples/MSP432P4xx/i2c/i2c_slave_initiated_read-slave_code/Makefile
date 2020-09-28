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
# The default rule, which causes the i2c_slave_initiated_read-slave_code example to be built.
#
all: ${COMPILER}
all: ${COMPILER}/i2c_slave_initiated_read-slave_code.axf

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
# Rules for building the i2c_slave_initiated_read-slave_code example.
#
${COMPILER}/i2c_slave_initiated_read-slave_code.axf: ${COMPILER}/startup_msp432p401r_${COMPILER}.o
${COMPILER}/i2c_slave_initiated_read-slave_code.axf: ${COMPILER}/system_msp432p401r.o
${COMPILER}/i2c_slave_initiated_read-slave_code.axf: ${COMPILER}/i2c_slave_initiated_read-slave_code.o
${COMPILER}/i2c_slave_initiated_read-slave_code.axf: ${ROOT}/driverlib/MSP432P4xx/${COMPILER}/msp432p4xx_driverlib.a
${COMPILER}/i2c_slave_initiated_read-slave_code.axf: i2c_slave_initiated_read-slave_code_gcc.ld
SCATTERgcc_i2c_slave_initiated_read-slave_code=i2c_slave_initiated_read-slave_code_gcc.ld
ENTRY_i2c_slave_initiated_read-slave_code=resetISR
CFLAGSgcc=-DTARGET_IS_MSP432P4XX

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
