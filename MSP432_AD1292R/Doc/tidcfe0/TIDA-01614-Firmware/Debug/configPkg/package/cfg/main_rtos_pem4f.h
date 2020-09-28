/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-B06
 */

#include <xdc/std.h>

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle MSP432_UART_main;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle SEM_AFE_RDY_GOES_LOW;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle AFE_main;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle SEM_UART_DATA_TO_BE_SENT;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle SEM_ADS_DRDY_GOES_LOW;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle ADS_main;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle SEM_ADS_INITIALIZE;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle SEM_GUI_INITIALISE;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle SEM_INTERRUPT_INIT;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle GUI_initialize;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle SEM_TMP_TASK;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle SEM_TMP_INITIALISE;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle TMP_main;

#include <ti/sysbios/knl/Clock.h>
extern const ti_sysbios_knl_Clock_Handle TMP_read;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle SEM_PACE_DETECT_GOES_HIGH;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle Pace_detect_task;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle SEM_PACE_MAKER_INIT;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle SEM_PACE_MAKER_OK;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle SEM_AFE_READ_COMPLETE;

#include <ti/sysbios/knl/Clock.h>
extern const ti_sysbios_knl_Clock_Handle pace_Start_clock;

#include <ti/sysbios/knl/Clock.h>
extern const ti_sysbios_knl_Clock_Handle pace_end_clock;

extern int xdc_runtime_Startup__EXECFXN__C;

extern int xdc_runtime_Startup__RESETFXN__C;

