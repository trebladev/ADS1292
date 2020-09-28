/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-B06
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/family/arm/m3/Timer.h>
#include <ti/sysbios/family/arm/m3/TimestampProvider.h>
#include <ti/sysbios/family/arm/msp432/ClockFreqs.h>
#include <ti/sysbios/family/arm/msp432/Timer.h>
#include <ti/sysbios/family/arm/msp432/init/Boot.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/heaps/HeapTrack.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/utils/Load.h>
#include <ti/uia/events/DvtTypes.h>
#include <ti/uia/events/UIAErr.h>
#include <ti/uia/events/UIAEvt.h>
#include <ti/uia/events/UIAProfile.h>
#include <ti/uia/loggers/LoggerStopMode.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/runtime/UIAMetaData.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysStd.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__ *__fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    xdc_UInt8 priority;
    xdc_Int16 intNum;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Hwi___VERS
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Timer_Module__ ti_sysbios_family_arm_m3_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Timer_Object__ {
    const ti_sysbios_family_arm_m3_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_m3_Timer_RunMode runMode;
    ti_sysbios_family_arm_m3_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_m3_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
} ti_sysbios_family_arm_m3_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Timer_Object__ obj;
} ti_sysbios_family_arm_m3_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Timer___VERS
    #define ti_sysbios_family_arm_m3_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.msp432.ClockFreqs INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.msp432.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_msp432_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_msp432_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_msp432_Timer_Module__ ti_sysbios_family_arm_msp432_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_msp432_Timer_Object__ {
    const ti_sysbios_family_arm_msp432_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    xdc_UInt controlRegInit;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz frequency;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_UInt savedCurrCount;
    xdc_UInt32 rollovers;
    xdc_Bool synchronous;
    xdc_UInt inputDivider;
    xdc_UInt inputDividerExp;
} ti_sysbios_family_arm_msp432_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_msp432_Timer_Object__ obj;
} ti_sysbios_family_arm_msp432_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_msp432_Timer___VERS
    #define ti_sysbios_family_arm_msp432_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_msp432_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.msp432.init.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapTrack INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapTrack_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapTrack_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapTrack_Module__ ti_sysbios_heaps_HeapTrack_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_heaps_HeapTrack_Object__ {
    const ti_sysbios_heaps_HeapTrack_Fxns__ *__fxns;
    xdc_runtime_IHeap_Handle internalHeap;
    xdc_SizeT size;
    xdc_SizeT peak;
    xdc_SizeT sizeWithoutTracker;
    xdc_SizeT peakWithoutTracker;
    ti_sysbios_knl_Queue_Object__ Object_field_trackQueue;
} ti_sysbios_heaps_HeapTrack_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapTrack_Object__ obj;
} ti_sysbios_heaps_HeapTrack_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapTrack___VERS
    #define ti_sysbios_heaps_HeapTrack___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapTrack___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_msp432_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_msp432_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock_TimerProxy___VERS
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Event___VERS
    #define ti_sysbios_knl_Event___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Event___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.utils.Load INTERNALS ========
 */


/*
 * ======== ti.uia.events.DvtTypes INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAErr INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAEvt INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAProfile INTERNALS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_loggers_LoggerStopMode_Module__;

/* Module__root__V */
extern ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V;

/* Object__ */
typedef struct ti_uia_loggers_LoggerStopMode_Object__ {
    const ti_uia_loggers_LoggerStopMode_Fxns__ *__fxns;
    xdc_Bool enabled;
    xdc_Int16 instanceId;
    xdc_UInt32 bufSize;
    xdc_UInt32 *buffer;
    xdc_UInt32 *write;
    xdc_UInt32 *end;
    xdc_SizeT maxEventSizeInBits32;
    xdc_SizeT maxEventSize;
    xdc_UInt16 numBytesInPrevEvent;
    xdc_Bits32 droppedEvents;
    xdc_UInt16 eventSequenceNum;
    xdc_UInt16 pktSequenceNum;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__hdr hdr;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray packetArray;
} ti_uia_loggers_LoggerStopMode_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_loggers_LoggerStopMode_Object__ obj;
} ti_uia_loggers_LoggerStopMode_Object2__;

/* __ParamsPtr */
#ifdef ti_uia_loggers_LoggerStopMode___VERS
    #define ti_uia_loggers_LoggerStopMode___ParamsPtr xdc_UChar*
#else
    #define ti_uia_loggers_LoggerStopMode___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.uia.runtime.EventHdr INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Main_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysStd INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Types INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(ti_uia_events_IUIAEvent_Interface__BASE__C, ".const:ti_uia_events_IUIAEvent_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_events_IUIAEvent_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_IUIATransfer_Interface__BASE__C, ".const:ti_uia_runtime_IUIATransfer_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_IUIATransfer_Interface__BASE__C = {(void*)&xdc_runtime_IFilterLogger_Interface__BASE__C};

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".const:xdc_runtime_IFilterLogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {(void*)&xdc_runtime_ILogger_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};

#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, ".const:ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C = {(void*)&ti_uia_runtime_IUIATransfer_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8033, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8038, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8039, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8027, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapTrack VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapTrack_Module__FXNS__C");
const ti_sysbios_heaps_HeapTrack_Fxns__ ti_sysbios_heaps_HeapTrack_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapTrack_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapTrack_alloc__E,
    ti_sysbios_heaps_HeapTrack_free__E,
    ti_sysbios_heaps_HeapTrack_isBlocking__E,
    ti_sysbios_heaps_HeapTrack_getStats__E,
    {
        ti_sysbios_heaps_HeapTrack_Object__create__S,
        ti_sysbios_heaps_HeapTrack_Object__delete__S,
        ti_sysbios_heaps_HeapTrack_Handle__label__S,
        0x8028, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAErr VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__FXNS__C, ".const:ti_uia_events_UIAErr_Module__FXNS__C");
const ti_uia_events_UIAErr_Fxns__ ti_uia_events_UIAErr_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAErr_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8015, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAEvt VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__FXNS__C, ".const:ti_uia_events_UIAEvt_Module__FXNS__C");
const ti_uia_events_UIAEvt_Fxns__ ti_uia_events_UIAEvt_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAEvt_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8016, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAProfile VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Module__FXNS__C, ".const:ti_uia_events_UIAProfile_Module__FXNS__C");
const ti_uia_events_UIAProfile_Fxns__ ti_uia_events_UIAProfile_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAProfile_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8017, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__FXNS__C, ".const:ti_uia_loggers_LoggerStopMode_Module__FXNS__C");
const ti_uia_loggers_LoggerStopMode_Fxns__ ti_uia_loggers_LoggerStopMode_Module__FXNS__C = {
    (void*)&ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, /* __base */
    &ti_uia_loggers_LoggerStopMode_Module__FXNS__C.__sfxns, /* __sysp */
    ti_uia_loggers_LoggerStopMode_enable__E,
    ti_uia_loggers_LoggerStopMode_disable__E,
    ti_uia_loggers_LoggerStopMode_write0__E,
    ti_uia_loggers_LoggerStopMode_write1__E,
    ti_uia_loggers_LoggerStopMode_write2__E,
    ti_uia_loggers_LoggerStopMode_write4__E,
    ti_uia_loggers_LoggerStopMode_write8__E,
    ti_uia_loggers_LoggerStopMode_setFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getTransferType__E,
    ti_uia_loggers_LoggerStopMode_getContents__E,
    ti_uia_loggers_LoggerStopMode_isEmpty__E,
    ti_uia_loggers_LoggerStopMode_getMaxLength__E,
    ti_uia_loggers_LoggerStopMode_getInstanceId__E,
    ti_uia_loggers_LoggerStopMode_getPriority__E,
    ti_uia_loggers_LoggerStopMode_setPriority__E,
    ti_uia_loggers_LoggerStopMode_reset__E,
    ti_uia_loggers_LoggerStopMode_writeMemoryRange__E,
    {
        ti_uia_loggers_LoggerStopMode_Object__create__S,
        ti_uia_loggers_LoggerStopMode_Object__delete__S,
        ti_uia_loggers_LoggerStopMode_Handle__label__S,
        0x803d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysStd VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__FXNS__C, ".const:xdc_runtime_SysStd_Module__FXNS__C");
const xdc_runtime_SysStd_Fxns__ xdc_runtime_SysStd_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysStd_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysStd_abort__E,
    xdc_runtime_SysStd_exit__E,
    xdc_runtime_SysStd_flush__E,
    xdc_runtime_SysStd_putch__E,
    xdc_runtime_SysStd_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* __base */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8010, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_SizeT isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    xdc_Ptr dispatchTable;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Timer_Object__ ti_sysbios_family_arm_m3_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Timer_Module_State__ {
    volatile xdc_UInt tickCount;
    xdc_UInt availMask;
    ti_sysbios_family_arm_m3_Timer_Handle handle;
} ti_sysbios_family_arm_m3_Timer_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_m3_Timer_Module_State__ ti_sysbios_family_arm_m3_Timer_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.m3.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_TimestampProvider_Module_State__ {
    ti_sysbios_family_arm_m3_Timer_Handle timer;
} ti_sysbios_family_arm_m3_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_m3_TimestampProvider_Module_State__ ti_sysbios_family_arm_m3_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.msp432.ClockFreqs DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__ {
    xdc_UInt32 ACLK;
    xdc_UInt32 SMCLK;
    xdc_UInt32 HSMCLK;
} ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__ ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.msp432.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_msp432_Timer_Object__ ti_sysbios_family_arm_msp432_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_msp432_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_arm_msp432_Timer_Module_State__device device;
    __TA_ti_sysbios_family_arm_msp432_Timer_Module_State__handles handles;
} ti_sysbios_family_arm_msp432_Timer_Module_State__;

/* --> ti_sysbios_family_arm_msp432_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_msp432_Timer_Module_State__device ti_sysbios_family_arm_msp432_Timer_Module_State_0_device__A[4];

/* --> ti_sysbios_family_arm_msp432_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_msp432_Timer_Module_State__handles ti_sysbios_family_arm_msp432_Timer_Module_State_0_handles__A[4];

/* Module__state__V */
ti_sysbios_family_arm_msp432_Timer_Module_State__ ti_sysbios_family_arm_msp432_Timer_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.msp432.init.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[2048];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapTrack DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* --> CLOCK_TMP_read_temperature */
extern xdc_Void CLOCK_TMP_read_temperature(xdc_UArg);

/* --> clock_pacedetectStart */
extern xdc_Void clock_pacedetectStart(xdc_UArg);

/* --> clock_pacedetectEnd */
extern xdc_Void clock_pacedetectEnd(xdc_UArg);

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[3];

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> Power_idleFunc */
extern xdc_Void Power_idleFunc(xdc_Void);

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[3];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[3];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[12];


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1024];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1024] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1024] __attribute__ ((aligned(8)));
#endif
#endif

/* --> MSP432_UART_main_task */
extern xdc_Void MSP432_UART_main_task(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_1_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_1_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> AFE_main_task */
extern xdc_Void AFE_main_task(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_2_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[1024];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_2_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[1024] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_2_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[1024] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ADS_main_task */
extern xdc_Void ADS_main_task(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_3_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_3_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_3_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[512] __attribute__ ((aligned(8)));
#endif
#endif

/* --> GUI_init_task */
extern xdc_Void GUI_init_task(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_4_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_4_stack__A[1024];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_4_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_4_stack__A[1024] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_4_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_4_stack__A[1024] __attribute__ ((aligned(8)));
#endif
#endif

/* --> TMP_main_task */
extern xdc_Void TMP_main_task(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_5_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_5_stack__A[1024];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_5_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_5_stack__A[1024] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_5_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_5_stack__A[1024] __attribute__ ((aligned(8)));
#endif
#endif

/* --> Pacedetect_main_task */
extern xdc_Void Pacedetect_main_task(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_6_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_6_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_6_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_6_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_6_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_6_stack__A[512] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[7];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.utils.Load DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_utils_Load_Module_State__ {
    xdc_Int taskHId;
    __TA_ti_sysbios_utils_Load_Module_State__taskStartTime taskStartTime;
    xdc_UInt32 timeElapsed;
    __TA_ti_sysbios_utils_Load_Module_State__runningTask runningTask;
    xdc_Bool firstSwitchDone;
    xdc_UInt32 swiStartTime;
    ti_sysbios_utils_Load_HookContext swiEnv;
    __TA_ti_sysbios_utils_Load_Module_State__taskEnv taskEnv;
    xdc_UInt32 swiCnt;
    xdc_UInt32 hwiStartTime;
    ti_sysbios_utils_Load_HookContext hwiEnv;
    xdc_UInt32 hwiCnt;
    xdc_UInt32 timeSlotCnt;
    xdc_UInt32 minLoop;
    xdc_UInt32 minIdle;
    xdc_UInt32 t0;
    xdc_UInt32 idleCnt;
    xdc_UInt32 cpuLoad;
    xdc_UInt32 taskEnvLen;
    xdc_UInt32 taskNum;
    xdc_Bool powerEnabled;
    xdc_UInt32 idleStartTime;
    xdc_UInt32 busyStartTime;
    xdc_UInt32 busyTime;
    ti_sysbios_knl_Queue_Object__ Object_field_taskList;
} ti_sysbios_utils_Load_Module_State__;

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1];

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V;


/*
 * ======== ti.uia.events.DvtTypes DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAErr DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAEvt DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAProfile DECLARATIONS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif
/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[1024];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[1024] __attribute__ ((aligned(128)));
#endif
#endif

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3];

/* Module_State__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module_State__ {
    xdc_Bool enabled;
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} ti_uia_loggers_LoggerStopMode_Module_State__;

/* Module__state__V */
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V;


/*
 * ======== ti.uia.runtime.EventHdr DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_uia_runtime_QueueDescriptor_Module_State__ {
    xdc_Ptr mPtrToFirstDescriptor;
    xdc_UInt mUpdateCount;
    xdc_UInt32 is5555ifInitialized;
} ti_uia_runtime_QueueDescriptor_Module_State__;

/* Module__state__V */
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V;


/*
 * ======== ti.uia.runtime.UIAMetaData DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_msp432_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_msp432_Timer_Module_startup__E(xdc_Int);

/* --> ti_uia_loggers_LoggerStopMode_Module_startup__E */
extern xdc_Int ti_uia_loggers_LoggerStopMode_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10];


/*
 * ======== xdc.runtime.SysStd DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[8574];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[64];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Types DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Instance_State_trackQueue__O, ".const:ti_sysbios_heaps_HeapTrack_Instance_State_trackQueue__O");
__FAR__ const xdc_SizeT ti_sysbios_heaps_HeapTrack_Instance_State_trackQueue__O = offsetof(ti_sysbios_heaps_HeapTrack_Object__, Object_field_trackQueue);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_utils_Load_Module_State_taskList__O, ".const:ti_sysbios_utils_Load_Module_State_taskList__O");
__FAR__ const xdc_SizeT ti_sysbios_utils_Load_Module_State_taskList__O = offsetof(ti_sysbios_utils_Load_Module_State__, Object_field_taskList);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = D:/Firmware/TIDA firmware/Swaroop/TIDA - 2/TIDA-01614-Firmware/Debug/configPkg/package/cfg/main_rtos_pem4f");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.msp432");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M4F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== ti.platforms.msp432.Platform TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */

xdc_runtime_Diags_DictElem xdc_runtime_Diags_dictElems[] = {
    {32777, &xdc_runtime_Main_Module__root__V.mask},
    {32801, &ti_sysbios_knl_Event_Module__root__V.mask},
    {32805, &ti_sysbios_knl_Task_Module__root__V.mask},
    {0, 0}
};


/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_family_arm_msp432_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}


/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[10];
    xdc_runtime_Startup_startModsFxn__C(state, 10);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif

extern xdc_Void ti_sysbios_family_arm_msp432_init_Boot_init(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    ti_sysbios_family_arm_msp432_init_Boot_init();
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt, 
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_CString fmt = *pfmt;
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                                       (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (xdc_Int) va_arg(va, xdc_IArg) : 
                                       (xdc_Int) va_arg(va, xdc_Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[7];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.uia.events.UIAProfile TEMPLATE ========
 */




#include <xdc/runtime/Log.h>
#include <ti/uia/events/UIAProfile.h>
#include <ti/sysbios/knl/Task.h>

void ti_uia_events_UIAProfile_functionEntryHook(const char* name) {

  xdc_runtime_Log_write2(ti_uia_events_UIAProfile_enterFunctionName, (IArg)ti_sysbios_knl_Task_selfMacro(),(IArg)name);

}

void ti_uia_events_UIAProfile_functionExitHook(const char* name) {
  xdc_runtime_Log_write2(ti_uia_events_UIAProfile_exitFunctionName, (IArg)ti_sysbios_knl_Task_selfMacro(),(IArg)name);
}

/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */




/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_family_arm_m3_Timer_startup__E();
extern Void ti_sysbios_family_arm_msp432_Timer_startup__E();

Void ti_sysbios_BIOS_startFunc__I()
{
    /*
     *  Check if XDC runtime startup functions have been called. If not, then
     *  call BIOS_linkedWithIncorrectBootLibrary() function. This function
     *  will spin forever.
     */
    if (xdc_runtime_Startup_rtsDone() != TRUE) {
        ti_sysbios_BIOS_linkedWithIncorrectBootLibrary();
    }

    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_arm_m3_Timer_startup__E();
    ti_sysbios_family_arm_msp432_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}

/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I()
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }

    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.family.arm.msp432.init.Boot TEMPLATE ========
 */

    extern Void ti_sysbios_family_arm_msp432_init_Boot_configureClocksHigh(Void);
    extern Void ti_sysbios_family_arm_msp432_init_Boot_configureClocksMed(Void);
    extern Void ti_sysbios_family_arm_msp432_init_Boot_configureClocksLow(Void);
    extern Void ti_sysbios_family_arm_msp432_init_Boot_disableWatchdog(Void);

#if defined(__ti__)
#pragma CODE_SECTION(ti_sysbios_family_arm_msp432_init_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_sysbios_family_arm_msp432_init_Boot_init ========
 */
Void ti_sysbios_family_arm_msp432_init_Boot_init()
{


    ti_sysbios_family_arm_msp432_init_Boot_configureClocksHigh();

    ti_sysbios_family_arm_msp432_init_Boot_disableWatchdog();
}

/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();


#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[80];

UInt32 ti_sysbios_family_arm_m3_Hwi_dispatchTable[80];

#if defined(__IAR_SYSTEMS_ICC__)
Void ti_sysbios_family_arm_m3_Hwi_initIsrStackSize()
{
    #pragma section = "CSTACK"
        ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackSize = (SizeT)__section_size("CSTACK");
}
#endif

/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.uia.loggers.LoggerStopMode TEMPLATE ========
 */


#include <xdc/std.h>

#include <xdc/runtime/Log.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/UIAPacket.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/loggers/LoggerStopMode.h>

#include <string.h>  /* For memcpy */

#ifdef xdc_target__isaCompatible_64P
extern volatile cregister UInt32 TSCL, TSCH;
#endif

/*
 *  ======== ti_uia_loggers_LoggerStopMode_fillInTimestamp =========
 */
static inline UInt32 *ti_uia_loggers_LoggerStopMode_fillInTimestamp(UInt32 *writePtr)
{

#ifndef xdc_target__isaCompatible_64P
    xdc_runtime_Types_Timestamp64 tstamp;
    xdc_runtime_Timestamp_get64(&tstamp);
    *(writePtr++) = tstamp.lo;
    *(writePtr++) = tstamp.hi;
#else
    *(writePtr++) = TSCL;
    *(writePtr++) = TSCH;
#endif
    return (writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeStart ========
 */
static inline Ptr ti_uia_loggers_LoggerStopMode_writeStart(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UInt32 *writePtr, UInt32 numBytes,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid)
{


    *writePtr++ = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
        numBytes,
        obj->numBytesInPrevEvent,
        obj->eventSequenceNum,
        ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWith64bTimestamp);

    obj->numBytesInPrevEvent = numBytes;

    writePtr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(writePtr);
    *writePtr++ = xdc_runtime_Types_makeEvent(xdc_runtime_Log_getEventId(evt), mid);

    return (writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeFinish ========
 */
static inline Void ti_uia_loggers_LoggerStopMode_writeFinish(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UInt32 *writePtr)
{
    if (writePtr > obj->end) {
        /* Set UIA packet length and sequence number */
        ti_uia_runtime_UIAPacket_setEventLengthFast(
                (ti_uia_runtime_UIAPacket_Hdr*)obj->buffer,
                (UInt32)((writePtr - obj->buffer) * 4));

        /* Reset the write pointer to the beginning of the buffer */
        obj->write = obj->buffer + 4;

        /*
         *  Update the sequence count after the packet has been fully written
         *  in order to ensure that, if the target is halted it can decode the
         *  partially written packet correctly
         */
        obj->pktSequenceNum++;
        ti_uia_runtime_UIAPacket_setSequenceCounts(
            (ti_uia_runtime_UIAPacket_Hdr*)obj->buffer,
            obj->pktSequenceNum,
            obj->eventSequenceNum);
    }
    else {
        obj->write = writePtr;
    }
    ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
            (xdc_Bits32 *)obj->write;
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_filterOutEvent ========
 *  Returns TRUE if the event should be filtered out.
 */
Bool ti_uia_loggers_LoggerStopMode_filterOutEvent__I(xdc_runtime_Diags_Mask mask)
{
    return (FALSE);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write0__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write0__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            16, evt, mid);


    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            16,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write1__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write1__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            20, evt, mid);

    *writePtr++ = a1;

    obj->numBytesInPrevEvent = 20;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            20,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write2__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write2__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            24, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;

    obj->numBytesInPrevEvent = 24;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            24,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write4__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write4__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2, IArg a3, IArg a4)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            32, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;
    *writePtr++ = a3;
    *writePtr++ = a4;

    obj->numBytesInPrevEvent = 32;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            32,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write8__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write8__E(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid,
        IArg a1, IArg a2, IArg a3, IArg a4,
        IArg a5, IArg a6, IArg a7, IArg a8)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            48, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;
    *writePtr++ = a3;
    *writePtr++ = a4;
    *writePtr++ = a5;
    *writePtr++ = a6;
    *writePtr++ = a7;
    *writePtr++ = a8;

    obj->numBytesInPrevEvent = 48;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            48,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_setFilterLevel__E ========
 *  Sets the filter level for the given diags level.
 *
 *  LoggerStopMode maintains a separate filter level for every diags category.
 *  This is accomplished by maintaining three masks, one for each of the levels
 *  1 - 3, wich store the diags categories which are currently at that level.
 *  There is no mask for level4; if the diags category is not found in levels
 *  1-3, it is  assumed that the filtering level is level4.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
Void ti_uia_loggers_LoggerStopMode_setFilterLevel__E(ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_Mask mask,
                xdc_runtime_Diags_EventLevel filterLevel)
{
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_getFilterLevel__E ========
 *  Returns the mask of diags categories which are set to the specified filter
 *  level.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
xdc_runtime_Diags_Mask ti_uia_loggers_LoggerStopMode_getFilterLevel__E (ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_EventLevel level)
{
    return (0);

}

/*  ======== writeMemoryRange =========
 *  logs a range of consecutive memory values.
 *
 *  Breaks up large blocks into a series of smaller blocks in order to limit the
 *  maximum amount of time that interrupts are disabled.
 */
Void ti_uia_loggers_LoggerStopMode_writeMemoryRange__E(ti_uia_loggers_LoggerStopMode_Object *obj, xdc_runtime_Log_Event evt,
                xdc_runtime_Types_ModuleId mid, UInt32 snapshotId,
                IArg fileName, IArg lineNum, IArg fmt,
                IArg startAdrs, UInt32 lengthInMAUs)
{
    Int i;
    UInt32 eventSizeBits32;
    UInt32 dataSizeBits32;
    Ptr pAdrs = iargToPtr(startAdrs);
    SizeT headerSizeBits32;
    SizeT lenAdjustedBits32;
    Int numRecords;
    UInt key;
    UInt32 *writePtr = obj->write;



    if (obj->maxEventSizeInBits32 == 0) {
        return;
    }

    /* Size of header in 32 bit words */
    headerSizeBits32 = 10;

    /* Round up to word boundary */
    lenAdjustedBits32 = (lengthInMAUs + sizeof(Bits32) - 1) / sizeof(Bits32);

    numRecords = (lenAdjustedBits32 / (obj->maxEventSizeInBits32 - headerSizeBits32)) + 1;

    for (i = 0; i < numRecords; i++) {
        if ((headerSizeBits32 + lenAdjustedBits32) > obj->maxEventSizeInBits32) {
            dataSizeBits32 = obj->maxEventSizeInBits32 - headerSizeBits32;
            lenAdjustedBits32 -= dataSizeBits32;
        }
        else {
            dataSizeBits32 = lenAdjustedBits32;
        }
        eventSizeBits32 = dataSizeBits32 + headerSizeBits32;

        key = ti_sysbios_hal_Hwi_disable();
        if ((writePtr + eventSizeBits32) >= obj->end) {
            ti_uia_loggers_LoggerStopMode_flush(obj);
            writePtr = obj->write;
        }

        if ((writePtr == NULL ) || ((writePtr + eventSizeBits32) >= obj->end)) {
            obj->droppedEvents++;
            ti_sysbios_hal_Hwi_restore(key);

            continue;
        }

        /*
         *  Fill in Snapshot header.
         *  Use events with previous event length in header to allow events
         *  to be read from partially written packets
         */
        *(writePtr++) = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            ((eventSizeBits32) * 4),
            obj->numBytesInPrevEvent,
            obj->eventSequenceNum, ti_uia_runtime_EventHdr_HdrType_SnapshotEventWithPrevLenAnd64bTimestamp);

        writePtr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(writePtr);

        *(writePtr++) = ((evt) & 0xffff0000) | mid;
        *(writePtr++) = fileName;
        *(writePtr++) = lineNum;
        *(writePtr++) = snapshotId;
        *(writePtr++) = (Bits32)pAdrs;
        *(writePtr++) = (((((dataSizeBits32) * sizeof(Bits32)) & 0x0FFFF)<<16) | (lengthInMAUs & 0x0FFFF));
        *(writePtr++) = fmt;

        memcpy((Ptr)writePtr, pAdrs, ((dataSizeBits32) * sizeof(Bits32)));
        writePtr = (Ptr)((Char *)writePtr + ((dataSizeBits32) * sizeof(Bits32)));

        /*
         * Update serial number even if the buffer is full or disabled.
         * We do this because a reader (decoder) of the buffer needs to
         * know if events have been missed, and the buffer might become
         * un-FULL at some later time.
         */
        obj->eventSequenceNum++;

        obj->numBytesInPrevEvent = ((eventSizeBits32) * 4);
        *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            obj->numBytesInPrevEvent,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

        obj->write = writePtr;

        ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
            (xdc_Bits32 *)writePtr;
        pAdrs = (Ptr)((Char *)pAdrs + ((dataSizeBits32) * sizeof(Bits32)));
        ti_sysbios_hal_Hwi_restore(key);
    }
    obj->write = writePtr;
}

/*
 * ======== ti.sysbios.utils.Load TEMPLATE ========
 */

#include <ti/sysbios/utils/Load.h>
#include <ti/sysbios/hal/Core.h>

/*
 *  ======== Load_update ========
 */
Void ti_sysbios_utils_Load_update__E()
{
    /* Update and Log CPU load, Task, Swi, and Hwi loads (if enabled). */
    ti_sysbios_utils_Load_updateLoads();
}


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x1e84800,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x1e84800,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x800;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_m3_Timer_Handle)&ti_sysbios_family_arm_m3_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_m3_Timer_periodicStub__I)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0xf,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_periodicStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x18,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)0),  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    (xdc_SizeT)0x400,  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    ((xdc_Ptr)((void*)&ti_sysbios_family_arm_m3_Hwi_dispatchTable[0])),  /* dispatchTable */
    0,  /* vnvicFlushRequired */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x8032;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0x50;

/* NUM_PRIORITIES__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)7473) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)7543) << 16 | 512);

/* A_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)3197) << 16 | 16);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)4435) << 16 | 0);

/* E_hwiLimitExceeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C = (((xdc_runtime_Error_Id)4483) << 16 | 0);

/* E_exception__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)4531) << 16 | 0);

/* E_noIsr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)4736) << 16 | 0);

/* E_NMI__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)4764) << 16 | 0);

/* E_hardFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)4774) << 16 | 0);

/* E_memFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)4790) << 16 | 0);

/* E_busFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)4820) << 16 | 0);

/* E_usageFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)4850) << 16 | 0);

/* E_svCall__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)4867) << 16 | 0);

/* E_debugMon__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)4888) << 16 | 0);

/* E_reserved__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)4903) << 16 | 0);

/* nullIsrFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I));

/* excHandlerFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));

/* excHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)0);

/* excHookFuncs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* numSparseInterrupts__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C, ".const:ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C = (xdc_UInt)0x0;

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8033;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x8034;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.family.arm.m3.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Timer_Params ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Timer_Module__ ti_sysbios_family_arm_m3_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Timer_Object__ ti_sysbios_family_arm_m3_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_USER,  /* startMode */
        (xdc_UInt)0xffffff,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0xf,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_m3_TimestampProvider_rolloverFunc__E)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_m3_Timer_Module_State__ ti_sysbios_family_arm_m3_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Timer_Module_State__ ti_sysbios_family_arm_m3_Timer_Module__state__V = {
    (xdc_UInt)0x0,  /* tickCount */
    (xdc_UInt)0x0,  /* availMask */
    (ti_sysbios_family_arm_m3_Timer_Handle)&ti_sysbios_family_arm_m3_Timer_Object__table__V[0],  /* handle */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__diagsMask ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__gateObj ti_sysbios_family_arm_m3_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__gatePrms ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__id__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__id ti_sysbios_family_arm_m3_Timer_Module__id__C = (xdc_Bits16)0x8035;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerDefined ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerObj ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__startupDoneFxn ti_sysbios_family_arm_m3_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__count__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__count ti_sysbios_family_arm_m3_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__heap ti_sysbios_family_arm_m3_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__sizeof ti_sysbios_family_arm_m3_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__table__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__table ti_sysbios_family_arm_m3_Timer_Object__table__C = ti_sysbios_family_arm_m3_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_m3_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_E_invalidTimer ti_sysbios_family_arm_m3_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4921) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_m3_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_E_notAvailable ti_sysbios_family_arm_m3_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4957) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_m3_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_E_cannotSupport ti_sysbios_family_arm_m3_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4996) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_anyMask__C, ".const:ti_sysbios_family_arm_m3_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_anyMask ti_sysbios_family_arm_m3_Timer_anyMask__C = (xdc_UInt)0x1;

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_m3_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_startupNeeded ti_sysbios_family_arm_m3_Timer_startupNeeded__C = (xdc_UInt)0x1;


/*
 * ======== ti.sysbios.family.arm.m3.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_TimestampProvider_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_m3_TimestampProvider_Module_State__ ti_sysbios_family_arm_m3_TimestampProvider_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_TimestampProvider_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_TimestampProvider_Module_State__ ti_sysbios_family_arm_m3_TimestampProvider_Module__state__V = {
    (ti_sysbios_family_arm_m3_Timer_Handle)&ti_sysbios_family_arm_m3_Timer_Object__table__V[0],  /* timer */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__gateObj ti_sysbios_family_arm_m3_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_m3_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__id ti_sysbios_family_arm_m3_TimestampProvider_Module__id__C = (xdc_Bits16)0x8036;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Object__count ti_sysbios_family_arm_m3_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Object__heap ti_sysbios_family_arm_m3_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Object__sizeof ti_sysbios_family_arm_m3_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Object__table ti_sysbios_family_arm_m3_TimestampProvider_Object__table__C = 0;

/* configTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_configTimer__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_configTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_configTimer ti_sysbios_family_arm_m3_TimestampProvider_configTimer__C = 0;


/*
 * ======== ti.sysbios.family.arm.msp432.ClockFreqs INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__ ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__ ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V = {
    (xdc_UInt32)0x8000,  /* ACLK */
    (xdc_UInt32)0xb71b00,  /* SMCLK */
    (xdc_UInt32)0x16e3600,  /* HSMCLK */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsEnabled ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsIncluded ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsMask__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsMask ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__gateObj__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__gateObj ti_sysbios_family_arm_msp432_ClockFreqs_Module__gateObj__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__gatePrms__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__gatePrms ti_sysbios_family_arm_msp432_ClockFreqs_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__id__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__id ti_sysbios_family_arm_msp432_ClockFreqs_Module__id__C = (xdc_Bits16)0x803b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerDefined ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerObj__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerObj ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn0 ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn1 ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn2 ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn4 ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn8 ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__startupDoneFxn ti_sysbios_family_arm_msp432_ClockFreqs_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Object__count__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Object__count ti_sysbios_family_arm_msp432_ClockFreqs_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Object__heap__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Object__heap ti_sysbios_family_arm_msp432_ClockFreqs_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Object__sizeof__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Object__sizeof ti_sysbios_family_arm_msp432_ClockFreqs_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Object__table__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Object__table ti_sysbios_family_arm_msp432_ClockFreqs_Object__table__C = 0;

/* ACLK__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_ACLK__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_ACLK__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_ACLK ti_sysbios_family_arm_msp432_ClockFreqs_ACLK__C = (xdc_UInt32)0x8000;

/* SMCLK__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_SMCLK__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_SMCLK__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_SMCLK ti_sysbios_family_arm_msp432_ClockFreqs_SMCLK__C = (xdc_UInt32)0xb71b00;

/* HSMCLK__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_HSMCLK__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_HSMCLK__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_HSMCLK ti_sysbios_family_arm_msp432_ClockFreqs_HSMCLK__C = (xdc_UInt32)0x16e3600;


/*
 * ======== ti.sysbios.family.arm.msp432.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_msp432_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_msp432_Timer_Params ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_msp432_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    ti_sysbios_family_arm_msp432_Timer_Source_ACLK,  /* clockSource */
    0,  /* synchronous */
    ti_sysbios_family_arm_msp432_Timer_ID_1,  /* inputDivider */
    ti_sysbios_family_arm_msp432_Timer_IDEX_1,  /* inputDividerExp */
    0,  /* nesting */
    (xdc_UInt)0x0,  /* prevThreshold */
    (xdc_UInt)0x100,  /* controlRegInit */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_msp432_Timer_Module__ ti_sysbios_family_arm_msp432_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_msp432_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_msp432_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_msp432_Timer_Object__ ti_sysbios_family_arm_msp432_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        (xdc_UInt)0x100,  /* controlRegInit */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x20,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x18,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x8000,  /* lo */
        },  /* frequency */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* hwi */
        (xdc_UInt)0x0,  /* prevThreshold */
        (xdc_UInt)0x0,  /* savedCurrCount */
        (xdc_UInt32)0x0,  /* rollovers */
        0,  /* synchronous */
        (xdc_UInt)0x0,  /* inputDivider */
        (xdc_UInt)0x0,  /* inputDividerExp */
    },
};

/* --> ti_sysbios_family_arm_msp432_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_msp432_Timer_Module_State__device ti_sysbios_family_arm_msp432_Timer_Module_State_0_device__A[4] = {
    {
        (xdc_UInt)0x18,  /* intNum */
        ((xdc_Ptr)(0x40000000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x1a,  /* intNum */
        ((xdc_Ptr)(0x40000400)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x1c,  /* intNum */
        ((xdc_Ptr)(0x40000800)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x1e,  /* intNum */
        ((xdc_Ptr)(0x40000c00)),  /* baseAddr */
    },  /* [3] */
};

/* --> ti_sysbios_family_arm_msp432_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_msp432_Timer_Module_State__handles ti_sysbios_family_arm_msp432_Timer_Module_State_0_handles__A[4] = {
    (ti_sysbios_family_arm_msp432_Timer_Handle)&ti_sysbios_family_arm_msp432_Timer_Object__table__V[0],  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_msp432_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_msp432_Timer_Module_State__ ti_sysbios_family_arm_msp432_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_msp432_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_msp432_Timer_Module_State__ ti_sysbios_family_arm_msp432_Timer_Module__state__V = {
    (xdc_UInt)0xe,  /* availMask */
    ((void*)ti_sysbios_family_arm_msp432_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_arm_msp432_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__diagsMask ti_sysbios_family_arm_msp432_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__gateObj ti_sysbios_family_arm_msp432_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__gatePrms ti_sysbios_family_arm_msp432_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__id__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__id ti_sysbios_family_arm_msp432_Timer_Module__id__C = (xdc_Bits16)0x803a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerObj ti_sysbios_family_arm_msp432_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__startupDoneFxn ti_sysbios_family_arm_msp432_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__count__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Object__count ti_sysbios_family_arm_msp432_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Object__heap ti_sysbios_family_arm_msp432_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Object__sizeof ti_sysbios_family_arm_msp432_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_msp432_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__table__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Object__table ti_sysbios_family_arm_msp432_Timer_Object__table__C = ti_sysbios_family_arm_msp432_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_msp432_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_E_invalidTimer ti_sysbios_family_arm_msp432_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4921) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_msp432_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_E_notAvailable ti_sysbios_family_arm_msp432_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4957) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_msp432_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_E_cannotSupport ti_sysbios_family_arm_msp432_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4996) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_anyMask__C, ".const:ti_sysbios_family_arm_msp432_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_anyMask ti_sysbios_family_arm_msp432_Timer_anyMask__C = (xdc_UInt)0xf;

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_msp432_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_startupNeeded ti_sysbios_family_arm_msp432_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_numTimerDevices__C, ".const:ti_sysbios_family_arm_msp432_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_numTimerDevices ti_sysbios_family_arm_msp432_Timer_numTimerDevices__C = (xdc_Int)0x4;


/*
 * ======== ti.sysbios.family.arm.msp432.init.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__diagsEnabled ti_sysbios_family_arm_msp432_init_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__diagsIncluded ti_sysbios_family_arm_msp432_init_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__diagsMask__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__diagsMask ti_sysbios_family_arm_msp432_init_Boot_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__gateObj__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__gateObj ti_sysbios_family_arm_msp432_init_Boot_Module__gateObj__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__gatePrms__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__gatePrms ti_sysbios_family_arm_msp432_init_Boot_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__id__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__id ti_sysbios_family_arm_msp432_init_Boot_Module__id__C = (xdc_Bits16)0x8030;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerDefined ti_sysbios_family_arm_msp432_init_Boot_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerObj__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerObj ti_sysbios_family_arm_msp432_init_Boot_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn0 ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn1 ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn2 ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn4 ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn8 ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__startupDoneFxn ti_sysbios_family_arm_msp432_init_Boot_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Object__count__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Object__count ti_sysbios_family_arm_msp432_init_Boot_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Object__heap__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Object__heap ti_sysbios_family_arm_msp432_init_Boot_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Object__sizeof__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Object__sizeof ti_sysbios_family_arm_msp432_init_Boot_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Object__table__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Object__table ti_sysbios_family_arm_msp432_init_Boot_Object__table__C = 0;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8038;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8039;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)3610) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x802a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4398) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[2048];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x800)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8027;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2854) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2890) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2935) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4362) << 16 | 0);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2826) << 16 | 16);

/* primaryHeapBaseAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C = ((CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr)0);

/* primaryHeapEndAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C = ((CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr)0);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapTrack INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapTrack_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapTrack_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapTrack_Params ti_sysbios_heaps_HeapTrack_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapTrack_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapTrack_Object__PARAMS__C.__iprms, /* instance */
    0,  /* heap */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_heaps_HeapTrack_Module__ ti_sysbios_heaps_HeapTrack_Module__root__V = {
    {&ti_sysbios_heaps_HeapTrack_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapTrack_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__diagsEnabled ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__diagsIncluded ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapTrack_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__diagsMask ti_sysbios_heaps_HeapTrack_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapTrack_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapTrack_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__gateObj ti_sysbios_heaps_HeapTrack_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapTrack_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapTrack_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__gatePrms ti_sysbios_heaps_HeapTrack_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapTrack_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__id__C, ".const:ti_sysbios_heaps_HeapTrack_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__id ti_sysbios_heaps_HeapTrack_Module__id__C = (xdc_Bits16)0x8028;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapTrack_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerDefined ti_sysbios_heaps_HeapTrack_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapTrack_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerObj ti_sysbios_heaps_HeapTrack_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapTrack_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn0 ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn1 ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn2 ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn4 ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn8 ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapTrack_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapTrack_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Module__startupDoneFxn ti_sysbios_heaps_HeapTrack_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapTrack_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Object__count__C, ".const:ti_sysbios_heaps_HeapTrack_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__count ti_sysbios_heaps_HeapTrack_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Object__heap__C, ".const:ti_sysbios_heaps_HeapTrack_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__heap ti_sysbios_heaps_HeapTrack_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapTrack_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__sizeof ti_sysbios_heaps_HeapTrack_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapTrack_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Object__table__C, ".const:ti_sysbios_heaps_HeapTrack_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_Object__table ti_sysbios_heaps_HeapTrack_Object__table__C = 0;

/* A_doubleFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_A_doubleFree__C, ".const:ti_sysbios_heaps_HeapTrack_A_doubleFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_A_doubleFree ti_sysbios_heaps_HeapTrack_A_doubleFree__C = (((xdc_runtime_Assert_Id)3050) << 16 | 16);

/* A_bufOverflow__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_A_bufOverflow__C, ".const:ti_sysbios_heaps_HeapTrack_A_bufOverflow__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_A_bufOverflow ti_sysbios_heaps_HeapTrack_A_bufOverflow__C = (((xdc_runtime_Assert_Id)3084) << 16 | 16);

/* A_notEmpty__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_A_notEmpty__C, ".const:ti_sysbios_heaps_HeapTrack_A_notEmpty__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_A_notEmpty ti_sysbios_heaps_HeapTrack_A_notEmpty__C = (((xdc_runtime_Assert_Id)3115) << 16 | 16);

/* A_nullObject__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_A_nullObject__C, ".const:ti_sysbios_heaps_HeapTrack_A_nullObject__C");
__FAR__ const CT__ti_sysbios_heaps_HeapTrack_A_nullObject ti_sysbios_heaps_HeapTrack_A_nullObject__C = (((xdc_runtime_Assert_Id)3142) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[3] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
        (xdc_UInt32)0x7d0,  /* timeout */
        (xdc_UInt32)0x7d0,  /* currTimeout */
        (xdc_UInt32)0x7d0,  /* period */
        1,  /* active */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)CLOCK_TMP_read_temperature)),  /* fxn */
        ((xdc_UArg)0),  /* arg */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* prev */
        },  /* elem */
        (xdc_UInt32)0x1b58,  /* timeout */
        (xdc_UInt32)0x1b58,  /* currTimeout */
        (xdc_UInt32)0x9c40,  /* period */
        1,  /* active */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)clock_pacedetectStart)),  /* fxn */
        ((xdc_UArg)0),  /* arg */
    },
    {/* instance#2 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[1].elem)),  /* prev */
        },  /* elem */
        (xdc_UInt32)0x4268,  /* timeout */
        (xdc_UInt32)0x4268,  /* currTimeout */
        (xdc_UInt32)0x9c40,  /* period */
        1,  /* active */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)clock_pacedetectEnd)),  /* fxn */
        ((xdc_UArg)0),  /* arg */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_msp432_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[2].elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 3;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = ti_sysbios_knl_Clock_Object__table__V;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)6528) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)6550) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)6568) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)733) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)814) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((CT__ti_sysbios_knl_Clock_doTickFunc)((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".const:ti_sysbios_knl_Clock_triggerClock__C");
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)((void*)&ti_sysbios_knl_Event_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Event_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__startupDoneFxn ti_sysbios_knl_Event_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Event_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)6600) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)6654) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)884) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)931) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)970) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)1013) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1076) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[3] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)Power_idleFunc)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_utils_Load_idleFxn__E)),  /* [2] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[3] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
    (xdc_UInt)0x0,  /* [2] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {3, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {3, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[12] = {
    {/* instance#0 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#1 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[1].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[1].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#2 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[2].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[2].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#3 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[3].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[3].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#4 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[4].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[4].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#5 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[5].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[5].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#6 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[6].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[6].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#7 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[7].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[7].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#8 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[8].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[8].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#9 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[9].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[9].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#10 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[10].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[10].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#11 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[11].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[11].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x390;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8023;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 12;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = ti_sysbios_knl_Semaphore_Object__table__V;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)6735) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)6765) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1224) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1279) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)1013) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1344) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1398) << 16 | 16);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 0;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x390;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)6808) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)6855) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)6873) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1492) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1549) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[1024];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_2_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[1024];

/* --> ti_sysbios_knl_Task_Instance_State_3_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[512];

/* --> ti_sysbios_knl_Task_Instance_State_4_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_4_stack__A[1024];

/* --> ti_sysbios_knl_Task_Instance_State_5_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_5_stack__A[1024];

/* --> ti_sysbios_knl_Task_Instance_State_6_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_6_stack__A[512];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[7] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x400,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)MSP432_UART_main_task)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)AFE_main_task)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#2 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[2].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[2].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x400,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_2_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ADS_main_task)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#3 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[3].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[3].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_3_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)GUI_init_task)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#4 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[4].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[4].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x400,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_4_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)TMP_main_task)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#5 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[5].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[5].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x400,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_5_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)Pacedetect_main_task)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#6 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[6].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[6].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_6_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[6],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x7,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)((void*)&ti_sysbios_knl_Task_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 7;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)6913) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)6981) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)7026) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)7067) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)7099) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)7147) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)7203) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)7234) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)7317) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)7403) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)4049) << 16 | 0);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)4092) << 16 | 0);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)4143) << 16 | 0);

/* E_moduleStateCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_moduleStateCheckFailed__C, ".const:ti_sysbios_knl_Task_E_moduleStateCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C = (((xdc_runtime_Error_Id)4174) << 16 | 0);

/* E_objectCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectCheckFailed__C, ".const:ti_sysbios_knl_Task_E_objectCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C = (((xdc_runtime_Error_Id)4247) << 16 | 0);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1598) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1667) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1721) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1775) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1838) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1888) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1923) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1956) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)2040) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x200;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* moduleStateCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C = ((CT__ti_sysbios_knl_Task_moduleStateCheckFxn)((xdc_Fxn)ti_sysbios_knl_Task_moduleStateCheck__I));

/* moduleStateCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckValueFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C = ((CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn)((xdc_Fxn)ti_sysbios_knl_Task_getModuleStateCheckValue__I));

/* moduleStateCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFlag__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C = 0;

/* objectCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFxn__C, ".const:ti_sysbios_knl_Task_objectCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C = ((CT__ti_sysbios_knl_Task_objectCheckFxn)((xdc_Fxn)ti_sysbios_knl_Task_objectCheck__I));

/* objectCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckValueFxn__C, ".const:ti_sysbios_knl_Task_objectCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C = ((CT__ti_sysbios_knl_Task_objectCheckValueFxn)((xdc_Fxn)ti_sysbios_knl_Task_getObjectCheckValue__I));

/* objectCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFlag__C, ".const:ti_sysbios_knl_Task_objectCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C = 0;

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.utils.Load INITIALIZERS ========
 */

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1] = {
    (xdc_UInt32)0x0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1] = {
    0,  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_utils_Load_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V __attribute__ ((section(".data_ti_sysbios_utils_Load_Module__state__V")));
#endif
#endif
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskStartTime__A),  /* taskStartTime */
    (xdc_UInt32)0x0,  /* timeElapsed */
    ((void*)ti_sysbios_utils_Load_Module_State_0_runningTask__A),  /* runningTask */
    0,  /* firstSwitchDone */
    (xdc_UInt32)0x0,  /* swiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* swiEnv */
    ((void*)0),  /* taskEnv */
    (xdc_UInt32)0x0,  /* swiCnt */
    (xdc_UInt32)0x0,  /* hwiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* hwiEnv */
    (xdc_UInt32)0x0,  /* hwiCnt */
    (xdc_UInt32)0x0,  /* timeSlotCnt */
    (xdc_UInt32)0xffffffff,  /* minLoop */
    (xdc_UInt32)0x0,  /* minIdle */
    (xdc_UInt32)0x0,  /* t0 */
    (xdc_UInt32)0x0,  /* idleCnt */
    (xdc_UInt32)0x0,  /* cpuLoad */
    (xdc_UInt32)0x0,  /* taskEnvLen */
    (xdc_UInt32)0x0,  /* taskNum */
    0,  /* powerEnabled */
    (xdc_UInt32)0x0,  /* idleStartTime */
    (xdc_UInt32)0x0,  /* busyStartTime */
    (xdc_UInt32)0x0,  /* busyTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_taskList */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsEnabled__C, ".const:ti_sysbios_utils_Load_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsEnabled ti_sysbios_utils_Load_Module__diagsEnabled__C = (xdc_Bits32)0x890;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsIncluded__C, ".const:ti_sysbios_utils_Load_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsIncluded ti_sysbios_utils_Load_Module__diagsIncluded__C = (xdc_Bits32)0x890;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsMask__C, ".const:ti_sysbios_utils_Load_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsMask ti_sysbios_utils_Load_Module__diagsMask__C = ((CT__ti_sysbios_utils_Load_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gateObj__C, ".const:ti_sysbios_utils_Load_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gateObj ti_sysbios_utils_Load_Module__gateObj__C = ((CT__ti_sysbios_utils_Load_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gatePrms__C, ".const:ti_sysbios_utils_Load_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gatePrms ti_sysbios_utils_Load_Module__gatePrms__C = ((CT__ti_sysbios_utils_Load_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__id__C, ".const:ti_sysbios_utils_Load_Module__id__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__id ti_sysbios_utils_Load_Module__id__C = (xdc_Bits16)0x803f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerDefined__C, ".const:ti_sysbios_utils_Load_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerDefined ti_sysbios_utils_Load_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerObj__C, ".const:ti_sysbios_utils_Load_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerObj ti_sysbios_utils_Load_Module__loggerObj__C = ((CT__ti_sysbios_utils_Load_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn0__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn0 ti_sysbios_utils_Load_Module__loggerFxn0__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn1__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn1 ti_sysbios_utils_Load_Module__loggerFxn1__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn2__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn2 ti_sysbios_utils_Load_Module__loggerFxn2__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn4__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn4 ti_sysbios_utils_Load_Module__loggerFxn4__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn8__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn8 ti_sysbios_utils_Load_Module__loggerFxn8__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__startupDoneFxn__C, ".const:ti_sysbios_utils_Load_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__startupDoneFxn ti_sysbios_utils_Load_Module__startupDoneFxn__C = ((CT__ti_sysbios_utils_Load_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__count__C, ".const:ti_sysbios_utils_Load_Object__count__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__count ti_sysbios_utils_Load_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__heap__C, ".const:ti_sysbios_utils_Load_Object__heap__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__heap ti_sysbios_utils_Load_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__sizeof__C, ".const:ti_sysbios_utils_Load_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__sizeof ti_sysbios_utils_Load_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__table__C, ".const:ti_sysbios_utils_Load_Object__table__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__table ti_sysbios_utils_Load_Object__table__C = 0;

/* LS_cpuLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_cpuLoad__C, ".const:ti_sysbios_utils_Load_LS_cpuLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_cpuLoad ti_sysbios_utils_Load_LS_cpuLoad__C = (((xdc_runtime_Log_Event)7581) << 16 | 2048);

/* LS_hwiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_hwiLoad__C, ".const:ti_sysbios_utils_Load_LS_hwiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_hwiLoad ti_sysbios_utils_Load_LS_hwiLoad__C = (((xdc_runtime_Log_Event)7598) << 16 | 2048);

/* LS_swiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_swiLoad__C, ".const:ti_sysbios_utils_Load_LS_swiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_swiLoad ti_sysbios_utils_Load_LS_swiLoad__C = (((xdc_runtime_Log_Event)7616) << 16 | 2048);

/* LS_taskLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_taskLoad__C, ".const:ti_sysbios_utils_Load_LS_taskLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_taskLoad ti_sysbios_utils_Load_LS_taskLoad__C = (((xdc_runtime_Log_Event)7634) << 16 | 2048);

/* postUpdate__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_postUpdate__C, ".const:ti_sysbios_utils_Load_postUpdate__C");
__FAR__ const CT__ti_sysbios_utils_Load_postUpdate ti_sysbios_utils_Load_postUpdate__C = ((CT__ti_sysbios_utils_Load_postUpdate)0);

/* updateInIdle__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_updateInIdle__C, ".const:ti_sysbios_utils_Load_updateInIdle__C");
__FAR__ const CT__ti_sysbios_utils_Load_updateInIdle ti_sysbios_utils_Load_updateInIdle__C = 1;

/* windowInMs__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_windowInMs__C, ".const:ti_sysbios_utils_Load_windowInMs__C");
__FAR__ const CT__ti_sysbios_utils_Load_windowInMs ti_sysbios_utils_Load_windowInMs__C = (xdc_UInt)0x1f4;

/* hwiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_hwiEnabled__C, ".const:ti_sysbios_utils_Load_hwiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_hwiEnabled ti_sysbios_utils_Load_hwiEnabled__C = 0;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_swiEnabled__C, ".const:ti_sysbios_utils_Load_swiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_swiEnabled ti_sysbios_utils_Load_swiEnabled__C = 0;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_taskEnabled__C, ".const:ti_sysbios_utils_Load_taskEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_taskEnabled ti_sysbios_utils_Load_taskEnabled__C = 0;

/* autoAddTasks__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_autoAddTasks__C, ".const:ti_sysbios_utils_Load_autoAddTasks__C");
__FAR__ const CT__ti_sysbios_utils_Load_autoAddTasks ti_sysbios_utils_Load_autoAddTasks__C = 0;


/*
 * ======== ti.uia.events.DvtTypes INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsEnabled__C, ".const:ti_uia_events_DvtTypes_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsEnabled ti_uia_events_DvtTypes_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsIncluded__C, ".const:ti_uia_events_DvtTypes_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsIncluded ti_uia_events_DvtTypes_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsMask__C, ".const:ti_uia_events_DvtTypes_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsMask ti_uia_events_DvtTypes_Module__diagsMask__C = ((CT__ti_uia_events_DvtTypes_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gateObj__C, ".const:ti_uia_events_DvtTypes_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gateObj ti_uia_events_DvtTypes_Module__gateObj__C = ((CT__ti_uia_events_DvtTypes_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gatePrms__C, ".const:ti_uia_events_DvtTypes_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gatePrms ti_uia_events_DvtTypes_Module__gatePrms__C = ((CT__ti_uia_events_DvtTypes_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__id__C, ".const:ti_uia_events_DvtTypes_Module__id__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__id ti_uia_events_DvtTypes_Module__id__C = (xdc_Bits16)0x8014;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerDefined__C, ".const:ti_uia_events_DvtTypes_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerDefined ti_uia_events_DvtTypes_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerObj__C, ".const:ti_uia_events_DvtTypes_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerObj ti_uia_events_DvtTypes_Module__loggerObj__C = ((CT__ti_uia_events_DvtTypes_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn0__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn0 ti_uia_events_DvtTypes_Module__loggerFxn0__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn1__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn1 ti_uia_events_DvtTypes_Module__loggerFxn1__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn2__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn2 ti_uia_events_DvtTypes_Module__loggerFxn2__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn4__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn4 ti_uia_events_DvtTypes_Module__loggerFxn4__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn8__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn8 ti_uia_events_DvtTypes_Module__loggerFxn8__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__startupDoneFxn__C, ".const:ti_uia_events_DvtTypes_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__startupDoneFxn ti_uia_events_DvtTypes_Module__startupDoneFxn__C = ((CT__ti_uia_events_DvtTypes_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__count__C, ".const:ti_uia_events_DvtTypes_Object__count__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__count ti_uia_events_DvtTypes_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__heap__C, ".const:ti_uia_events_DvtTypes_Object__heap__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__heap ti_uia_events_DvtTypes_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__sizeof__C, ".const:ti_uia_events_DvtTypes_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__sizeof ti_uia_events_DvtTypes_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__table__C, ".const:ti_uia_events_DvtTypes_Object__table__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__table ti_uia_events_DvtTypes_Object__table__C = 0;


/*
 * ======== ti.uia.events.UIAErr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsEnabled__C, ".const:ti_uia_events_UIAErr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsEnabled ti_uia_events_UIAErr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsIncluded__C, ".const:ti_uia_events_UIAErr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsIncluded ti_uia_events_UIAErr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsMask__C, ".const:ti_uia_events_UIAErr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsMask ti_uia_events_UIAErr_Module__diagsMask__C = ((CT__ti_uia_events_UIAErr_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gateObj__C, ".const:ti_uia_events_UIAErr_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gateObj ti_uia_events_UIAErr_Module__gateObj__C = ((CT__ti_uia_events_UIAErr_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gatePrms__C, ".const:ti_uia_events_UIAErr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gatePrms ti_uia_events_UIAErr_Module__gatePrms__C = ((CT__ti_uia_events_UIAErr_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__id__C, ".const:ti_uia_events_UIAErr_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__id ti_uia_events_UIAErr_Module__id__C = (xdc_Bits16)0x8015;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerDefined__C, ".const:ti_uia_events_UIAErr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerDefined ti_uia_events_UIAErr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerObj__C, ".const:ti_uia_events_UIAErr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerObj ti_uia_events_UIAErr_Module__loggerObj__C = ((CT__ti_uia_events_UIAErr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn0__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn0 ti_uia_events_UIAErr_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn1__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn1 ti_uia_events_UIAErr_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn2__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn2 ti_uia_events_UIAErr_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn4__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn4 ti_uia_events_UIAErr_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn8__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn8 ti_uia_events_UIAErr_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAErr_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__startupDoneFxn ti_uia_events_UIAErr_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAErr_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__count__C, ".const:ti_uia_events_UIAErr_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__count ti_uia_events_UIAErr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__heap__C, ".const:ti_uia_events_UIAErr_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__heap ti_uia_events_UIAErr_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__sizeof__C, ".const:ti_uia_events_UIAErr_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__sizeof ti_uia_events_UIAErr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__table__C, ".const:ti_uia_events_UIAErr_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__table ti_uia_events_UIAErr_Object__table__C = 0;

/* error__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_error__C, ".const:ti_uia_events_UIAErr_error__C");
__FAR__ const CT__ti_uia_events_UIAErr_error ti_uia_events_UIAErr_error__C = (((xdc_runtime_Log_Event)5272) << 16 | 192);

/* errorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_errorWithStr__C, ".const:ti_uia_events_UIAErr_errorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_errorWithStr ti_uia_events_UIAErr_errorWithStr__C = (((xdc_runtime_Log_Event)5294) << 16 | 192);

/* hwError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwError__C, ".const:ti_uia_events_UIAErr_hwError__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwError ti_uia_events_UIAErr_hwError__C = (((xdc_runtime_Log_Event)5321) << 16 | 192);

/* hwErrorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwErrorWithStr__C, ".const:ti_uia_events_UIAErr_hwErrorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwErrorWithStr ti_uia_events_UIAErr_hwErrorWithStr__C = (((xdc_runtime_Log_Event)5346) << 16 | 192);

/* fatal__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatal__C, ".const:ti_uia_events_UIAErr_fatal__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatal ti_uia_events_UIAErr_fatal__C = (((xdc_runtime_Log_Event)5376) << 16 | 128);

/* fatalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatalWithStr__C, ".const:ti_uia_events_UIAErr_fatalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatalWithStr ti_uia_events_UIAErr_fatalWithStr__C = (((xdc_runtime_Log_Event)5404) << 16 | 128);

/* critical__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_critical__C, ".const:ti_uia_events_UIAErr_critical__C");
__FAR__ const CT__ti_uia_events_UIAErr_critical ti_uia_events_UIAErr_critical__C = (((xdc_runtime_Log_Event)5437) << 16 | 160);

/* criticalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_criticalWithStr__C, ".const:ti_uia_events_UIAErr_criticalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_criticalWithStr ti_uia_events_UIAErr_criticalWithStr__C = (((xdc_runtime_Log_Event)5468) << 16 | 160);

/* exception__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_exception__C, ".const:ti_uia_events_UIAErr_exception__C");
__FAR__ const CT__ti_uia_events_UIAErr_exception ti_uia_events_UIAErr_exception__C = (((xdc_runtime_Log_Event)5504) << 16 | 192);

/* uncaughtException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_uncaughtException__C, ".const:ti_uia_events_UIAErr_uncaughtException__C");
__FAR__ const CT__ti_uia_events_UIAErr_uncaughtException ti_uia_events_UIAErr_uncaughtException__C = (((xdc_runtime_Log_Event)5529) << 16 | 192);

/* nullPointerException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_nullPointerException__C, ".const:ti_uia_events_UIAErr_nullPointerException__C");
__FAR__ const CT__ti_uia_events_UIAErr_nullPointerException ti_uia_events_UIAErr_nullPointerException__C = (((xdc_runtime_Log_Event)5563) << 16 | 192);

/* unexpectedInterrupt__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_unexpectedInterrupt__C, ".const:ti_uia_events_UIAErr_unexpectedInterrupt__C");
__FAR__ const CT__ti_uia_events_UIAErr_unexpectedInterrupt ti_uia_events_UIAErr_unexpectedInterrupt__C = (((xdc_runtime_Log_Event)5601) << 16 | 192);

/* memoryAccessFault__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_memoryAccessFault__C, ".const:ti_uia_events_UIAErr_memoryAccessFault__C");
__FAR__ const CT__ti_uia_events_UIAErr_memoryAccessFault ti_uia_events_UIAErr_memoryAccessFault__C = (((xdc_runtime_Log_Event)5637) << 16 | 192);

/* securityException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_securityException__C, ".const:ti_uia_events_UIAErr_securityException__C");
__FAR__ const CT__ti_uia_events_UIAErr_securityException ti_uia_events_UIAErr_securityException__C = (((xdc_runtime_Log_Event)5683) << 16 | 192);

/* divisionByZero__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_divisionByZero__C, ".const:ti_uia_events_UIAErr_divisionByZero__C");
__FAR__ const CT__ti_uia_events_UIAErr_divisionByZero ti_uia_events_UIAErr_divisionByZero__C = (((xdc_runtime_Log_Event)5717) << 16 | 192);

/* overflowException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_overflowException__C, ".const:ti_uia_events_UIAErr_overflowException__C");
__FAR__ const CT__ti_uia_events_UIAErr_overflowException ti_uia_events_UIAErr_overflowException__C = (((xdc_runtime_Log_Event)5749) << 16 | 192);

/* indexOutOfRange__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_indexOutOfRange__C, ".const:ti_uia_events_UIAErr_indexOutOfRange__C");
__FAR__ const CT__ti_uia_events_UIAErr_indexOutOfRange ti_uia_events_UIAErr_indexOutOfRange__C = (((xdc_runtime_Log_Event)5783) << 16 | 192);

/* notImplemented__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_notImplemented__C, ".const:ti_uia_events_UIAErr_notImplemented__C");
__FAR__ const CT__ti_uia_events_UIAErr_notImplemented ti_uia_events_UIAErr_notImplemented__C = (((xdc_runtime_Log_Event)5829) << 16 | 192);

/* stackOverflow__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_stackOverflow__C, ".const:ti_uia_events_UIAErr_stackOverflow__C");
__FAR__ const CT__ti_uia_events_UIAErr_stackOverflow ti_uia_events_UIAErr_stackOverflow__C = (((xdc_runtime_Log_Event)5894) << 16 | 160);

/* illegalInstruction__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_illegalInstruction__C, ".const:ti_uia_events_UIAErr_illegalInstruction__C");
__FAR__ const CT__ti_uia_events_UIAErr_illegalInstruction ti_uia_events_UIAErr_illegalInstruction__C = (((xdc_runtime_Log_Event)5933) << 16 | 192);

/* entryPointNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_entryPointNotFound__C, ".const:ti_uia_events_UIAErr_entryPointNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_entryPointNotFound ti_uia_events_UIAErr_entryPointNotFound__C = (((xdc_runtime_Log_Event)5977) << 16 | 192);

/* moduleNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_moduleNotFound__C, ".const:ti_uia_events_UIAErr_moduleNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_moduleNotFound ti_uia_events_UIAErr_moduleNotFound__C = (((xdc_runtime_Log_Event)6014) << 16 | 192);

/* floatingPointError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_floatingPointError__C, ".const:ti_uia_events_UIAErr_floatingPointError__C");
__FAR__ const CT__ti_uia_events_UIAErr_floatingPointError ti_uia_events_UIAErr_floatingPointError__C = (((xdc_runtime_Log_Event)6063) << 16 | 192);

/* invalidParameter__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_invalidParameter__C, ".const:ti_uia_events_UIAErr_invalidParameter__C");
__FAR__ const CT__ti_uia_events_UIAErr_invalidParameter ti_uia_events_UIAErr_invalidParameter__C = (((xdc_runtime_Log_Event)6099) << 16 | 192);


/*
 * ======== ti.uia.events.UIAEvt INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsEnabled__C, ".const:ti_uia_events_UIAEvt_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsEnabled ti_uia_events_UIAEvt_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsIncluded__C, ".const:ti_uia_events_UIAEvt_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsIncluded ti_uia_events_UIAEvt_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsMask__C, ".const:ti_uia_events_UIAEvt_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsMask ti_uia_events_UIAEvt_Module__diagsMask__C = ((CT__ti_uia_events_UIAEvt_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gateObj__C, ".const:ti_uia_events_UIAEvt_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gateObj ti_uia_events_UIAEvt_Module__gateObj__C = ((CT__ti_uia_events_UIAEvt_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gatePrms__C, ".const:ti_uia_events_UIAEvt_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gatePrms ti_uia_events_UIAEvt_Module__gatePrms__C = ((CT__ti_uia_events_UIAEvt_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__id__C, ".const:ti_uia_events_UIAEvt_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__id ti_uia_events_UIAEvt_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerDefined__C, ".const:ti_uia_events_UIAEvt_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerDefined ti_uia_events_UIAEvt_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerObj__C, ".const:ti_uia_events_UIAEvt_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerObj ti_uia_events_UIAEvt_Module__loggerObj__C = ((CT__ti_uia_events_UIAEvt_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn0__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn0 ti_uia_events_UIAEvt_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn1__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn1 ti_uia_events_UIAEvt_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn2__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn2 ti_uia_events_UIAEvt_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn4__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn4 ti_uia_events_UIAEvt_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn8__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn8 ti_uia_events_UIAEvt_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAEvt_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__startupDoneFxn ti_uia_events_UIAEvt_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAEvt_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__count__C, ".const:ti_uia_events_UIAEvt_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__count ti_uia_events_UIAEvt_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__heap__C, ".const:ti_uia_events_UIAEvt_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__heap ti_uia_events_UIAEvt_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__sizeof__C, ".const:ti_uia_events_UIAEvt_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__sizeof ti_uia_events_UIAEvt_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__table__C, ".const:ti_uia_events_UIAEvt_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__table ti_uia_events_UIAEvt_Object__table__C = 0;

/* warning__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warning__C, ".const:ti_uia_events_UIAEvt_warning__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warning ti_uia_events_UIAEvt_warning__C = (((xdc_runtime_Log_Event)6162) << 16 | 224);

/* warningWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warningWithStr__C, ".const:ti_uia_events_UIAEvt_warningWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warningWithStr ti_uia_events_UIAEvt_warningWithStr__C = (((xdc_runtime_Log_Event)6186) << 16 | 224);

/* info__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_info__C, ".const:ti_uia_events_UIAEvt_info__C");
__FAR__ const CT__ti_uia_events_UIAEvt_info ti_uia_events_UIAEvt_info__C = (((xdc_runtime_Log_Event)6215) << 16 | 16384);

/* infoWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_infoWithStr__C, ".const:ti_uia_events_UIAEvt_infoWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_infoWithStr ti_uia_events_UIAEvt_infoWithStr__C = (((xdc_runtime_Log_Event)6237) << 16 | 16384);

/* detail__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detail__C, ".const:ti_uia_events_UIAEvt_detail__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detail ti_uia_events_UIAEvt_detail__C = (((xdc_runtime_Log_Event)6264) << 16 | 16480);

/* detailWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detailWithStr__C, ".const:ti_uia_events_UIAEvt_detailWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detailWithStr ti_uia_events_UIAEvt_detailWithStr__C = (((xdc_runtime_Log_Event)6287) << 16 | 16480);

/* intWithKey__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_intWithKey__C, ".const:ti_uia_events_UIAEvt_intWithKey__C");
__FAR__ const CT__ti_uia_events_UIAEvt_intWithKey ti_uia_events_UIAEvt_intWithKey__C = (((xdc_runtime_Log_Event)6316) << 16 | 32768);


/*
 * ======== ti.uia.events.UIAProfile INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Module__diagsEnabled__C, ".const:ti_uia_events_UIAProfile_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Module__diagsEnabled ti_uia_events_UIAProfile_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Module__diagsIncluded__C, ".const:ti_uia_events_UIAProfile_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Module__diagsIncluded ti_uia_events_UIAProfile_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Module__diagsMask__C, ".const:ti_uia_events_UIAProfile_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Module__diagsMask ti_uia_events_UIAProfile_Module__diagsMask__C = ((CT__ti_uia_events_UIAProfile_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Module__gateObj__C, ".const:ti_uia_events_UIAProfile_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Module__gateObj ti_uia_events_UIAProfile_Module__gateObj__C = ((CT__ti_uia_events_UIAProfile_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Module__gatePrms__C, ".const:ti_uia_events_UIAProfile_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Module__gatePrms ti_uia_events_UIAProfile_Module__gatePrms__C = ((CT__ti_uia_events_UIAProfile_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Module__id__C, ".const:ti_uia_events_UIAProfile_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Module__id ti_uia_events_UIAProfile_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Module__loggerDefined__C, ".const:ti_uia_events_UIAProfile_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Module__loggerDefined ti_uia_events_UIAProfile_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Module__loggerObj__C, ".const:ti_uia_events_UIAProfile_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Module__loggerObj ti_uia_events_UIAProfile_Module__loggerObj__C = ((CT__ti_uia_events_UIAProfile_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Module__loggerFxn0__C, ".const:ti_uia_events_UIAProfile_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Module__loggerFxn0 ti_uia_events_UIAProfile_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAProfile_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Module__loggerFxn1__C, ".const:ti_uia_events_UIAProfile_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Module__loggerFxn1 ti_uia_events_UIAProfile_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAProfile_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Module__loggerFxn2__C, ".const:ti_uia_events_UIAProfile_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Module__loggerFxn2 ti_uia_events_UIAProfile_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAProfile_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Module__loggerFxn4__C, ".const:ti_uia_events_UIAProfile_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Module__loggerFxn4 ti_uia_events_UIAProfile_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAProfile_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Module__loggerFxn8__C, ".const:ti_uia_events_UIAProfile_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Module__loggerFxn8 ti_uia_events_UIAProfile_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAProfile_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAProfile_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Module__startupDoneFxn ti_uia_events_UIAProfile_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAProfile_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Object__count__C, ".const:ti_uia_events_UIAProfile_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Object__count ti_uia_events_UIAProfile_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Object__heap__C, ".const:ti_uia_events_UIAProfile_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Object__heap ti_uia_events_UIAProfile_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Object__sizeof__C, ".const:ti_uia_events_UIAProfile_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Object__sizeof ti_uia_events_UIAProfile_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_Object__table__C, ".const:ti_uia_events_UIAProfile_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAProfile_Object__table ti_uia_events_UIAProfile_Object__table__C = 0;

/* enterFunctionAdrs__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_enterFunctionAdrs__C, ".const:ti_uia_events_UIAProfile_enterFunctionAdrs__C");
__FAR__ const CT__ti_uia_events_UIAProfile_enterFunctionAdrs ti_uia_events_UIAProfile_enterFunctionAdrs__C = (((xdc_runtime_Log_Event)6350) << 16 | 1);

/* exitFunctionAdrs__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_exitFunctionAdrs__C, ".const:ti_uia_events_UIAProfile_exitFunctionAdrs__C");
__FAR__ const CT__ti_uia_events_UIAProfile_exitFunctionAdrs ti_uia_events_UIAProfile_exitFunctionAdrs__C = (((xdc_runtime_Log_Event)6396) << 16 | 2);

/* enterFunctionName__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_enterFunctionName__C, ".const:ti_uia_events_UIAProfile_enterFunctionName__C");
__FAR__ const CT__ti_uia_events_UIAProfile_enterFunctionName ti_uia_events_UIAProfile_enterFunctionName__C = (((xdc_runtime_Log_Event)6441) << 16 | 1);

/* exitFunctionName__C */
#pragma DATA_SECTION(ti_uia_events_UIAProfile_exitFunctionName__C, ".const:ti_uia_events_UIAProfile_exitFunctionName__C");
__FAR__ const CT__ti_uia_events_UIAProfile_exitFunctionName ti_uia_events_UIAProfile_exitFunctionName__C = (((xdc_runtime_Log_Event)6485) << 16 | 2);


/*
 * ======== ti.uia.loggers.LoggerStopMode INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, ".const:ti_uia_loggers_LoggerStopMode_Object__PARAMS__C");
__FAR__ const ti_uia_loggers_LoggerStopMode_Params ti_uia_loggers_LoggerStopMode_Object__PARAMS__C = {
    sizeof (ti_uia_loggers_LoggerStopMode_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C.__iprms, /* instance */
    ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
    ti_uia_runtime_IUIATransfer_Priority_STANDARD,  /* priority */
    (xdc_Int16)0x1,  /* instanceId */
    (xdc_SizeT)0x0,  /* transferBufSize */
    (xdc_SizeT)0x200,  /* maxEventSize */
    (xdc_SizeT)0x578,  /* bufSize */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[1024];

/* Module__root__V */
ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V = {
    {&ti_uia_loggers_LoggerStopMode_Module__root__V.link,  /* link.next */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3] = {
    {/* instance#0 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x1,  /* instanceId */
        (xdc_UInt32)0x200,  /* bufSize */
        ((xdc_UInt32*)0),  /* buffer */
        ((xdc_UInt32*)0),  /* write */
        ((xdc_UInt32*)0),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A),  /* packetArray */
    },
    {/* instance#1 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x2,  /* instanceId */
        (xdc_UInt32)0x400,  /* bufSize */
        ((xdc_UInt32*)0),  /* buffer */
        ((xdc_UInt32*)0),  /* write */
        ((xdc_UInt32*)0),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A),  /* packetArray */
    },
    {/* instance#2 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x3,  /* instanceId */
        (xdc_UInt32)0x400,  /* bufSize */
        ((xdc_UInt32*)0),  /* buffer */
        ((xdc_UInt32*)0),  /* write */
        ((xdc_UInt32*)0),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A),  /* packetArray */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_uia_loggers_LoggerStopMode_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V __attribute__ ((section(".data_ti_uia_loggers_LoggerStopMode_Module__state__V")));
#endif
#endif
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V = {
    1,  /* enabled */
    (xdc_Bits16)0x0,  /* level1 */
    (xdc_Bits16)0x0,  /* level2 */
    (xdc_Bits16)0x0,  /* level3 */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsEnabled ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsIncluded ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsMask__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsMask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask ti_uia_loggers_LoggerStopMode_Module__diagsMask__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gateObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gateObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gateObj ti_uia_loggers_LoggerStopMode_Module__gateObj__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gatePrms__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gatePrms__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms ti_uia_loggers_LoggerStopMode_Module__gatePrms__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__id__C, ".const:ti_uia_loggers_LoggerStopMode_Module__id__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__id ti_uia_loggers_LoggerStopMode_Module__id__C = (xdc_Bits16)0x803d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerDefined ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj ti_uia_loggers_LoggerStopMode_Module__loggerObj__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn__C, ".const:ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__count__C, ".const:ti_uia_loggers_LoggerStopMode_Object__count__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__count ti_uia_loggers_LoggerStopMode_Object__count__C = 3;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__heap__C, ".const:ti_uia_loggers_LoggerStopMode_Object__heap__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__heap ti_uia_loggers_LoggerStopMode_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__sizeof__C, ".const:ti_uia_loggers_LoggerStopMode_Object__sizeof__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__sizeof ti_uia_loggers_LoggerStopMode_Object__sizeof__C = sizeof(ti_uia_loggers_LoggerStopMode_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__table__C, ".const:ti_uia_loggers_LoggerStopMode_Object__table__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__table ti_uia_loggers_LoggerStopMode_Object__table__C = ti_uia_loggers_LoggerStopMode_Object__table__V;

/* filterByLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_filterByLevel__C, ".const:ti_uia_loggers_LoggerStopMode_filterByLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_filterByLevel ti_uia_loggers_LoggerStopMode_filterByLevel__C = 0;

/* isTimestampEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_isTimestampEnabled ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C = 1;

/* supportLoggerDisable__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C, ".const:ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_supportLoggerDisable ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C = 0;

/* level1Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level1Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level1Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level1Mask ti_uia_loggers_LoggerStopMode_level1Mask__C = (xdc_Bits16)0x0;

/* level2Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level2Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level2Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level2Mask ti_uia_loggers_LoggerStopMode_level2Mask__C = (xdc_Bits16)0x0;

/* level3Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level3Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level3Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level3Mask ti_uia_loggers_LoggerStopMode_level3Mask__C = (xdc_Bits16)0x0;

/* level4Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level4Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level4Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level4Mask ti_uia_loggers_LoggerStopMode_level4Mask__C = (xdc_Bits16)0xff87;

/* L_test__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_L_test__C, ".const:ti_uia_loggers_LoggerStopMode_L_test__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_L_test ti_uia_loggers_LoggerStopMode_L_test__C = (((xdc_runtime_Log_Event)7561) << 16 | 256);

/* E_badLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_E_badLevel__C, ".const:ti_uia_loggers_LoggerStopMode_E_badLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_E_badLevel ti_uia_loggers_LoggerStopMode_E_badLevel__C = (((xdc_runtime_Error_Id)3877) << 16 | 0);

/* numCores__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_numCores__C, ".const:ti_uia_loggers_LoggerStopMode_numCores__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_numCores ti_uia_loggers_LoggerStopMode_numCores__C = (xdc_Int)0x1;


/*
 * ======== ti.uia.runtime.EventHdr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsEnabled__C, ".const:ti_uia_runtime_EventHdr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsEnabled ti_uia_runtime_EventHdr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsIncluded__C, ".const:ti_uia_runtime_EventHdr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsIncluded ti_uia_runtime_EventHdr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsMask__C, ".const:ti_uia_runtime_EventHdr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsMask ti_uia_runtime_EventHdr_Module__diagsMask__C = ((CT__ti_uia_runtime_EventHdr_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gateObj__C, ".const:ti_uia_runtime_EventHdr_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gateObj ti_uia_runtime_EventHdr_Module__gateObj__C = ((CT__ti_uia_runtime_EventHdr_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gatePrms__C, ".const:ti_uia_runtime_EventHdr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gatePrms ti_uia_runtime_EventHdr_Module__gatePrms__C = ((CT__ti_uia_runtime_EventHdr_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__id__C, ".const:ti_uia_runtime_EventHdr_Module__id__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__id ti_uia_runtime_EventHdr_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerDefined__C, ".const:ti_uia_runtime_EventHdr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerDefined ti_uia_runtime_EventHdr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerObj__C, ".const:ti_uia_runtime_EventHdr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerObj ti_uia_runtime_EventHdr_Module__loggerObj__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn0__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn0 ti_uia_runtime_EventHdr_Module__loggerFxn0__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn1__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn1 ti_uia_runtime_EventHdr_Module__loggerFxn1__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn2__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn2 ti_uia_runtime_EventHdr_Module__loggerFxn2__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn4__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn4 ti_uia_runtime_EventHdr_Module__loggerFxn4__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn8__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn8 ti_uia_runtime_EventHdr_Module__loggerFxn8__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__startupDoneFxn__C, ".const:ti_uia_runtime_EventHdr_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__startupDoneFxn ti_uia_runtime_EventHdr_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_EventHdr_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__count__C, ".const:ti_uia_runtime_EventHdr_Object__count__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__count ti_uia_runtime_EventHdr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__heap__C, ".const:ti_uia_runtime_EventHdr_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__heap ti_uia_runtime_EventHdr_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__sizeof__C, ".const:ti_uia_runtime_EventHdr_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__sizeof ti_uia_runtime_EventHdr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__table__C, ".const:ti_uia_runtime_EventHdr_Object__table__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__table ti_uia_runtime_EventHdr_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.QueueDescriptor INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_uia_runtime_QueueDescriptor_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V __attribute__ ((section(".data_ti_uia_runtime_QueueDescriptor_Module__state__V")));
#endif
#endif
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V = {
    ((xdc_Ptr)0),  /* mPtrToFirstDescriptor */
    (xdc_UInt)0x0,  /* mUpdateCount */
    (xdc_UInt32)0x5555,  /* is5555ifInitialized */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsEnabled ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsIncluded ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsMask__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask ti_uia_runtime_QueueDescriptor_Module__diagsMask__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gateObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gateObj ti_uia_runtime_QueueDescriptor_Module__gateObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gatePrms__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms ti_uia_runtime_QueueDescriptor_Module__gatePrms__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__id__C, ".const:ti_uia_runtime_QueueDescriptor_Module__id__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__id ti_uia_runtime_QueueDescriptor_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerDefined ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj ti_uia_runtime_QueueDescriptor_Module__loggerObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0 ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1 ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2 ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4 ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8 ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C, ".const:ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__count__C, ".const:ti_uia_runtime_QueueDescriptor_Object__count__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__count ti_uia_runtime_QueueDescriptor_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__heap__C, ".const:ti_uia_runtime_QueueDescriptor_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__heap ti_uia_runtime_QueueDescriptor_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__sizeof__C, ".const:ti_uia_runtime_QueueDescriptor_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__sizeof ti_uia_runtime_QueueDescriptor_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__table__C, ".const:ti_uia_runtime_QueueDescriptor_Object__table__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__table ti_uia_runtime_QueueDescriptor_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.UIAMetaData INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsEnabled ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsIncluded ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsMask__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask ti_uia_runtime_UIAMetaData_Module__diagsMask__C = ((CT__ti_uia_runtime_UIAMetaData_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gateObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gateObj ti_uia_runtime_UIAMetaData_Module__gateObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gatePrms__C, ".const:ti_uia_runtime_UIAMetaData_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms ti_uia_runtime_UIAMetaData_Module__gatePrms__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__id__C, ".const:ti_uia_runtime_UIAMetaData_Module__id__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__id ti_uia_runtime_UIAMetaData_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerDefined__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerDefined ti_uia_runtime_UIAMetaData_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj ti_uia_runtime_UIAMetaData_Module__loggerObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0 ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1 ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2 ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4 ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8 ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C, ".const:ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__count__C, ".const:ti_uia_runtime_UIAMetaData_Object__count__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__count ti_uia_runtime_UIAMetaData_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__heap__C, ".const:ti_uia_runtime_UIAMetaData_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__heap ti_uia_runtime_UIAMetaData_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__sizeof__C, ".const:ti_uia_runtime_UIAMetaData_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__sizeof ti_uia_runtime_UIAMetaData_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__table__C, ".const:ti_uia_runtime_UIAMetaData_Object__table__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__table ti_uia_runtime_UIAMetaData_Object__table__C = 0;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3809) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 1;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)((void*)&xdc_runtime_Diags_dictElems[0]));


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((CT__xdc_runtime_Error_policyFxn)((xdc_Fxn)xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3831) << 16 | 0);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3835) << 16 | 0);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3869) << 16 | 0);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x2;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)5096) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)5120) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)5141) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)5160) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)5177) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)5191) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)5207) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)5214) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)5225) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)5235) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)5254) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V = {
    65408,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x13;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0xff93;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)((void*)&xdc_runtime_Main_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [2] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_TimestampProvider_startTimer__E)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_TimestampProvider_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_uia_loggers_LoggerStopMode_Module_startup__E)),  /* [9] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10] = {
    1,  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    1,  /* [7] */
    0,  /* [8] */
    1,  /* [9] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {3, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {1, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysStd INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__diagsEnabled__C, ".const:xdc_runtime_SysStd_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__diagsEnabled xdc_runtime_SysStd_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__diagsIncluded__C, ".const:xdc_runtime_SysStd_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__diagsIncluded xdc_runtime_SysStd_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__diagsMask__C, ".const:xdc_runtime_SysStd_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__diagsMask xdc_runtime_SysStd_Module__diagsMask__C = ((CT__xdc_runtime_SysStd_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__gateObj__C, ".const:xdc_runtime_SysStd_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__gateObj xdc_runtime_SysStd_Module__gateObj__C = ((CT__xdc_runtime_SysStd_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__gatePrms__C, ".const:xdc_runtime_SysStd_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__gatePrms xdc_runtime_SysStd_Module__gatePrms__C = ((CT__xdc_runtime_SysStd_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__id__C, ".const:xdc_runtime_SysStd_Module__id__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__id xdc_runtime_SysStd_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerDefined__C, ".const:xdc_runtime_SysStd_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerDefined xdc_runtime_SysStd_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerObj__C, ".const:xdc_runtime_SysStd_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerObj xdc_runtime_SysStd_Module__loggerObj__C = ((CT__xdc_runtime_SysStd_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn0__C, ".const:xdc_runtime_SysStd_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn0 xdc_runtime_SysStd_Module__loggerFxn0__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn1__C, ".const:xdc_runtime_SysStd_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn1 xdc_runtime_SysStd_Module__loggerFxn1__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn2__C, ".const:xdc_runtime_SysStd_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn2 xdc_runtime_SysStd_Module__loggerFxn2__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn4__C, ".const:xdc_runtime_SysStd_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn4 xdc_runtime_SysStd_Module__loggerFxn4__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn8__C, ".const:xdc_runtime_SysStd_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn8 xdc_runtime_SysStd_Module__loggerFxn8__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__startupDoneFxn__C, ".const:xdc_runtime_SysStd_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_SysStd_Module__startupDoneFxn xdc_runtime_SysStd_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysStd_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__count__C, ".const:xdc_runtime_SysStd_Object__count__C");
__FAR__ const CT__xdc_runtime_SysStd_Object__count xdc_runtime_SysStd_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__heap__C, ".const:xdc_runtime_SysStd_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysStd_Object__heap xdc_runtime_SysStd_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__sizeof__C, ".const:xdc_runtime_SysStd_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysStd_Object__sizeof xdc_runtime_SysStd_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__table__C, ".const:xdc_runtime_SysStd_Object__table__C");
__FAR__ const CT__xdc_runtime_SysStd_Object__table xdc_runtime_SysStd_Object__table__C = 0;


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x2;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((CT__xdc_runtime_System_abortFxn)((xdc_Fxn)xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((CT__xdc_runtime_System_exitFxn)((xdc_Fxn)xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[8574] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x69,  /* [402] */
    (xdc_Char)0x70,  /* [403] */
    (xdc_Char)0x63,  /* [404] */
    (xdc_Char)0x46,  /* [405] */
    (xdc_Char)0x61,  /* [406] */
    (xdc_Char)0x69,  /* [407] */
    (xdc_Char)0x6c,  /* [408] */
    (xdc_Char)0x65,  /* [409] */
    (xdc_Char)0x64,  /* [410] */
    (xdc_Char)0x3a,  /* [411] */
    (xdc_Char)0x20,  /* [412] */
    (xdc_Char)0x55,  /* [413] */
    (xdc_Char)0x6e,  /* [414] */
    (xdc_Char)0x65,  /* [415] */
    (xdc_Char)0x78,  /* [416] */
    (xdc_Char)0x70,  /* [417] */
    (xdc_Char)0x65,  /* [418] */
    (xdc_Char)0x63,  /* [419] */
    (xdc_Char)0x74,  /* [420] */
    (xdc_Char)0x65,  /* [421] */
    (xdc_Char)0x64,  /* [422] */
    (xdc_Char)0x20,  /* [423] */
    (xdc_Char)0x4d,  /* [424] */
    (xdc_Char)0x65,  /* [425] */
    (xdc_Char)0x73,  /* [426] */
    (xdc_Char)0x73,  /* [427] */
    (xdc_Char)0x61,  /* [428] */
    (xdc_Char)0x67,  /* [429] */
    (xdc_Char)0x65,  /* [430] */
    (xdc_Char)0x51,  /* [431] */
    (xdc_Char)0x20,  /* [432] */
    (xdc_Char)0x66,  /* [433] */
    (xdc_Char)0x61,  /* [434] */
    (xdc_Char)0x69,  /* [435] */
    (xdc_Char)0x6c,  /* [436] */
    (xdc_Char)0x65,  /* [437] */
    (xdc_Char)0x64,  /* [438] */
    (xdc_Char)0x0,  /* [439] */
    (xdc_Char)0x41,  /* [440] */
    (xdc_Char)0x5f,  /* [441] */
    (xdc_Char)0x69,  /* [442] */
    (xdc_Char)0x6e,  /* [443] */
    (xdc_Char)0x76,  /* [444] */
    (xdc_Char)0x61,  /* [445] */
    (xdc_Char)0x6c,  /* [446] */
    (xdc_Char)0x69,  /* [447] */
    (xdc_Char)0x64,  /* [448] */
    (xdc_Char)0x48,  /* [449] */
    (xdc_Char)0x64,  /* [450] */
    (xdc_Char)0x72,  /* [451] */
    (xdc_Char)0x54,  /* [452] */
    (xdc_Char)0x79,  /* [453] */
    (xdc_Char)0x70,  /* [454] */
    (xdc_Char)0x65,  /* [455] */
    (xdc_Char)0x3a,  /* [456] */
    (xdc_Char)0x20,  /* [457] */
    (xdc_Char)0x49,  /* [458] */
    (xdc_Char)0x6e,  /* [459] */
    (xdc_Char)0x76,  /* [460] */
    (xdc_Char)0x61,  /* [461] */
    (xdc_Char)0x6c,  /* [462] */
    (xdc_Char)0x69,  /* [463] */
    (xdc_Char)0x64,  /* [464] */
    (xdc_Char)0x20,  /* [465] */
    (xdc_Char)0x48,  /* [466] */
    (xdc_Char)0x64,  /* [467] */
    (xdc_Char)0x72,  /* [468] */
    (xdc_Char)0x54,  /* [469] */
    (xdc_Char)0x79,  /* [470] */
    (xdc_Char)0x70,  /* [471] */
    (xdc_Char)0x65,  /* [472] */
    (xdc_Char)0x20,  /* [473] */
    (xdc_Char)0x73,  /* [474] */
    (xdc_Char)0x70,  /* [475] */
    (xdc_Char)0x65,  /* [476] */
    (xdc_Char)0x63,  /* [477] */
    (xdc_Char)0x69,  /* [478] */
    (xdc_Char)0x66,  /* [479] */
    (xdc_Char)0x69,  /* [480] */
    (xdc_Char)0x65,  /* [481] */
    (xdc_Char)0x64,  /* [482] */
    (xdc_Char)0x0,  /* [483] */
    (xdc_Char)0x41,  /* [484] */
    (xdc_Char)0x5f,  /* [485] */
    (xdc_Char)0x69,  /* [486] */
    (xdc_Char)0x6e,  /* [487] */
    (xdc_Char)0x76,  /* [488] */
    (xdc_Char)0x61,  /* [489] */
    (xdc_Char)0x6c,  /* [490] */
    (xdc_Char)0x69,  /* [491] */
    (xdc_Char)0x64,  /* [492] */
    (xdc_Char)0x53,  /* [493] */
    (xdc_Char)0x65,  /* [494] */
    (xdc_Char)0x72,  /* [495] */
    (xdc_Char)0x76,  /* [496] */
    (xdc_Char)0x69,  /* [497] */
    (xdc_Char)0x63,  /* [498] */
    (xdc_Char)0x65,  /* [499] */
    (xdc_Char)0x49,  /* [500] */
    (xdc_Char)0x64,  /* [501] */
    (xdc_Char)0x3a,  /* [502] */
    (xdc_Char)0x20,  /* [503] */
    (xdc_Char)0x53,  /* [504] */
    (xdc_Char)0x65,  /* [505] */
    (xdc_Char)0x72,  /* [506] */
    (xdc_Char)0x76,  /* [507] */
    (xdc_Char)0x69,  /* [508] */
    (xdc_Char)0x63,  /* [509] */
    (xdc_Char)0x65,  /* [510] */
    (xdc_Char)0x49,  /* [511] */
    (xdc_Char)0x64,  /* [512] */
    (xdc_Char)0x20,  /* [513] */
    (xdc_Char)0x6f,  /* [514] */
    (xdc_Char)0x75,  /* [515] */
    (xdc_Char)0x74,  /* [516] */
    (xdc_Char)0x20,  /* [517] */
    (xdc_Char)0x6f,  /* [518] */
    (xdc_Char)0x66,  /* [519] */
    (xdc_Char)0x20,  /* [520] */
    (xdc_Char)0x72,  /* [521] */
    (xdc_Char)0x61,  /* [522] */
    (xdc_Char)0x6e,  /* [523] */
    (xdc_Char)0x67,  /* [524] */
    (xdc_Char)0x65,  /* [525] */
    (xdc_Char)0x0,  /* [526] */
    (xdc_Char)0x41,  /* [527] */
    (xdc_Char)0x5f,  /* [528] */
    (xdc_Char)0x69,  /* [529] */
    (xdc_Char)0x6e,  /* [530] */
    (xdc_Char)0x76,  /* [531] */
    (xdc_Char)0x61,  /* [532] */
    (xdc_Char)0x6c,  /* [533] */
    (xdc_Char)0x69,  /* [534] */
    (xdc_Char)0x64,  /* [535] */
    (xdc_Char)0x50,  /* [536] */
    (xdc_Char)0x72,  /* [537] */
    (xdc_Char)0x6f,  /* [538] */
    (xdc_Char)0x63,  /* [539] */
    (xdc_Char)0x65,  /* [540] */
    (xdc_Char)0x73,  /* [541] */
    (xdc_Char)0x73,  /* [542] */
    (xdc_Char)0x43,  /* [543] */
    (xdc_Char)0x61,  /* [544] */
    (xdc_Char)0x6c,  /* [545] */
    (xdc_Char)0x6c,  /* [546] */
    (xdc_Char)0x62,  /* [547] */
    (xdc_Char)0x61,  /* [548] */
    (xdc_Char)0x63,  /* [549] */
    (xdc_Char)0x6b,  /* [550] */
    (xdc_Char)0x46,  /* [551] */
    (xdc_Char)0x78,  /* [552] */
    (xdc_Char)0x6e,  /* [553] */
    (xdc_Char)0x3a,  /* [554] */
    (xdc_Char)0x20,  /* [555] */
    (xdc_Char)0x43,  /* [556] */
    (xdc_Char)0x61,  /* [557] */
    (xdc_Char)0x6c,  /* [558] */
    (xdc_Char)0x6c,  /* [559] */
    (xdc_Char)0x62,  /* [560] */
    (xdc_Char)0x61,  /* [561] */
    (xdc_Char)0x63,  /* [562] */
    (xdc_Char)0x6b,  /* [563] */
    (xdc_Char)0x20,  /* [564] */
    (xdc_Char)0x63,  /* [565] */
    (xdc_Char)0x61,  /* [566] */
    (xdc_Char)0x6e,  /* [567] */
    (xdc_Char)0x6e,  /* [568] */
    (xdc_Char)0x6f,  /* [569] */
    (xdc_Char)0x74,  /* [570] */
    (xdc_Char)0x20,  /* [571] */
    (xdc_Char)0x62,  /* [572] */
    (xdc_Char)0x65,  /* [573] */
    (xdc_Char)0x20,  /* [574] */
    (xdc_Char)0x4e,  /* [575] */
    (xdc_Char)0x55,  /* [576] */
    (xdc_Char)0x4c,  /* [577] */
    (xdc_Char)0x4c,  /* [578] */
    (xdc_Char)0x0,  /* [579] */
    (xdc_Char)0x41,  /* [580] */
    (xdc_Char)0x5f,  /* [581] */
    (xdc_Char)0x6e,  /* [582] */
    (xdc_Char)0x75,  /* [583] */
    (xdc_Char)0x6c,  /* [584] */
    (xdc_Char)0x6c,  /* [585] */
    (xdc_Char)0x50,  /* [586] */
    (xdc_Char)0x6f,  /* [587] */
    (xdc_Char)0x69,  /* [588] */
    (xdc_Char)0x6e,  /* [589] */
    (xdc_Char)0x74,  /* [590] */
    (xdc_Char)0x65,  /* [591] */
    (xdc_Char)0x72,  /* [592] */
    (xdc_Char)0x3a,  /* [593] */
    (xdc_Char)0x20,  /* [594] */
    (xdc_Char)0x50,  /* [595] */
    (xdc_Char)0x6f,  /* [596] */
    (xdc_Char)0x69,  /* [597] */
    (xdc_Char)0x6e,  /* [598] */
    (xdc_Char)0x74,  /* [599] */
    (xdc_Char)0x65,  /* [600] */
    (xdc_Char)0x72,  /* [601] */
    (xdc_Char)0x20,  /* [602] */
    (xdc_Char)0x69,  /* [603] */
    (xdc_Char)0x73,  /* [604] */
    (xdc_Char)0x20,  /* [605] */
    (xdc_Char)0x6e,  /* [606] */
    (xdc_Char)0x75,  /* [607] */
    (xdc_Char)0x6c,  /* [608] */
    (xdc_Char)0x6c,  /* [609] */
    (xdc_Char)0x0,  /* [610] */
    (xdc_Char)0x41,  /* [611] */
    (xdc_Char)0x5f,  /* [612] */
    (xdc_Char)0x69,  /* [613] */
    (xdc_Char)0x6e,  /* [614] */
    (xdc_Char)0x76,  /* [615] */
    (xdc_Char)0x61,  /* [616] */
    (xdc_Char)0x6c,  /* [617] */
    (xdc_Char)0x69,  /* [618] */
    (xdc_Char)0x64,  /* [619] */
    (xdc_Char)0x52,  /* [620] */
    (xdc_Char)0x65,  /* [621] */
    (xdc_Char)0x67,  /* [622] */
    (xdc_Char)0x69,  /* [623] */
    (xdc_Char)0x6f,  /* [624] */
    (xdc_Char)0x6e,  /* [625] */
    (xdc_Char)0x49,  /* [626] */
    (xdc_Char)0x64,  /* [627] */
    (xdc_Char)0x3a,  /* [628] */
    (xdc_Char)0x20,  /* [629] */
    (xdc_Char)0x4d,  /* [630] */
    (xdc_Char)0x50,  /* [631] */
    (xdc_Char)0x55,  /* [632] */
    (xdc_Char)0x20,  /* [633] */
    (xdc_Char)0x52,  /* [634] */
    (xdc_Char)0x65,  /* [635] */
    (xdc_Char)0x67,  /* [636] */
    (xdc_Char)0x69,  /* [637] */
    (xdc_Char)0x6f,  /* [638] */
    (xdc_Char)0x6e,  /* [639] */
    (xdc_Char)0x20,  /* [640] */
    (xdc_Char)0x6e,  /* [641] */
    (xdc_Char)0x75,  /* [642] */
    (xdc_Char)0x6d,  /* [643] */
    (xdc_Char)0x62,  /* [644] */
    (xdc_Char)0x65,  /* [645] */
    (xdc_Char)0x72,  /* [646] */
    (xdc_Char)0x20,  /* [647] */
    (xdc_Char)0x70,  /* [648] */
    (xdc_Char)0x61,  /* [649] */
    (xdc_Char)0x73,  /* [650] */
    (xdc_Char)0x73,  /* [651] */
    (xdc_Char)0x65,  /* [652] */
    (xdc_Char)0x64,  /* [653] */
    (xdc_Char)0x20,  /* [654] */
    (xdc_Char)0x69,  /* [655] */
    (xdc_Char)0x73,  /* [656] */
    (xdc_Char)0x20,  /* [657] */
    (xdc_Char)0x69,  /* [658] */
    (xdc_Char)0x6e,  /* [659] */
    (xdc_Char)0x76,  /* [660] */
    (xdc_Char)0x61,  /* [661] */
    (xdc_Char)0x6c,  /* [662] */
    (xdc_Char)0x69,  /* [663] */
    (xdc_Char)0x64,  /* [664] */
    (xdc_Char)0x2e,  /* [665] */
    (xdc_Char)0x0,  /* [666] */
    (xdc_Char)0x41,  /* [667] */
    (xdc_Char)0x5f,  /* [668] */
    (xdc_Char)0x75,  /* [669] */
    (xdc_Char)0x6e,  /* [670] */
    (xdc_Char)0x61,  /* [671] */
    (xdc_Char)0x6c,  /* [672] */
    (xdc_Char)0x69,  /* [673] */
    (xdc_Char)0x67,  /* [674] */
    (xdc_Char)0x6e,  /* [675] */
    (xdc_Char)0x65,  /* [676] */
    (xdc_Char)0x64,  /* [677] */
    (xdc_Char)0x42,  /* [678] */
    (xdc_Char)0x61,  /* [679] */
    (xdc_Char)0x73,  /* [680] */
    (xdc_Char)0x65,  /* [681] */
    (xdc_Char)0x41,  /* [682] */
    (xdc_Char)0x64,  /* [683] */
    (xdc_Char)0x64,  /* [684] */
    (xdc_Char)0x72,  /* [685] */
    (xdc_Char)0x3a,  /* [686] */
    (xdc_Char)0x20,  /* [687] */
    (xdc_Char)0x4d,  /* [688] */
    (xdc_Char)0x50,  /* [689] */
    (xdc_Char)0x55,  /* [690] */
    (xdc_Char)0x20,  /* [691] */
    (xdc_Char)0x72,  /* [692] */
    (xdc_Char)0x65,  /* [693] */
    (xdc_Char)0x67,  /* [694] */
    (xdc_Char)0x69,  /* [695] */
    (xdc_Char)0x6f,  /* [696] */
    (xdc_Char)0x6e,  /* [697] */
    (xdc_Char)0x20,  /* [698] */
    (xdc_Char)0x62,  /* [699] */
    (xdc_Char)0x61,  /* [700] */
    (xdc_Char)0x73,  /* [701] */
    (xdc_Char)0x65,  /* [702] */
    (xdc_Char)0x20,  /* [703] */
    (xdc_Char)0x61,  /* [704] */
    (xdc_Char)0x64,  /* [705] */
    (xdc_Char)0x64,  /* [706] */
    (xdc_Char)0x72,  /* [707] */
    (xdc_Char)0x65,  /* [708] */
    (xdc_Char)0x73,  /* [709] */
    (xdc_Char)0x73,  /* [710] */
    (xdc_Char)0x20,  /* [711] */
    (xdc_Char)0x6e,  /* [712] */
    (xdc_Char)0x6f,  /* [713] */
    (xdc_Char)0x74,  /* [714] */
    (xdc_Char)0x20,  /* [715] */
    (xdc_Char)0x61,  /* [716] */
    (xdc_Char)0x6c,  /* [717] */
    (xdc_Char)0x69,  /* [718] */
    (xdc_Char)0x67,  /* [719] */
    (xdc_Char)0x6e,  /* [720] */
    (xdc_Char)0x65,  /* [721] */
    (xdc_Char)0x64,  /* [722] */
    (xdc_Char)0x20,  /* [723] */
    (xdc_Char)0x74,  /* [724] */
    (xdc_Char)0x6f,  /* [725] */
    (xdc_Char)0x20,  /* [726] */
    (xdc_Char)0x73,  /* [727] */
    (xdc_Char)0x69,  /* [728] */
    (xdc_Char)0x7a,  /* [729] */
    (xdc_Char)0x65,  /* [730] */
    (xdc_Char)0x2e,  /* [731] */
    (xdc_Char)0x0,  /* [732] */
    (xdc_Char)0x41,  /* [733] */
    (xdc_Char)0x5f,  /* [734] */
    (xdc_Char)0x63,  /* [735] */
    (xdc_Char)0x6c,  /* [736] */
    (xdc_Char)0x6f,  /* [737] */
    (xdc_Char)0x63,  /* [738] */
    (xdc_Char)0x6b,  /* [739] */
    (xdc_Char)0x44,  /* [740] */
    (xdc_Char)0x69,  /* [741] */
    (xdc_Char)0x73,  /* [742] */
    (xdc_Char)0x61,  /* [743] */
    (xdc_Char)0x62,  /* [744] */
    (xdc_Char)0x6c,  /* [745] */
    (xdc_Char)0x65,  /* [746] */
    (xdc_Char)0x64,  /* [747] */
    (xdc_Char)0x3a,  /* [748] */
    (xdc_Char)0x20,  /* [749] */
    (xdc_Char)0x43,  /* [750] */
    (xdc_Char)0x61,  /* [751] */
    (xdc_Char)0x6e,  /* [752] */
    (xdc_Char)0x6e,  /* [753] */
    (xdc_Char)0x6f,  /* [754] */
    (xdc_Char)0x74,  /* [755] */
    (xdc_Char)0x20,  /* [756] */
    (xdc_Char)0x63,  /* [757] */
    (xdc_Char)0x72,  /* [758] */
    (xdc_Char)0x65,  /* [759] */
    (xdc_Char)0x61,  /* [760] */
    (xdc_Char)0x74,  /* [761] */
    (xdc_Char)0x65,  /* [762] */
    (xdc_Char)0x20,  /* [763] */
    (xdc_Char)0x61,  /* [764] */
    (xdc_Char)0x20,  /* [765] */
    (xdc_Char)0x63,  /* [766] */
    (xdc_Char)0x6c,  /* [767] */
    (xdc_Char)0x6f,  /* [768] */
    (xdc_Char)0x63,  /* [769] */
    (xdc_Char)0x6b,  /* [770] */
    (xdc_Char)0x20,  /* [771] */
    (xdc_Char)0x69,  /* [772] */
    (xdc_Char)0x6e,  /* [773] */
    (xdc_Char)0x73,  /* [774] */
    (xdc_Char)0x74,  /* [775] */
    (xdc_Char)0x61,  /* [776] */
    (xdc_Char)0x6e,  /* [777] */
    (xdc_Char)0x63,  /* [778] */
    (xdc_Char)0x65,  /* [779] */
    (xdc_Char)0x20,  /* [780] */
    (xdc_Char)0x77,  /* [781] */
    (xdc_Char)0x68,  /* [782] */
    (xdc_Char)0x65,  /* [783] */
    (xdc_Char)0x6e,  /* [784] */
    (xdc_Char)0x20,  /* [785] */
    (xdc_Char)0x42,  /* [786] */
    (xdc_Char)0x49,  /* [787] */
    (xdc_Char)0x4f,  /* [788] */
    (xdc_Char)0x53,  /* [789] */
    (xdc_Char)0x2e,  /* [790] */
    (xdc_Char)0x63,  /* [791] */
    (xdc_Char)0x6c,  /* [792] */
    (xdc_Char)0x6f,  /* [793] */
    (xdc_Char)0x63,  /* [794] */
    (xdc_Char)0x6b,  /* [795] */
    (xdc_Char)0x45,  /* [796] */
    (xdc_Char)0x6e,  /* [797] */
    (xdc_Char)0x61,  /* [798] */
    (xdc_Char)0x62,  /* [799] */
    (xdc_Char)0x6c,  /* [800] */
    (xdc_Char)0x65,  /* [801] */
    (xdc_Char)0x64,  /* [802] */
    (xdc_Char)0x20,  /* [803] */
    (xdc_Char)0x69,  /* [804] */
    (xdc_Char)0x73,  /* [805] */
    (xdc_Char)0x20,  /* [806] */
    (xdc_Char)0x66,  /* [807] */
    (xdc_Char)0x61,  /* [808] */
    (xdc_Char)0x6c,  /* [809] */
    (xdc_Char)0x73,  /* [810] */
    (xdc_Char)0x65,  /* [811] */
    (xdc_Char)0x2e,  /* [812] */
    (xdc_Char)0x0,  /* [813] */
    (xdc_Char)0x41,  /* [814] */
    (xdc_Char)0x5f,  /* [815] */
    (xdc_Char)0x62,  /* [816] */
    (xdc_Char)0x61,  /* [817] */
    (xdc_Char)0x64,  /* [818] */
    (xdc_Char)0x54,  /* [819] */
    (xdc_Char)0x68,  /* [820] */
    (xdc_Char)0x72,  /* [821] */
    (xdc_Char)0x65,  /* [822] */
    (xdc_Char)0x61,  /* [823] */
    (xdc_Char)0x64,  /* [824] */
    (xdc_Char)0x54,  /* [825] */
    (xdc_Char)0x79,  /* [826] */
    (xdc_Char)0x70,  /* [827] */
    (xdc_Char)0x65,  /* [828] */
    (xdc_Char)0x3a,  /* [829] */
    (xdc_Char)0x20,  /* [830] */
    (xdc_Char)0x43,  /* [831] */
    (xdc_Char)0x61,  /* [832] */
    (xdc_Char)0x6e,  /* [833] */
    (xdc_Char)0x6e,  /* [834] */
    (xdc_Char)0x6f,  /* [835] */
    (xdc_Char)0x74,  /* [836] */
    (xdc_Char)0x20,  /* [837] */
    (xdc_Char)0x63,  /* [838] */
    (xdc_Char)0x72,  /* [839] */
    (xdc_Char)0x65,  /* [840] */
    (xdc_Char)0x61,  /* [841] */
    (xdc_Char)0x74,  /* [842] */
    (xdc_Char)0x65,  /* [843] */
    (xdc_Char)0x2f,  /* [844] */
    (xdc_Char)0x64,  /* [845] */
    (xdc_Char)0x65,  /* [846] */
    (xdc_Char)0x6c,  /* [847] */
    (xdc_Char)0x65,  /* [848] */
    (xdc_Char)0x74,  /* [849] */
    (xdc_Char)0x65,  /* [850] */
    (xdc_Char)0x20,  /* [851] */
    (xdc_Char)0x61,  /* [852] */
    (xdc_Char)0x20,  /* [853] */
    (xdc_Char)0x43,  /* [854] */
    (xdc_Char)0x6c,  /* [855] */
    (xdc_Char)0x6f,  /* [856] */
    (xdc_Char)0x63,  /* [857] */
    (xdc_Char)0x6b,  /* [858] */
    (xdc_Char)0x20,  /* [859] */
    (xdc_Char)0x66,  /* [860] */
    (xdc_Char)0x72,  /* [861] */
    (xdc_Char)0x6f,  /* [862] */
    (xdc_Char)0x6d,  /* [863] */
    (xdc_Char)0x20,  /* [864] */
    (xdc_Char)0x48,  /* [865] */
    (xdc_Char)0x77,  /* [866] */
    (xdc_Char)0x69,  /* [867] */
    (xdc_Char)0x20,  /* [868] */
    (xdc_Char)0x6f,  /* [869] */
    (xdc_Char)0x72,  /* [870] */
    (xdc_Char)0x20,  /* [871] */
    (xdc_Char)0x53,  /* [872] */
    (xdc_Char)0x77,  /* [873] */
    (xdc_Char)0x69,  /* [874] */
    (xdc_Char)0x20,  /* [875] */
    (xdc_Char)0x74,  /* [876] */
    (xdc_Char)0x68,  /* [877] */
    (xdc_Char)0x72,  /* [878] */
    (xdc_Char)0x65,  /* [879] */
    (xdc_Char)0x61,  /* [880] */
    (xdc_Char)0x64,  /* [881] */
    (xdc_Char)0x2e,  /* [882] */
    (xdc_Char)0x0,  /* [883] */
    (xdc_Char)0x41,  /* [884] */
    (xdc_Char)0x5f,  /* [885] */
    (xdc_Char)0x6e,  /* [886] */
    (xdc_Char)0x75,  /* [887] */
    (xdc_Char)0x6c,  /* [888] */
    (xdc_Char)0x6c,  /* [889] */
    (xdc_Char)0x45,  /* [890] */
    (xdc_Char)0x76,  /* [891] */
    (xdc_Char)0x65,  /* [892] */
    (xdc_Char)0x6e,  /* [893] */
    (xdc_Char)0x74,  /* [894] */
    (xdc_Char)0x4d,  /* [895] */
    (xdc_Char)0x61,  /* [896] */
    (xdc_Char)0x73,  /* [897] */
    (xdc_Char)0x6b,  /* [898] */
    (xdc_Char)0x73,  /* [899] */
    (xdc_Char)0x3a,  /* [900] */
    (xdc_Char)0x20,  /* [901] */
    (xdc_Char)0x6f,  /* [902] */
    (xdc_Char)0x72,  /* [903] */
    (xdc_Char)0x4d,  /* [904] */
    (xdc_Char)0x61,  /* [905] */
    (xdc_Char)0x73,  /* [906] */
    (xdc_Char)0x6b,  /* [907] */
    (xdc_Char)0x20,  /* [908] */
    (xdc_Char)0x61,  /* [909] */
    (xdc_Char)0x6e,  /* [910] */
    (xdc_Char)0x64,  /* [911] */
    (xdc_Char)0x20,  /* [912] */
    (xdc_Char)0x61,  /* [913] */
    (xdc_Char)0x6e,  /* [914] */
    (xdc_Char)0x64,  /* [915] */
    (xdc_Char)0x4d,  /* [916] */
    (xdc_Char)0x61,  /* [917] */
    (xdc_Char)0x73,  /* [918] */
    (xdc_Char)0x6b,  /* [919] */
    (xdc_Char)0x20,  /* [920] */
    (xdc_Char)0x61,  /* [921] */
    (xdc_Char)0x72,  /* [922] */
    (xdc_Char)0x65,  /* [923] */
    (xdc_Char)0x20,  /* [924] */
    (xdc_Char)0x6e,  /* [925] */
    (xdc_Char)0x75,  /* [926] */
    (xdc_Char)0x6c,  /* [927] */
    (xdc_Char)0x6c,  /* [928] */
    (xdc_Char)0x2e,  /* [929] */
    (xdc_Char)0x0,  /* [930] */
    (xdc_Char)0x41,  /* [931] */
    (xdc_Char)0x5f,  /* [932] */
    (xdc_Char)0x6e,  /* [933] */
    (xdc_Char)0x75,  /* [934] */
    (xdc_Char)0x6c,  /* [935] */
    (xdc_Char)0x6c,  /* [936] */
    (xdc_Char)0x45,  /* [937] */
    (xdc_Char)0x76,  /* [938] */
    (xdc_Char)0x65,  /* [939] */
    (xdc_Char)0x6e,  /* [940] */
    (xdc_Char)0x74,  /* [941] */
    (xdc_Char)0x49,  /* [942] */
    (xdc_Char)0x64,  /* [943] */
    (xdc_Char)0x3a,  /* [944] */
    (xdc_Char)0x20,  /* [945] */
    (xdc_Char)0x70,  /* [946] */
    (xdc_Char)0x6f,  /* [947] */
    (xdc_Char)0x73,  /* [948] */
    (xdc_Char)0x74,  /* [949] */
    (xdc_Char)0x65,  /* [950] */
    (xdc_Char)0x64,  /* [951] */
    (xdc_Char)0x20,  /* [952] */
    (xdc_Char)0x65,  /* [953] */
    (xdc_Char)0x76,  /* [954] */
    (xdc_Char)0x65,  /* [955] */
    (xdc_Char)0x6e,  /* [956] */
    (xdc_Char)0x74,  /* [957] */
    (xdc_Char)0x49,  /* [958] */
    (xdc_Char)0x64,  /* [959] */
    (xdc_Char)0x20,  /* [960] */
    (xdc_Char)0x69,  /* [961] */
    (xdc_Char)0x73,  /* [962] */
    (xdc_Char)0x20,  /* [963] */
    (xdc_Char)0x6e,  /* [964] */
    (xdc_Char)0x75,  /* [965] */
    (xdc_Char)0x6c,  /* [966] */
    (xdc_Char)0x6c,  /* [967] */
    (xdc_Char)0x2e,  /* [968] */
    (xdc_Char)0x0,  /* [969] */
    (xdc_Char)0x41,  /* [970] */
    (xdc_Char)0x5f,  /* [971] */
    (xdc_Char)0x65,  /* [972] */
    (xdc_Char)0x76,  /* [973] */
    (xdc_Char)0x65,  /* [974] */
    (xdc_Char)0x6e,  /* [975] */
    (xdc_Char)0x74,  /* [976] */
    (xdc_Char)0x49,  /* [977] */
    (xdc_Char)0x6e,  /* [978] */
    (xdc_Char)0x55,  /* [979] */
    (xdc_Char)0x73,  /* [980] */
    (xdc_Char)0x65,  /* [981] */
    (xdc_Char)0x3a,  /* [982] */
    (xdc_Char)0x20,  /* [983] */
    (xdc_Char)0x45,  /* [984] */
    (xdc_Char)0x76,  /* [985] */
    (xdc_Char)0x65,  /* [986] */
    (xdc_Char)0x6e,  /* [987] */
    (xdc_Char)0x74,  /* [988] */
    (xdc_Char)0x20,  /* [989] */
    (xdc_Char)0x6f,  /* [990] */
    (xdc_Char)0x62,  /* [991] */
    (xdc_Char)0x6a,  /* [992] */
    (xdc_Char)0x65,  /* [993] */
    (xdc_Char)0x63,  /* [994] */
    (xdc_Char)0x74,  /* [995] */
    (xdc_Char)0x20,  /* [996] */
    (xdc_Char)0x61,  /* [997] */
    (xdc_Char)0x6c,  /* [998] */
    (xdc_Char)0x72,  /* [999] */
    (xdc_Char)0x65,  /* [1000] */
    (xdc_Char)0x61,  /* [1001] */
    (xdc_Char)0x64,  /* [1002] */
    (xdc_Char)0x79,  /* [1003] */
    (xdc_Char)0x20,  /* [1004] */
    (xdc_Char)0x69,  /* [1005] */
    (xdc_Char)0x6e,  /* [1006] */
    (xdc_Char)0x20,  /* [1007] */
    (xdc_Char)0x75,  /* [1008] */
    (xdc_Char)0x73,  /* [1009] */
    (xdc_Char)0x65,  /* [1010] */
    (xdc_Char)0x2e,  /* [1011] */
    (xdc_Char)0x0,  /* [1012] */
    (xdc_Char)0x41,  /* [1013] */
    (xdc_Char)0x5f,  /* [1014] */
    (xdc_Char)0x62,  /* [1015] */
    (xdc_Char)0x61,  /* [1016] */
    (xdc_Char)0x64,  /* [1017] */
    (xdc_Char)0x43,  /* [1018] */
    (xdc_Char)0x6f,  /* [1019] */
    (xdc_Char)0x6e,  /* [1020] */
    (xdc_Char)0x74,  /* [1021] */
    (xdc_Char)0x65,  /* [1022] */
    (xdc_Char)0x78,  /* [1023] */
    (xdc_Char)0x74,  /* [1024] */
    (xdc_Char)0x3a,  /* [1025] */
    (xdc_Char)0x20,  /* [1026] */
    (xdc_Char)0x62,  /* [1027] */
    (xdc_Char)0x61,  /* [1028] */
    (xdc_Char)0x64,  /* [1029] */
    (xdc_Char)0x20,  /* [1030] */
    (xdc_Char)0x63,  /* [1031] */
    (xdc_Char)0x61,  /* [1032] */
    (xdc_Char)0x6c,  /* [1033] */
    (xdc_Char)0x6c,  /* [1034] */
    (xdc_Char)0x69,  /* [1035] */
    (xdc_Char)0x6e,  /* [1036] */
    (xdc_Char)0x67,  /* [1037] */
    (xdc_Char)0x20,  /* [1038] */
    (xdc_Char)0x63,  /* [1039] */
    (xdc_Char)0x6f,  /* [1040] */
    (xdc_Char)0x6e,  /* [1041] */
    (xdc_Char)0x74,  /* [1042] */
    (xdc_Char)0x65,  /* [1043] */
    (xdc_Char)0x78,  /* [1044] */
    (xdc_Char)0x74,  /* [1045] */
    (xdc_Char)0x2e,  /* [1046] */
    (xdc_Char)0x20,  /* [1047] */
    (xdc_Char)0x4d,  /* [1048] */
    (xdc_Char)0x75,  /* [1049] */
    (xdc_Char)0x73,  /* [1050] */
    (xdc_Char)0x74,  /* [1051] */
    (xdc_Char)0x20,  /* [1052] */
    (xdc_Char)0x62,  /* [1053] */
    (xdc_Char)0x65,  /* [1054] */
    (xdc_Char)0x20,  /* [1055] */
    (xdc_Char)0x63,  /* [1056] */
    (xdc_Char)0x61,  /* [1057] */
    (xdc_Char)0x6c,  /* [1058] */
    (xdc_Char)0x6c,  /* [1059] */
    (xdc_Char)0x65,  /* [1060] */
    (xdc_Char)0x64,  /* [1061] */
    (xdc_Char)0x20,  /* [1062] */
    (xdc_Char)0x66,  /* [1063] */
    (xdc_Char)0x72,  /* [1064] */
    (xdc_Char)0x6f,  /* [1065] */
    (xdc_Char)0x6d,  /* [1066] */
    (xdc_Char)0x20,  /* [1067] */
    (xdc_Char)0x61,  /* [1068] */
    (xdc_Char)0x20,  /* [1069] */
    (xdc_Char)0x54,  /* [1070] */
    (xdc_Char)0x61,  /* [1071] */
    (xdc_Char)0x73,  /* [1072] */
    (xdc_Char)0x6b,  /* [1073] */
    (xdc_Char)0x2e,  /* [1074] */
    (xdc_Char)0x0,  /* [1075] */
    (xdc_Char)0x41,  /* [1076] */
    (xdc_Char)0x5f,  /* [1077] */
    (xdc_Char)0x70,  /* [1078] */
    (xdc_Char)0x65,  /* [1079] */
    (xdc_Char)0x6e,  /* [1080] */
    (xdc_Char)0x64,  /* [1081] */
    (xdc_Char)0x54,  /* [1082] */
    (xdc_Char)0x61,  /* [1083] */
    (xdc_Char)0x73,  /* [1084] */
    (xdc_Char)0x6b,  /* [1085] */
    (xdc_Char)0x44,  /* [1086] */
    (xdc_Char)0x69,  /* [1087] */
    (xdc_Char)0x73,  /* [1088] */
    (xdc_Char)0x61,  /* [1089] */
    (xdc_Char)0x62,  /* [1090] */
    (xdc_Char)0x6c,  /* [1091] */
    (xdc_Char)0x65,  /* [1092] */
    (xdc_Char)0x64,  /* [1093] */
    (xdc_Char)0x3a,  /* [1094] */
    (xdc_Char)0x20,  /* [1095] */
    (xdc_Char)0x43,  /* [1096] */
    (xdc_Char)0x61,  /* [1097] */
    (xdc_Char)0x6e,  /* [1098] */
    (xdc_Char)0x6e,  /* [1099] */
    (xdc_Char)0x6f,  /* [1100] */
    (xdc_Char)0x74,  /* [1101] */
    (xdc_Char)0x20,  /* [1102] */
    (xdc_Char)0x63,  /* [1103] */
    (xdc_Char)0x61,  /* [1104] */
    (xdc_Char)0x6c,  /* [1105] */
    (xdc_Char)0x6c,  /* [1106] */
    (xdc_Char)0x20,  /* [1107] */
    (xdc_Char)0x45,  /* [1108] */
    (xdc_Char)0x76,  /* [1109] */
    (xdc_Char)0x65,  /* [1110] */
    (xdc_Char)0x6e,  /* [1111] */
    (xdc_Char)0x74,  /* [1112] */
    (xdc_Char)0x5f,  /* [1113] */
    (xdc_Char)0x70,  /* [1114] */
    (xdc_Char)0x65,  /* [1115] */
    (xdc_Char)0x6e,  /* [1116] */
    (xdc_Char)0x64,  /* [1117] */
    (xdc_Char)0x28,  /* [1118] */
    (xdc_Char)0x29,  /* [1119] */
    (xdc_Char)0x20,  /* [1120] */
    (xdc_Char)0x77,  /* [1121] */
    (xdc_Char)0x68,  /* [1122] */
    (xdc_Char)0x69,  /* [1123] */
    (xdc_Char)0x6c,  /* [1124] */
    (xdc_Char)0x65,  /* [1125] */
    (xdc_Char)0x20,  /* [1126] */
    (xdc_Char)0x74,  /* [1127] */
    (xdc_Char)0x68,  /* [1128] */
    (xdc_Char)0x65,  /* [1129] */
    (xdc_Char)0x20,  /* [1130] */
    (xdc_Char)0x54,  /* [1131] */
    (xdc_Char)0x61,  /* [1132] */
    (xdc_Char)0x73,  /* [1133] */
    (xdc_Char)0x6b,  /* [1134] */
    (xdc_Char)0x20,  /* [1135] */
    (xdc_Char)0x6f,  /* [1136] */
    (xdc_Char)0x72,  /* [1137] */
    (xdc_Char)0x20,  /* [1138] */
    (xdc_Char)0x53,  /* [1139] */
    (xdc_Char)0x77,  /* [1140] */
    (xdc_Char)0x69,  /* [1141] */
    (xdc_Char)0x20,  /* [1142] */
    (xdc_Char)0x73,  /* [1143] */
    (xdc_Char)0x63,  /* [1144] */
    (xdc_Char)0x68,  /* [1145] */
    (xdc_Char)0x65,  /* [1146] */
    (xdc_Char)0x64,  /* [1147] */
    (xdc_Char)0x75,  /* [1148] */
    (xdc_Char)0x6c,  /* [1149] */
    (xdc_Char)0x65,  /* [1150] */
    (xdc_Char)0x72,  /* [1151] */
    (xdc_Char)0x20,  /* [1152] */
    (xdc_Char)0x69,  /* [1153] */
    (xdc_Char)0x73,  /* [1154] */
    (xdc_Char)0x20,  /* [1155] */
    (xdc_Char)0x64,  /* [1156] */
    (xdc_Char)0x69,  /* [1157] */
    (xdc_Char)0x73,  /* [1158] */
    (xdc_Char)0x61,  /* [1159] */
    (xdc_Char)0x62,  /* [1160] */
    (xdc_Char)0x6c,  /* [1161] */
    (xdc_Char)0x65,  /* [1162] */
    (xdc_Char)0x64,  /* [1163] */
    (xdc_Char)0x2e,  /* [1164] */
    (xdc_Char)0x0,  /* [1165] */
    (xdc_Char)0x4d,  /* [1166] */
    (xdc_Char)0x61,  /* [1167] */
    (xdc_Char)0x69,  /* [1168] */
    (xdc_Char)0x6c,  /* [1169] */
    (xdc_Char)0x62,  /* [1170] */
    (xdc_Char)0x6f,  /* [1171] */
    (xdc_Char)0x78,  /* [1172] */
    (xdc_Char)0x5f,  /* [1173] */
    (xdc_Char)0x63,  /* [1174] */
    (xdc_Char)0x72,  /* [1175] */
    (xdc_Char)0x65,  /* [1176] */
    (xdc_Char)0x61,  /* [1177] */
    (xdc_Char)0x74,  /* [1178] */
    (xdc_Char)0x65,  /* [1179] */
    (xdc_Char)0x27,  /* [1180] */
    (xdc_Char)0x73,  /* [1181] */
    (xdc_Char)0x20,  /* [1182] */
    (xdc_Char)0x62,  /* [1183] */
    (xdc_Char)0x75,  /* [1184] */
    (xdc_Char)0x66,  /* [1185] */
    (xdc_Char)0x53,  /* [1186] */
    (xdc_Char)0x69,  /* [1187] */
    (xdc_Char)0x7a,  /* [1188] */
    (xdc_Char)0x65,  /* [1189] */
    (xdc_Char)0x20,  /* [1190] */
    (xdc_Char)0x70,  /* [1191] */
    (xdc_Char)0x61,  /* [1192] */
    (xdc_Char)0x72,  /* [1193] */
    (xdc_Char)0x61,  /* [1194] */
    (xdc_Char)0x6d,  /* [1195] */
    (xdc_Char)0x65,  /* [1196] */
    (xdc_Char)0x74,  /* [1197] */
    (xdc_Char)0x65,  /* [1198] */
    (xdc_Char)0x72,  /* [1199] */
    (xdc_Char)0x20,  /* [1200] */
    (xdc_Char)0x69,  /* [1201] */
    (xdc_Char)0x73,  /* [1202] */
    (xdc_Char)0x20,  /* [1203] */
    (xdc_Char)0x69,  /* [1204] */
    (xdc_Char)0x6e,  /* [1205] */
    (xdc_Char)0x76,  /* [1206] */
    (xdc_Char)0x61,  /* [1207] */
    (xdc_Char)0x6c,  /* [1208] */
    (xdc_Char)0x69,  /* [1209] */
    (xdc_Char)0x64,  /* [1210] */
    (xdc_Char)0x20,  /* [1211] */
    (xdc_Char)0x28,  /* [1212] */
    (xdc_Char)0x74,  /* [1213] */
    (xdc_Char)0x6f,  /* [1214] */
    (xdc_Char)0x6f,  /* [1215] */
    (xdc_Char)0x20,  /* [1216] */
    (xdc_Char)0x73,  /* [1217] */
    (xdc_Char)0x6d,  /* [1218] */
    (xdc_Char)0x61,  /* [1219] */
    (xdc_Char)0x6c,  /* [1220] */
    (xdc_Char)0x6c,  /* [1221] */
    (xdc_Char)0x29,  /* [1222] */
    (xdc_Char)0x0,  /* [1223] */
    (xdc_Char)0x41,  /* [1224] */
    (xdc_Char)0x5f,  /* [1225] */
    (xdc_Char)0x6e,  /* [1226] */
    (xdc_Char)0x6f,  /* [1227] */
    (xdc_Char)0x45,  /* [1228] */
    (xdc_Char)0x76,  /* [1229] */
    (xdc_Char)0x65,  /* [1230] */
    (xdc_Char)0x6e,  /* [1231] */
    (xdc_Char)0x74,  /* [1232] */
    (xdc_Char)0x73,  /* [1233] */
    (xdc_Char)0x3a,  /* [1234] */
    (xdc_Char)0x20,  /* [1235] */
    (xdc_Char)0x54,  /* [1236] */
    (xdc_Char)0x68,  /* [1237] */
    (xdc_Char)0x65,  /* [1238] */
    (xdc_Char)0x20,  /* [1239] */
    (xdc_Char)0x45,  /* [1240] */
    (xdc_Char)0x76,  /* [1241] */
    (xdc_Char)0x65,  /* [1242] */
    (xdc_Char)0x6e,  /* [1243] */
    (xdc_Char)0x74,  /* [1244] */
    (xdc_Char)0x2e,  /* [1245] */
    (xdc_Char)0x73,  /* [1246] */
    (xdc_Char)0x75,  /* [1247] */
    (xdc_Char)0x70,  /* [1248] */
    (xdc_Char)0x70,  /* [1249] */
    (xdc_Char)0x6f,  /* [1250] */
    (xdc_Char)0x72,  /* [1251] */
    (xdc_Char)0x74,  /* [1252] */
    (xdc_Char)0x73,  /* [1253] */
    (xdc_Char)0x45,  /* [1254] */
    (xdc_Char)0x76,  /* [1255] */
    (xdc_Char)0x65,  /* [1256] */
    (xdc_Char)0x6e,  /* [1257] */
    (xdc_Char)0x74,  /* [1258] */
    (xdc_Char)0x73,  /* [1259] */
    (xdc_Char)0x20,  /* [1260] */
    (xdc_Char)0x66,  /* [1261] */
    (xdc_Char)0x6c,  /* [1262] */
    (xdc_Char)0x61,  /* [1263] */
    (xdc_Char)0x67,  /* [1264] */
    (xdc_Char)0x20,  /* [1265] */
    (xdc_Char)0x69,  /* [1266] */
    (xdc_Char)0x73,  /* [1267] */
    (xdc_Char)0x20,  /* [1268] */
    (xdc_Char)0x64,  /* [1269] */
    (xdc_Char)0x69,  /* [1270] */
    (xdc_Char)0x73,  /* [1271] */
    (xdc_Char)0x61,  /* [1272] */
    (xdc_Char)0x62,  /* [1273] */
    (xdc_Char)0x6c,  /* [1274] */
    (xdc_Char)0x65,  /* [1275] */
    (xdc_Char)0x64,  /* [1276] */
    (xdc_Char)0x2e,  /* [1277] */
    (xdc_Char)0x0,  /* [1278] */
    (xdc_Char)0x41,  /* [1279] */
    (xdc_Char)0x5f,  /* [1280] */
    (xdc_Char)0x69,  /* [1281] */
    (xdc_Char)0x6e,  /* [1282] */
    (xdc_Char)0x76,  /* [1283] */
    (xdc_Char)0x54,  /* [1284] */
    (xdc_Char)0x69,  /* [1285] */
    (xdc_Char)0x6d,  /* [1286] */
    (xdc_Char)0x65,  /* [1287] */
    (xdc_Char)0x6f,  /* [1288] */
    (xdc_Char)0x75,  /* [1289] */
    (xdc_Char)0x74,  /* [1290] */
    (xdc_Char)0x3a,  /* [1291] */
    (xdc_Char)0x20,  /* [1292] */
    (xdc_Char)0x43,  /* [1293] */
    (xdc_Char)0x61,  /* [1294] */
    (xdc_Char)0x6e,  /* [1295] */
    (xdc_Char)0x27,  /* [1296] */
    (xdc_Char)0x74,  /* [1297] */
    (xdc_Char)0x20,  /* [1298] */
    (xdc_Char)0x75,  /* [1299] */
    (xdc_Char)0x73,  /* [1300] */
    (xdc_Char)0x65,  /* [1301] */
    (xdc_Char)0x20,  /* [1302] */
    (xdc_Char)0x42,  /* [1303] */
    (xdc_Char)0x49,  /* [1304] */
    (xdc_Char)0x4f,  /* [1305] */
    (xdc_Char)0x53,  /* [1306] */
    (xdc_Char)0x5f,  /* [1307] */
    (xdc_Char)0x45,  /* [1308] */
    (xdc_Char)0x56,  /* [1309] */
    (xdc_Char)0x45,  /* [1310] */
    (xdc_Char)0x4e,  /* [1311] */
    (xdc_Char)0x54,  /* [1312] */
    (xdc_Char)0x5f,  /* [1313] */
    (xdc_Char)0x41,  /* [1314] */
    (xdc_Char)0x43,  /* [1315] */
    (xdc_Char)0x51,  /* [1316] */
    (xdc_Char)0x55,  /* [1317] */
    (xdc_Char)0x49,  /* [1318] */
    (xdc_Char)0x52,  /* [1319] */
    (xdc_Char)0x45,  /* [1320] */
    (xdc_Char)0x44,  /* [1321] */
    (xdc_Char)0x20,  /* [1322] */
    (xdc_Char)0x77,  /* [1323] */
    (xdc_Char)0x69,  /* [1324] */
    (xdc_Char)0x74,  /* [1325] */
    (xdc_Char)0x68,  /* [1326] */
    (xdc_Char)0x20,  /* [1327] */
    (xdc_Char)0x74,  /* [1328] */
    (xdc_Char)0x68,  /* [1329] */
    (xdc_Char)0x69,  /* [1330] */
    (xdc_Char)0x73,  /* [1331] */
    (xdc_Char)0x20,  /* [1332] */
    (xdc_Char)0x53,  /* [1333] */
    (xdc_Char)0x65,  /* [1334] */
    (xdc_Char)0x6d,  /* [1335] */
    (xdc_Char)0x61,  /* [1336] */
    (xdc_Char)0x70,  /* [1337] */
    (xdc_Char)0x68,  /* [1338] */
    (xdc_Char)0x6f,  /* [1339] */
    (xdc_Char)0x72,  /* [1340] */
    (xdc_Char)0x65,  /* [1341] */
    (xdc_Char)0x2e,  /* [1342] */
    (xdc_Char)0x0,  /* [1343] */
    (xdc_Char)0x41,  /* [1344] */
    (xdc_Char)0x5f,  /* [1345] */
    (xdc_Char)0x6f,  /* [1346] */
    (xdc_Char)0x76,  /* [1347] */
    (xdc_Char)0x65,  /* [1348] */
    (xdc_Char)0x72,  /* [1349] */
    (xdc_Char)0x66,  /* [1350] */
    (xdc_Char)0x6c,  /* [1351] */
    (xdc_Char)0x6f,  /* [1352] */
    (xdc_Char)0x77,  /* [1353] */
    (xdc_Char)0x3a,  /* [1354] */
    (xdc_Char)0x20,  /* [1355] */
    (xdc_Char)0x43,  /* [1356] */
    (xdc_Char)0x6f,  /* [1357] */
    (xdc_Char)0x75,  /* [1358] */
    (xdc_Char)0x6e,  /* [1359] */
    (xdc_Char)0x74,  /* [1360] */
    (xdc_Char)0x20,  /* [1361] */
    (xdc_Char)0x68,  /* [1362] */
    (xdc_Char)0x61,  /* [1363] */
    (xdc_Char)0x73,  /* [1364] */
    (xdc_Char)0x20,  /* [1365] */
    (xdc_Char)0x65,  /* [1366] */
    (xdc_Char)0x78,  /* [1367] */
    (xdc_Char)0x63,  /* [1368] */
    (xdc_Char)0x65,  /* [1369] */
    (xdc_Char)0x65,  /* [1370] */
    (xdc_Char)0x64,  /* [1371] */
    (xdc_Char)0x65,  /* [1372] */
    (xdc_Char)0x64,  /* [1373] */
    (xdc_Char)0x20,  /* [1374] */
    (xdc_Char)0x36,  /* [1375] */
    (xdc_Char)0x35,  /* [1376] */
    (xdc_Char)0x35,  /* [1377] */
    (xdc_Char)0x33,  /* [1378] */
    (xdc_Char)0x35,  /* [1379] */
    (xdc_Char)0x20,  /* [1380] */
    (xdc_Char)0x61,  /* [1381] */
    (xdc_Char)0x6e,  /* [1382] */
    (xdc_Char)0x64,  /* [1383] */
    (xdc_Char)0x20,  /* [1384] */
    (xdc_Char)0x72,  /* [1385] */
    (xdc_Char)0x6f,  /* [1386] */
    (xdc_Char)0x6c,  /* [1387] */
    (xdc_Char)0x6c,  /* [1388] */
    (xdc_Char)0x65,  /* [1389] */
    (xdc_Char)0x64,  /* [1390] */
    (xdc_Char)0x20,  /* [1391] */
    (xdc_Char)0x6f,  /* [1392] */
    (xdc_Char)0x76,  /* [1393] */
    (xdc_Char)0x65,  /* [1394] */
    (xdc_Char)0x72,  /* [1395] */
    (xdc_Char)0x2e,  /* [1396] */
    (xdc_Char)0x0,  /* [1397] */
    (xdc_Char)0x41,  /* [1398] */
    (xdc_Char)0x5f,  /* [1399] */
    (xdc_Char)0x70,  /* [1400] */
    (xdc_Char)0x65,  /* [1401] */
    (xdc_Char)0x6e,  /* [1402] */
    (xdc_Char)0x64,  /* [1403] */
    (xdc_Char)0x54,  /* [1404] */
    (xdc_Char)0x61,  /* [1405] */
    (xdc_Char)0x73,  /* [1406] */
    (xdc_Char)0x6b,  /* [1407] */
    (xdc_Char)0x44,  /* [1408] */
    (xdc_Char)0x69,  /* [1409] */
    (xdc_Char)0x73,  /* [1410] */
    (xdc_Char)0x61,  /* [1411] */
    (xdc_Char)0x62,  /* [1412] */
    (xdc_Char)0x6c,  /* [1413] */
    (xdc_Char)0x65,  /* [1414] */
    (xdc_Char)0x64,  /* [1415] */
    (xdc_Char)0x3a,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x43,  /* [1418] */
    (xdc_Char)0x61,  /* [1419] */
    (xdc_Char)0x6e,  /* [1420] */
    (xdc_Char)0x6e,  /* [1421] */
    (xdc_Char)0x6f,  /* [1422] */
    (xdc_Char)0x74,  /* [1423] */
    (xdc_Char)0x20,  /* [1424] */
    (xdc_Char)0x63,  /* [1425] */
    (xdc_Char)0x61,  /* [1426] */
    (xdc_Char)0x6c,  /* [1427] */
    (xdc_Char)0x6c,  /* [1428] */
    (xdc_Char)0x20,  /* [1429] */
    (xdc_Char)0x53,  /* [1430] */
    (xdc_Char)0x65,  /* [1431] */
    (xdc_Char)0x6d,  /* [1432] */
    (xdc_Char)0x61,  /* [1433] */
    (xdc_Char)0x70,  /* [1434] */
    (xdc_Char)0x68,  /* [1435] */
    (xdc_Char)0x6f,  /* [1436] */
    (xdc_Char)0x72,  /* [1437] */
    (xdc_Char)0x65,  /* [1438] */
    (xdc_Char)0x5f,  /* [1439] */
    (xdc_Char)0x70,  /* [1440] */
    (xdc_Char)0x65,  /* [1441] */
    (xdc_Char)0x6e,  /* [1442] */
    (xdc_Char)0x64,  /* [1443] */
    (xdc_Char)0x28,  /* [1444] */
    (xdc_Char)0x29,  /* [1445] */
    (xdc_Char)0x20,  /* [1446] */
    (xdc_Char)0x77,  /* [1447] */
    (xdc_Char)0x68,  /* [1448] */
    (xdc_Char)0x69,  /* [1449] */
    (xdc_Char)0x6c,  /* [1450] */
    (xdc_Char)0x65,  /* [1451] */
    (xdc_Char)0x20,  /* [1452] */
    (xdc_Char)0x74,  /* [1453] */
    (xdc_Char)0x68,  /* [1454] */
    (xdc_Char)0x65,  /* [1455] */
    (xdc_Char)0x20,  /* [1456] */
    (xdc_Char)0x54,  /* [1457] */
    (xdc_Char)0x61,  /* [1458] */
    (xdc_Char)0x73,  /* [1459] */
    (xdc_Char)0x6b,  /* [1460] */
    (xdc_Char)0x20,  /* [1461] */
    (xdc_Char)0x6f,  /* [1462] */
    (xdc_Char)0x72,  /* [1463] */
    (xdc_Char)0x20,  /* [1464] */
    (xdc_Char)0x53,  /* [1465] */
    (xdc_Char)0x77,  /* [1466] */
    (xdc_Char)0x69,  /* [1467] */
    (xdc_Char)0x20,  /* [1468] */
    (xdc_Char)0x73,  /* [1469] */
    (xdc_Char)0x63,  /* [1470] */
    (xdc_Char)0x68,  /* [1471] */
    (xdc_Char)0x65,  /* [1472] */
    (xdc_Char)0x64,  /* [1473] */
    (xdc_Char)0x75,  /* [1474] */
    (xdc_Char)0x6c,  /* [1475] */
    (xdc_Char)0x65,  /* [1476] */
    (xdc_Char)0x72,  /* [1477] */
    (xdc_Char)0x20,  /* [1478] */
    (xdc_Char)0x69,  /* [1479] */
    (xdc_Char)0x73,  /* [1480] */
    (xdc_Char)0x20,  /* [1481] */
    (xdc_Char)0x64,  /* [1482] */
    (xdc_Char)0x69,  /* [1483] */
    (xdc_Char)0x73,  /* [1484] */
    (xdc_Char)0x61,  /* [1485] */
    (xdc_Char)0x62,  /* [1486] */
    (xdc_Char)0x6c,  /* [1487] */
    (xdc_Char)0x65,  /* [1488] */
    (xdc_Char)0x64,  /* [1489] */
    (xdc_Char)0x2e,  /* [1490] */
    (xdc_Char)0x0,  /* [1491] */
    (xdc_Char)0x41,  /* [1492] */
    (xdc_Char)0x5f,  /* [1493] */
    (xdc_Char)0x73,  /* [1494] */
    (xdc_Char)0x77,  /* [1495] */
    (xdc_Char)0x69,  /* [1496] */
    (xdc_Char)0x44,  /* [1497] */
    (xdc_Char)0x69,  /* [1498] */
    (xdc_Char)0x73,  /* [1499] */
    (xdc_Char)0x61,  /* [1500] */
    (xdc_Char)0x62,  /* [1501] */
    (xdc_Char)0x6c,  /* [1502] */
    (xdc_Char)0x65,  /* [1503] */
    (xdc_Char)0x64,  /* [1504] */
    (xdc_Char)0x3a,  /* [1505] */
    (xdc_Char)0x20,  /* [1506] */
    (xdc_Char)0x43,  /* [1507] */
    (xdc_Char)0x61,  /* [1508] */
    (xdc_Char)0x6e,  /* [1509] */
    (xdc_Char)0x6e,  /* [1510] */
    (xdc_Char)0x6f,  /* [1511] */
    (xdc_Char)0x74,  /* [1512] */
    (xdc_Char)0x20,  /* [1513] */
    (xdc_Char)0x63,  /* [1514] */
    (xdc_Char)0x72,  /* [1515] */
    (xdc_Char)0x65,  /* [1516] */
    (xdc_Char)0x61,  /* [1517] */
    (xdc_Char)0x74,  /* [1518] */
    (xdc_Char)0x65,  /* [1519] */
    (xdc_Char)0x20,  /* [1520] */
    (xdc_Char)0x61,  /* [1521] */
    (xdc_Char)0x20,  /* [1522] */
    (xdc_Char)0x53,  /* [1523] */
    (xdc_Char)0x77,  /* [1524] */
    (xdc_Char)0x69,  /* [1525] */
    (xdc_Char)0x20,  /* [1526] */
    (xdc_Char)0x77,  /* [1527] */
    (xdc_Char)0x68,  /* [1528] */
    (xdc_Char)0x65,  /* [1529] */
    (xdc_Char)0x6e,  /* [1530] */
    (xdc_Char)0x20,  /* [1531] */
    (xdc_Char)0x53,  /* [1532] */
    (xdc_Char)0x77,  /* [1533] */
    (xdc_Char)0x69,  /* [1534] */
    (xdc_Char)0x20,  /* [1535] */
    (xdc_Char)0x69,  /* [1536] */
    (xdc_Char)0x73,  /* [1537] */
    (xdc_Char)0x20,  /* [1538] */
    (xdc_Char)0x64,  /* [1539] */
    (xdc_Char)0x69,  /* [1540] */
    (xdc_Char)0x73,  /* [1541] */
    (xdc_Char)0x61,  /* [1542] */
    (xdc_Char)0x62,  /* [1543] */
    (xdc_Char)0x6c,  /* [1544] */
    (xdc_Char)0x65,  /* [1545] */
    (xdc_Char)0x64,  /* [1546] */
    (xdc_Char)0x2e,  /* [1547] */
    (xdc_Char)0x0,  /* [1548] */
    (xdc_Char)0x41,  /* [1549] */
    (xdc_Char)0x5f,  /* [1550] */
    (xdc_Char)0x62,  /* [1551] */
    (xdc_Char)0x61,  /* [1552] */
    (xdc_Char)0x64,  /* [1553] */
    (xdc_Char)0x50,  /* [1554] */
    (xdc_Char)0x72,  /* [1555] */
    (xdc_Char)0x69,  /* [1556] */
    (xdc_Char)0x6f,  /* [1557] */
    (xdc_Char)0x72,  /* [1558] */
    (xdc_Char)0x69,  /* [1559] */
    (xdc_Char)0x74,  /* [1560] */
    (xdc_Char)0x79,  /* [1561] */
    (xdc_Char)0x3a,  /* [1562] */
    (xdc_Char)0x20,  /* [1563] */
    (xdc_Char)0x41,  /* [1564] */
    (xdc_Char)0x6e,  /* [1565] */
    (xdc_Char)0x20,  /* [1566] */
    (xdc_Char)0x69,  /* [1567] */
    (xdc_Char)0x6e,  /* [1568] */
    (xdc_Char)0x76,  /* [1569] */
    (xdc_Char)0x61,  /* [1570] */
    (xdc_Char)0x6c,  /* [1571] */
    (xdc_Char)0x69,  /* [1572] */
    (xdc_Char)0x64,  /* [1573] */
    (xdc_Char)0x20,  /* [1574] */
    (xdc_Char)0x53,  /* [1575] */
    (xdc_Char)0x77,  /* [1576] */
    (xdc_Char)0x69,  /* [1577] */
    (xdc_Char)0x20,  /* [1578] */
    (xdc_Char)0x70,  /* [1579] */
    (xdc_Char)0x72,  /* [1580] */
    (xdc_Char)0x69,  /* [1581] */
    (xdc_Char)0x6f,  /* [1582] */
    (xdc_Char)0x72,  /* [1583] */
    (xdc_Char)0x69,  /* [1584] */
    (xdc_Char)0x74,  /* [1585] */
    (xdc_Char)0x79,  /* [1586] */
    (xdc_Char)0x20,  /* [1587] */
    (xdc_Char)0x77,  /* [1588] */
    (xdc_Char)0x61,  /* [1589] */
    (xdc_Char)0x73,  /* [1590] */
    (xdc_Char)0x20,  /* [1591] */
    (xdc_Char)0x75,  /* [1592] */
    (xdc_Char)0x73,  /* [1593] */
    (xdc_Char)0x65,  /* [1594] */
    (xdc_Char)0x64,  /* [1595] */
    (xdc_Char)0x2e,  /* [1596] */
    (xdc_Char)0x0,  /* [1597] */
    (xdc_Char)0x41,  /* [1598] */
    (xdc_Char)0x5f,  /* [1599] */
    (xdc_Char)0x62,  /* [1600] */
    (xdc_Char)0x61,  /* [1601] */
    (xdc_Char)0x64,  /* [1602] */
    (xdc_Char)0x54,  /* [1603] */
    (xdc_Char)0x68,  /* [1604] */
    (xdc_Char)0x72,  /* [1605] */
    (xdc_Char)0x65,  /* [1606] */
    (xdc_Char)0x61,  /* [1607] */
    (xdc_Char)0x64,  /* [1608] */
    (xdc_Char)0x54,  /* [1609] */
    (xdc_Char)0x79,  /* [1610] */
    (xdc_Char)0x70,  /* [1611] */
    (xdc_Char)0x65,  /* [1612] */
    (xdc_Char)0x3a,  /* [1613] */
    (xdc_Char)0x20,  /* [1614] */
    (xdc_Char)0x43,  /* [1615] */
    (xdc_Char)0x61,  /* [1616] */
    (xdc_Char)0x6e,  /* [1617] */
    (xdc_Char)0x6e,  /* [1618] */
    (xdc_Char)0x6f,  /* [1619] */
    (xdc_Char)0x74,  /* [1620] */
    (xdc_Char)0x20,  /* [1621] */
    (xdc_Char)0x63,  /* [1622] */
    (xdc_Char)0x72,  /* [1623] */
    (xdc_Char)0x65,  /* [1624] */
    (xdc_Char)0x61,  /* [1625] */
    (xdc_Char)0x74,  /* [1626] */
    (xdc_Char)0x65,  /* [1627] */
    (xdc_Char)0x2f,  /* [1628] */
    (xdc_Char)0x64,  /* [1629] */
    (xdc_Char)0x65,  /* [1630] */
    (xdc_Char)0x6c,  /* [1631] */
    (xdc_Char)0x65,  /* [1632] */
    (xdc_Char)0x74,  /* [1633] */
    (xdc_Char)0x65,  /* [1634] */
    (xdc_Char)0x20,  /* [1635] */
    (xdc_Char)0x61,  /* [1636] */
    (xdc_Char)0x20,  /* [1637] */
    (xdc_Char)0x74,  /* [1638] */
    (xdc_Char)0x61,  /* [1639] */
    (xdc_Char)0x73,  /* [1640] */
    (xdc_Char)0x6b,  /* [1641] */
    (xdc_Char)0x20,  /* [1642] */
    (xdc_Char)0x66,  /* [1643] */
    (xdc_Char)0x72,  /* [1644] */
    (xdc_Char)0x6f,  /* [1645] */
    (xdc_Char)0x6d,  /* [1646] */
    (xdc_Char)0x20,  /* [1647] */
    (xdc_Char)0x48,  /* [1648] */
    (xdc_Char)0x77,  /* [1649] */
    (xdc_Char)0x69,  /* [1650] */
    (xdc_Char)0x20,  /* [1651] */
    (xdc_Char)0x6f,  /* [1652] */
    (xdc_Char)0x72,  /* [1653] */
    (xdc_Char)0x20,  /* [1654] */
    (xdc_Char)0x53,  /* [1655] */
    (xdc_Char)0x77,  /* [1656] */
    (xdc_Char)0x69,  /* [1657] */
    (xdc_Char)0x20,  /* [1658] */
    (xdc_Char)0x74,  /* [1659] */
    (xdc_Char)0x68,  /* [1660] */
    (xdc_Char)0x72,  /* [1661] */
    (xdc_Char)0x65,  /* [1662] */
    (xdc_Char)0x61,  /* [1663] */
    (xdc_Char)0x64,  /* [1664] */
    (xdc_Char)0x2e,  /* [1665] */
    (xdc_Char)0x0,  /* [1666] */
    (xdc_Char)0x41,  /* [1667] */
    (xdc_Char)0x5f,  /* [1668] */
    (xdc_Char)0x62,  /* [1669] */
    (xdc_Char)0x61,  /* [1670] */
    (xdc_Char)0x64,  /* [1671] */
    (xdc_Char)0x54,  /* [1672] */
    (xdc_Char)0x61,  /* [1673] */
    (xdc_Char)0x73,  /* [1674] */
    (xdc_Char)0x6b,  /* [1675] */
    (xdc_Char)0x53,  /* [1676] */
    (xdc_Char)0x74,  /* [1677] */
    (xdc_Char)0x61,  /* [1678] */
    (xdc_Char)0x74,  /* [1679] */
    (xdc_Char)0x65,  /* [1680] */
    (xdc_Char)0x3a,  /* [1681] */
    (xdc_Char)0x20,  /* [1682] */
    (xdc_Char)0x43,  /* [1683] */
    (xdc_Char)0x61,  /* [1684] */
    (xdc_Char)0x6e,  /* [1685] */
    (xdc_Char)0x27,  /* [1686] */
    (xdc_Char)0x74,  /* [1687] */
    (xdc_Char)0x20,  /* [1688] */
    (xdc_Char)0x64,  /* [1689] */
    (xdc_Char)0x65,  /* [1690] */
    (xdc_Char)0x6c,  /* [1691] */
    (xdc_Char)0x65,  /* [1692] */
    (xdc_Char)0x74,  /* [1693] */
    (xdc_Char)0x65,  /* [1694] */
    (xdc_Char)0x20,  /* [1695] */
    (xdc_Char)0x61,  /* [1696] */
    (xdc_Char)0x20,  /* [1697] */
    (xdc_Char)0x74,  /* [1698] */
    (xdc_Char)0x61,  /* [1699] */
    (xdc_Char)0x73,  /* [1700] */
    (xdc_Char)0x6b,  /* [1701] */
    (xdc_Char)0x20,  /* [1702] */
    (xdc_Char)0x69,  /* [1703] */
    (xdc_Char)0x6e,  /* [1704] */
    (xdc_Char)0x20,  /* [1705] */
    (xdc_Char)0x52,  /* [1706] */
    (xdc_Char)0x55,  /* [1707] */
    (xdc_Char)0x4e,  /* [1708] */
    (xdc_Char)0x4e,  /* [1709] */
    (xdc_Char)0x49,  /* [1710] */
    (xdc_Char)0x4e,  /* [1711] */
    (xdc_Char)0x47,  /* [1712] */
    (xdc_Char)0x20,  /* [1713] */
    (xdc_Char)0x73,  /* [1714] */
    (xdc_Char)0x74,  /* [1715] */
    (xdc_Char)0x61,  /* [1716] */
    (xdc_Char)0x74,  /* [1717] */
    (xdc_Char)0x65,  /* [1718] */
    (xdc_Char)0x2e,  /* [1719] */
    (xdc_Char)0x0,  /* [1720] */
    (xdc_Char)0x41,  /* [1721] */
    (xdc_Char)0x5f,  /* [1722] */
    (xdc_Char)0x6e,  /* [1723] */
    (xdc_Char)0x6f,  /* [1724] */
    (xdc_Char)0x50,  /* [1725] */
    (xdc_Char)0x65,  /* [1726] */
    (xdc_Char)0x6e,  /* [1727] */
    (xdc_Char)0x64,  /* [1728] */
    (xdc_Char)0x45,  /* [1729] */
    (xdc_Char)0x6c,  /* [1730] */
    (xdc_Char)0x65,  /* [1731] */
    (xdc_Char)0x6d,  /* [1732] */
    (xdc_Char)0x3a,  /* [1733] */
    (xdc_Char)0x20,  /* [1734] */
    (xdc_Char)0x4e,  /* [1735] */
    (xdc_Char)0x6f,  /* [1736] */
    (xdc_Char)0x74,  /* [1737] */
    (xdc_Char)0x20,  /* [1738] */
    (xdc_Char)0x65,  /* [1739] */
    (xdc_Char)0x6e,  /* [1740] */
    (xdc_Char)0x6f,  /* [1741] */
    (xdc_Char)0x75,  /* [1742] */
    (xdc_Char)0x67,  /* [1743] */
    (xdc_Char)0x68,  /* [1744] */
    (xdc_Char)0x20,  /* [1745] */
    (xdc_Char)0x69,  /* [1746] */
    (xdc_Char)0x6e,  /* [1747] */
    (xdc_Char)0x66,  /* [1748] */
    (xdc_Char)0x6f,  /* [1749] */
    (xdc_Char)0x20,  /* [1750] */
    (xdc_Char)0x74,  /* [1751] */
    (xdc_Char)0x6f,  /* [1752] */
    (xdc_Char)0x20,  /* [1753] */
    (xdc_Char)0x64,  /* [1754] */
    (xdc_Char)0x65,  /* [1755] */
    (xdc_Char)0x6c,  /* [1756] */
    (xdc_Char)0x65,  /* [1757] */
    (xdc_Char)0x74,  /* [1758] */
    (xdc_Char)0x65,  /* [1759] */
    (xdc_Char)0x20,  /* [1760] */
    (xdc_Char)0x42,  /* [1761] */
    (xdc_Char)0x4c,  /* [1762] */
    (xdc_Char)0x4f,  /* [1763] */
    (xdc_Char)0x43,  /* [1764] */
    (xdc_Char)0x4b,  /* [1765] */
    (xdc_Char)0x45,  /* [1766] */
    (xdc_Char)0x44,  /* [1767] */
    (xdc_Char)0x20,  /* [1768] */
    (xdc_Char)0x74,  /* [1769] */
    (xdc_Char)0x61,  /* [1770] */
    (xdc_Char)0x73,  /* [1771] */
    (xdc_Char)0x6b,  /* [1772] */
    (xdc_Char)0x2e,  /* [1773] */
    (xdc_Char)0x0,  /* [1774] */
    (xdc_Char)0x41,  /* [1775] */
    (xdc_Char)0x5f,  /* [1776] */
    (xdc_Char)0x74,  /* [1777] */
    (xdc_Char)0x61,  /* [1778] */
    (xdc_Char)0x73,  /* [1779] */
    (xdc_Char)0x6b,  /* [1780] */
    (xdc_Char)0x44,  /* [1781] */
    (xdc_Char)0x69,  /* [1782] */
    (xdc_Char)0x73,  /* [1783] */
    (xdc_Char)0x61,  /* [1784] */
    (xdc_Char)0x62,  /* [1785] */
    (xdc_Char)0x6c,  /* [1786] */
    (xdc_Char)0x65,  /* [1787] */
    (xdc_Char)0x64,  /* [1788] */
    (xdc_Char)0x3a,  /* [1789] */
    (xdc_Char)0x20,  /* [1790] */
    (xdc_Char)0x43,  /* [1791] */
    (xdc_Char)0x61,  /* [1792] */
    (xdc_Char)0x6e,  /* [1793] */
    (xdc_Char)0x6e,  /* [1794] */
    (xdc_Char)0x6f,  /* [1795] */
    (xdc_Char)0x74,  /* [1796] */
    (xdc_Char)0x20,  /* [1797] */
    (xdc_Char)0x63,  /* [1798] */
    (xdc_Char)0x72,  /* [1799] */
    (xdc_Char)0x65,  /* [1800] */
    (xdc_Char)0x61,  /* [1801] */
    (xdc_Char)0x74,  /* [1802] */
    (xdc_Char)0x65,  /* [1803] */
    (xdc_Char)0x20,  /* [1804] */
    (xdc_Char)0x61,  /* [1805] */
    (xdc_Char)0x20,  /* [1806] */
    (xdc_Char)0x74,  /* [1807] */
    (xdc_Char)0x61,  /* [1808] */
    (xdc_Char)0x73,  /* [1809] */
    (xdc_Char)0x6b,  /* [1810] */
    (xdc_Char)0x20,  /* [1811] */
    (xdc_Char)0x77,  /* [1812] */
    (xdc_Char)0x68,  /* [1813] */
    (xdc_Char)0x65,  /* [1814] */
    (xdc_Char)0x6e,  /* [1815] */
    (xdc_Char)0x20,  /* [1816] */
    (xdc_Char)0x74,  /* [1817] */
    (xdc_Char)0x61,  /* [1818] */
    (xdc_Char)0x73,  /* [1819] */
    (xdc_Char)0x6b,  /* [1820] */
    (xdc_Char)0x69,  /* [1821] */
    (xdc_Char)0x6e,  /* [1822] */
    (xdc_Char)0x67,  /* [1823] */
    (xdc_Char)0x20,  /* [1824] */
    (xdc_Char)0x69,  /* [1825] */
    (xdc_Char)0x73,  /* [1826] */
    (xdc_Char)0x20,  /* [1827] */
    (xdc_Char)0x64,  /* [1828] */
    (xdc_Char)0x69,  /* [1829] */
    (xdc_Char)0x73,  /* [1830] */
    (xdc_Char)0x61,  /* [1831] */
    (xdc_Char)0x62,  /* [1832] */
    (xdc_Char)0x6c,  /* [1833] */
    (xdc_Char)0x65,  /* [1834] */
    (xdc_Char)0x64,  /* [1835] */
    (xdc_Char)0x2e,  /* [1836] */
    (xdc_Char)0x0,  /* [1837] */
    (xdc_Char)0x41,  /* [1838] */
    (xdc_Char)0x5f,  /* [1839] */
    (xdc_Char)0x62,  /* [1840] */
    (xdc_Char)0x61,  /* [1841] */
    (xdc_Char)0x64,  /* [1842] */
    (xdc_Char)0x50,  /* [1843] */
    (xdc_Char)0x72,  /* [1844] */
    (xdc_Char)0x69,  /* [1845] */
    (xdc_Char)0x6f,  /* [1846] */
    (xdc_Char)0x72,  /* [1847] */
    (xdc_Char)0x69,  /* [1848] */
    (xdc_Char)0x74,  /* [1849] */
    (xdc_Char)0x79,  /* [1850] */
    (xdc_Char)0x3a,  /* [1851] */
    (xdc_Char)0x20,  /* [1852] */
    (xdc_Char)0x41,  /* [1853] */
    (xdc_Char)0x6e,  /* [1854] */
    (xdc_Char)0x20,  /* [1855] */
    (xdc_Char)0x69,  /* [1856] */
    (xdc_Char)0x6e,  /* [1857] */
    (xdc_Char)0x76,  /* [1858] */
    (xdc_Char)0x61,  /* [1859] */
    (xdc_Char)0x6c,  /* [1860] */
    (xdc_Char)0x69,  /* [1861] */
    (xdc_Char)0x64,  /* [1862] */
    (xdc_Char)0x20,  /* [1863] */
    (xdc_Char)0x74,  /* [1864] */
    (xdc_Char)0x61,  /* [1865] */
    (xdc_Char)0x73,  /* [1866] */
    (xdc_Char)0x6b,  /* [1867] */
    (xdc_Char)0x20,  /* [1868] */
    (xdc_Char)0x70,  /* [1869] */
    (xdc_Char)0x72,  /* [1870] */
    (xdc_Char)0x69,  /* [1871] */
    (xdc_Char)0x6f,  /* [1872] */
    (xdc_Char)0x72,  /* [1873] */
    (xdc_Char)0x69,  /* [1874] */
    (xdc_Char)0x74,  /* [1875] */
    (xdc_Char)0x79,  /* [1876] */
    (xdc_Char)0x20,  /* [1877] */
    (xdc_Char)0x77,  /* [1878] */
    (xdc_Char)0x61,  /* [1879] */
    (xdc_Char)0x73,  /* [1880] */
    (xdc_Char)0x20,  /* [1881] */
    (xdc_Char)0x75,  /* [1882] */
    (xdc_Char)0x73,  /* [1883] */
    (xdc_Char)0x65,  /* [1884] */
    (xdc_Char)0x64,  /* [1885] */
    (xdc_Char)0x2e,  /* [1886] */
    (xdc_Char)0x0,  /* [1887] */
    (xdc_Char)0x41,  /* [1888] */
    (xdc_Char)0x5f,  /* [1889] */
    (xdc_Char)0x62,  /* [1890] */
    (xdc_Char)0x61,  /* [1891] */
    (xdc_Char)0x64,  /* [1892] */
    (xdc_Char)0x54,  /* [1893] */
    (xdc_Char)0x69,  /* [1894] */
    (xdc_Char)0x6d,  /* [1895] */
    (xdc_Char)0x65,  /* [1896] */
    (xdc_Char)0x6f,  /* [1897] */
    (xdc_Char)0x75,  /* [1898] */
    (xdc_Char)0x74,  /* [1899] */
    (xdc_Char)0x3a,  /* [1900] */
    (xdc_Char)0x20,  /* [1901] */
    (xdc_Char)0x43,  /* [1902] */
    (xdc_Char)0x61,  /* [1903] */
    (xdc_Char)0x6e,  /* [1904] */
    (xdc_Char)0x27,  /* [1905] */
    (xdc_Char)0x74,  /* [1906] */
    (xdc_Char)0x20,  /* [1907] */
    (xdc_Char)0x73,  /* [1908] */
    (xdc_Char)0x6c,  /* [1909] */
    (xdc_Char)0x65,  /* [1910] */
    (xdc_Char)0x65,  /* [1911] */
    (xdc_Char)0x70,  /* [1912] */
    (xdc_Char)0x20,  /* [1913] */
    (xdc_Char)0x46,  /* [1914] */
    (xdc_Char)0x4f,  /* [1915] */
    (xdc_Char)0x52,  /* [1916] */
    (xdc_Char)0x45,  /* [1917] */
    (xdc_Char)0x56,  /* [1918] */
    (xdc_Char)0x45,  /* [1919] */
    (xdc_Char)0x52,  /* [1920] */
    (xdc_Char)0x2e,  /* [1921] */
    (xdc_Char)0x0,  /* [1922] */
    (xdc_Char)0x41,  /* [1923] */
    (xdc_Char)0x5f,  /* [1924] */
    (xdc_Char)0x62,  /* [1925] */
    (xdc_Char)0x61,  /* [1926] */
    (xdc_Char)0x64,  /* [1927] */
    (xdc_Char)0x41,  /* [1928] */
    (xdc_Char)0x66,  /* [1929] */
    (xdc_Char)0x66,  /* [1930] */
    (xdc_Char)0x69,  /* [1931] */
    (xdc_Char)0x6e,  /* [1932] */
    (xdc_Char)0x69,  /* [1933] */
    (xdc_Char)0x74,  /* [1934] */
    (xdc_Char)0x79,  /* [1935] */
    (xdc_Char)0x3a,  /* [1936] */
    (xdc_Char)0x20,  /* [1937] */
    (xdc_Char)0x49,  /* [1938] */
    (xdc_Char)0x6e,  /* [1939] */
    (xdc_Char)0x76,  /* [1940] */
    (xdc_Char)0x61,  /* [1941] */
    (xdc_Char)0x6c,  /* [1942] */
    (xdc_Char)0x69,  /* [1943] */
    (xdc_Char)0x64,  /* [1944] */
    (xdc_Char)0x20,  /* [1945] */
    (xdc_Char)0x61,  /* [1946] */
    (xdc_Char)0x66,  /* [1947] */
    (xdc_Char)0x66,  /* [1948] */
    (xdc_Char)0x69,  /* [1949] */
    (xdc_Char)0x6e,  /* [1950] */
    (xdc_Char)0x69,  /* [1951] */
    (xdc_Char)0x74,  /* [1952] */
    (xdc_Char)0x79,  /* [1953] */
    (xdc_Char)0x2e,  /* [1954] */
    (xdc_Char)0x0,  /* [1955] */
    (xdc_Char)0x41,  /* [1956] */
    (xdc_Char)0x5f,  /* [1957] */
    (xdc_Char)0x73,  /* [1958] */
    (xdc_Char)0x6c,  /* [1959] */
    (xdc_Char)0x65,  /* [1960] */
    (xdc_Char)0x65,  /* [1961] */
    (xdc_Char)0x70,  /* [1962] */
    (xdc_Char)0x54,  /* [1963] */
    (xdc_Char)0x61,  /* [1964] */
    (xdc_Char)0x73,  /* [1965] */
    (xdc_Char)0x6b,  /* [1966] */
    (xdc_Char)0x44,  /* [1967] */
    (xdc_Char)0x69,  /* [1968] */
    (xdc_Char)0x73,  /* [1969] */
    (xdc_Char)0x61,  /* [1970] */
    (xdc_Char)0x62,  /* [1971] */
    (xdc_Char)0x6c,  /* [1972] */
    (xdc_Char)0x65,  /* [1973] */
    (xdc_Char)0x64,  /* [1974] */
    (xdc_Char)0x3a,  /* [1975] */
    (xdc_Char)0x20,  /* [1976] */
    (xdc_Char)0x43,  /* [1977] */
    (xdc_Char)0x61,  /* [1978] */
    (xdc_Char)0x6e,  /* [1979] */
    (xdc_Char)0x6e,  /* [1980] */
    (xdc_Char)0x6f,  /* [1981] */
    (xdc_Char)0x74,  /* [1982] */
    (xdc_Char)0x20,  /* [1983] */
    (xdc_Char)0x63,  /* [1984] */
    (xdc_Char)0x61,  /* [1985] */
    (xdc_Char)0x6c,  /* [1986] */
    (xdc_Char)0x6c,  /* [1987] */
    (xdc_Char)0x20,  /* [1988] */
    (xdc_Char)0x54,  /* [1989] */
    (xdc_Char)0x61,  /* [1990] */
    (xdc_Char)0x73,  /* [1991] */
    (xdc_Char)0x6b,  /* [1992] */
    (xdc_Char)0x5f,  /* [1993] */
    (xdc_Char)0x73,  /* [1994] */
    (xdc_Char)0x6c,  /* [1995] */
    (xdc_Char)0x65,  /* [1996] */
    (xdc_Char)0x65,  /* [1997] */
    (xdc_Char)0x70,  /* [1998] */
    (xdc_Char)0x28,  /* [1999] */
    (xdc_Char)0x29,  /* [2000] */
    (xdc_Char)0x20,  /* [2001] */
    (xdc_Char)0x77,  /* [2002] */
    (xdc_Char)0x68,  /* [2003] */
    (xdc_Char)0x69,  /* [2004] */
    (xdc_Char)0x6c,  /* [2005] */
    (xdc_Char)0x65,  /* [2006] */
    (xdc_Char)0x20,  /* [2007] */
    (xdc_Char)0x74,  /* [2008] */
    (xdc_Char)0x68,  /* [2009] */
    (xdc_Char)0x65,  /* [2010] */
    (xdc_Char)0x20,  /* [2011] */
    (xdc_Char)0x54,  /* [2012] */
    (xdc_Char)0x61,  /* [2013] */
    (xdc_Char)0x73,  /* [2014] */
    (xdc_Char)0x6b,  /* [2015] */
    (xdc_Char)0x20,  /* [2016] */
    (xdc_Char)0x73,  /* [2017] */
    (xdc_Char)0x63,  /* [2018] */
    (xdc_Char)0x68,  /* [2019] */
    (xdc_Char)0x65,  /* [2020] */
    (xdc_Char)0x64,  /* [2021] */
    (xdc_Char)0x75,  /* [2022] */
    (xdc_Char)0x6c,  /* [2023] */
    (xdc_Char)0x65,  /* [2024] */
    (xdc_Char)0x72,  /* [2025] */
    (xdc_Char)0x20,  /* [2026] */
    (xdc_Char)0x69,  /* [2027] */
    (xdc_Char)0x73,  /* [2028] */
    (xdc_Char)0x20,  /* [2029] */
    (xdc_Char)0x64,  /* [2030] */
    (xdc_Char)0x69,  /* [2031] */
    (xdc_Char)0x73,  /* [2032] */
    (xdc_Char)0x61,  /* [2033] */
    (xdc_Char)0x62,  /* [2034] */
    (xdc_Char)0x6c,  /* [2035] */
    (xdc_Char)0x65,  /* [2036] */
    (xdc_Char)0x64,  /* [2037] */
    (xdc_Char)0x2e,  /* [2038] */
    (xdc_Char)0x0,  /* [2039] */
    (xdc_Char)0x41,  /* [2040] */
    (xdc_Char)0x5f,  /* [2041] */
    (xdc_Char)0x69,  /* [2042] */
    (xdc_Char)0x6e,  /* [2043] */
    (xdc_Char)0x76,  /* [2044] */
    (xdc_Char)0x61,  /* [2045] */
    (xdc_Char)0x6c,  /* [2046] */
    (xdc_Char)0x69,  /* [2047] */
    (xdc_Char)0x64,  /* [2048] */
    (xdc_Char)0x43,  /* [2049] */
    (xdc_Char)0x6f,  /* [2050] */
    (xdc_Char)0x72,  /* [2051] */
    (xdc_Char)0x65,  /* [2052] */
    (xdc_Char)0x49,  /* [2053] */
    (xdc_Char)0x64,  /* [2054] */
    (xdc_Char)0x3a,  /* [2055] */
    (xdc_Char)0x20,  /* [2056] */
    (xdc_Char)0x43,  /* [2057] */
    (xdc_Char)0x61,  /* [2058] */
    (xdc_Char)0x6e,  /* [2059] */
    (xdc_Char)0x6e,  /* [2060] */
    (xdc_Char)0x6f,  /* [2061] */
    (xdc_Char)0x74,  /* [2062] */
    (xdc_Char)0x20,  /* [2063] */
    (xdc_Char)0x70,  /* [2064] */
    (xdc_Char)0x61,  /* [2065] */
    (xdc_Char)0x73,  /* [2066] */
    (xdc_Char)0x73,  /* [2067] */
    (xdc_Char)0x20,  /* [2068] */
    (xdc_Char)0x61,  /* [2069] */
    (xdc_Char)0x20,  /* [2070] */
    (xdc_Char)0x6e,  /* [2071] */
    (xdc_Char)0x6f,  /* [2072] */
    (xdc_Char)0x6e,  /* [2073] */
    (xdc_Char)0x2d,  /* [2074] */
    (xdc_Char)0x7a,  /* [2075] */
    (xdc_Char)0x65,  /* [2076] */
    (xdc_Char)0x72,  /* [2077] */
    (xdc_Char)0x6f,  /* [2078] */
    (xdc_Char)0x20,  /* [2079] */
    (xdc_Char)0x43,  /* [2080] */
    (xdc_Char)0x6f,  /* [2081] */
    (xdc_Char)0x72,  /* [2082] */
    (xdc_Char)0x65,  /* [2083] */
    (xdc_Char)0x49,  /* [2084] */
    (xdc_Char)0x64,  /* [2085] */
    (xdc_Char)0x20,  /* [2086] */
    (xdc_Char)0x69,  /* [2087] */
    (xdc_Char)0x6e,  /* [2088] */
    (xdc_Char)0x20,  /* [2089] */
    (xdc_Char)0x61,  /* [2090] */
    (xdc_Char)0x20,  /* [2091] */
    (xdc_Char)0x6e,  /* [2092] */
    (xdc_Char)0x6f,  /* [2093] */
    (xdc_Char)0x6e,  /* [2094] */
    (xdc_Char)0x2d,  /* [2095] */
    (xdc_Char)0x53,  /* [2096] */
    (xdc_Char)0x4d,  /* [2097] */
    (xdc_Char)0x50,  /* [2098] */
    (xdc_Char)0x20,  /* [2099] */
    (xdc_Char)0x61,  /* [2100] */
    (xdc_Char)0x70,  /* [2101] */
    (xdc_Char)0x70,  /* [2102] */
    (xdc_Char)0x6c,  /* [2103] */
    (xdc_Char)0x69,  /* [2104] */
    (xdc_Char)0x63,  /* [2105] */
    (xdc_Char)0x61,  /* [2106] */
    (xdc_Char)0x74,  /* [2107] */
    (xdc_Char)0x69,  /* [2108] */
    (xdc_Char)0x6f,  /* [2109] */
    (xdc_Char)0x6e,  /* [2110] */
    (xdc_Char)0x2e,  /* [2111] */
    (xdc_Char)0x0,  /* [2112] */
    (xdc_Char)0x41,  /* [2113] */
    (xdc_Char)0x5f,  /* [2114] */
    (xdc_Char)0x7a,  /* [2115] */
    (xdc_Char)0x65,  /* [2116] */
    (xdc_Char)0x72,  /* [2117] */
    (xdc_Char)0x6f,  /* [2118] */
    (xdc_Char)0x54,  /* [2119] */
    (xdc_Char)0x69,  /* [2120] */
    (xdc_Char)0x6d,  /* [2121] */
    (xdc_Char)0x65,  /* [2122] */
    (xdc_Char)0x6f,  /* [2123] */
    (xdc_Char)0x75,  /* [2124] */
    (xdc_Char)0x74,  /* [2125] */
    (xdc_Char)0x3a,  /* [2126] */
    (xdc_Char)0x20,  /* [2127] */
    (xdc_Char)0x54,  /* [2128] */
    (xdc_Char)0x69,  /* [2129] */
    (xdc_Char)0x6d,  /* [2130] */
    (xdc_Char)0x65,  /* [2131] */
    (xdc_Char)0x6f,  /* [2132] */
    (xdc_Char)0x75,  /* [2133] */
    (xdc_Char)0x74,  /* [2134] */
    (xdc_Char)0x20,  /* [2135] */
    (xdc_Char)0x76,  /* [2136] */
    (xdc_Char)0x61,  /* [2137] */
    (xdc_Char)0x6c,  /* [2138] */
    (xdc_Char)0x75,  /* [2139] */
    (xdc_Char)0x65,  /* [2140] */
    (xdc_Char)0x20,  /* [2141] */
    (xdc_Char)0x61,  /* [2142] */
    (xdc_Char)0x6e,  /* [2143] */
    (xdc_Char)0x6e,  /* [2144] */
    (xdc_Char)0x6f,  /* [2145] */
    (xdc_Char)0x74,  /* [2146] */
    (xdc_Char)0x20,  /* [2147] */
    (xdc_Char)0x62,  /* [2148] */
    (xdc_Char)0x65,  /* [2149] */
    (xdc_Char)0x20,  /* [2150] */
    (xdc_Char)0x7a,  /* [2151] */
    (xdc_Char)0x65,  /* [2152] */
    (xdc_Char)0x72,  /* [2153] */
    (xdc_Char)0x6f,  /* [2154] */
    (xdc_Char)0x0,  /* [2155] */
    (xdc_Char)0x41,  /* [2156] */
    (xdc_Char)0x5f,  /* [2157] */
    (xdc_Char)0x69,  /* [2158] */
    (xdc_Char)0x6e,  /* [2159] */
    (xdc_Char)0x76,  /* [2160] */
    (xdc_Char)0x61,  /* [2161] */
    (xdc_Char)0x6c,  /* [2162] */
    (xdc_Char)0x69,  /* [2163] */
    (xdc_Char)0x64,  /* [2164] */
    (xdc_Char)0x4b,  /* [2165] */
    (xdc_Char)0x65,  /* [2166] */
    (xdc_Char)0x79,  /* [2167] */
    (xdc_Char)0x3a,  /* [2168] */
    (xdc_Char)0x20,  /* [2169] */
    (xdc_Char)0x74,  /* [2170] */
    (xdc_Char)0x68,  /* [2171] */
    (xdc_Char)0x65,  /* [2172] */
    (xdc_Char)0x20,  /* [2173] */
    (xdc_Char)0x6b,  /* [2174] */
    (xdc_Char)0x65,  /* [2175] */
    (xdc_Char)0x79,  /* [2176] */
    (xdc_Char)0x20,  /* [2177] */
    (xdc_Char)0x6d,  /* [2178] */
    (xdc_Char)0x75,  /* [2179] */
    (xdc_Char)0x73,  /* [2180] */
    (xdc_Char)0x74,  /* [2181] */
    (xdc_Char)0x20,  /* [2182] */
    (xdc_Char)0x62,  /* [2183] */
    (xdc_Char)0x65,  /* [2184] */
    (xdc_Char)0x20,  /* [2185] */
    (xdc_Char)0x73,  /* [2186] */
    (xdc_Char)0x65,  /* [2187] */
    (xdc_Char)0x74,  /* [2188] */
    (xdc_Char)0x20,  /* [2189] */
    (xdc_Char)0x74,  /* [2190] */
    (xdc_Char)0x6f,  /* [2191] */
    (xdc_Char)0x20,  /* [2192] */
    (xdc_Char)0x61,  /* [2193] */
    (xdc_Char)0x20,  /* [2194] */
    (xdc_Char)0x6e,  /* [2195] */
    (xdc_Char)0x6f,  /* [2196] */
    (xdc_Char)0x6e,  /* [2197] */
    (xdc_Char)0x2d,  /* [2198] */
    (xdc_Char)0x64,  /* [2199] */
    (xdc_Char)0x65,  /* [2200] */
    (xdc_Char)0x66,  /* [2201] */
    (xdc_Char)0x61,  /* [2202] */
    (xdc_Char)0x75,  /* [2203] */
    (xdc_Char)0x6c,  /* [2204] */
    (xdc_Char)0x74,  /* [2205] */
    (xdc_Char)0x20,  /* [2206] */
    (xdc_Char)0x76,  /* [2207] */
    (xdc_Char)0x61,  /* [2208] */
    (xdc_Char)0x6c,  /* [2209] */
    (xdc_Char)0x75,  /* [2210] */
    (xdc_Char)0x65,  /* [2211] */
    (xdc_Char)0x0,  /* [2212] */
    (xdc_Char)0x41,  /* [2213] */
    (xdc_Char)0x5f,  /* [2214] */
    (xdc_Char)0x6e,  /* [2215] */
    (xdc_Char)0x75,  /* [2216] */
    (xdc_Char)0x6c,  /* [2217] */
    (xdc_Char)0x6c,  /* [2218] */
    (xdc_Char)0x48,  /* [2219] */
    (xdc_Char)0x61,  /* [2220] */
    (xdc_Char)0x6e,  /* [2221] */
    (xdc_Char)0x64,  /* [2222] */
    (xdc_Char)0x6c,  /* [2223] */
    (xdc_Char)0x65,  /* [2224] */
    (xdc_Char)0x3a,  /* [2225] */
    (xdc_Char)0x20,  /* [2226] */
    (xdc_Char)0x4e,  /* [2227] */
    (xdc_Char)0x75,  /* [2228] */
    (xdc_Char)0x6c,  /* [2229] */
    (xdc_Char)0x6c,  /* [2230] */
    (xdc_Char)0x20,  /* [2231] */
    (xdc_Char)0x68,  /* [2232] */
    (xdc_Char)0x61,  /* [2233] */
    (xdc_Char)0x6e,  /* [2234] */
    (xdc_Char)0x64,  /* [2235] */
    (xdc_Char)0x6c,  /* [2236] */
    (xdc_Char)0x65,  /* [2237] */
    (xdc_Char)0x20,  /* [2238] */
    (xdc_Char)0x70,  /* [2239] */
    (xdc_Char)0x61,  /* [2240] */
    (xdc_Char)0x73,  /* [2241] */
    (xdc_Char)0x73,  /* [2242] */
    (xdc_Char)0x65,  /* [2243] */
    (xdc_Char)0x64,  /* [2244] */
    (xdc_Char)0x20,  /* [2245] */
    (xdc_Char)0x74,  /* [2246] */
    (xdc_Char)0x6f,  /* [2247] */
    (xdc_Char)0x20,  /* [2248] */
    (xdc_Char)0x63,  /* [2249] */
    (xdc_Char)0x72,  /* [2250] */
    (xdc_Char)0x65,  /* [2251] */
    (xdc_Char)0x61,  /* [2252] */
    (xdc_Char)0x74,  /* [2253] */
    (xdc_Char)0x65,  /* [2254] */
    (xdc_Char)0x0,  /* [2255] */
    (xdc_Char)0x41,  /* [2256] */
    (xdc_Char)0x5f,  /* [2257] */
    (xdc_Char)0x49,  /* [2258] */
    (xdc_Char)0x70,  /* [2259] */
    (xdc_Char)0x63,  /* [2260] */
    (xdc_Char)0x4d,  /* [2261] */
    (xdc_Char)0x50,  /* [2262] */
    (xdc_Char)0x46,  /* [2263] */
    (xdc_Char)0x61,  /* [2264] */
    (xdc_Char)0x69,  /* [2265] */
    (xdc_Char)0x6c,  /* [2266] */
    (xdc_Char)0x75,  /* [2267] */
    (xdc_Char)0x72,  /* [2268] */
    (xdc_Char)0x65,  /* [2269] */
    (xdc_Char)0x3a,  /* [2270] */
    (xdc_Char)0x20,  /* [2271] */
    (xdc_Char)0x55,  /* [2272] */
    (xdc_Char)0x6e,  /* [2273] */
    (xdc_Char)0x65,  /* [2274] */
    (xdc_Char)0x78,  /* [2275] */
    (xdc_Char)0x70,  /* [2276] */
    (xdc_Char)0x65,  /* [2277] */
    (xdc_Char)0x63,  /* [2278] */
    (xdc_Char)0x74,  /* [2279] */
    (xdc_Char)0x65,  /* [2280] */
    (xdc_Char)0x64,  /* [2281] */
    (xdc_Char)0x20,  /* [2282] */
    (xdc_Char)0x66,  /* [2283] */
    (xdc_Char)0x61,  /* [2284] */
    (xdc_Char)0x69,  /* [2285] */
    (xdc_Char)0x6c,  /* [2286] */
    (xdc_Char)0x75,  /* [2287] */
    (xdc_Char)0x72,  /* [2288] */
    (xdc_Char)0x65,  /* [2289] */
    (xdc_Char)0x20,  /* [2290] */
    (xdc_Char)0x77,  /* [2291] */
    (xdc_Char)0x69,  /* [2292] */
    (xdc_Char)0x74,  /* [2293] */
    (xdc_Char)0x68,  /* [2294] */
    (xdc_Char)0x20,  /* [2295] */
    (xdc_Char)0x74,  /* [2296] */
    (xdc_Char)0x68,  /* [2297] */
    (xdc_Char)0x65,  /* [2298] */
    (xdc_Char)0x20,  /* [2299] */
    (xdc_Char)0x49,  /* [2300] */
    (xdc_Char)0x70,  /* [2301] */
    (xdc_Char)0x63,  /* [2302] */
    (xdc_Char)0x4d,  /* [2303] */
    (xdc_Char)0x50,  /* [2304] */
    (xdc_Char)0x0,  /* [2305] */
    (xdc_Char)0x4c,  /* [2306] */
    (xdc_Char)0x6f,  /* [2307] */
    (xdc_Char)0x67,  /* [2308] */
    (xdc_Char)0x67,  /* [2309] */
    (xdc_Char)0x65,  /* [2310] */
    (xdc_Char)0x72,  /* [2311] */
    (xdc_Char)0x53,  /* [2312] */
    (xdc_Char)0x74,  /* [2313] */
    (xdc_Char)0x72,  /* [2314] */
    (xdc_Char)0x65,  /* [2315] */
    (xdc_Char)0x61,  /* [2316] */
    (xdc_Char)0x6d,  /* [2317] */
    (xdc_Char)0x65,  /* [2318] */
    (xdc_Char)0x72,  /* [2319] */
    (xdc_Char)0x32,  /* [2320] */
    (xdc_Char)0x5f,  /* [2321] */
    (xdc_Char)0x63,  /* [2322] */
    (xdc_Char)0x72,  /* [2323] */
    (xdc_Char)0x65,  /* [2324] */
    (xdc_Char)0x61,  /* [2325] */
    (xdc_Char)0x74,  /* [2326] */
    (xdc_Char)0x65,  /* [2327] */
    (xdc_Char)0x27,  /* [2328] */
    (xdc_Char)0x73,  /* [2329] */
    (xdc_Char)0x20,  /* [2330] */
    (xdc_Char)0x62,  /* [2331] */
    (xdc_Char)0x75,  /* [2332] */
    (xdc_Char)0x66,  /* [2333] */
    (xdc_Char)0x66,  /* [2334] */
    (xdc_Char)0x65,  /* [2335] */
    (xdc_Char)0x72,  /* [2336] */
    (xdc_Char)0x20,  /* [2337] */
    (xdc_Char)0x72,  /* [2338] */
    (xdc_Char)0x65,  /* [2339] */
    (xdc_Char)0x74,  /* [2340] */
    (xdc_Char)0x75,  /* [2341] */
    (xdc_Char)0x72,  /* [2342] */
    (xdc_Char)0x6e,  /* [2343] */
    (xdc_Char)0x65,  /* [2344] */
    (xdc_Char)0x64,  /* [2345] */
    (xdc_Char)0x20,  /* [2346] */
    (xdc_Char)0x62,  /* [2347] */
    (xdc_Char)0x79,  /* [2348] */
    (xdc_Char)0x20,  /* [2349] */
    (xdc_Char)0x70,  /* [2350] */
    (xdc_Char)0x72,  /* [2351] */
    (xdc_Char)0x69,  /* [2352] */
    (xdc_Char)0x6d,  /* [2353] */
    (xdc_Char)0x65,  /* [2354] */
    (xdc_Char)0x46,  /* [2355] */
    (xdc_Char)0x78,  /* [2356] */
    (xdc_Char)0x6e,  /* [2357] */
    (xdc_Char)0x20,  /* [2358] */
    (xdc_Char)0x69,  /* [2359] */
    (xdc_Char)0x73,  /* [2360] */
    (xdc_Char)0x20,  /* [2361] */
    (xdc_Char)0x4e,  /* [2362] */
    (xdc_Char)0x55,  /* [2363] */
    (xdc_Char)0x4c,  /* [2364] */
    (xdc_Char)0x4c,  /* [2365] */
    (xdc_Char)0x0,  /* [2366] */
    (xdc_Char)0x62,  /* [2367] */
    (xdc_Char)0x75,  /* [2368] */
    (xdc_Char)0x66,  /* [2369] */
    (xdc_Char)0x20,  /* [2370] */
    (xdc_Char)0x70,  /* [2371] */
    (xdc_Char)0x61,  /* [2372] */
    (xdc_Char)0x72,  /* [2373] */
    (xdc_Char)0x61,  /* [2374] */
    (xdc_Char)0x6d,  /* [2375] */
    (xdc_Char)0x65,  /* [2376] */
    (xdc_Char)0x74,  /* [2377] */
    (xdc_Char)0x65,  /* [2378] */
    (xdc_Char)0x72,  /* [2379] */
    (xdc_Char)0x20,  /* [2380] */
    (xdc_Char)0x63,  /* [2381] */
    (xdc_Char)0x61,  /* [2382] */
    (xdc_Char)0x6e,  /* [2383] */
    (xdc_Char)0x6e,  /* [2384] */
    (xdc_Char)0x6f,  /* [2385] */
    (xdc_Char)0x74,  /* [2386] */
    (xdc_Char)0x20,  /* [2387] */
    (xdc_Char)0x62,  /* [2388] */
    (xdc_Char)0x65,  /* [2389] */
    (xdc_Char)0x20,  /* [2390] */
    (xdc_Char)0x6e,  /* [2391] */
    (xdc_Char)0x75,  /* [2392] */
    (xdc_Char)0x6c,  /* [2393] */
    (xdc_Char)0x6c,  /* [2394] */
    (xdc_Char)0x0,  /* [2395] */
    (xdc_Char)0x62,  /* [2396] */
    (xdc_Char)0x75,  /* [2397] */
    (xdc_Char)0x66,  /* [2398] */
    (xdc_Char)0x20,  /* [2399] */
    (xdc_Char)0x6e,  /* [2400] */
    (xdc_Char)0x6f,  /* [2401] */
    (xdc_Char)0x74,  /* [2402] */
    (xdc_Char)0x20,  /* [2403] */
    (xdc_Char)0x70,  /* [2404] */
    (xdc_Char)0x72,  /* [2405] */
    (xdc_Char)0x6f,  /* [2406] */
    (xdc_Char)0x70,  /* [2407] */
    (xdc_Char)0x65,  /* [2408] */
    (xdc_Char)0x72,  /* [2409] */
    (xdc_Char)0x6c,  /* [2410] */
    (xdc_Char)0x79,  /* [2411] */
    (xdc_Char)0x20,  /* [2412] */
    (xdc_Char)0x61,  /* [2413] */
    (xdc_Char)0x6c,  /* [2414] */
    (xdc_Char)0x69,  /* [2415] */
    (xdc_Char)0x67,  /* [2416] */
    (xdc_Char)0x6e,  /* [2417] */
    (xdc_Char)0x65,  /* [2418] */
    (xdc_Char)0x64,  /* [2419] */
    (xdc_Char)0x0,  /* [2420] */
    (xdc_Char)0x61,  /* [2421] */
    (xdc_Char)0x6c,  /* [2422] */
    (xdc_Char)0x69,  /* [2423] */
    (xdc_Char)0x67,  /* [2424] */
    (xdc_Char)0x6e,  /* [2425] */
    (xdc_Char)0x20,  /* [2426] */
    (xdc_Char)0x70,  /* [2427] */
    (xdc_Char)0x61,  /* [2428] */
    (xdc_Char)0x72,  /* [2429] */
    (xdc_Char)0x61,  /* [2430] */
    (xdc_Char)0x6d,  /* [2431] */
    (xdc_Char)0x65,  /* [2432] */
    (xdc_Char)0x74,  /* [2433] */
    (xdc_Char)0x65,  /* [2434] */
    (xdc_Char)0x72,  /* [2435] */
    (xdc_Char)0x20,  /* [2436] */
    (xdc_Char)0x6d,  /* [2437] */
    (xdc_Char)0x75,  /* [2438] */
    (xdc_Char)0x73,  /* [2439] */
    (xdc_Char)0x74,  /* [2440] */
    (xdc_Char)0x20,  /* [2441] */
    (xdc_Char)0x62,  /* [2442] */
    (xdc_Char)0x65,  /* [2443] */
    (xdc_Char)0x20,  /* [2444] */
    (xdc_Char)0x30,  /* [2445] */
    (xdc_Char)0x20,  /* [2446] */
    (xdc_Char)0x6f,  /* [2447] */
    (xdc_Char)0x72,  /* [2448] */
    (xdc_Char)0x20,  /* [2449] */
    (xdc_Char)0x61,  /* [2450] */
    (xdc_Char)0x20,  /* [2451] */
    (xdc_Char)0x70,  /* [2452] */
    (xdc_Char)0x6f,  /* [2453] */
    (xdc_Char)0x77,  /* [2454] */
    (xdc_Char)0x65,  /* [2455] */
    (xdc_Char)0x72,  /* [2456] */
    (xdc_Char)0x20,  /* [2457] */
    (xdc_Char)0x6f,  /* [2458] */
    (xdc_Char)0x66,  /* [2459] */
    (xdc_Char)0x20,  /* [2460] */
    (xdc_Char)0x32,  /* [2461] */
    (xdc_Char)0x20,  /* [2462] */
    (xdc_Char)0x3e,  /* [2463] */
    (xdc_Char)0x3d,  /* [2464] */
    (xdc_Char)0x20,  /* [2465] */
    (xdc_Char)0x74,  /* [2466] */
    (xdc_Char)0x68,  /* [2467] */
    (xdc_Char)0x65,  /* [2468] */
    (xdc_Char)0x20,  /* [2469] */
    (xdc_Char)0x76,  /* [2470] */
    (xdc_Char)0x61,  /* [2471] */
    (xdc_Char)0x6c,  /* [2472] */
    (xdc_Char)0x75,  /* [2473] */
    (xdc_Char)0x65,  /* [2474] */
    (xdc_Char)0x20,  /* [2475] */
    (xdc_Char)0x6f,  /* [2476] */
    (xdc_Char)0x66,  /* [2477] */
    (xdc_Char)0x20,  /* [2478] */
    (xdc_Char)0x4d,  /* [2479] */
    (xdc_Char)0x65,  /* [2480] */
    (xdc_Char)0x6d,  /* [2481] */
    (xdc_Char)0x6f,  /* [2482] */
    (xdc_Char)0x72,  /* [2483] */
    (xdc_Char)0x79,  /* [2484] */
    (xdc_Char)0x5f,  /* [2485] */
    (xdc_Char)0x67,  /* [2486] */
    (xdc_Char)0x65,  /* [2487] */
    (xdc_Char)0x74,  /* [2488] */
    (xdc_Char)0x4d,  /* [2489] */
    (xdc_Char)0x61,  /* [2490] */
    (xdc_Char)0x78,  /* [2491] */
    (xdc_Char)0x44,  /* [2492] */
    (xdc_Char)0x65,  /* [2493] */
    (xdc_Char)0x66,  /* [2494] */
    (xdc_Char)0x61,  /* [2495] */
    (xdc_Char)0x75,  /* [2496] */
    (xdc_Char)0x6c,  /* [2497] */
    (xdc_Char)0x74,  /* [2498] */
    (xdc_Char)0x54,  /* [2499] */
    (xdc_Char)0x79,  /* [2500] */
    (xdc_Char)0x70,  /* [2501] */
    (xdc_Char)0x65,  /* [2502] */
    (xdc_Char)0x41,  /* [2503] */
    (xdc_Char)0x6c,  /* [2504] */
    (xdc_Char)0x69,  /* [2505] */
    (xdc_Char)0x67,  /* [2506] */
    (xdc_Char)0x6e,  /* [2507] */
    (xdc_Char)0x28,  /* [2508] */
    (xdc_Char)0x29,  /* [2509] */
    (xdc_Char)0x0,  /* [2510] */
    (xdc_Char)0x61,  /* [2511] */
    (xdc_Char)0x6c,  /* [2512] */
    (xdc_Char)0x69,  /* [2513] */
    (xdc_Char)0x67,  /* [2514] */
    (xdc_Char)0x6e,  /* [2515] */
    (xdc_Char)0x20,  /* [2516] */
    (xdc_Char)0x70,  /* [2517] */
    (xdc_Char)0x61,  /* [2518] */
    (xdc_Char)0x72,  /* [2519] */
    (xdc_Char)0x61,  /* [2520] */
    (xdc_Char)0x6d,  /* [2521] */
    (xdc_Char)0x65,  /* [2522] */
    (xdc_Char)0x74,  /* [2523] */
    (xdc_Char)0x65,  /* [2524] */
    (xdc_Char)0x72,  /* [2525] */
    (xdc_Char)0x20,  /* [2526] */
    (xdc_Char)0x31,  /* [2527] */
    (xdc_Char)0x29,  /* [2528] */
    (xdc_Char)0x20,  /* [2529] */
    (xdc_Char)0x6d,  /* [2530] */
    (xdc_Char)0x75,  /* [2531] */
    (xdc_Char)0x73,  /* [2532] */
    (xdc_Char)0x74,  /* [2533] */
    (xdc_Char)0x20,  /* [2534] */
    (xdc_Char)0x62,  /* [2535] */
    (xdc_Char)0x65,  /* [2536] */
    (xdc_Char)0x20,  /* [2537] */
    (xdc_Char)0x30,  /* [2538] */
    (xdc_Char)0x20,  /* [2539] */
    (xdc_Char)0x6f,  /* [2540] */
    (xdc_Char)0x72,  /* [2541] */
    (xdc_Char)0x20,  /* [2542] */
    (xdc_Char)0x61,  /* [2543] */
    (xdc_Char)0x20,  /* [2544] */
    (xdc_Char)0x70,  /* [2545] */
    (xdc_Char)0x6f,  /* [2546] */
    (xdc_Char)0x77,  /* [2547] */
    (xdc_Char)0x65,  /* [2548] */
    (xdc_Char)0x72,  /* [2549] */
    (xdc_Char)0x20,  /* [2550] */
    (xdc_Char)0x6f,  /* [2551] */
    (xdc_Char)0x66,  /* [2552] */
    (xdc_Char)0x20,  /* [2553] */
    (xdc_Char)0x32,  /* [2554] */
    (xdc_Char)0x20,  /* [2555] */
    (xdc_Char)0x61,  /* [2556] */
    (xdc_Char)0x6e,  /* [2557] */
    (xdc_Char)0x64,  /* [2558] */
    (xdc_Char)0x20,  /* [2559] */
    (xdc_Char)0x32,  /* [2560] */
    (xdc_Char)0x29,  /* [2561] */
    (xdc_Char)0x20,  /* [2562] */
    (xdc_Char)0x6e,  /* [2563] */
    (xdc_Char)0x6f,  /* [2564] */
    (xdc_Char)0x74,  /* [2565] */
    (xdc_Char)0x20,  /* [2566] */
    (xdc_Char)0x67,  /* [2567] */
    (xdc_Char)0x72,  /* [2568] */
    (xdc_Char)0x65,  /* [2569] */
    (xdc_Char)0x61,  /* [2570] */
    (xdc_Char)0x74,  /* [2571] */
    (xdc_Char)0x65,  /* [2572] */
    (xdc_Char)0x72,  /* [2573] */
    (xdc_Char)0x20,  /* [2574] */
    (xdc_Char)0x74,  /* [2575] */
    (xdc_Char)0x68,  /* [2576] */
    (xdc_Char)0x61,  /* [2577] */
    (xdc_Char)0x6e,  /* [2578] */
    (xdc_Char)0x20,  /* [2579] */
    (xdc_Char)0x74,  /* [2580] */
    (xdc_Char)0x68,  /* [2581] */
    (xdc_Char)0x65,  /* [2582] */
    (xdc_Char)0x20,  /* [2583] */
    (xdc_Char)0x68,  /* [2584] */
    (xdc_Char)0x65,  /* [2585] */
    (xdc_Char)0x61,  /* [2586] */
    (xdc_Char)0x70,  /* [2587] */
    (xdc_Char)0x73,  /* [2588] */
    (xdc_Char)0x20,  /* [2589] */
    (xdc_Char)0x61,  /* [2590] */
    (xdc_Char)0x6c,  /* [2591] */
    (xdc_Char)0x69,  /* [2592] */
    (xdc_Char)0x67,  /* [2593] */
    (xdc_Char)0x6e,  /* [2594] */
    (xdc_Char)0x6d,  /* [2595] */
    (xdc_Char)0x65,  /* [2596] */
    (xdc_Char)0x6e,  /* [2597] */
    (xdc_Char)0x74,  /* [2598] */
    (xdc_Char)0x0,  /* [2599] */
    (xdc_Char)0x62,  /* [2600] */
    (xdc_Char)0x6c,  /* [2601] */
    (xdc_Char)0x6f,  /* [2602] */
    (xdc_Char)0x63,  /* [2603] */
    (xdc_Char)0x6b,  /* [2604] */
    (xdc_Char)0x53,  /* [2605] */
    (xdc_Char)0x69,  /* [2606] */
    (xdc_Char)0x7a,  /* [2607] */
    (xdc_Char)0x65,  /* [2608] */
    (xdc_Char)0x20,  /* [2609] */
    (xdc_Char)0x6d,  /* [2610] */
    (xdc_Char)0x75,  /* [2611] */
    (xdc_Char)0x73,  /* [2612] */
    (xdc_Char)0x74,  /* [2613] */
    (xdc_Char)0x20,  /* [2614] */
    (xdc_Char)0x62,  /* [2615] */
    (xdc_Char)0x65,  /* [2616] */
    (xdc_Char)0x20,  /* [2617] */
    (xdc_Char)0x6c,  /* [2618] */
    (xdc_Char)0x61,  /* [2619] */
    (xdc_Char)0x72,  /* [2620] */
    (xdc_Char)0x67,  /* [2621] */
    (xdc_Char)0x65,  /* [2622] */
    (xdc_Char)0x20,  /* [2623] */
    (xdc_Char)0x65,  /* [2624] */
    (xdc_Char)0x6e,  /* [2625] */
    (xdc_Char)0x6f,  /* [2626] */
    (xdc_Char)0x75,  /* [2627] */
    (xdc_Char)0x67,  /* [2628] */
    (xdc_Char)0x68,  /* [2629] */
    (xdc_Char)0x20,  /* [2630] */
    (xdc_Char)0x74,  /* [2631] */
    (xdc_Char)0x6f,  /* [2632] */
    (xdc_Char)0x20,  /* [2633] */
    (xdc_Char)0x68,  /* [2634] */
    (xdc_Char)0x6f,  /* [2635] */
    (xdc_Char)0x6c,  /* [2636] */
    (xdc_Char)0x64,  /* [2637] */
    (xdc_Char)0x20,  /* [2638] */
    (xdc_Char)0x61,  /* [2639] */
    (xdc_Char)0x74,  /* [2640] */
    (xdc_Char)0x6c,  /* [2641] */
    (xdc_Char)0x65,  /* [2642] */
    (xdc_Char)0x61,  /* [2643] */
    (xdc_Char)0x73,  /* [2644] */
    (xdc_Char)0x74,  /* [2645] */
    (xdc_Char)0x20,  /* [2646] */
    (xdc_Char)0x74,  /* [2647] */
    (xdc_Char)0x77,  /* [2648] */
    (xdc_Char)0x6f,  /* [2649] */
    (xdc_Char)0x20,  /* [2650] */
    (xdc_Char)0x70,  /* [2651] */
    (xdc_Char)0x6f,  /* [2652] */
    (xdc_Char)0x69,  /* [2653] */
    (xdc_Char)0x6e,  /* [2654] */
    (xdc_Char)0x74,  /* [2655] */
    (xdc_Char)0x65,  /* [2656] */
    (xdc_Char)0x72,  /* [2657] */
    (xdc_Char)0x73,  /* [2658] */
    (xdc_Char)0x0,  /* [2659] */
    (xdc_Char)0x6e,  /* [2660] */
    (xdc_Char)0x75,  /* [2661] */
    (xdc_Char)0x6d,  /* [2662] */
    (xdc_Char)0x42,  /* [2663] */
    (xdc_Char)0x6c,  /* [2664] */
    (xdc_Char)0x6f,  /* [2665] */
    (xdc_Char)0x63,  /* [2666] */
    (xdc_Char)0x6b,  /* [2667] */
    (xdc_Char)0x73,  /* [2668] */
    (xdc_Char)0x20,  /* [2669] */
    (xdc_Char)0x63,  /* [2670] */
    (xdc_Char)0x61,  /* [2671] */
    (xdc_Char)0x6e,  /* [2672] */
    (xdc_Char)0x6e,  /* [2673] */
    (xdc_Char)0x6f,  /* [2674] */
    (xdc_Char)0x74,  /* [2675] */
    (xdc_Char)0x20,  /* [2676] */
    (xdc_Char)0x62,  /* [2677] */
    (xdc_Char)0x65,  /* [2678] */
    (xdc_Char)0x20,  /* [2679] */
    (xdc_Char)0x7a,  /* [2680] */
    (xdc_Char)0x65,  /* [2681] */
    (xdc_Char)0x72,  /* [2682] */
    (xdc_Char)0x6f,  /* [2683] */
    (xdc_Char)0x0,  /* [2684] */
    (xdc_Char)0x62,  /* [2685] */
    (xdc_Char)0x75,  /* [2686] */
    (xdc_Char)0x66,  /* [2687] */
    (xdc_Char)0x53,  /* [2688] */
    (xdc_Char)0x69,  /* [2689] */
    (xdc_Char)0x7a,  /* [2690] */
    (xdc_Char)0x65,  /* [2691] */
    (xdc_Char)0x20,  /* [2692] */
    (xdc_Char)0x63,  /* [2693] */
    (xdc_Char)0x61,  /* [2694] */
    (xdc_Char)0x6e,  /* [2695] */
    (xdc_Char)0x6e,  /* [2696] */
    (xdc_Char)0x6f,  /* [2697] */
    (xdc_Char)0x74,  /* [2698] */
    (xdc_Char)0x20,  /* [2699] */
    (xdc_Char)0x62,  /* [2700] */
    (xdc_Char)0x65,  /* [2701] */
    (xdc_Char)0x20,  /* [2702] */
    (xdc_Char)0x7a,  /* [2703] */
    (xdc_Char)0x65,  /* [2704] */
    (xdc_Char)0x72,  /* [2705] */
    (xdc_Char)0x6f,  /* [2706] */
    (xdc_Char)0x0,  /* [2707] */
    (xdc_Char)0x48,  /* [2708] */
    (xdc_Char)0x65,  /* [2709] */
    (xdc_Char)0x61,  /* [2710] */
    (xdc_Char)0x70,  /* [2711] */
    (xdc_Char)0x42,  /* [2712] */
    (xdc_Char)0x75,  /* [2713] */
    (xdc_Char)0x66,  /* [2714] */
    (xdc_Char)0x5f,  /* [2715] */
    (xdc_Char)0x63,  /* [2716] */
    (xdc_Char)0x72,  /* [2717] */
    (xdc_Char)0x65,  /* [2718] */
    (xdc_Char)0x61,  /* [2719] */
    (xdc_Char)0x74,  /* [2720] */
    (xdc_Char)0x65,  /* [2721] */
    (xdc_Char)0x27,  /* [2722] */
    (xdc_Char)0x73,  /* [2723] */
    (xdc_Char)0x20,  /* [2724] */
    (xdc_Char)0x62,  /* [2725] */
    (xdc_Char)0x75,  /* [2726] */
    (xdc_Char)0x66,  /* [2727] */
    (xdc_Char)0x53,  /* [2728] */
    (xdc_Char)0x69,  /* [2729] */
    (xdc_Char)0x7a,  /* [2730] */
    (xdc_Char)0x65,  /* [2731] */
    (xdc_Char)0x20,  /* [2732] */
    (xdc_Char)0x70,  /* [2733] */
    (xdc_Char)0x61,  /* [2734] */
    (xdc_Char)0x72,  /* [2735] */
    (xdc_Char)0x61,  /* [2736] */
    (xdc_Char)0x6d,  /* [2737] */
    (xdc_Char)0x65,  /* [2738] */
    (xdc_Char)0x74,  /* [2739] */
    (xdc_Char)0x65,  /* [2740] */
    (xdc_Char)0x72,  /* [2741] */
    (xdc_Char)0x20,  /* [2742] */
    (xdc_Char)0x69,  /* [2743] */
    (xdc_Char)0x73,  /* [2744] */
    (xdc_Char)0x20,  /* [2745] */
    (xdc_Char)0x69,  /* [2746] */
    (xdc_Char)0x6e,  /* [2747] */
    (xdc_Char)0x76,  /* [2748] */
    (xdc_Char)0x61,  /* [2749] */
    (xdc_Char)0x6c,  /* [2750] */
    (xdc_Char)0x69,  /* [2751] */
    (xdc_Char)0x64,  /* [2752] */
    (xdc_Char)0x20,  /* [2753] */
    (xdc_Char)0x28,  /* [2754] */
    (xdc_Char)0x74,  /* [2755] */
    (xdc_Char)0x6f,  /* [2756] */
    (xdc_Char)0x6f,  /* [2757] */
    (xdc_Char)0x20,  /* [2758] */
    (xdc_Char)0x73,  /* [2759] */
    (xdc_Char)0x6d,  /* [2760] */
    (xdc_Char)0x61,  /* [2761] */
    (xdc_Char)0x6c,  /* [2762] */
    (xdc_Char)0x6c,  /* [2763] */
    (xdc_Char)0x29,  /* [2764] */
    (xdc_Char)0x0,  /* [2765] */
    (xdc_Char)0x43,  /* [2766] */
    (xdc_Char)0x61,  /* [2767] */
    (xdc_Char)0x6e,  /* [2768] */
    (xdc_Char)0x6e,  /* [2769] */
    (xdc_Char)0x6f,  /* [2770] */
    (xdc_Char)0x74,  /* [2771] */
    (xdc_Char)0x20,  /* [2772] */
    (xdc_Char)0x63,  /* [2773] */
    (xdc_Char)0x61,  /* [2774] */
    (xdc_Char)0x6c,  /* [2775] */
    (xdc_Char)0x6c,  /* [2776] */
    (xdc_Char)0x20,  /* [2777] */
    (xdc_Char)0x48,  /* [2778] */
    (xdc_Char)0x65,  /* [2779] */
    (xdc_Char)0x61,  /* [2780] */
    (xdc_Char)0x70,  /* [2781] */
    (xdc_Char)0x42,  /* [2782] */
    (xdc_Char)0x75,  /* [2783] */
    (xdc_Char)0x66,  /* [2784] */
    (xdc_Char)0x5f,  /* [2785] */
    (xdc_Char)0x66,  /* [2786] */
    (xdc_Char)0x72,  /* [2787] */
    (xdc_Char)0x65,  /* [2788] */
    (xdc_Char)0x65,  /* [2789] */
    (xdc_Char)0x20,  /* [2790] */
    (xdc_Char)0x77,  /* [2791] */
    (xdc_Char)0x68,  /* [2792] */
    (xdc_Char)0x65,  /* [2793] */
    (xdc_Char)0x6e,  /* [2794] */
    (xdc_Char)0x20,  /* [2795] */
    (xdc_Char)0x6e,  /* [2796] */
    (xdc_Char)0x6f,  /* [2797] */
    (xdc_Char)0x20,  /* [2798] */
    (xdc_Char)0x62,  /* [2799] */
    (xdc_Char)0x6c,  /* [2800] */
    (xdc_Char)0x6f,  /* [2801] */
    (xdc_Char)0x63,  /* [2802] */
    (xdc_Char)0x6b,  /* [2803] */
    (xdc_Char)0x73,  /* [2804] */
    (xdc_Char)0x20,  /* [2805] */
    (xdc_Char)0x68,  /* [2806] */
    (xdc_Char)0x61,  /* [2807] */
    (xdc_Char)0x76,  /* [2808] */
    (xdc_Char)0x65,  /* [2809] */
    (xdc_Char)0x20,  /* [2810] */
    (xdc_Char)0x62,  /* [2811] */
    (xdc_Char)0x65,  /* [2812] */
    (xdc_Char)0x65,  /* [2813] */
    (xdc_Char)0x6e,  /* [2814] */
    (xdc_Char)0x20,  /* [2815] */
    (xdc_Char)0x61,  /* [2816] */
    (xdc_Char)0x6c,  /* [2817] */
    (xdc_Char)0x6c,  /* [2818] */
    (xdc_Char)0x6f,  /* [2819] */
    (xdc_Char)0x63,  /* [2820] */
    (xdc_Char)0x61,  /* [2821] */
    (xdc_Char)0x74,  /* [2822] */
    (xdc_Char)0x65,  /* [2823] */
    (xdc_Char)0x64,  /* [2824] */
    (xdc_Char)0x0,  /* [2825] */
    (xdc_Char)0x41,  /* [2826] */
    (xdc_Char)0x5f,  /* [2827] */
    (xdc_Char)0x69,  /* [2828] */
    (xdc_Char)0x6e,  /* [2829] */
    (xdc_Char)0x76,  /* [2830] */
    (xdc_Char)0x61,  /* [2831] */
    (xdc_Char)0x6c,  /* [2832] */
    (xdc_Char)0x69,  /* [2833] */
    (xdc_Char)0x64,  /* [2834] */
    (xdc_Char)0x46,  /* [2835] */
    (xdc_Char)0x72,  /* [2836] */
    (xdc_Char)0x65,  /* [2837] */
    (xdc_Char)0x65,  /* [2838] */
    (xdc_Char)0x3a,  /* [2839] */
    (xdc_Char)0x20,  /* [2840] */
    (xdc_Char)0x49,  /* [2841] */
    (xdc_Char)0x6e,  /* [2842] */
    (xdc_Char)0x76,  /* [2843] */
    (xdc_Char)0x61,  /* [2844] */
    (xdc_Char)0x6c,  /* [2845] */
    (xdc_Char)0x69,  /* [2846] */
    (xdc_Char)0x64,  /* [2847] */
    (xdc_Char)0x20,  /* [2848] */
    (xdc_Char)0x66,  /* [2849] */
    (xdc_Char)0x72,  /* [2850] */
    (xdc_Char)0x65,  /* [2851] */
    (xdc_Char)0x65,  /* [2852] */
    (xdc_Char)0x0,  /* [2853] */
    (xdc_Char)0x41,  /* [2854] */
    (xdc_Char)0x5f,  /* [2855] */
    (xdc_Char)0x7a,  /* [2856] */
    (xdc_Char)0x65,  /* [2857] */
    (xdc_Char)0x72,  /* [2858] */
    (xdc_Char)0x6f,  /* [2859] */
    (xdc_Char)0x42,  /* [2860] */
    (xdc_Char)0x6c,  /* [2861] */
    (xdc_Char)0x6f,  /* [2862] */
    (xdc_Char)0x63,  /* [2863] */
    (xdc_Char)0x6b,  /* [2864] */
    (xdc_Char)0x3a,  /* [2865] */
    (xdc_Char)0x20,  /* [2866] */
    (xdc_Char)0x43,  /* [2867] */
    (xdc_Char)0x61,  /* [2868] */
    (xdc_Char)0x6e,  /* [2869] */
    (xdc_Char)0x6e,  /* [2870] */
    (xdc_Char)0x6f,  /* [2871] */
    (xdc_Char)0x74,  /* [2872] */
    (xdc_Char)0x20,  /* [2873] */
    (xdc_Char)0x61,  /* [2874] */
    (xdc_Char)0x6c,  /* [2875] */
    (xdc_Char)0x6c,  /* [2876] */
    (xdc_Char)0x6f,  /* [2877] */
    (xdc_Char)0x63,  /* [2878] */
    (xdc_Char)0x61,  /* [2879] */
    (xdc_Char)0x74,  /* [2880] */
    (xdc_Char)0x65,  /* [2881] */
    (xdc_Char)0x20,  /* [2882] */
    (xdc_Char)0x73,  /* [2883] */
    (xdc_Char)0x69,  /* [2884] */
    (xdc_Char)0x7a,  /* [2885] */
    (xdc_Char)0x65,  /* [2886] */
    (xdc_Char)0x20,  /* [2887] */
    (xdc_Char)0x30,  /* [2888] */
    (xdc_Char)0x0,  /* [2889] */
    (xdc_Char)0x41,  /* [2890] */
    (xdc_Char)0x5f,  /* [2891] */
    (xdc_Char)0x68,  /* [2892] */
    (xdc_Char)0x65,  /* [2893] */
    (xdc_Char)0x61,  /* [2894] */
    (xdc_Char)0x70,  /* [2895] */
    (xdc_Char)0x53,  /* [2896] */
    (xdc_Char)0x69,  /* [2897] */
    (xdc_Char)0x7a,  /* [2898] */
    (xdc_Char)0x65,  /* [2899] */
    (xdc_Char)0x3a,  /* [2900] */
    (xdc_Char)0x20,  /* [2901] */
    (xdc_Char)0x52,  /* [2902] */
    (xdc_Char)0x65,  /* [2903] */
    (xdc_Char)0x71,  /* [2904] */
    (xdc_Char)0x75,  /* [2905] */
    (xdc_Char)0x65,  /* [2906] */
    (xdc_Char)0x73,  /* [2907] */
    (xdc_Char)0x74,  /* [2908] */
    (xdc_Char)0x65,  /* [2909] */
    (xdc_Char)0x64,  /* [2910] */
    (xdc_Char)0x20,  /* [2911] */
    (xdc_Char)0x68,  /* [2912] */
    (xdc_Char)0x65,  /* [2913] */
    (xdc_Char)0x61,  /* [2914] */
    (xdc_Char)0x70,  /* [2915] */
    (xdc_Char)0x20,  /* [2916] */
    (xdc_Char)0x73,  /* [2917] */
    (xdc_Char)0x69,  /* [2918] */
    (xdc_Char)0x7a,  /* [2919] */
    (xdc_Char)0x65,  /* [2920] */
    (xdc_Char)0x20,  /* [2921] */
    (xdc_Char)0x69,  /* [2922] */
    (xdc_Char)0x73,  /* [2923] */
    (xdc_Char)0x20,  /* [2924] */
    (xdc_Char)0x74,  /* [2925] */
    (xdc_Char)0x6f,  /* [2926] */
    (xdc_Char)0x6f,  /* [2927] */
    (xdc_Char)0x20,  /* [2928] */
    (xdc_Char)0x73,  /* [2929] */
    (xdc_Char)0x6d,  /* [2930] */
    (xdc_Char)0x61,  /* [2931] */
    (xdc_Char)0x6c,  /* [2932] */
    (xdc_Char)0x6c,  /* [2933] */
    (xdc_Char)0x0,  /* [2934] */
    (xdc_Char)0x41,  /* [2935] */
    (xdc_Char)0x5f,  /* [2936] */
    (xdc_Char)0x61,  /* [2937] */
    (xdc_Char)0x6c,  /* [2938] */
    (xdc_Char)0x69,  /* [2939] */
    (xdc_Char)0x67,  /* [2940] */
    (xdc_Char)0x6e,  /* [2941] */
    (xdc_Char)0x3a,  /* [2942] */
    (xdc_Char)0x20,  /* [2943] */
    (xdc_Char)0x52,  /* [2944] */
    (xdc_Char)0x65,  /* [2945] */
    (xdc_Char)0x71,  /* [2946] */
    (xdc_Char)0x75,  /* [2947] */
    (xdc_Char)0x65,  /* [2948] */
    (xdc_Char)0x73,  /* [2949] */
    (xdc_Char)0x74,  /* [2950] */
    (xdc_Char)0x65,  /* [2951] */
    (xdc_Char)0x64,  /* [2952] */
    (xdc_Char)0x20,  /* [2953] */
    (xdc_Char)0x61,  /* [2954] */
    (xdc_Char)0x6c,  /* [2955] */
    (xdc_Char)0x69,  /* [2956] */
    (xdc_Char)0x67,  /* [2957] */
    (xdc_Char)0x6e,  /* [2958] */
    (xdc_Char)0x20,  /* [2959] */
    (xdc_Char)0x69,  /* [2960] */
    (xdc_Char)0x73,  /* [2961] */
    (xdc_Char)0x20,  /* [2962] */
    (xdc_Char)0x6e,  /* [2963] */
    (xdc_Char)0x6f,  /* [2964] */
    (xdc_Char)0x74,  /* [2965] */
    (xdc_Char)0x20,  /* [2966] */
    (xdc_Char)0x61,  /* [2967] */
    (xdc_Char)0x20,  /* [2968] */
    (xdc_Char)0x70,  /* [2969] */
    (xdc_Char)0x6f,  /* [2970] */
    (xdc_Char)0x77,  /* [2971] */
    (xdc_Char)0x65,  /* [2972] */
    (xdc_Char)0x72,  /* [2973] */
    (xdc_Char)0x20,  /* [2974] */
    (xdc_Char)0x6f,  /* [2975] */
    (xdc_Char)0x66,  /* [2976] */
    (xdc_Char)0x20,  /* [2977] */
    (xdc_Char)0x32,  /* [2978] */
    (xdc_Char)0x0,  /* [2979] */
    (xdc_Char)0x49,  /* [2980] */
    (xdc_Char)0x6e,  /* [2981] */
    (xdc_Char)0x76,  /* [2982] */
    (xdc_Char)0x61,  /* [2983] */
    (xdc_Char)0x6c,  /* [2984] */
    (xdc_Char)0x69,  /* [2985] */
    (xdc_Char)0x64,  /* [2986] */
    (xdc_Char)0x20,  /* [2987] */
    (xdc_Char)0x62,  /* [2988] */
    (xdc_Char)0x6c,  /* [2989] */
    (xdc_Char)0x6f,  /* [2990] */
    (xdc_Char)0x63,  /* [2991] */
    (xdc_Char)0x6b,  /* [2992] */
    (xdc_Char)0x20,  /* [2993] */
    (xdc_Char)0x61,  /* [2994] */
    (xdc_Char)0x64,  /* [2995] */
    (xdc_Char)0x64,  /* [2996] */
    (xdc_Char)0x72,  /* [2997] */
    (xdc_Char)0x65,  /* [2998] */
    (xdc_Char)0x73,  /* [2999] */
    (xdc_Char)0x73,  /* [3000] */
    (xdc_Char)0x20,  /* [3001] */
    (xdc_Char)0x6f,  /* [3002] */
    (xdc_Char)0x6e,  /* [3003] */
    (xdc_Char)0x20,  /* [3004] */
    (xdc_Char)0x74,  /* [3005] */
    (xdc_Char)0x68,  /* [3006] */
    (xdc_Char)0x65,  /* [3007] */
    (xdc_Char)0x20,  /* [3008] */
    (xdc_Char)0x66,  /* [3009] */
    (xdc_Char)0x72,  /* [3010] */
    (xdc_Char)0x65,  /* [3011] */
    (xdc_Char)0x65,  /* [3012] */
    (xdc_Char)0x2e,  /* [3013] */
    (xdc_Char)0x20,  /* [3014] */
    (xdc_Char)0x46,  /* [3015] */
    (xdc_Char)0x61,  /* [3016] */
    (xdc_Char)0x69,  /* [3017] */
    (xdc_Char)0x6c,  /* [3018] */
    (xdc_Char)0x65,  /* [3019] */
    (xdc_Char)0x64,  /* [3020] */
    (xdc_Char)0x20,  /* [3021] */
    (xdc_Char)0x74,  /* [3022] */
    (xdc_Char)0x6f,  /* [3023] */
    (xdc_Char)0x20,  /* [3024] */
    (xdc_Char)0x66,  /* [3025] */
    (xdc_Char)0x72,  /* [3026] */
    (xdc_Char)0x65,  /* [3027] */
    (xdc_Char)0x65,  /* [3028] */
    (xdc_Char)0x20,  /* [3029] */
    (xdc_Char)0x62,  /* [3030] */
    (xdc_Char)0x6c,  /* [3031] */
    (xdc_Char)0x6f,  /* [3032] */
    (xdc_Char)0x63,  /* [3033] */
    (xdc_Char)0x6b,  /* [3034] */
    (xdc_Char)0x20,  /* [3035] */
    (xdc_Char)0x62,  /* [3036] */
    (xdc_Char)0x61,  /* [3037] */
    (xdc_Char)0x63,  /* [3038] */
    (xdc_Char)0x6b,  /* [3039] */
    (xdc_Char)0x20,  /* [3040] */
    (xdc_Char)0x74,  /* [3041] */
    (xdc_Char)0x6f,  /* [3042] */
    (xdc_Char)0x20,  /* [3043] */
    (xdc_Char)0x68,  /* [3044] */
    (xdc_Char)0x65,  /* [3045] */
    (xdc_Char)0x61,  /* [3046] */
    (xdc_Char)0x70,  /* [3047] */
    (xdc_Char)0x2e,  /* [3048] */
    (xdc_Char)0x0,  /* [3049] */
    (xdc_Char)0x41,  /* [3050] */
    (xdc_Char)0x5f,  /* [3051] */
    (xdc_Char)0x64,  /* [3052] */
    (xdc_Char)0x6f,  /* [3053] */
    (xdc_Char)0x75,  /* [3054] */
    (xdc_Char)0x62,  /* [3055] */
    (xdc_Char)0x6c,  /* [3056] */
    (xdc_Char)0x65,  /* [3057] */
    (xdc_Char)0x46,  /* [3058] */
    (xdc_Char)0x72,  /* [3059] */
    (xdc_Char)0x65,  /* [3060] */
    (xdc_Char)0x65,  /* [3061] */
    (xdc_Char)0x3a,  /* [3062] */
    (xdc_Char)0x20,  /* [3063] */
    (xdc_Char)0x42,  /* [3064] */
    (xdc_Char)0x75,  /* [3065] */
    (xdc_Char)0x66,  /* [3066] */
    (xdc_Char)0x66,  /* [3067] */
    (xdc_Char)0x65,  /* [3068] */
    (xdc_Char)0x72,  /* [3069] */
    (xdc_Char)0x20,  /* [3070] */
    (xdc_Char)0x61,  /* [3071] */
    (xdc_Char)0x6c,  /* [3072] */
    (xdc_Char)0x72,  /* [3073] */
    (xdc_Char)0x65,  /* [3074] */
    (xdc_Char)0x61,  /* [3075] */
    (xdc_Char)0x64,  /* [3076] */
    (xdc_Char)0x79,  /* [3077] */
    (xdc_Char)0x20,  /* [3078] */
    (xdc_Char)0x66,  /* [3079] */
    (xdc_Char)0x72,  /* [3080] */
    (xdc_Char)0x65,  /* [3081] */
    (xdc_Char)0x65,  /* [3082] */
    (xdc_Char)0x0,  /* [3083] */
    (xdc_Char)0x41,  /* [3084] */
    (xdc_Char)0x5f,  /* [3085] */
    (xdc_Char)0x62,  /* [3086] */
    (xdc_Char)0x75,  /* [3087] */
    (xdc_Char)0x66,  /* [3088] */
    (xdc_Char)0x4f,  /* [3089] */
    (xdc_Char)0x76,  /* [3090] */
    (xdc_Char)0x65,  /* [3091] */
    (xdc_Char)0x72,  /* [3092] */
    (xdc_Char)0x66,  /* [3093] */
    (xdc_Char)0x6c,  /* [3094] */
    (xdc_Char)0x6f,  /* [3095] */
    (xdc_Char)0x77,  /* [3096] */
    (xdc_Char)0x3a,  /* [3097] */
    (xdc_Char)0x20,  /* [3098] */
    (xdc_Char)0x42,  /* [3099] */
    (xdc_Char)0x75,  /* [3100] */
    (xdc_Char)0x66,  /* [3101] */
    (xdc_Char)0x66,  /* [3102] */
    (xdc_Char)0x65,  /* [3103] */
    (xdc_Char)0x72,  /* [3104] */
    (xdc_Char)0x20,  /* [3105] */
    (xdc_Char)0x6f,  /* [3106] */
    (xdc_Char)0x76,  /* [3107] */
    (xdc_Char)0x65,  /* [3108] */
    (xdc_Char)0x72,  /* [3109] */
    (xdc_Char)0x66,  /* [3110] */
    (xdc_Char)0x6c,  /* [3111] */
    (xdc_Char)0x6f,  /* [3112] */
    (xdc_Char)0x77,  /* [3113] */
    (xdc_Char)0x0,  /* [3114] */
    (xdc_Char)0x41,  /* [3115] */
    (xdc_Char)0x5f,  /* [3116] */
    (xdc_Char)0x6e,  /* [3117] */
    (xdc_Char)0x6f,  /* [3118] */
    (xdc_Char)0x74,  /* [3119] */
    (xdc_Char)0x45,  /* [3120] */
    (xdc_Char)0x6d,  /* [3121] */
    (xdc_Char)0x70,  /* [3122] */
    (xdc_Char)0x74,  /* [3123] */
    (xdc_Char)0x79,  /* [3124] */
    (xdc_Char)0x3a,  /* [3125] */
    (xdc_Char)0x20,  /* [3126] */
    (xdc_Char)0x48,  /* [3127] */
    (xdc_Char)0x65,  /* [3128] */
    (xdc_Char)0x61,  /* [3129] */
    (xdc_Char)0x70,  /* [3130] */
    (xdc_Char)0x20,  /* [3131] */
    (xdc_Char)0x6e,  /* [3132] */
    (xdc_Char)0x6f,  /* [3133] */
    (xdc_Char)0x74,  /* [3134] */
    (xdc_Char)0x20,  /* [3135] */
    (xdc_Char)0x65,  /* [3136] */
    (xdc_Char)0x6d,  /* [3137] */
    (xdc_Char)0x70,  /* [3138] */
    (xdc_Char)0x74,  /* [3139] */
    (xdc_Char)0x79,  /* [3140] */
    (xdc_Char)0x0,  /* [3141] */
    (xdc_Char)0x41,  /* [3142] */
    (xdc_Char)0x5f,  /* [3143] */
    (xdc_Char)0x6e,  /* [3144] */
    (xdc_Char)0x75,  /* [3145] */
    (xdc_Char)0x6c,  /* [3146] */
    (xdc_Char)0x6c,  /* [3147] */
    (xdc_Char)0x4f,  /* [3148] */
    (xdc_Char)0x62,  /* [3149] */
    (xdc_Char)0x6a,  /* [3150] */
    (xdc_Char)0x65,  /* [3151] */
    (xdc_Char)0x63,  /* [3152] */
    (xdc_Char)0x74,  /* [3153] */
    (xdc_Char)0x3a,  /* [3154] */
    (xdc_Char)0x20,  /* [3155] */
    (xdc_Char)0x48,  /* [3156] */
    (xdc_Char)0x65,  /* [3157] */
    (xdc_Char)0x61,  /* [3158] */
    (xdc_Char)0x70,  /* [3159] */
    (xdc_Char)0x54,  /* [3160] */
    (xdc_Char)0x72,  /* [3161] */
    (xdc_Char)0x61,  /* [3162] */
    (xdc_Char)0x63,  /* [3163] */
    (xdc_Char)0x6b,  /* [3164] */
    (xdc_Char)0x5f,  /* [3165] */
    (xdc_Char)0x70,  /* [3166] */
    (xdc_Char)0x72,  /* [3167] */
    (xdc_Char)0x69,  /* [3168] */
    (xdc_Char)0x6e,  /* [3169] */
    (xdc_Char)0x74,  /* [3170] */
    (xdc_Char)0x48,  /* [3171] */
    (xdc_Char)0x65,  /* [3172] */
    (xdc_Char)0x61,  /* [3173] */
    (xdc_Char)0x70,  /* [3174] */
    (xdc_Char)0x20,  /* [3175] */
    (xdc_Char)0x63,  /* [3176] */
    (xdc_Char)0x61,  /* [3177] */
    (xdc_Char)0x6c,  /* [3178] */
    (xdc_Char)0x6c,  /* [3179] */
    (xdc_Char)0x65,  /* [3180] */
    (xdc_Char)0x64,  /* [3181] */
    (xdc_Char)0x20,  /* [3182] */
    (xdc_Char)0x77,  /* [3183] */
    (xdc_Char)0x69,  /* [3184] */
    (xdc_Char)0x74,  /* [3185] */
    (xdc_Char)0x68,  /* [3186] */
    (xdc_Char)0x20,  /* [3187] */
    (xdc_Char)0x6e,  /* [3188] */
    (xdc_Char)0x75,  /* [3189] */
    (xdc_Char)0x6c,  /* [3190] */
    (xdc_Char)0x6c,  /* [3191] */
    (xdc_Char)0x20,  /* [3192] */
    (xdc_Char)0x6f,  /* [3193] */
    (xdc_Char)0x62,  /* [3194] */
    (xdc_Char)0x6a,  /* [3195] */
    (xdc_Char)0x0,  /* [3196] */
    (xdc_Char)0x41,  /* [3197] */
    (xdc_Char)0x5f,  /* [3198] */
    (xdc_Char)0x75,  /* [3199] */
    (xdc_Char)0x6e,  /* [3200] */
    (xdc_Char)0x73,  /* [3201] */
    (xdc_Char)0x75,  /* [3202] */
    (xdc_Char)0x70,  /* [3203] */
    (xdc_Char)0x70,  /* [3204] */
    (xdc_Char)0x6f,  /* [3205] */
    (xdc_Char)0x72,  /* [3206] */
    (xdc_Char)0x74,  /* [3207] */
    (xdc_Char)0x65,  /* [3208] */
    (xdc_Char)0x64,  /* [3209] */
    (xdc_Char)0x4d,  /* [3210] */
    (xdc_Char)0x61,  /* [3211] */
    (xdc_Char)0x73,  /* [3212] */
    (xdc_Char)0x6b,  /* [3213] */
    (xdc_Char)0x69,  /* [3214] */
    (xdc_Char)0x6e,  /* [3215] */
    (xdc_Char)0x67,  /* [3216] */
    (xdc_Char)0x4f,  /* [3217] */
    (xdc_Char)0x70,  /* [3218] */
    (xdc_Char)0x74,  /* [3219] */
    (xdc_Char)0x69,  /* [3220] */
    (xdc_Char)0x6f,  /* [3221] */
    (xdc_Char)0x6e,  /* [3222] */
    (xdc_Char)0x3a,  /* [3223] */
    (xdc_Char)0x20,  /* [3224] */
    (xdc_Char)0x75,  /* [3225] */
    (xdc_Char)0x6e,  /* [3226] */
    (xdc_Char)0x73,  /* [3227] */
    (xdc_Char)0x75,  /* [3228] */
    (xdc_Char)0x70,  /* [3229] */
    (xdc_Char)0x70,  /* [3230] */
    (xdc_Char)0x6f,  /* [3231] */
    (xdc_Char)0x72,  /* [3232] */
    (xdc_Char)0x74,  /* [3233] */
    (xdc_Char)0x65,  /* [3234] */
    (xdc_Char)0x64,  /* [3235] */
    (xdc_Char)0x20,  /* [3236] */
    (xdc_Char)0x6d,  /* [3237] */
    (xdc_Char)0x61,  /* [3238] */
    (xdc_Char)0x73,  /* [3239] */
    (xdc_Char)0x6b,  /* [3240] */
    (xdc_Char)0x53,  /* [3241] */
    (xdc_Char)0x65,  /* [3242] */
    (xdc_Char)0x74,  /* [3243] */
    (xdc_Char)0x74,  /* [3244] */
    (xdc_Char)0x69,  /* [3245] */
    (xdc_Char)0x6e,  /* [3246] */
    (xdc_Char)0x67,  /* [3247] */
    (xdc_Char)0x2e,  /* [3248] */
    (xdc_Char)0x0,  /* [3249] */
    (xdc_Char)0x41,  /* [3250] */
    (xdc_Char)0x5f,  /* [3251] */
    (xdc_Char)0x62,  /* [3252] */
    (xdc_Char)0x61,  /* [3253] */
    (xdc_Char)0x64,  /* [3254] */
    (xdc_Char)0x43,  /* [3255] */
    (xdc_Char)0x6f,  /* [3256] */
    (xdc_Char)0x6e,  /* [3257] */
    (xdc_Char)0x74,  /* [3258] */
    (xdc_Char)0x65,  /* [3259] */
    (xdc_Char)0x78,  /* [3260] */
    (xdc_Char)0x74,  /* [3261] */
    (xdc_Char)0x3a,  /* [3262] */
    (xdc_Char)0x20,  /* [3263] */
    (xdc_Char)0x62,  /* [3264] */
    (xdc_Char)0x61,  /* [3265] */
    (xdc_Char)0x64,  /* [3266] */
    (xdc_Char)0x20,  /* [3267] */
    (xdc_Char)0x63,  /* [3268] */
    (xdc_Char)0x61,  /* [3269] */
    (xdc_Char)0x6c,  /* [3270] */
    (xdc_Char)0x6c,  /* [3271] */
    (xdc_Char)0x69,  /* [3272] */
    (xdc_Char)0x6e,  /* [3273] */
    (xdc_Char)0x67,  /* [3274] */
    (xdc_Char)0x20,  /* [3275] */
    (xdc_Char)0x63,  /* [3276] */
    (xdc_Char)0x6f,  /* [3277] */
    (xdc_Char)0x6e,  /* [3278] */
    (xdc_Char)0x74,  /* [3279] */
    (xdc_Char)0x65,  /* [3280] */
    (xdc_Char)0x78,  /* [3281] */
    (xdc_Char)0x74,  /* [3282] */
    (xdc_Char)0x2e,  /* [3283] */
    (xdc_Char)0x20,  /* [3284] */
    (xdc_Char)0x4d,  /* [3285] */
    (xdc_Char)0x61,  /* [3286] */
    (xdc_Char)0x79,  /* [3287] */
    (xdc_Char)0x20,  /* [3288] */
    (xdc_Char)0x6e,  /* [3289] */
    (xdc_Char)0x6f,  /* [3290] */
    (xdc_Char)0x74,  /* [3291] */
    (xdc_Char)0x20,  /* [3292] */
    (xdc_Char)0x62,  /* [3293] */
    (xdc_Char)0x65,  /* [3294] */
    (xdc_Char)0x20,  /* [3295] */
    (xdc_Char)0x65,  /* [3296] */
    (xdc_Char)0x6e,  /* [3297] */
    (xdc_Char)0x74,  /* [3298] */
    (xdc_Char)0x65,  /* [3299] */
    (xdc_Char)0x72,  /* [3300] */
    (xdc_Char)0x65,  /* [3301] */
    (xdc_Char)0x64,  /* [3302] */
    (xdc_Char)0x20,  /* [3303] */
    (xdc_Char)0x66,  /* [3304] */
    (xdc_Char)0x72,  /* [3305] */
    (xdc_Char)0x6f,  /* [3306] */
    (xdc_Char)0x6d,  /* [3307] */
    (xdc_Char)0x20,  /* [3308] */
    (xdc_Char)0x61,  /* [3309] */
    (xdc_Char)0x20,  /* [3310] */
    (xdc_Char)0x68,  /* [3311] */
    (xdc_Char)0x61,  /* [3312] */
    (xdc_Char)0x72,  /* [3313] */
    (xdc_Char)0x64,  /* [3314] */
    (xdc_Char)0x77,  /* [3315] */
    (xdc_Char)0x61,  /* [3316] */
    (xdc_Char)0x72,  /* [3317] */
    (xdc_Char)0x65,  /* [3318] */
    (xdc_Char)0x20,  /* [3319] */
    (xdc_Char)0x69,  /* [3320] */
    (xdc_Char)0x6e,  /* [3321] */
    (xdc_Char)0x74,  /* [3322] */
    (xdc_Char)0x65,  /* [3323] */
    (xdc_Char)0x72,  /* [3324] */
    (xdc_Char)0x72,  /* [3325] */
    (xdc_Char)0x75,  /* [3326] */
    (xdc_Char)0x70,  /* [3327] */
    (xdc_Char)0x74,  /* [3328] */
    (xdc_Char)0x20,  /* [3329] */
    (xdc_Char)0x74,  /* [3330] */
    (xdc_Char)0x68,  /* [3331] */
    (xdc_Char)0x72,  /* [3332] */
    (xdc_Char)0x65,  /* [3333] */
    (xdc_Char)0x61,  /* [3334] */
    (xdc_Char)0x64,  /* [3335] */
    (xdc_Char)0x2e,  /* [3336] */
    (xdc_Char)0x0,  /* [3337] */
    (xdc_Char)0x41,  /* [3338] */
    (xdc_Char)0x5f,  /* [3339] */
    (xdc_Char)0x62,  /* [3340] */
    (xdc_Char)0x61,  /* [3341] */
    (xdc_Char)0x64,  /* [3342] */
    (xdc_Char)0x43,  /* [3343] */
    (xdc_Char)0x6f,  /* [3344] */
    (xdc_Char)0x6e,  /* [3345] */
    (xdc_Char)0x74,  /* [3346] */
    (xdc_Char)0x65,  /* [3347] */
    (xdc_Char)0x78,  /* [3348] */
    (xdc_Char)0x74,  /* [3349] */
    (xdc_Char)0x3a,  /* [3350] */
    (xdc_Char)0x20,  /* [3351] */
    (xdc_Char)0x62,  /* [3352] */
    (xdc_Char)0x61,  /* [3353] */
    (xdc_Char)0x64,  /* [3354] */
    (xdc_Char)0x20,  /* [3355] */
    (xdc_Char)0x63,  /* [3356] */
    (xdc_Char)0x61,  /* [3357] */
    (xdc_Char)0x6c,  /* [3358] */
    (xdc_Char)0x6c,  /* [3359] */
    (xdc_Char)0x69,  /* [3360] */
    (xdc_Char)0x6e,  /* [3361] */
    (xdc_Char)0x67,  /* [3362] */
    (xdc_Char)0x20,  /* [3363] */
    (xdc_Char)0x63,  /* [3364] */
    (xdc_Char)0x6f,  /* [3365] */
    (xdc_Char)0x6e,  /* [3366] */
    (xdc_Char)0x74,  /* [3367] */
    (xdc_Char)0x65,  /* [3368] */
    (xdc_Char)0x78,  /* [3369] */
    (xdc_Char)0x74,  /* [3370] */
    (xdc_Char)0x2e,  /* [3371] */
    (xdc_Char)0x20,  /* [3372] */
    (xdc_Char)0x4d,  /* [3373] */
    (xdc_Char)0x61,  /* [3374] */
    (xdc_Char)0x79,  /* [3375] */
    (xdc_Char)0x20,  /* [3376] */
    (xdc_Char)0x6e,  /* [3377] */
    (xdc_Char)0x6f,  /* [3378] */
    (xdc_Char)0x74,  /* [3379] */
    (xdc_Char)0x20,  /* [3380] */
    (xdc_Char)0x62,  /* [3381] */
    (xdc_Char)0x65,  /* [3382] */
    (xdc_Char)0x20,  /* [3383] */
    (xdc_Char)0x65,  /* [3384] */
    (xdc_Char)0x6e,  /* [3385] */
    (xdc_Char)0x74,  /* [3386] */
    (xdc_Char)0x65,  /* [3387] */
    (xdc_Char)0x72,  /* [3388] */
    (xdc_Char)0x65,  /* [3389] */
    (xdc_Char)0x64,  /* [3390] */
    (xdc_Char)0x20,  /* [3391] */
    (xdc_Char)0x66,  /* [3392] */
    (xdc_Char)0x72,  /* [3393] */
    (xdc_Char)0x6f,  /* [3394] */
    (xdc_Char)0x6d,  /* [3395] */
    (xdc_Char)0x20,  /* [3396] */
    (xdc_Char)0x61,  /* [3397] */
    (xdc_Char)0x20,  /* [3398] */
    (xdc_Char)0x73,  /* [3399] */
    (xdc_Char)0x6f,  /* [3400] */
    (xdc_Char)0x66,  /* [3401] */
    (xdc_Char)0x74,  /* [3402] */
    (xdc_Char)0x77,  /* [3403] */
    (xdc_Char)0x61,  /* [3404] */
    (xdc_Char)0x72,  /* [3405] */
    (xdc_Char)0x65,  /* [3406] */
    (xdc_Char)0x20,  /* [3407] */
    (xdc_Char)0x6f,  /* [3408] */
    (xdc_Char)0x72,  /* [3409] */
    (xdc_Char)0x20,  /* [3410] */
    (xdc_Char)0x68,  /* [3411] */
    (xdc_Char)0x61,  /* [3412] */
    (xdc_Char)0x72,  /* [3413] */
    (xdc_Char)0x64,  /* [3414] */
    (xdc_Char)0x77,  /* [3415] */
    (xdc_Char)0x61,  /* [3416] */
    (xdc_Char)0x72,  /* [3417] */
    (xdc_Char)0x65,  /* [3418] */
    (xdc_Char)0x20,  /* [3419] */
    (xdc_Char)0x69,  /* [3420] */
    (xdc_Char)0x6e,  /* [3421] */
    (xdc_Char)0x74,  /* [3422] */
    (xdc_Char)0x65,  /* [3423] */
    (xdc_Char)0x72,  /* [3424] */
    (xdc_Char)0x72,  /* [3425] */
    (xdc_Char)0x75,  /* [3426] */
    (xdc_Char)0x70,  /* [3427] */
    (xdc_Char)0x74,  /* [3428] */
    (xdc_Char)0x20,  /* [3429] */
    (xdc_Char)0x74,  /* [3430] */
    (xdc_Char)0x68,  /* [3431] */
    (xdc_Char)0x72,  /* [3432] */
    (xdc_Char)0x65,  /* [3433] */
    (xdc_Char)0x61,  /* [3434] */
    (xdc_Char)0x64,  /* [3435] */
    (xdc_Char)0x2e,  /* [3436] */
    (xdc_Char)0x0,  /* [3437] */
    (xdc_Char)0x41,  /* [3438] */
    (xdc_Char)0x5f,  /* [3439] */
    (xdc_Char)0x62,  /* [3440] */
    (xdc_Char)0x61,  /* [3441] */
    (xdc_Char)0x64,  /* [3442] */
    (xdc_Char)0x43,  /* [3443] */
    (xdc_Char)0x6f,  /* [3444] */
    (xdc_Char)0x6e,  /* [3445] */
    (xdc_Char)0x74,  /* [3446] */
    (xdc_Char)0x65,  /* [3447] */
    (xdc_Char)0x78,  /* [3448] */
    (xdc_Char)0x74,  /* [3449] */
    (xdc_Char)0x3a,  /* [3450] */
    (xdc_Char)0x20,  /* [3451] */
    (xdc_Char)0x62,  /* [3452] */
    (xdc_Char)0x61,  /* [3453] */
    (xdc_Char)0x64,  /* [3454] */
    (xdc_Char)0x20,  /* [3455] */
    (xdc_Char)0x63,  /* [3456] */
    (xdc_Char)0x61,  /* [3457] */
    (xdc_Char)0x6c,  /* [3458] */
    (xdc_Char)0x6c,  /* [3459] */
    (xdc_Char)0x69,  /* [3460] */
    (xdc_Char)0x6e,  /* [3461] */
    (xdc_Char)0x67,  /* [3462] */
    (xdc_Char)0x20,  /* [3463] */
    (xdc_Char)0x63,  /* [3464] */
    (xdc_Char)0x6f,  /* [3465] */
    (xdc_Char)0x6e,  /* [3466] */
    (xdc_Char)0x74,  /* [3467] */
    (xdc_Char)0x65,  /* [3468] */
    (xdc_Char)0x78,  /* [3469] */
    (xdc_Char)0x74,  /* [3470] */
    (xdc_Char)0x2e,  /* [3471] */
    (xdc_Char)0x20,  /* [3472] */
    (xdc_Char)0x53,  /* [3473] */
    (xdc_Char)0x65,  /* [3474] */
    (xdc_Char)0x65,  /* [3475] */
    (xdc_Char)0x20,  /* [3476] */
    (xdc_Char)0x47,  /* [3477] */
    (xdc_Char)0x61,  /* [3478] */
    (xdc_Char)0x74,  /* [3479] */
    (xdc_Char)0x65,  /* [3480] */
    (xdc_Char)0x4d,  /* [3481] */
    (xdc_Char)0x75,  /* [3482] */
    (xdc_Char)0x74,  /* [3483] */
    (xdc_Char)0x65,  /* [3484] */
    (xdc_Char)0x78,  /* [3485] */
    (xdc_Char)0x50,  /* [3486] */
    (xdc_Char)0x72,  /* [3487] */
    (xdc_Char)0x69,  /* [3488] */
    (xdc_Char)0x20,  /* [3489] */
    (xdc_Char)0x41,  /* [3490] */
    (xdc_Char)0x50,  /* [3491] */
    (xdc_Char)0x49,  /* [3492] */
    (xdc_Char)0x20,  /* [3493] */
    (xdc_Char)0x64,  /* [3494] */
    (xdc_Char)0x6f,  /* [3495] */
    (xdc_Char)0x63,  /* [3496] */
    (xdc_Char)0x20,  /* [3497] */
    (xdc_Char)0x66,  /* [3498] */
    (xdc_Char)0x6f,  /* [3499] */
    (xdc_Char)0x72,  /* [3500] */
    (xdc_Char)0x20,  /* [3501] */
    (xdc_Char)0x64,  /* [3502] */
    (xdc_Char)0x65,  /* [3503] */
    (xdc_Char)0x74,  /* [3504] */
    (xdc_Char)0x61,  /* [3505] */
    (xdc_Char)0x69,  /* [3506] */
    (xdc_Char)0x6c,  /* [3507] */
    (xdc_Char)0x73,  /* [3508] */
    (xdc_Char)0x2e,  /* [3509] */
    (xdc_Char)0x0,  /* [3510] */
    (xdc_Char)0x41,  /* [3511] */
    (xdc_Char)0x5f,  /* [3512] */
    (xdc_Char)0x65,  /* [3513] */
    (xdc_Char)0x6e,  /* [3514] */
    (xdc_Char)0x74,  /* [3515] */
    (xdc_Char)0x65,  /* [3516] */
    (xdc_Char)0x72,  /* [3517] */
    (xdc_Char)0x54,  /* [3518] */
    (xdc_Char)0x61,  /* [3519] */
    (xdc_Char)0x73,  /* [3520] */
    (xdc_Char)0x6b,  /* [3521] */
    (xdc_Char)0x44,  /* [3522] */
    (xdc_Char)0x69,  /* [3523] */
    (xdc_Char)0x73,  /* [3524] */
    (xdc_Char)0x61,  /* [3525] */
    (xdc_Char)0x62,  /* [3526] */
    (xdc_Char)0x6c,  /* [3527] */
    (xdc_Char)0x65,  /* [3528] */
    (xdc_Char)0x64,  /* [3529] */
    (xdc_Char)0x3a,  /* [3530] */
    (xdc_Char)0x20,  /* [3531] */
    (xdc_Char)0x43,  /* [3532] */
    (xdc_Char)0x61,  /* [3533] */
    (xdc_Char)0x6e,  /* [3534] */
    (xdc_Char)0x6e,  /* [3535] */
    (xdc_Char)0x6f,  /* [3536] */
    (xdc_Char)0x74,  /* [3537] */
    (xdc_Char)0x20,  /* [3538] */
    (xdc_Char)0x63,  /* [3539] */
    (xdc_Char)0x61,  /* [3540] */
    (xdc_Char)0x6c,  /* [3541] */
    (xdc_Char)0x6c,  /* [3542] */
    (xdc_Char)0x20,  /* [3543] */
    (xdc_Char)0x47,  /* [3544] */
    (xdc_Char)0x61,  /* [3545] */
    (xdc_Char)0x74,  /* [3546] */
    (xdc_Char)0x65,  /* [3547] */
    (xdc_Char)0x4d,  /* [3548] */
    (xdc_Char)0x75,  /* [3549] */
    (xdc_Char)0x74,  /* [3550] */
    (xdc_Char)0x65,  /* [3551] */
    (xdc_Char)0x78,  /* [3552] */
    (xdc_Char)0x50,  /* [3553] */
    (xdc_Char)0x72,  /* [3554] */
    (xdc_Char)0x69,  /* [3555] */
    (xdc_Char)0x5f,  /* [3556] */
    (xdc_Char)0x65,  /* [3557] */
    (xdc_Char)0x6e,  /* [3558] */
    (xdc_Char)0x74,  /* [3559] */
    (xdc_Char)0x65,  /* [3560] */
    (xdc_Char)0x72,  /* [3561] */
    (xdc_Char)0x28,  /* [3562] */
    (xdc_Char)0x29,  /* [3563] */
    (xdc_Char)0x20,  /* [3564] */
    (xdc_Char)0x77,  /* [3565] */
    (xdc_Char)0x68,  /* [3566] */
    (xdc_Char)0x69,  /* [3567] */
    (xdc_Char)0x6c,  /* [3568] */
    (xdc_Char)0x65,  /* [3569] */
    (xdc_Char)0x20,  /* [3570] */
    (xdc_Char)0x74,  /* [3571] */
    (xdc_Char)0x68,  /* [3572] */
    (xdc_Char)0x65,  /* [3573] */
    (xdc_Char)0x20,  /* [3574] */
    (xdc_Char)0x54,  /* [3575] */
    (xdc_Char)0x61,  /* [3576] */
    (xdc_Char)0x73,  /* [3577] */
    (xdc_Char)0x6b,  /* [3578] */
    (xdc_Char)0x20,  /* [3579] */
    (xdc_Char)0x6f,  /* [3580] */
    (xdc_Char)0x72,  /* [3581] */
    (xdc_Char)0x20,  /* [3582] */
    (xdc_Char)0x53,  /* [3583] */
    (xdc_Char)0x77,  /* [3584] */
    (xdc_Char)0x69,  /* [3585] */
    (xdc_Char)0x20,  /* [3586] */
    (xdc_Char)0x73,  /* [3587] */
    (xdc_Char)0x63,  /* [3588] */
    (xdc_Char)0x68,  /* [3589] */
    (xdc_Char)0x65,  /* [3590] */
    (xdc_Char)0x64,  /* [3591] */
    (xdc_Char)0x75,  /* [3592] */
    (xdc_Char)0x6c,  /* [3593] */
    (xdc_Char)0x65,  /* [3594] */
    (xdc_Char)0x72,  /* [3595] */
    (xdc_Char)0x20,  /* [3596] */
    (xdc_Char)0x69,  /* [3597] */
    (xdc_Char)0x73,  /* [3598] */
    (xdc_Char)0x20,  /* [3599] */
    (xdc_Char)0x64,  /* [3600] */
    (xdc_Char)0x69,  /* [3601] */
    (xdc_Char)0x73,  /* [3602] */
    (xdc_Char)0x61,  /* [3603] */
    (xdc_Char)0x62,  /* [3604] */
    (xdc_Char)0x6c,  /* [3605] */
    (xdc_Char)0x65,  /* [3606] */
    (xdc_Char)0x64,  /* [3607] */
    (xdc_Char)0x2e,  /* [3608] */
    (xdc_Char)0x0,  /* [3609] */
    (xdc_Char)0x41,  /* [3610] */
    (xdc_Char)0x5f,  /* [3611] */
    (xdc_Char)0x62,  /* [3612] */
    (xdc_Char)0x61,  /* [3613] */
    (xdc_Char)0x64,  /* [3614] */
    (xdc_Char)0x43,  /* [3615] */
    (xdc_Char)0x6f,  /* [3616] */
    (xdc_Char)0x6e,  /* [3617] */
    (xdc_Char)0x74,  /* [3618] */
    (xdc_Char)0x65,  /* [3619] */
    (xdc_Char)0x78,  /* [3620] */
    (xdc_Char)0x74,  /* [3621] */
    (xdc_Char)0x3a,  /* [3622] */
    (xdc_Char)0x20,  /* [3623] */
    (xdc_Char)0x62,  /* [3624] */
    (xdc_Char)0x61,  /* [3625] */
    (xdc_Char)0x64,  /* [3626] */
    (xdc_Char)0x20,  /* [3627] */
    (xdc_Char)0x63,  /* [3628] */
    (xdc_Char)0x61,  /* [3629] */
    (xdc_Char)0x6c,  /* [3630] */
    (xdc_Char)0x6c,  /* [3631] */
    (xdc_Char)0x69,  /* [3632] */
    (xdc_Char)0x6e,  /* [3633] */
    (xdc_Char)0x67,  /* [3634] */
    (xdc_Char)0x20,  /* [3635] */
    (xdc_Char)0x63,  /* [3636] */
    (xdc_Char)0x6f,  /* [3637] */
    (xdc_Char)0x6e,  /* [3638] */
    (xdc_Char)0x74,  /* [3639] */
    (xdc_Char)0x65,  /* [3640] */
    (xdc_Char)0x78,  /* [3641] */
    (xdc_Char)0x74,  /* [3642] */
    (xdc_Char)0x2e,  /* [3643] */
    (xdc_Char)0x20,  /* [3644] */
    (xdc_Char)0x53,  /* [3645] */
    (xdc_Char)0x65,  /* [3646] */
    (xdc_Char)0x65,  /* [3647] */
    (xdc_Char)0x20,  /* [3648] */
    (xdc_Char)0x47,  /* [3649] */
    (xdc_Char)0x61,  /* [3650] */
    (xdc_Char)0x74,  /* [3651] */
    (xdc_Char)0x65,  /* [3652] */
    (xdc_Char)0x4d,  /* [3653] */
    (xdc_Char)0x75,  /* [3654] */
    (xdc_Char)0x74,  /* [3655] */
    (xdc_Char)0x65,  /* [3656] */
    (xdc_Char)0x78,  /* [3657] */
    (xdc_Char)0x20,  /* [3658] */
    (xdc_Char)0x41,  /* [3659] */
    (xdc_Char)0x50,  /* [3660] */
    (xdc_Char)0x49,  /* [3661] */
    (xdc_Char)0x20,  /* [3662] */
    (xdc_Char)0x64,  /* [3663] */
    (xdc_Char)0x6f,  /* [3664] */
    (xdc_Char)0x63,  /* [3665] */
    (xdc_Char)0x20,  /* [3666] */
    (xdc_Char)0x66,  /* [3667] */
    (xdc_Char)0x6f,  /* [3668] */
    (xdc_Char)0x72,  /* [3669] */
    (xdc_Char)0x20,  /* [3670] */
    (xdc_Char)0x64,  /* [3671] */
    (xdc_Char)0x65,  /* [3672] */
    (xdc_Char)0x74,  /* [3673] */
    (xdc_Char)0x61,  /* [3674] */
    (xdc_Char)0x69,  /* [3675] */
    (xdc_Char)0x6c,  /* [3676] */
    (xdc_Char)0x73,  /* [3677] */
    (xdc_Char)0x2e,  /* [3678] */
    (xdc_Char)0x0,  /* [3679] */
    (xdc_Char)0x41,  /* [3680] */
    (xdc_Char)0x5f,  /* [3681] */
    (xdc_Char)0x62,  /* [3682] */
    (xdc_Char)0x61,  /* [3683] */
    (xdc_Char)0x64,  /* [3684] */
    (xdc_Char)0x43,  /* [3685] */
    (xdc_Char)0x6f,  /* [3686] */
    (xdc_Char)0x6e,  /* [3687] */
    (xdc_Char)0x74,  /* [3688] */
    (xdc_Char)0x65,  /* [3689] */
    (xdc_Char)0x78,  /* [3690] */
    (xdc_Char)0x74,  /* [3691] */
    (xdc_Char)0x3a,  /* [3692] */
    (xdc_Char)0x20,  /* [3693] */
    (xdc_Char)0x62,  /* [3694] */
    (xdc_Char)0x61,  /* [3695] */
    (xdc_Char)0x64,  /* [3696] */
    (xdc_Char)0x20,  /* [3697] */
    (xdc_Char)0x63,  /* [3698] */
    (xdc_Char)0x61,  /* [3699] */
    (xdc_Char)0x6c,  /* [3700] */
    (xdc_Char)0x6c,  /* [3701] */
    (xdc_Char)0x69,  /* [3702] */
    (xdc_Char)0x6e,  /* [3703] */
    (xdc_Char)0x67,  /* [3704] */
    (xdc_Char)0x20,  /* [3705] */
    (xdc_Char)0x63,  /* [3706] */
    (xdc_Char)0x6f,  /* [3707] */
    (xdc_Char)0x6e,  /* [3708] */
    (xdc_Char)0x74,  /* [3709] */
    (xdc_Char)0x65,  /* [3710] */
    (xdc_Char)0x78,  /* [3711] */
    (xdc_Char)0x74,  /* [3712] */
    (xdc_Char)0x2e,  /* [3713] */
    (xdc_Char)0x20,  /* [3714] */
    (xdc_Char)0x53,  /* [3715] */
    (xdc_Char)0x65,  /* [3716] */
    (xdc_Char)0x65,  /* [3717] */
    (xdc_Char)0x20,  /* [3718] */
    (xdc_Char)0x47,  /* [3719] */
    (xdc_Char)0x61,  /* [3720] */
    (xdc_Char)0x74,  /* [3721] */
    (xdc_Char)0x65,  /* [3722] */
    (xdc_Char)0x53,  /* [3723] */
    (xdc_Char)0x70,  /* [3724] */
    (xdc_Char)0x69,  /* [3725] */
    (xdc_Char)0x6e,  /* [3726] */
    (xdc_Char)0x6c,  /* [3727] */
    (xdc_Char)0x6f,  /* [3728] */
    (xdc_Char)0x63,  /* [3729] */
    (xdc_Char)0x6b,  /* [3730] */
    (xdc_Char)0x20,  /* [3731] */
    (xdc_Char)0x41,  /* [3732] */
    (xdc_Char)0x50,  /* [3733] */
    (xdc_Char)0x49,  /* [3734] */
    (xdc_Char)0x20,  /* [3735] */
    (xdc_Char)0x64,  /* [3736] */
    (xdc_Char)0x6f,  /* [3737] */
    (xdc_Char)0x63,  /* [3738] */
    (xdc_Char)0x20,  /* [3739] */
    (xdc_Char)0x66,  /* [3740] */
    (xdc_Char)0x6f,  /* [3741] */
    (xdc_Char)0x72,  /* [3742] */
    (xdc_Char)0x20,  /* [3743] */
    (xdc_Char)0x64,  /* [3744] */
    (xdc_Char)0x65,  /* [3745] */
    (xdc_Char)0x74,  /* [3746] */
    (xdc_Char)0x61,  /* [3747] */
    (xdc_Char)0x69,  /* [3748] */
    (xdc_Char)0x6c,  /* [3749] */
    (xdc_Char)0x73,  /* [3750] */
    (xdc_Char)0x2e,  /* [3751] */
    (xdc_Char)0x0,  /* [3752] */
    (xdc_Char)0x41,  /* [3753] */
    (xdc_Char)0x5f,  /* [3754] */
    (xdc_Char)0x69,  /* [3755] */
    (xdc_Char)0x6e,  /* [3756] */
    (xdc_Char)0x76,  /* [3757] */
    (xdc_Char)0x61,  /* [3758] */
    (xdc_Char)0x6c,  /* [3759] */
    (xdc_Char)0x69,  /* [3760] */
    (xdc_Char)0x64,  /* [3761] */
    (xdc_Char)0x51,  /* [3762] */
    (xdc_Char)0x75,  /* [3763] */
    (xdc_Char)0x61,  /* [3764] */
    (xdc_Char)0x6c,  /* [3765] */
    (xdc_Char)0x69,  /* [3766] */
    (xdc_Char)0x74,  /* [3767] */
    (xdc_Char)0x79,  /* [3768] */
    (xdc_Char)0x3a,  /* [3769] */
    (xdc_Char)0x20,  /* [3770] */
    (xdc_Char)0x53,  /* [3771] */
    (xdc_Char)0x65,  /* [3772] */
    (xdc_Char)0x65,  /* [3773] */
    (xdc_Char)0x20,  /* [3774] */
    (xdc_Char)0x47,  /* [3775] */
    (xdc_Char)0x61,  /* [3776] */
    (xdc_Char)0x74,  /* [3777] */
    (xdc_Char)0x65,  /* [3778] */
    (xdc_Char)0x53,  /* [3779] */
    (xdc_Char)0x70,  /* [3780] */
    (xdc_Char)0x69,  /* [3781] */
    (xdc_Char)0x6e,  /* [3782] */
    (xdc_Char)0x6c,  /* [3783] */
    (xdc_Char)0x6f,  /* [3784] */
    (xdc_Char)0x63,  /* [3785] */
    (xdc_Char)0x6b,  /* [3786] */
    (xdc_Char)0x20,  /* [3787] */
    (xdc_Char)0x41,  /* [3788] */
    (xdc_Char)0x50,  /* [3789] */
    (xdc_Char)0x49,  /* [3790] */
    (xdc_Char)0x20,  /* [3791] */
    (xdc_Char)0x64,  /* [3792] */
    (xdc_Char)0x6f,  /* [3793] */
    (xdc_Char)0x63,  /* [3794] */
    (xdc_Char)0x20,  /* [3795] */
    (xdc_Char)0x66,  /* [3796] */
    (xdc_Char)0x6f,  /* [3797] */
    (xdc_Char)0x72,  /* [3798] */
    (xdc_Char)0x20,  /* [3799] */
    (xdc_Char)0x64,  /* [3800] */
    (xdc_Char)0x65,  /* [3801] */
    (xdc_Char)0x74,  /* [3802] */
    (xdc_Char)0x61,  /* [3803] */
    (xdc_Char)0x69,  /* [3804] */
    (xdc_Char)0x6c,  /* [3805] */
    (xdc_Char)0x73,  /* [3806] */
    (xdc_Char)0x2e,  /* [3807] */
    (xdc_Char)0x0,  /* [3808] */
    (xdc_Char)0x61,  /* [3809] */
    (xdc_Char)0x73,  /* [3810] */
    (xdc_Char)0x73,  /* [3811] */
    (xdc_Char)0x65,  /* [3812] */
    (xdc_Char)0x72,  /* [3813] */
    (xdc_Char)0x74,  /* [3814] */
    (xdc_Char)0x69,  /* [3815] */
    (xdc_Char)0x6f,  /* [3816] */
    (xdc_Char)0x6e,  /* [3817] */
    (xdc_Char)0x20,  /* [3818] */
    (xdc_Char)0x66,  /* [3819] */
    (xdc_Char)0x61,  /* [3820] */
    (xdc_Char)0x69,  /* [3821] */
    (xdc_Char)0x6c,  /* [3822] */
    (xdc_Char)0x75,  /* [3823] */
    (xdc_Char)0x72,  /* [3824] */
    (xdc_Char)0x65,  /* [3825] */
    (xdc_Char)0x25,  /* [3826] */
    (xdc_Char)0x73,  /* [3827] */
    (xdc_Char)0x25,  /* [3828] */
    (xdc_Char)0x73,  /* [3829] */
    (xdc_Char)0x0,  /* [3830] */
    (xdc_Char)0x25,  /* [3831] */
    (xdc_Char)0x24,  /* [3832] */
    (xdc_Char)0x53,  /* [3833] */
    (xdc_Char)0x0,  /* [3834] */
    (xdc_Char)0x6f,  /* [3835] */
    (xdc_Char)0x75,  /* [3836] */
    (xdc_Char)0x74,  /* [3837] */
    (xdc_Char)0x20,  /* [3838] */
    (xdc_Char)0x6f,  /* [3839] */
    (xdc_Char)0x66,  /* [3840] */
    (xdc_Char)0x20,  /* [3841] */
    (xdc_Char)0x6d,  /* [3842] */
    (xdc_Char)0x65,  /* [3843] */
    (xdc_Char)0x6d,  /* [3844] */
    (xdc_Char)0x6f,  /* [3845] */
    (xdc_Char)0x72,  /* [3846] */
    (xdc_Char)0x79,  /* [3847] */
    (xdc_Char)0x3a,  /* [3848] */
    (xdc_Char)0x20,  /* [3849] */
    (xdc_Char)0x68,  /* [3850] */
    (xdc_Char)0x65,  /* [3851] */
    (xdc_Char)0x61,  /* [3852] */
    (xdc_Char)0x70,  /* [3853] */
    (xdc_Char)0x3d,  /* [3854] */
    (xdc_Char)0x30,  /* [3855] */
    (xdc_Char)0x78,  /* [3856] */
    (xdc_Char)0x25,  /* [3857] */
    (xdc_Char)0x78,  /* [3858] */
    (xdc_Char)0x2c,  /* [3859] */
    (xdc_Char)0x20,  /* [3860] */
    (xdc_Char)0x73,  /* [3861] */
    (xdc_Char)0x69,  /* [3862] */
    (xdc_Char)0x7a,  /* [3863] */
    (xdc_Char)0x65,  /* [3864] */
    (xdc_Char)0x3d,  /* [3865] */
    (xdc_Char)0x25,  /* [3866] */
    (xdc_Char)0x75,  /* [3867] */
    (xdc_Char)0x0,  /* [3868] */
    (xdc_Char)0x25,  /* [3869] */
    (xdc_Char)0x73,  /* [3870] */
    (xdc_Char)0x20,  /* [3871] */
    (xdc_Char)0x30,  /* [3872] */
    (xdc_Char)0x78,  /* [3873] */
    (xdc_Char)0x25,  /* [3874] */
    (xdc_Char)0x78,  /* [3875] */
    (xdc_Char)0x0,  /* [3876] */
    (xdc_Char)0x45,  /* [3877] */
    (xdc_Char)0x5f,  /* [3878] */
    (xdc_Char)0x62,  /* [3879] */
    (xdc_Char)0x61,  /* [3880] */
    (xdc_Char)0x64,  /* [3881] */
    (xdc_Char)0x4c,  /* [3882] */
    (xdc_Char)0x65,  /* [3883] */
    (xdc_Char)0x76,  /* [3884] */
    (xdc_Char)0x65,  /* [3885] */
    (xdc_Char)0x6c,  /* [3886] */
    (xdc_Char)0x3a,  /* [3887] */
    (xdc_Char)0x20,  /* [3888] */
    (xdc_Char)0x42,  /* [3889] */
    (xdc_Char)0x61,  /* [3890] */
    (xdc_Char)0x64,  /* [3891] */
    (xdc_Char)0x20,  /* [3892] */
    (xdc_Char)0x66,  /* [3893] */
    (xdc_Char)0x69,  /* [3894] */
    (xdc_Char)0x6c,  /* [3895] */
    (xdc_Char)0x74,  /* [3896] */
    (xdc_Char)0x65,  /* [3897] */
    (xdc_Char)0x72,  /* [3898] */
    (xdc_Char)0x20,  /* [3899] */
    (xdc_Char)0x6c,  /* [3900] */
    (xdc_Char)0x65,  /* [3901] */
    (xdc_Char)0x76,  /* [3902] */
    (xdc_Char)0x65,  /* [3903] */
    (xdc_Char)0x6c,  /* [3904] */
    (xdc_Char)0x20,  /* [3905] */
    (xdc_Char)0x76,  /* [3906] */
    (xdc_Char)0x61,  /* [3907] */
    (xdc_Char)0x6c,  /* [3908] */
    (xdc_Char)0x75,  /* [3909] */
    (xdc_Char)0x65,  /* [3910] */
    (xdc_Char)0x3a,  /* [3911] */
    (xdc_Char)0x20,  /* [3912] */
    (xdc_Char)0x25,  /* [3913] */
    (xdc_Char)0x64,  /* [3914] */
    (xdc_Char)0x0,  /* [3915] */
    (xdc_Char)0x66,  /* [3916] */
    (xdc_Char)0x72,  /* [3917] */
    (xdc_Char)0x65,  /* [3918] */
    (xdc_Char)0x65,  /* [3919] */
    (xdc_Char)0x28,  /* [3920] */
    (xdc_Char)0x29,  /* [3921] */
    (xdc_Char)0x20,  /* [3922] */
    (xdc_Char)0x69,  /* [3923] */
    (xdc_Char)0x6e,  /* [3924] */
    (xdc_Char)0x76,  /* [3925] */
    (xdc_Char)0x61,  /* [3926] */
    (xdc_Char)0x6c,  /* [3927] */
    (xdc_Char)0x69,  /* [3928] */
    (xdc_Char)0x64,  /* [3929] */
    (xdc_Char)0x20,  /* [3930] */
    (xdc_Char)0x69,  /* [3931] */
    (xdc_Char)0x6e,  /* [3932] */
    (xdc_Char)0x20,  /* [3933] */
    (xdc_Char)0x67,  /* [3934] */
    (xdc_Char)0x72,  /* [3935] */
    (xdc_Char)0x6f,  /* [3936] */
    (xdc_Char)0x77,  /* [3937] */
    (xdc_Char)0x74,  /* [3938] */
    (xdc_Char)0x68,  /* [3939] */
    (xdc_Char)0x2d,  /* [3940] */
    (xdc_Char)0x6f,  /* [3941] */
    (xdc_Char)0x6e,  /* [3942] */
    (xdc_Char)0x6c,  /* [3943] */
    (xdc_Char)0x79,  /* [3944] */
    (xdc_Char)0x20,  /* [3945] */
    (xdc_Char)0x48,  /* [3946] */
    (xdc_Char)0x65,  /* [3947] */
    (xdc_Char)0x61,  /* [3948] */
    (xdc_Char)0x70,  /* [3949] */
    (xdc_Char)0x4d,  /* [3950] */
    (xdc_Char)0x69,  /* [3951] */
    (xdc_Char)0x6e,  /* [3952] */
    (xdc_Char)0x0,  /* [3953] */
    (xdc_Char)0x54,  /* [3954] */
    (xdc_Char)0x68,  /* [3955] */
    (xdc_Char)0x65,  /* [3956] */
    (xdc_Char)0x20,  /* [3957] */
    (xdc_Char)0x52,  /* [3958] */
    (xdc_Char)0x54,  /* [3959] */
    (xdc_Char)0x53,  /* [3960] */
    (xdc_Char)0x20,  /* [3961] */
    (xdc_Char)0x68,  /* [3962] */
    (xdc_Char)0x65,  /* [3963] */
    (xdc_Char)0x61,  /* [3964] */
    (xdc_Char)0x70,  /* [3965] */
    (xdc_Char)0x20,  /* [3966] */
    (xdc_Char)0x69,  /* [3967] */
    (xdc_Char)0x73,  /* [3968] */
    (xdc_Char)0x20,  /* [3969] */
    (xdc_Char)0x75,  /* [3970] */
    (xdc_Char)0x73,  /* [3971] */
    (xdc_Char)0x65,  /* [3972] */
    (xdc_Char)0x64,  /* [3973] */
    (xdc_Char)0x20,  /* [3974] */
    (xdc_Char)0x75,  /* [3975] */
    (xdc_Char)0x70,  /* [3976] */
    (xdc_Char)0x2e,  /* [3977] */
    (xdc_Char)0x20,  /* [3978] */
    (xdc_Char)0x45,  /* [3979] */
    (xdc_Char)0x78,  /* [3980] */
    (xdc_Char)0x61,  /* [3981] */
    (xdc_Char)0x6d,  /* [3982] */
    (xdc_Char)0x69,  /* [3983] */
    (xdc_Char)0x6e,  /* [3984] */
    (xdc_Char)0x65,  /* [3985] */
    (xdc_Char)0x20,  /* [3986] */
    (xdc_Char)0x50,  /* [3987] */
    (xdc_Char)0x72,  /* [3988] */
    (xdc_Char)0x6f,  /* [3989] */
    (xdc_Char)0x67,  /* [3990] */
    (xdc_Char)0x72,  /* [3991] */
    (xdc_Char)0x61,  /* [3992] */
    (xdc_Char)0x6d,  /* [3993] */
    (xdc_Char)0x2e,  /* [3994] */
    (xdc_Char)0x68,  /* [3995] */
    (xdc_Char)0x65,  /* [3996] */
    (xdc_Char)0x61,  /* [3997] */
    (xdc_Char)0x70,  /* [3998] */
    (xdc_Char)0x2e,  /* [3999] */
    (xdc_Char)0x0,  /* [4000] */
    (xdc_Char)0x45,  /* [4001] */
    (xdc_Char)0x5f,  /* [4002] */
    (xdc_Char)0x62,  /* [4003] */
    (xdc_Char)0x61,  /* [4004] */
    (xdc_Char)0x64,  /* [4005] */
    (xdc_Char)0x43,  /* [4006] */
    (xdc_Char)0x6f,  /* [4007] */
    (xdc_Char)0x6d,  /* [4008] */
    (xdc_Char)0x6d,  /* [4009] */
    (xdc_Char)0x61,  /* [4010] */
    (xdc_Char)0x6e,  /* [4011] */
    (xdc_Char)0x64,  /* [4012] */
    (xdc_Char)0x3a,  /* [4013] */
    (xdc_Char)0x20,  /* [4014] */
    (xdc_Char)0x52,  /* [4015] */
    (xdc_Char)0x65,  /* [4016] */
    (xdc_Char)0x63,  /* [4017] */
    (xdc_Char)0x65,  /* [4018] */
    (xdc_Char)0x69,  /* [4019] */
    (xdc_Char)0x76,  /* [4020] */
    (xdc_Char)0x65,  /* [4021] */
    (xdc_Char)0x64,  /* [4022] */
    (xdc_Char)0x20,  /* [4023] */
    (xdc_Char)0x69,  /* [4024] */
    (xdc_Char)0x6e,  /* [4025] */
    (xdc_Char)0x76,  /* [4026] */
    (xdc_Char)0x61,  /* [4027] */
    (xdc_Char)0x6c,  /* [4028] */
    (xdc_Char)0x69,  /* [4029] */
    (xdc_Char)0x64,  /* [4030] */
    (xdc_Char)0x20,  /* [4031] */
    (xdc_Char)0x63,  /* [4032] */
    (xdc_Char)0x6f,  /* [4033] */
    (xdc_Char)0x6d,  /* [4034] */
    (xdc_Char)0x6d,  /* [4035] */
    (xdc_Char)0x61,  /* [4036] */
    (xdc_Char)0x6e,  /* [4037] */
    (xdc_Char)0x64,  /* [4038] */
    (xdc_Char)0x2c,  /* [4039] */
    (xdc_Char)0x20,  /* [4040] */
    (xdc_Char)0x69,  /* [4041] */
    (xdc_Char)0x64,  /* [4042] */
    (xdc_Char)0x3a,  /* [4043] */
    (xdc_Char)0x20,  /* [4044] */
    (xdc_Char)0x25,  /* [4045] */
    (xdc_Char)0x64,  /* [4046] */
    (xdc_Char)0x2e,  /* [4047] */
    (xdc_Char)0x0,  /* [4048] */
    (xdc_Char)0x45,  /* [4049] */
    (xdc_Char)0x5f,  /* [4050] */
    (xdc_Char)0x73,  /* [4051] */
    (xdc_Char)0x74,  /* [4052] */
    (xdc_Char)0x61,  /* [4053] */
    (xdc_Char)0x63,  /* [4054] */
    (xdc_Char)0x6b,  /* [4055] */
    (xdc_Char)0x4f,  /* [4056] */
    (xdc_Char)0x76,  /* [4057] */
    (xdc_Char)0x65,  /* [4058] */
    (xdc_Char)0x72,  /* [4059] */
    (xdc_Char)0x66,  /* [4060] */
    (xdc_Char)0x6c,  /* [4061] */
    (xdc_Char)0x6f,  /* [4062] */
    (xdc_Char)0x77,  /* [4063] */
    (xdc_Char)0x3a,  /* [4064] */
    (xdc_Char)0x20,  /* [4065] */
    (xdc_Char)0x54,  /* [4066] */
    (xdc_Char)0x61,  /* [4067] */
    (xdc_Char)0x73,  /* [4068] */
    (xdc_Char)0x6b,  /* [4069] */
    (xdc_Char)0x20,  /* [4070] */
    (xdc_Char)0x30,  /* [4071] */
    (xdc_Char)0x78,  /* [4072] */
    (xdc_Char)0x25,  /* [4073] */
    (xdc_Char)0x78,  /* [4074] */
    (xdc_Char)0x20,  /* [4075] */
    (xdc_Char)0x73,  /* [4076] */
    (xdc_Char)0x74,  /* [4077] */
    (xdc_Char)0x61,  /* [4078] */
    (xdc_Char)0x63,  /* [4079] */
    (xdc_Char)0x6b,  /* [4080] */
    (xdc_Char)0x20,  /* [4081] */
    (xdc_Char)0x6f,  /* [4082] */
    (xdc_Char)0x76,  /* [4083] */
    (xdc_Char)0x65,  /* [4084] */
    (xdc_Char)0x72,  /* [4085] */
    (xdc_Char)0x66,  /* [4086] */
    (xdc_Char)0x6c,  /* [4087] */
    (xdc_Char)0x6f,  /* [4088] */
    (xdc_Char)0x77,  /* [4089] */
    (xdc_Char)0x2e,  /* [4090] */
    (xdc_Char)0x0,  /* [4091] */
    (xdc_Char)0x45,  /* [4092] */
    (xdc_Char)0x5f,  /* [4093] */
    (xdc_Char)0x73,  /* [4094] */
    (xdc_Char)0x70,  /* [4095] */
    (xdc_Char)0x4f,  /* [4096] */
    (xdc_Char)0x75,  /* [4097] */
    (xdc_Char)0x74,  /* [4098] */
    (xdc_Char)0x4f,  /* [4099] */
    (xdc_Char)0x66,  /* [4100] */
    (xdc_Char)0x42,  /* [4101] */
    (xdc_Char)0x6f,  /* [4102] */
    (xdc_Char)0x75,  /* [4103] */
    (xdc_Char)0x6e,  /* [4104] */
    (xdc_Char)0x64,  /* [4105] */
    (xdc_Char)0x73,  /* [4106] */
    (xdc_Char)0x3a,  /* [4107] */
    (xdc_Char)0x20,  /* [4108] */
    (xdc_Char)0x54,  /* [4109] */
    (xdc_Char)0x61,  /* [4110] */
    (xdc_Char)0x73,  /* [4111] */
    (xdc_Char)0x6b,  /* [4112] */
    (xdc_Char)0x20,  /* [4113] */
    (xdc_Char)0x30,  /* [4114] */
    (xdc_Char)0x78,  /* [4115] */
    (xdc_Char)0x25,  /* [4116] */
    (xdc_Char)0x78,  /* [4117] */
    (xdc_Char)0x20,  /* [4118] */
    (xdc_Char)0x73,  /* [4119] */
    (xdc_Char)0x74,  /* [4120] */
    (xdc_Char)0x61,  /* [4121] */
    (xdc_Char)0x63,  /* [4122] */
    (xdc_Char)0x6b,  /* [4123] */
    (xdc_Char)0x20,  /* [4124] */
    (xdc_Char)0x65,  /* [4125] */
    (xdc_Char)0x72,  /* [4126] */
    (xdc_Char)0x72,  /* [4127] */
    (xdc_Char)0x6f,  /* [4128] */
    (xdc_Char)0x72,  /* [4129] */
    (xdc_Char)0x2c,  /* [4130] */
    (xdc_Char)0x20,  /* [4131] */
    (xdc_Char)0x53,  /* [4132] */
    (xdc_Char)0x50,  /* [4133] */
    (xdc_Char)0x20,  /* [4134] */
    (xdc_Char)0x3d,  /* [4135] */
    (xdc_Char)0x20,  /* [4136] */
    (xdc_Char)0x30,  /* [4137] */
    (xdc_Char)0x78,  /* [4138] */
    (xdc_Char)0x25,  /* [4139] */
    (xdc_Char)0x78,  /* [4140] */
    (xdc_Char)0x2e,  /* [4141] */
    (xdc_Char)0x0,  /* [4142] */
    (xdc_Char)0x45,  /* [4143] */
    (xdc_Char)0x5f,  /* [4144] */
    (xdc_Char)0x64,  /* [4145] */
    (xdc_Char)0x65,  /* [4146] */
    (xdc_Char)0x6c,  /* [4147] */
    (xdc_Char)0x65,  /* [4148] */
    (xdc_Char)0x74,  /* [4149] */
    (xdc_Char)0x65,  /* [4150] */
    (xdc_Char)0x4e,  /* [4151] */
    (xdc_Char)0x6f,  /* [4152] */
    (xdc_Char)0x74,  /* [4153] */
    (xdc_Char)0x41,  /* [4154] */
    (xdc_Char)0x6c,  /* [4155] */
    (xdc_Char)0x6c,  /* [4156] */
    (xdc_Char)0x6f,  /* [4157] */
    (xdc_Char)0x77,  /* [4158] */
    (xdc_Char)0x65,  /* [4159] */
    (xdc_Char)0x64,  /* [4160] */
    (xdc_Char)0x3a,  /* [4161] */
    (xdc_Char)0x20,  /* [4162] */
    (xdc_Char)0x54,  /* [4163] */
    (xdc_Char)0x61,  /* [4164] */
    (xdc_Char)0x73,  /* [4165] */
    (xdc_Char)0x6b,  /* [4166] */
    (xdc_Char)0x20,  /* [4167] */
    (xdc_Char)0x30,  /* [4168] */
    (xdc_Char)0x78,  /* [4169] */
    (xdc_Char)0x25,  /* [4170] */
    (xdc_Char)0x78,  /* [4171] */
    (xdc_Char)0x2e,  /* [4172] */
    (xdc_Char)0x0,  /* [4173] */
    (xdc_Char)0x45,  /* [4174] */
    (xdc_Char)0x5f,  /* [4175] */
    (xdc_Char)0x6d,  /* [4176] */
    (xdc_Char)0x6f,  /* [4177] */
    (xdc_Char)0x64,  /* [4178] */
    (xdc_Char)0x75,  /* [4179] */
    (xdc_Char)0x6c,  /* [4180] */
    (xdc_Char)0x65,  /* [4181] */
    (xdc_Char)0x53,  /* [4182] */
    (xdc_Char)0x74,  /* [4183] */
    (xdc_Char)0x61,  /* [4184] */
    (xdc_Char)0x74,  /* [4185] */
    (xdc_Char)0x65,  /* [4186] */
    (xdc_Char)0x43,  /* [4187] */
    (xdc_Char)0x68,  /* [4188] */
    (xdc_Char)0x65,  /* [4189] */
    (xdc_Char)0x63,  /* [4190] */
    (xdc_Char)0x6b,  /* [4191] */
    (xdc_Char)0x46,  /* [4192] */
    (xdc_Char)0x61,  /* [4193] */
    (xdc_Char)0x69,  /* [4194] */
    (xdc_Char)0x6c,  /* [4195] */
    (xdc_Char)0x65,  /* [4196] */
    (xdc_Char)0x64,  /* [4197] */
    (xdc_Char)0x3a,  /* [4198] */
    (xdc_Char)0x20,  /* [4199] */
    (xdc_Char)0x54,  /* [4200] */
    (xdc_Char)0x61,  /* [4201] */
    (xdc_Char)0x73,  /* [4202] */
    (xdc_Char)0x6b,  /* [4203] */
    (xdc_Char)0x20,  /* [4204] */
    (xdc_Char)0x6d,  /* [4205] */
    (xdc_Char)0x6f,  /* [4206] */
    (xdc_Char)0x64,  /* [4207] */
    (xdc_Char)0x75,  /* [4208] */
    (xdc_Char)0x6c,  /* [4209] */
    (xdc_Char)0x65,  /* [4210] */
    (xdc_Char)0x20,  /* [4211] */
    (xdc_Char)0x73,  /* [4212] */
    (xdc_Char)0x74,  /* [4213] */
    (xdc_Char)0x61,  /* [4214] */
    (xdc_Char)0x74,  /* [4215] */
    (xdc_Char)0x65,  /* [4216] */
    (xdc_Char)0x20,  /* [4217] */
    (xdc_Char)0x64,  /* [4218] */
    (xdc_Char)0x61,  /* [4219] */
    (xdc_Char)0x74,  /* [4220] */
    (xdc_Char)0x61,  /* [4221] */
    (xdc_Char)0x20,  /* [4222] */
    (xdc_Char)0x69,  /* [4223] */
    (xdc_Char)0x6e,  /* [4224] */
    (xdc_Char)0x74,  /* [4225] */
    (xdc_Char)0x65,  /* [4226] */
    (xdc_Char)0x67,  /* [4227] */
    (xdc_Char)0x72,  /* [4228] */
    (xdc_Char)0x69,  /* [4229] */
    (xdc_Char)0x74,  /* [4230] */
    (xdc_Char)0x79,  /* [4231] */
    (xdc_Char)0x20,  /* [4232] */
    (xdc_Char)0x63,  /* [4233] */
    (xdc_Char)0x68,  /* [4234] */
    (xdc_Char)0x65,  /* [4235] */
    (xdc_Char)0x63,  /* [4236] */
    (xdc_Char)0x6b,  /* [4237] */
    (xdc_Char)0x20,  /* [4238] */
    (xdc_Char)0x66,  /* [4239] */
    (xdc_Char)0x61,  /* [4240] */
    (xdc_Char)0x69,  /* [4241] */
    (xdc_Char)0x6c,  /* [4242] */
    (xdc_Char)0x65,  /* [4243] */
    (xdc_Char)0x64,  /* [4244] */
    (xdc_Char)0x2e,  /* [4245] */
    (xdc_Char)0x0,  /* [4246] */
    (xdc_Char)0x45,  /* [4247] */
    (xdc_Char)0x5f,  /* [4248] */
    (xdc_Char)0x6f,  /* [4249] */
    (xdc_Char)0x62,  /* [4250] */
    (xdc_Char)0x6a,  /* [4251] */
    (xdc_Char)0x65,  /* [4252] */
    (xdc_Char)0x63,  /* [4253] */
    (xdc_Char)0x74,  /* [4254] */
    (xdc_Char)0x43,  /* [4255] */
    (xdc_Char)0x68,  /* [4256] */
    (xdc_Char)0x65,  /* [4257] */
    (xdc_Char)0x63,  /* [4258] */
    (xdc_Char)0x6b,  /* [4259] */
    (xdc_Char)0x46,  /* [4260] */
    (xdc_Char)0x61,  /* [4261] */
    (xdc_Char)0x69,  /* [4262] */
    (xdc_Char)0x6c,  /* [4263] */
    (xdc_Char)0x65,  /* [4264] */
    (xdc_Char)0x64,  /* [4265] */
    (xdc_Char)0x3a,  /* [4266] */
    (xdc_Char)0x20,  /* [4267] */
    (xdc_Char)0x54,  /* [4268] */
    (xdc_Char)0x61,  /* [4269] */
    (xdc_Char)0x73,  /* [4270] */
    (xdc_Char)0x6b,  /* [4271] */
    (xdc_Char)0x20,  /* [4272] */
    (xdc_Char)0x30,  /* [4273] */
    (xdc_Char)0x78,  /* [4274] */
    (xdc_Char)0x25,  /* [4275] */
    (xdc_Char)0x78,  /* [4276] */
    (xdc_Char)0x20,  /* [4277] */
    (xdc_Char)0x6f,  /* [4278] */
    (xdc_Char)0x62,  /* [4279] */
    (xdc_Char)0x6a,  /* [4280] */
    (xdc_Char)0x65,  /* [4281] */
    (xdc_Char)0x63,  /* [4282] */
    (xdc_Char)0x74,  /* [4283] */
    (xdc_Char)0x20,  /* [4284] */
    (xdc_Char)0x64,  /* [4285] */
    (xdc_Char)0x61,  /* [4286] */
    (xdc_Char)0x74,  /* [4287] */
    (xdc_Char)0x61,  /* [4288] */
    (xdc_Char)0x20,  /* [4289] */
    (xdc_Char)0x69,  /* [4290] */
    (xdc_Char)0x6e,  /* [4291] */
    (xdc_Char)0x74,  /* [4292] */
    (xdc_Char)0x65,  /* [4293] */
    (xdc_Char)0x67,  /* [4294] */
    (xdc_Char)0x72,  /* [4295] */
    (xdc_Char)0x69,  /* [4296] */
    (xdc_Char)0x74,  /* [4297] */
    (xdc_Char)0x79,  /* [4298] */
    (xdc_Char)0x20,  /* [4299] */
    (xdc_Char)0x63,  /* [4300] */
    (xdc_Char)0x68,  /* [4301] */
    (xdc_Char)0x65,  /* [4302] */
    (xdc_Char)0x63,  /* [4303] */
    (xdc_Char)0x6b,  /* [4304] */
    (xdc_Char)0x20,  /* [4305] */
    (xdc_Char)0x66,  /* [4306] */
    (xdc_Char)0x61,  /* [4307] */
    (xdc_Char)0x69,  /* [4308] */
    (xdc_Char)0x6c,  /* [4309] */
    (xdc_Char)0x65,  /* [4310] */
    (xdc_Char)0x64,  /* [4311] */
    (xdc_Char)0x2e,  /* [4312] */
    (xdc_Char)0x0,  /* [4313] */
    (xdc_Char)0x72,  /* [4314] */
    (xdc_Char)0x65,  /* [4315] */
    (xdc_Char)0x71,  /* [4316] */
    (xdc_Char)0x75,  /* [4317] */
    (xdc_Char)0x65,  /* [4318] */
    (xdc_Char)0x73,  /* [4319] */
    (xdc_Char)0x74,  /* [4320] */
    (xdc_Char)0x65,  /* [4321] */
    (xdc_Char)0x64,  /* [4322] */
    (xdc_Char)0x20,  /* [4323] */
    (xdc_Char)0x73,  /* [4324] */
    (xdc_Char)0x69,  /* [4325] */
    (xdc_Char)0x7a,  /* [4326] */
    (xdc_Char)0x65,  /* [4327] */
    (xdc_Char)0x20,  /* [4328] */
    (xdc_Char)0x69,  /* [4329] */
    (xdc_Char)0x73,  /* [4330] */
    (xdc_Char)0x20,  /* [4331] */
    (xdc_Char)0x74,  /* [4332] */
    (xdc_Char)0x6f,  /* [4333] */
    (xdc_Char)0x6f,  /* [4334] */
    (xdc_Char)0x20,  /* [4335] */
    (xdc_Char)0x62,  /* [4336] */
    (xdc_Char)0x69,  /* [4337] */
    (xdc_Char)0x67,  /* [4338] */
    (xdc_Char)0x3a,  /* [4339] */
    (xdc_Char)0x20,  /* [4340] */
    (xdc_Char)0x68,  /* [4341] */
    (xdc_Char)0x61,  /* [4342] */
    (xdc_Char)0x6e,  /* [4343] */
    (xdc_Char)0x64,  /* [4344] */
    (xdc_Char)0x6c,  /* [4345] */
    (xdc_Char)0x65,  /* [4346] */
    (xdc_Char)0x3d,  /* [4347] */
    (xdc_Char)0x30,  /* [4348] */
    (xdc_Char)0x78,  /* [4349] */
    (xdc_Char)0x25,  /* [4350] */
    (xdc_Char)0x78,  /* [4351] */
    (xdc_Char)0x2c,  /* [4352] */
    (xdc_Char)0x20,  /* [4353] */
    (xdc_Char)0x73,  /* [4354] */
    (xdc_Char)0x69,  /* [4355] */
    (xdc_Char)0x7a,  /* [4356] */
    (xdc_Char)0x65,  /* [4357] */
    (xdc_Char)0x3d,  /* [4358] */
    (xdc_Char)0x25,  /* [4359] */
    (xdc_Char)0x75,  /* [4360] */
    (xdc_Char)0x0,  /* [4361] */
    (xdc_Char)0x6f,  /* [4362] */
    (xdc_Char)0x75,  /* [4363] */
    (xdc_Char)0x74,  /* [4364] */
    (xdc_Char)0x20,  /* [4365] */
    (xdc_Char)0x6f,  /* [4366] */
    (xdc_Char)0x66,  /* [4367] */
    (xdc_Char)0x20,  /* [4368] */
    (xdc_Char)0x6d,  /* [4369] */
    (xdc_Char)0x65,  /* [4370] */
    (xdc_Char)0x6d,  /* [4371] */
    (xdc_Char)0x6f,  /* [4372] */
    (xdc_Char)0x72,  /* [4373] */
    (xdc_Char)0x79,  /* [4374] */
    (xdc_Char)0x3a,  /* [4375] */
    (xdc_Char)0x20,  /* [4376] */
    (xdc_Char)0x68,  /* [4377] */
    (xdc_Char)0x61,  /* [4378] */
    (xdc_Char)0x6e,  /* [4379] */
    (xdc_Char)0x64,  /* [4380] */
    (xdc_Char)0x6c,  /* [4381] */
    (xdc_Char)0x65,  /* [4382] */
    (xdc_Char)0x3d,  /* [4383] */
    (xdc_Char)0x30,  /* [4384] */
    (xdc_Char)0x78,  /* [4385] */
    (xdc_Char)0x25,  /* [4386] */
    (xdc_Char)0x78,  /* [4387] */
    (xdc_Char)0x2c,  /* [4388] */
    (xdc_Char)0x20,  /* [4389] */
    (xdc_Char)0x73,  /* [4390] */
    (xdc_Char)0x69,  /* [4391] */
    (xdc_Char)0x7a,  /* [4392] */
    (xdc_Char)0x65,  /* [4393] */
    (xdc_Char)0x3d,  /* [4394] */
    (xdc_Char)0x25,  /* [4395] */
    (xdc_Char)0x75,  /* [4396] */
    (xdc_Char)0x0,  /* [4397] */
    (xdc_Char)0x45,  /* [4398] */
    (xdc_Char)0x5f,  /* [4399] */
    (xdc_Char)0x73,  /* [4400] */
    (xdc_Char)0x74,  /* [4401] */
    (xdc_Char)0x61,  /* [4402] */
    (xdc_Char)0x63,  /* [4403] */
    (xdc_Char)0x6b,  /* [4404] */
    (xdc_Char)0x4f,  /* [4405] */
    (xdc_Char)0x76,  /* [4406] */
    (xdc_Char)0x65,  /* [4407] */
    (xdc_Char)0x72,  /* [4408] */
    (xdc_Char)0x66,  /* [4409] */
    (xdc_Char)0x6c,  /* [4410] */
    (xdc_Char)0x6f,  /* [4411] */
    (xdc_Char)0x77,  /* [4412] */
    (xdc_Char)0x3a,  /* [4413] */
    (xdc_Char)0x20,  /* [4414] */
    (xdc_Char)0x49,  /* [4415] */
    (xdc_Char)0x53,  /* [4416] */
    (xdc_Char)0x52,  /* [4417] */
    (xdc_Char)0x20,  /* [4418] */
    (xdc_Char)0x73,  /* [4419] */
    (xdc_Char)0x74,  /* [4420] */
    (xdc_Char)0x61,  /* [4421] */
    (xdc_Char)0x63,  /* [4422] */
    (xdc_Char)0x6b,  /* [4423] */
    (xdc_Char)0x20,  /* [4424] */
    (xdc_Char)0x6f,  /* [4425] */
    (xdc_Char)0x76,  /* [4426] */
    (xdc_Char)0x65,  /* [4427] */
    (xdc_Char)0x72,  /* [4428] */
    (xdc_Char)0x66,  /* [4429] */
    (xdc_Char)0x6c,  /* [4430] */
    (xdc_Char)0x6f,  /* [4431] */
    (xdc_Char)0x77,  /* [4432] */
    (xdc_Char)0x2e,  /* [4433] */
    (xdc_Char)0x0,  /* [4434] */
    (xdc_Char)0x45,  /* [4435] */
    (xdc_Char)0x5f,  /* [4436] */
    (xdc_Char)0x61,  /* [4437] */
    (xdc_Char)0x6c,  /* [4438] */
    (xdc_Char)0x72,  /* [4439] */
    (xdc_Char)0x65,  /* [4440] */
    (xdc_Char)0x61,  /* [4441] */
    (xdc_Char)0x64,  /* [4442] */
    (xdc_Char)0x79,  /* [4443] */
    (xdc_Char)0x44,  /* [4444] */
    (xdc_Char)0x65,  /* [4445] */
    (xdc_Char)0x66,  /* [4446] */
    (xdc_Char)0x69,  /* [4447] */
    (xdc_Char)0x6e,  /* [4448] */
    (xdc_Char)0x65,  /* [4449] */
    (xdc_Char)0x64,  /* [4450] */
    (xdc_Char)0x3a,  /* [4451] */
    (xdc_Char)0x20,  /* [4452] */
    (xdc_Char)0x48,  /* [4453] */
    (xdc_Char)0x77,  /* [4454] */
    (xdc_Char)0x69,  /* [4455] */
    (xdc_Char)0x20,  /* [4456] */
    (xdc_Char)0x61,  /* [4457] */
    (xdc_Char)0x6c,  /* [4458] */
    (xdc_Char)0x72,  /* [4459] */
    (xdc_Char)0x65,  /* [4460] */
    (xdc_Char)0x61,  /* [4461] */
    (xdc_Char)0x64,  /* [4462] */
    (xdc_Char)0x79,  /* [4463] */
    (xdc_Char)0x20,  /* [4464] */
    (xdc_Char)0x64,  /* [4465] */
    (xdc_Char)0x65,  /* [4466] */
    (xdc_Char)0x66,  /* [4467] */
    (xdc_Char)0x69,  /* [4468] */
    (xdc_Char)0x6e,  /* [4469] */
    (xdc_Char)0x65,  /* [4470] */
    (xdc_Char)0x64,  /* [4471] */
    (xdc_Char)0x3a,  /* [4472] */
    (xdc_Char)0x20,  /* [4473] */
    (xdc_Char)0x69,  /* [4474] */
    (xdc_Char)0x6e,  /* [4475] */
    (xdc_Char)0x74,  /* [4476] */
    (xdc_Char)0x72,  /* [4477] */
    (xdc_Char)0x23,  /* [4478] */
    (xdc_Char)0x20,  /* [4479] */
    (xdc_Char)0x25,  /* [4480] */
    (xdc_Char)0x64,  /* [4481] */
    (xdc_Char)0x0,  /* [4482] */
    (xdc_Char)0x45,  /* [4483] */
    (xdc_Char)0x5f,  /* [4484] */
    (xdc_Char)0x68,  /* [4485] */
    (xdc_Char)0x77,  /* [4486] */
    (xdc_Char)0x69,  /* [4487] */
    (xdc_Char)0x4c,  /* [4488] */
    (xdc_Char)0x69,  /* [4489] */
    (xdc_Char)0x6d,  /* [4490] */
    (xdc_Char)0x69,  /* [4491] */
    (xdc_Char)0x74,  /* [4492] */
    (xdc_Char)0x45,  /* [4493] */
    (xdc_Char)0x78,  /* [4494] */
    (xdc_Char)0x63,  /* [4495] */
    (xdc_Char)0x65,  /* [4496] */
    (xdc_Char)0x65,  /* [4497] */
    (xdc_Char)0x64,  /* [4498] */
    (xdc_Char)0x65,  /* [4499] */
    (xdc_Char)0x64,  /* [4500] */
    (xdc_Char)0x3a,  /* [4501] */
    (xdc_Char)0x20,  /* [4502] */
    (xdc_Char)0x54,  /* [4503] */
    (xdc_Char)0x6f,  /* [4504] */
    (xdc_Char)0x6f,  /* [4505] */
    (xdc_Char)0x20,  /* [4506] */
    (xdc_Char)0x6d,  /* [4507] */
    (xdc_Char)0x61,  /* [4508] */
    (xdc_Char)0x6e,  /* [4509] */
    (xdc_Char)0x79,  /* [4510] */
    (xdc_Char)0x20,  /* [4511] */
    (xdc_Char)0x69,  /* [4512] */
    (xdc_Char)0x6e,  /* [4513] */
    (xdc_Char)0x74,  /* [4514] */
    (xdc_Char)0x65,  /* [4515] */
    (xdc_Char)0x72,  /* [4516] */
    (xdc_Char)0x72,  /* [4517] */
    (xdc_Char)0x75,  /* [4518] */
    (xdc_Char)0x70,  /* [4519] */
    (xdc_Char)0x74,  /* [4520] */
    (xdc_Char)0x73,  /* [4521] */
    (xdc_Char)0x20,  /* [4522] */
    (xdc_Char)0x64,  /* [4523] */
    (xdc_Char)0x65,  /* [4524] */
    (xdc_Char)0x66,  /* [4525] */
    (xdc_Char)0x69,  /* [4526] */
    (xdc_Char)0x6e,  /* [4527] */
    (xdc_Char)0x65,  /* [4528] */
    (xdc_Char)0x64,  /* [4529] */
    (xdc_Char)0x0,  /* [4530] */
    (xdc_Char)0x45,  /* [4531] */
    (xdc_Char)0x5f,  /* [4532] */
    (xdc_Char)0x65,  /* [4533] */
    (xdc_Char)0x78,  /* [4534] */
    (xdc_Char)0x63,  /* [4535] */
    (xdc_Char)0x65,  /* [4536] */
    (xdc_Char)0x70,  /* [4537] */
    (xdc_Char)0x74,  /* [4538] */
    (xdc_Char)0x69,  /* [4539] */
    (xdc_Char)0x6f,  /* [4540] */
    (xdc_Char)0x6e,  /* [4541] */
    (xdc_Char)0x3a,  /* [4542] */
    (xdc_Char)0x20,  /* [4543] */
    (xdc_Char)0x69,  /* [4544] */
    (xdc_Char)0x64,  /* [4545] */
    (xdc_Char)0x20,  /* [4546] */
    (xdc_Char)0x3d,  /* [4547] */
    (xdc_Char)0x20,  /* [4548] */
    (xdc_Char)0x25,  /* [4549] */
    (xdc_Char)0x64,  /* [4550] */
    (xdc_Char)0x2c,  /* [4551] */
    (xdc_Char)0x20,  /* [4552] */
    (xdc_Char)0x70,  /* [4553] */
    (xdc_Char)0x63,  /* [4554] */
    (xdc_Char)0x20,  /* [4555] */
    (xdc_Char)0x3d,  /* [4556] */
    (xdc_Char)0x20,  /* [4557] */
    (xdc_Char)0x25,  /* [4558] */
    (xdc_Char)0x30,  /* [4559] */
    (xdc_Char)0x38,  /* [4560] */
    (xdc_Char)0x78,  /* [4561] */
    (xdc_Char)0x2e,  /* [4562] */
    (xdc_Char)0xa,  /* [4563] */
    (xdc_Char)0x54,  /* [4564] */
    (xdc_Char)0x6f,  /* [4565] */
    (xdc_Char)0x20,  /* [4566] */
    (xdc_Char)0x73,  /* [4567] */
    (xdc_Char)0x65,  /* [4568] */
    (xdc_Char)0x65,  /* [4569] */
    (xdc_Char)0x20,  /* [4570] */
    (xdc_Char)0x6d,  /* [4571] */
    (xdc_Char)0x6f,  /* [4572] */
    (xdc_Char)0x72,  /* [4573] */
    (xdc_Char)0x65,  /* [4574] */
    (xdc_Char)0x20,  /* [4575] */
    (xdc_Char)0x65,  /* [4576] */
    (xdc_Char)0x78,  /* [4577] */
    (xdc_Char)0x63,  /* [4578] */
    (xdc_Char)0x65,  /* [4579] */
    (xdc_Char)0x70,  /* [4580] */
    (xdc_Char)0x74,  /* [4581] */
    (xdc_Char)0x69,  /* [4582] */
    (xdc_Char)0x6f,  /* [4583] */
    (xdc_Char)0x6e,  /* [4584] */
    (xdc_Char)0x20,  /* [4585] */
    (xdc_Char)0x64,  /* [4586] */
    (xdc_Char)0x65,  /* [4587] */
    (xdc_Char)0x74,  /* [4588] */
    (xdc_Char)0x61,  /* [4589] */
    (xdc_Char)0x69,  /* [4590] */
    (xdc_Char)0x6c,  /* [4591] */
    (xdc_Char)0x2c,  /* [4592] */
    (xdc_Char)0x20,  /* [4593] */
    (xdc_Char)0x73,  /* [4594] */
    (xdc_Char)0x65,  /* [4595] */
    (xdc_Char)0x74,  /* [4596] */
    (xdc_Char)0x20,  /* [4597] */
    (xdc_Char)0x74,  /* [4598] */
    (xdc_Char)0x69,  /* [4599] */
    (xdc_Char)0x2e,  /* [4600] */
    (xdc_Char)0x73,  /* [4601] */
    (xdc_Char)0x79,  /* [4602] */
    (xdc_Char)0x73,  /* [4603] */
    (xdc_Char)0x62,  /* [4604] */
    (xdc_Char)0x69,  /* [4605] */
    (xdc_Char)0x6f,  /* [4606] */
    (xdc_Char)0x73,  /* [4607] */
    (xdc_Char)0x2e,  /* [4608] */
    (xdc_Char)0x66,  /* [4609] */
    (xdc_Char)0x61,  /* [4610] */
    (xdc_Char)0x6d,  /* [4611] */
    (xdc_Char)0x69,  /* [4612] */
    (xdc_Char)0x6c,  /* [4613] */
    (xdc_Char)0x79,  /* [4614] */
    (xdc_Char)0x2e,  /* [4615] */
    (xdc_Char)0x61,  /* [4616] */
    (xdc_Char)0x72,  /* [4617] */
    (xdc_Char)0x6d,  /* [4618] */
    (xdc_Char)0x2e,  /* [4619] */
    (xdc_Char)0x6d,  /* [4620] */
    (xdc_Char)0x33,  /* [4621] */
    (xdc_Char)0x2e,  /* [4622] */
    (xdc_Char)0x48,  /* [4623] */
    (xdc_Char)0x77,  /* [4624] */
    (xdc_Char)0x69,  /* [4625] */
    (xdc_Char)0x2e,  /* [4626] */
    (xdc_Char)0x65,  /* [4627] */
    (xdc_Char)0x6e,  /* [4628] */
    (xdc_Char)0x61,  /* [4629] */
    (xdc_Char)0x62,  /* [4630] */
    (xdc_Char)0x6c,  /* [4631] */
    (xdc_Char)0x65,  /* [4632] */
    (xdc_Char)0x45,  /* [4633] */
    (xdc_Char)0x78,  /* [4634] */
    (xdc_Char)0x63,  /* [4635] */
    (xdc_Char)0x65,  /* [4636] */
    (xdc_Char)0x70,  /* [4637] */
    (xdc_Char)0x74,  /* [4638] */
    (xdc_Char)0x69,  /* [4639] */
    (xdc_Char)0x6f,  /* [4640] */
    (xdc_Char)0x6e,  /* [4641] */
    (xdc_Char)0x20,  /* [4642] */
    (xdc_Char)0x3d,  /* [4643] */
    (xdc_Char)0x20,  /* [4644] */
    (xdc_Char)0x74,  /* [4645] */
    (xdc_Char)0x72,  /* [4646] */
    (xdc_Char)0x75,  /* [4647] */
    (xdc_Char)0x65,  /* [4648] */
    (xdc_Char)0x20,  /* [4649] */
    (xdc_Char)0x6f,  /* [4650] */
    (xdc_Char)0x72,  /* [4651] */
    (xdc_Char)0x2c,  /* [4652] */
    (xdc_Char)0xa,  /* [4653] */
    (xdc_Char)0x65,  /* [4654] */
    (xdc_Char)0x78,  /* [4655] */
    (xdc_Char)0x61,  /* [4656] */
    (xdc_Char)0x6d,  /* [4657] */
    (xdc_Char)0x69,  /* [4658] */
    (xdc_Char)0x6e,  /* [4659] */
    (xdc_Char)0x65,  /* [4660] */
    (xdc_Char)0x20,  /* [4661] */
    (xdc_Char)0x74,  /* [4662] */
    (xdc_Char)0x68,  /* [4663] */
    (xdc_Char)0x65,  /* [4664] */
    (xdc_Char)0x20,  /* [4665] */
    (xdc_Char)0x45,  /* [4666] */
    (xdc_Char)0x78,  /* [4667] */
    (xdc_Char)0x63,  /* [4668] */
    (xdc_Char)0x65,  /* [4669] */
    (xdc_Char)0x70,  /* [4670] */
    (xdc_Char)0x74,  /* [4671] */
    (xdc_Char)0x69,  /* [4672] */
    (xdc_Char)0x6f,  /* [4673] */
    (xdc_Char)0x6e,  /* [4674] */
    (xdc_Char)0x20,  /* [4675] */
    (xdc_Char)0x76,  /* [4676] */
    (xdc_Char)0x69,  /* [4677] */
    (xdc_Char)0x65,  /* [4678] */
    (xdc_Char)0x77,  /* [4679] */
    (xdc_Char)0x20,  /* [4680] */
    (xdc_Char)0x66,  /* [4681] */
    (xdc_Char)0x6f,  /* [4682] */
    (xdc_Char)0x72,  /* [4683] */
    (xdc_Char)0x20,  /* [4684] */
    (xdc_Char)0x74,  /* [4685] */
    (xdc_Char)0x68,  /* [4686] */
    (xdc_Char)0x65,  /* [4687] */
    (xdc_Char)0x20,  /* [4688] */
    (xdc_Char)0x74,  /* [4689] */
    (xdc_Char)0x69,  /* [4690] */
    (xdc_Char)0x2e,  /* [4691] */
    (xdc_Char)0x73,  /* [4692] */
    (xdc_Char)0x79,  /* [4693] */
    (xdc_Char)0x73,  /* [4694] */
    (xdc_Char)0x62,  /* [4695] */
    (xdc_Char)0x69,  /* [4696] */
    (xdc_Char)0x6f,  /* [4697] */
    (xdc_Char)0x73,  /* [4698] */
    (xdc_Char)0x2e,  /* [4699] */
    (xdc_Char)0x66,  /* [4700] */
    (xdc_Char)0x61,  /* [4701] */
    (xdc_Char)0x6d,  /* [4702] */
    (xdc_Char)0x69,  /* [4703] */
    (xdc_Char)0x6c,  /* [4704] */
    (xdc_Char)0x79,  /* [4705] */
    (xdc_Char)0x2e,  /* [4706] */
    (xdc_Char)0x61,  /* [4707] */
    (xdc_Char)0x72,  /* [4708] */
    (xdc_Char)0x6d,  /* [4709] */
    (xdc_Char)0x2e,  /* [4710] */
    (xdc_Char)0x6d,  /* [4711] */
    (xdc_Char)0x33,  /* [4712] */
    (xdc_Char)0x2e,  /* [4713] */
    (xdc_Char)0x48,  /* [4714] */
    (xdc_Char)0x77,  /* [4715] */
    (xdc_Char)0x69,  /* [4716] */
    (xdc_Char)0x20,  /* [4717] */
    (xdc_Char)0x6d,  /* [4718] */
    (xdc_Char)0x6f,  /* [4719] */
    (xdc_Char)0x64,  /* [4720] */
    (xdc_Char)0x75,  /* [4721] */
    (xdc_Char)0x6c,  /* [4722] */
    (xdc_Char)0x65,  /* [4723] */
    (xdc_Char)0x20,  /* [4724] */
    (xdc_Char)0x75,  /* [4725] */
    (xdc_Char)0x73,  /* [4726] */
    (xdc_Char)0x69,  /* [4727] */
    (xdc_Char)0x6e,  /* [4728] */
    (xdc_Char)0x67,  /* [4729] */
    (xdc_Char)0x20,  /* [4730] */
    (xdc_Char)0x52,  /* [4731] */
    (xdc_Char)0x4f,  /* [4732] */
    (xdc_Char)0x56,  /* [4733] */
    (xdc_Char)0x2e,  /* [4734] */
    (xdc_Char)0x0,  /* [4735] */
    (xdc_Char)0x45,  /* [4736] */
    (xdc_Char)0x5f,  /* [4737] */
    (xdc_Char)0x6e,  /* [4738] */
    (xdc_Char)0x6f,  /* [4739] */
    (xdc_Char)0x49,  /* [4740] */
    (xdc_Char)0x73,  /* [4741] */
    (xdc_Char)0x72,  /* [4742] */
    (xdc_Char)0x3a,  /* [4743] */
    (xdc_Char)0x20,  /* [4744] */
    (xdc_Char)0x69,  /* [4745] */
    (xdc_Char)0x64,  /* [4746] */
    (xdc_Char)0x20,  /* [4747] */
    (xdc_Char)0x3d,  /* [4748] */
    (xdc_Char)0x20,  /* [4749] */
    (xdc_Char)0x25,  /* [4750] */
    (xdc_Char)0x64,  /* [4751] */
    (xdc_Char)0x2c,  /* [4752] */
    (xdc_Char)0x20,  /* [4753] */
    (xdc_Char)0x70,  /* [4754] */
    (xdc_Char)0x63,  /* [4755] */
    (xdc_Char)0x20,  /* [4756] */
    (xdc_Char)0x3d,  /* [4757] */
    (xdc_Char)0x20,  /* [4758] */
    (xdc_Char)0x25,  /* [4759] */
    (xdc_Char)0x30,  /* [4760] */
    (xdc_Char)0x38,  /* [4761] */
    (xdc_Char)0x78,  /* [4762] */
    (xdc_Char)0x0,  /* [4763] */
    (xdc_Char)0x45,  /* [4764] */
    (xdc_Char)0x5f,  /* [4765] */
    (xdc_Char)0x4e,  /* [4766] */
    (xdc_Char)0x4d,  /* [4767] */
    (xdc_Char)0x49,  /* [4768] */
    (xdc_Char)0x3a,  /* [4769] */
    (xdc_Char)0x20,  /* [4770] */
    (xdc_Char)0x25,  /* [4771] */
    (xdc_Char)0x73,  /* [4772] */
    (xdc_Char)0x0,  /* [4773] */
    (xdc_Char)0x45,  /* [4774] */
    (xdc_Char)0x5f,  /* [4775] */
    (xdc_Char)0x68,  /* [4776] */
    (xdc_Char)0x61,  /* [4777] */
    (xdc_Char)0x72,  /* [4778] */
    (xdc_Char)0x64,  /* [4779] */
    (xdc_Char)0x46,  /* [4780] */
    (xdc_Char)0x61,  /* [4781] */
    (xdc_Char)0x75,  /* [4782] */
    (xdc_Char)0x6c,  /* [4783] */
    (xdc_Char)0x74,  /* [4784] */
    (xdc_Char)0x3a,  /* [4785] */
    (xdc_Char)0x20,  /* [4786] */
    (xdc_Char)0x25,  /* [4787] */
    (xdc_Char)0x73,  /* [4788] */
    (xdc_Char)0x0,  /* [4789] */
    (xdc_Char)0x45,  /* [4790] */
    (xdc_Char)0x5f,  /* [4791] */
    (xdc_Char)0x6d,  /* [4792] */
    (xdc_Char)0x65,  /* [4793] */
    (xdc_Char)0x6d,  /* [4794] */
    (xdc_Char)0x46,  /* [4795] */
    (xdc_Char)0x61,  /* [4796] */
    (xdc_Char)0x75,  /* [4797] */
    (xdc_Char)0x6c,  /* [4798] */
    (xdc_Char)0x74,  /* [4799] */
    (xdc_Char)0x3a,  /* [4800] */
    (xdc_Char)0x20,  /* [4801] */
    (xdc_Char)0x25,  /* [4802] */
    (xdc_Char)0x73,  /* [4803] */
    (xdc_Char)0x2c,  /* [4804] */
    (xdc_Char)0x20,  /* [4805] */
    (xdc_Char)0x61,  /* [4806] */
    (xdc_Char)0x64,  /* [4807] */
    (xdc_Char)0x64,  /* [4808] */
    (xdc_Char)0x72,  /* [4809] */
    (xdc_Char)0x65,  /* [4810] */
    (xdc_Char)0x73,  /* [4811] */
    (xdc_Char)0x73,  /* [4812] */
    (xdc_Char)0x3a,  /* [4813] */
    (xdc_Char)0x20,  /* [4814] */
    (xdc_Char)0x25,  /* [4815] */
    (xdc_Char)0x30,  /* [4816] */
    (xdc_Char)0x38,  /* [4817] */
    (xdc_Char)0x78,  /* [4818] */
    (xdc_Char)0x0,  /* [4819] */
    (xdc_Char)0x45,  /* [4820] */
    (xdc_Char)0x5f,  /* [4821] */
    (xdc_Char)0x62,  /* [4822] */
    (xdc_Char)0x75,  /* [4823] */
    (xdc_Char)0x73,  /* [4824] */
    (xdc_Char)0x46,  /* [4825] */
    (xdc_Char)0x61,  /* [4826] */
    (xdc_Char)0x75,  /* [4827] */
    (xdc_Char)0x6c,  /* [4828] */
    (xdc_Char)0x74,  /* [4829] */
    (xdc_Char)0x3a,  /* [4830] */
    (xdc_Char)0x20,  /* [4831] */
    (xdc_Char)0x25,  /* [4832] */
    (xdc_Char)0x73,  /* [4833] */
    (xdc_Char)0x2c,  /* [4834] */
    (xdc_Char)0x20,  /* [4835] */
    (xdc_Char)0x61,  /* [4836] */
    (xdc_Char)0x64,  /* [4837] */
    (xdc_Char)0x64,  /* [4838] */
    (xdc_Char)0x72,  /* [4839] */
    (xdc_Char)0x65,  /* [4840] */
    (xdc_Char)0x73,  /* [4841] */
    (xdc_Char)0x73,  /* [4842] */
    (xdc_Char)0x3a,  /* [4843] */
    (xdc_Char)0x20,  /* [4844] */
    (xdc_Char)0x25,  /* [4845] */
    (xdc_Char)0x30,  /* [4846] */
    (xdc_Char)0x38,  /* [4847] */
    (xdc_Char)0x78,  /* [4848] */
    (xdc_Char)0x0,  /* [4849] */
    (xdc_Char)0x45,  /* [4850] */
    (xdc_Char)0x5f,  /* [4851] */
    (xdc_Char)0x75,  /* [4852] */
    (xdc_Char)0x73,  /* [4853] */
    (xdc_Char)0x61,  /* [4854] */
    (xdc_Char)0x67,  /* [4855] */
    (xdc_Char)0x65,  /* [4856] */
    (xdc_Char)0x46,  /* [4857] */
    (xdc_Char)0x61,  /* [4858] */
    (xdc_Char)0x75,  /* [4859] */
    (xdc_Char)0x6c,  /* [4860] */
    (xdc_Char)0x74,  /* [4861] */
    (xdc_Char)0x3a,  /* [4862] */
    (xdc_Char)0x20,  /* [4863] */
    (xdc_Char)0x25,  /* [4864] */
    (xdc_Char)0x73,  /* [4865] */
    (xdc_Char)0x0,  /* [4866] */
    (xdc_Char)0x45,  /* [4867] */
    (xdc_Char)0x5f,  /* [4868] */
    (xdc_Char)0x73,  /* [4869] */
    (xdc_Char)0x76,  /* [4870] */
    (xdc_Char)0x43,  /* [4871] */
    (xdc_Char)0x61,  /* [4872] */
    (xdc_Char)0x6c,  /* [4873] */
    (xdc_Char)0x6c,  /* [4874] */
    (xdc_Char)0x3a,  /* [4875] */
    (xdc_Char)0x20,  /* [4876] */
    (xdc_Char)0x73,  /* [4877] */
    (xdc_Char)0x76,  /* [4878] */
    (xdc_Char)0x4e,  /* [4879] */
    (xdc_Char)0x75,  /* [4880] */
    (xdc_Char)0x6d,  /* [4881] */
    (xdc_Char)0x20,  /* [4882] */
    (xdc_Char)0x3d,  /* [4883] */
    (xdc_Char)0x20,  /* [4884] */
    (xdc_Char)0x25,  /* [4885] */
    (xdc_Char)0x64,  /* [4886] */
    (xdc_Char)0x0,  /* [4887] */
    (xdc_Char)0x45,  /* [4888] */
    (xdc_Char)0x5f,  /* [4889] */
    (xdc_Char)0x64,  /* [4890] */
    (xdc_Char)0x65,  /* [4891] */
    (xdc_Char)0x62,  /* [4892] */
    (xdc_Char)0x75,  /* [4893] */
    (xdc_Char)0x67,  /* [4894] */
    (xdc_Char)0x4d,  /* [4895] */
    (xdc_Char)0x6f,  /* [4896] */
    (xdc_Char)0x6e,  /* [4897] */
    (xdc_Char)0x3a,  /* [4898] */
    (xdc_Char)0x20,  /* [4899] */
    (xdc_Char)0x25,  /* [4900] */
    (xdc_Char)0x73,  /* [4901] */
    (xdc_Char)0x0,  /* [4902] */
    (xdc_Char)0x45,  /* [4903] */
    (xdc_Char)0x5f,  /* [4904] */
    (xdc_Char)0x72,  /* [4905] */
    (xdc_Char)0x65,  /* [4906] */
    (xdc_Char)0x73,  /* [4907] */
    (xdc_Char)0x65,  /* [4908] */
    (xdc_Char)0x72,  /* [4909] */
    (xdc_Char)0x76,  /* [4910] */
    (xdc_Char)0x65,  /* [4911] */
    (xdc_Char)0x64,  /* [4912] */
    (xdc_Char)0x3a,  /* [4913] */
    (xdc_Char)0x20,  /* [4914] */
    (xdc_Char)0x25,  /* [4915] */
    (xdc_Char)0x73,  /* [4916] */
    (xdc_Char)0x20,  /* [4917] */
    (xdc_Char)0x25,  /* [4918] */
    (xdc_Char)0x64,  /* [4919] */
    (xdc_Char)0x0,  /* [4920] */
    (xdc_Char)0x45,  /* [4921] */
    (xdc_Char)0x5f,  /* [4922] */
    (xdc_Char)0x69,  /* [4923] */
    (xdc_Char)0x6e,  /* [4924] */
    (xdc_Char)0x76,  /* [4925] */
    (xdc_Char)0x61,  /* [4926] */
    (xdc_Char)0x6c,  /* [4927] */
    (xdc_Char)0x69,  /* [4928] */
    (xdc_Char)0x64,  /* [4929] */
    (xdc_Char)0x54,  /* [4930] */
    (xdc_Char)0x69,  /* [4931] */
    (xdc_Char)0x6d,  /* [4932] */
    (xdc_Char)0x65,  /* [4933] */
    (xdc_Char)0x72,  /* [4934] */
    (xdc_Char)0x3a,  /* [4935] */
    (xdc_Char)0x20,  /* [4936] */
    (xdc_Char)0x49,  /* [4937] */
    (xdc_Char)0x6e,  /* [4938] */
    (xdc_Char)0x76,  /* [4939] */
    (xdc_Char)0x61,  /* [4940] */
    (xdc_Char)0x6c,  /* [4941] */
    (xdc_Char)0x69,  /* [4942] */
    (xdc_Char)0x64,  /* [4943] */
    (xdc_Char)0x20,  /* [4944] */
    (xdc_Char)0x54,  /* [4945] */
    (xdc_Char)0x69,  /* [4946] */
    (xdc_Char)0x6d,  /* [4947] */
    (xdc_Char)0x65,  /* [4948] */
    (xdc_Char)0x72,  /* [4949] */
    (xdc_Char)0x20,  /* [4950] */
    (xdc_Char)0x49,  /* [4951] */
    (xdc_Char)0x64,  /* [4952] */
    (xdc_Char)0x20,  /* [4953] */
    (xdc_Char)0x25,  /* [4954] */
    (xdc_Char)0x64,  /* [4955] */
    (xdc_Char)0x0,  /* [4956] */
    (xdc_Char)0x45,  /* [4957] */
    (xdc_Char)0x5f,  /* [4958] */
    (xdc_Char)0x6e,  /* [4959] */
    (xdc_Char)0x6f,  /* [4960] */
    (xdc_Char)0x74,  /* [4961] */
    (xdc_Char)0x41,  /* [4962] */
    (xdc_Char)0x76,  /* [4963] */
    (xdc_Char)0x61,  /* [4964] */
    (xdc_Char)0x69,  /* [4965] */
    (xdc_Char)0x6c,  /* [4966] */
    (xdc_Char)0x61,  /* [4967] */
    (xdc_Char)0x62,  /* [4968] */
    (xdc_Char)0x6c,  /* [4969] */
    (xdc_Char)0x65,  /* [4970] */
    (xdc_Char)0x3a,  /* [4971] */
    (xdc_Char)0x20,  /* [4972] */
    (xdc_Char)0x54,  /* [4973] */
    (xdc_Char)0x69,  /* [4974] */
    (xdc_Char)0x6d,  /* [4975] */
    (xdc_Char)0x65,  /* [4976] */
    (xdc_Char)0x72,  /* [4977] */
    (xdc_Char)0x20,  /* [4978] */
    (xdc_Char)0x6e,  /* [4979] */
    (xdc_Char)0x6f,  /* [4980] */
    (xdc_Char)0x74,  /* [4981] */
    (xdc_Char)0x20,  /* [4982] */
    (xdc_Char)0x61,  /* [4983] */
    (xdc_Char)0x76,  /* [4984] */
    (xdc_Char)0x61,  /* [4985] */
    (xdc_Char)0x69,  /* [4986] */
    (xdc_Char)0x6c,  /* [4987] */
    (xdc_Char)0x61,  /* [4988] */
    (xdc_Char)0x62,  /* [4989] */
    (xdc_Char)0x6c,  /* [4990] */
    (xdc_Char)0x65,  /* [4991] */
    (xdc_Char)0x20,  /* [4992] */
    (xdc_Char)0x25,  /* [4993] */
    (xdc_Char)0x64,  /* [4994] */
    (xdc_Char)0x0,  /* [4995] */
    (xdc_Char)0x45,  /* [4996] */
    (xdc_Char)0x5f,  /* [4997] */
    (xdc_Char)0x63,  /* [4998] */
    (xdc_Char)0x61,  /* [4999] */
    (xdc_Char)0x6e,  /* [5000] */
    (xdc_Char)0x6e,  /* [5001] */
    (xdc_Char)0x6f,  /* [5002] */
    (xdc_Char)0x74,  /* [5003] */
    (xdc_Char)0x53,  /* [5004] */
    (xdc_Char)0x75,  /* [5005] */
    (xdc_Char)0x70,  /* [5006] */
    (xdc_Char)0x70,  /* [5007] */
    (xdc_Char)0x6f,  /* [5008] */
    (xdc_Char)0x72,  /* [5009] */
    (xdc_Char)0x74,  /* [5010] */
    (xdc_Char)0x3a,  /* [5011] */
    (xdc_Char)0x20,  /* [5012] */
    (xdc_Char)0x54,  /* [5013] */
    (xdc_Char)0x69,  /* [5014] */
    (xdc_Char)0x6d,  /* [5015] */
    (xdc_Char)0x65,  /* [5016] */
    (xdc_Char)0x72,  /* [5017] */
    (xdc_Char)0x20,  /* [5018] */
    (xdc_Char)0x63,  /* [5019] */
    (xdc_Char)0x61,  /* [5020] */
    (xdc_Char)0x6e,  /* [5021] */
    (xdc_Char)0x6e,  /* [5022] */
    (xdc_Char)0x6f,  /* [5023] */
    (xdc_Char)0x74,  /* [5024] */
    (xdc_Char)0x20,  /* [5025] */
    (xdc_Char)0x73,  /* [5026] */
    (xdc_Char)0x75,  /* [5027] */
    (xdc_Char)0x70,  /* [5028] */
    (xdc_Char)0x70,  /* [5029] */
    (xdc_Char)0x6f,  /* [5030] */
    (xdc_Char)0x72,  /* [5031] */
    (xdc_Char)0x74,  /* [5032] */
    (xdc_Char)0x20,  /* [5033] */
    (xdc_Char)0x72,  /* [5034] */
    (xdc_Char)0x65,  /* [5035] */
    (xdc_Char)0x71,  /* [5036] */
    (xdc_Char)0x75,  /* [5037] */
    (xdc_Char)0x65,  /* [5038] */
    (xdc_Char)0x73,  /* [5039] */
    (xdc_Char)0x74,  /* [5040] */
    (xdc_Char)0x65,  /* [5041] */
    (xdc_Char)0x64,  /* [5042] */
    (xdc_Char)0x20,  /* [5043] */
    (xdc_Char)0x70,  /* [5044] */
    (xdc_Char)0x65,  /* [5045] */
    (xdc_Char)0x72,  /* [5046] */
    (xdc_Char)0x69,  /* [5047] */
    (xdc_Char)0x6f,  /* [5048] */
    (xdc_Char)0x64,  /* [5049] */
    (xdc_Char)0x20,  /* [5050] */
    (xdc_Char)0x25,  /* [5051] */
    (xdc_Char)0x64,  /* [5052] */
    (xdc_Char)0x0,  /* [5053] */
    (xdc_Char)0x45,  /* [5054] */
    (xdc_Char)0x5f,  /* [5055] */
    (xdc_Char)0x70,  /* [5056] */
    (xdc_Char)0x72,  /* [5057] */
    (xdc_Char)0x69,  /* [5058] */
    (xdc_Char)0x6f,  /* [5059] */
    (xdc_Char)0x72,  /* [5060] */
    (xdc_Char)0x69,  /* [5061] */
    (xdc_Char)0x74,  /* [5062] */
    (xdc_Char)0x79,  /* [5063] */
    (xdc_Char)0x3a,  /* [5064] */
    (xdc_Char)0x20,  /* [5065] */
    (xdc_Char)0x54,  /* [5066] */
    (xdc_Char)0x68,  /* [5067] */
    (xdc_Char)0x72,  /* [5068] */
    (xdc_Char)0x65,  /* [5069] */
    (xdc_Char)0x61,  /* [5070] */
    (xdc_Char)0x64,  /* [5071] */
    (xdc_Char)0x20,  /* [5072] */
    (xdc_Char)0x70,  /* [5073] */
    (xdc_Char)0x72,  /* [5074] */
    (xdc_Char)0x69,  /* [5075] */
    (xdc_Char)0x6f,  /* [5076] */
    (xdc_Char)0x72,  /* [5077] */
    (xdc_Char)0x69,  /* [5078] */
    (xdc_Char)0x74,  /* [5079] */
    (xdc_Char)0x79,  /* [5080] */
    (xdc_Char)0x20,  /* [5081] */
    (xdc_Char)0x69,  /* [5082] */
    (xdc_Char)0x73,  /* [5083] */
    (xdc_Char)0x20,  /* [5084] */
    (xdc_Char)0x69,  /* [5085] */
    (xdc_Char)0x6e,  /* [5086] */
    (xdc_Char)0x76,  /* [5087] */
    (xdc_Char)0x61,  /* [5088] */
    (xdc_Char)0x6c,  /* [5089] */
    (xdc_Char)0x69,  /* [5090] */
    (xdc_Char)0x64,  /* [5091] */
    (xdc_Char)0x20,  /* [5092] */
    (xdc_Char)0x25,  /* [5093] */
    (xdc_Char)0x64,  /* [5094] */
    (xdc_Char)0x0,  /* [5095] */
    (xdc_Char)0x3c,  /* [5096] */
    (xdc_Char)0x2d,  /* [5097] */
    (xdc_Char)0x2d,  /* [5098] */
    (xdc_Char)0x20,  /* [5099] */
    (xdc_Char)0x63,  /* [5100] */
    (xdc_Char)0x6f,  /* [5101] */
    (xdc_Char)0x6e,  /* [5102] */
    (xdc_Char)0x73,  /* [5103] */
    (xdc_Char)0x74,  /* [5104] */
    (xdc_Char)0x72,  /* [5105] */
    (xdc_Char)0x75,  /* [5106] */
    (xdc_Char)0x63,  /* [5107] */
    (xdc_Char)0x74,  /* [5108] */
    (xdc_Char)0x3a,  /* [5109] */
    (xdc_Char)0x20,  /* [5110] */
    (xdc_Char)0x25,  /* [5111] */
    (xdc_Char)0x70,  /* [5112] */
    (xdc_Char)0x28,  /* [5113] */
    (xdc_Char)0x27,  /* [5114] */
    (xdc_Char)0x25,  /* [5115] */
    (xdc_Char)0x73,  /* [5116] */
    (xdc_Char)0x27,  /* [5117] */
    (xdc_Char)0x29,  /* [5118] */
    (xdc_Char)0x0,  /* [5119] */
    (xdc_Char)0x3c,  /* [5120] */
    (xdc_Char)0x2d,  /* [5121] */
    (xdc_Char)0x2d,  /* [5122] */
    (xdc_Char)0x20,  /* [5123] */
    (xdc_Char)0x63,  /* [5124] */
    (xdc_Char)0x72,  /* [5125] */
    (xdc_Char)0x65,  /* [5126] */
    (xdc_Char)0x61,  /* [5127] */
    (xdc_Char)0x74,  /* [5128] */
    (xdc_Char)0x65,  /* [5129] */
    (xdc_Char)0x3a,  /* [5130] */
    (xdc_Char)0x20,  /* [5131] */
    (xdc_Char)0x25,  /* [5132] */
    (xdc_Char)0x70,  /* [5133] */
    (xdc_Char)0x28,  /* [5134] */
    (xdc_Char)0x27,  /* [5135] */
    (xdc_Char)0x25,  /* [5136] */
    (xdc_Char)0x73,  /* [5137] */
    (xdc_Char)0x27,  /* [5138] */
    (xdc_Char)0x29,  /* [5139] */
    (xdc_Char)0x0,  /* [5140] */
    (xdc_Char)0x2d,  /* [5141] */
    (xdc_Char)0x2d,  /* [5142] */
    (xdc_Char)0x3e,  /* [5143] */
    (xdc_Char)0x20,  /* [5144] */
    (xdc_Char)0x64,  /* [5145] */
    (xdc_Char)0x65,  /* [5146] */
    (xdc_Char)0x73,  /* [5147] */
    (xdc_Char)0x74,  /* [5148] */
    (xdc_Char)0x72,  /* [5149] */
    (xdc_Char)0x75,  /* [5150] */
    (xdc_Char)0x63,  /* [5151] */
    (xdc_Char)0x74,  /* [5152] */
    (xdc_Char)0x3a,  /* [5153] */
    (xdc_Char)0x20,  /* [5154] */
    (xdc_Char)0x28,  /* [5155] */
    (xdc_Char)0x25,  /* [5156] */
    (xdc_Char)0x70,  /* [5157] */
    (xdc_Char)0x29,  /* [5158] */
    (xdc_Char)0x0,  /* [5159] */
    (xdc_Char)0x2d,  /* [5160] */
    (xdc_Char)0x2d,  /* [5161] */
    (xdc_Char)0x3e,  /* [5162] */
    (xdc_Char)0x20,  /* [5163] */
    (xdc_Char)0x64,  /* [5164] */
    (xdc_Char)0x65,  /* [5165] */
    (xdc_Char)0x6c,  /* [5166] */
    (xdc_Char)0x65,  /* [5167] */
    (xdc_Char)0x74,  /* [5168] */
    (xdc_Char)0x65,  /* [5169] */
    (xdc_Char)0x3a,  /* [5170] */
    (xdc_Char)0x20,  /* [5171] */
    (xdc_Char)0x28,  /* [5172] */
    (xdc_Char)0x25,  /* [5173] */
    (xdc_Char)0x70,  /* [5174] */
    (xdc_Char)0x29,  /* [5175] */
    (xdc_Char)0x0,  /* [5176] */
    (xdc_Char)0x45,  /* [5177] */
    (xdc_Char)0x52,  /* [5178] */
    (xdc_Char)0x52,  /* [5179] */
    (xdc_Char)0x4f,  /* [5180] */
    (xdc_Char)0x52,  /* [5181] */
    (xdc_Char)0x3a,  /* [5182] */
    (xdc_Char)0x20,  /* [5183] */
    (xdc_Char)0x25,  /* [5184] */
    (xdc_Char)0x24,  /* [5185] */
    (xdc_Char)0x46,  /* [5186] */
    (xdc_Char)0x25,  /* [5187] */
    (xdc_Char)0x24,  /* [5188] */
    (xdc_Char)0x53,  /* [5189] */
    (xdc_Char)0x0,  /* [5190] */
    (xdc_Char)0x57,  /* [5191] */
    (xdc_Char)0x41,  /* [5192] */
    (xdc_Char)0x52,  /* [5193] */
    (xdc_Char)0x4e,  /* [5194] */
    (xdc_Char)0x49,  /* [5195] */
    (xdc_Char)0x4e,  /* [5196] */
    (xdc_Char)0x47,  /* [5197] */
    (xdc_Char)0x3a,  /* [5198] */
    (xdc_Char)0x20,  /* [5199] */
    (xdc_Char)0x25,  /* [5200] */
    (xdc_Char)0x24,  /* [5201] */
    (xdc_Char)0x46,  /* [5202] */
    (xdc_Char)0x25,  /* [5203] */
    (xdc_Char)0x24,  /* [5204] */
    (xdc_Char)0x53,  /* [5205] */
    (xdc_Char)0x0,  /* [5206] */
    (xdc_Char)0x25,  /* [5207] */
    (xdc_Char)0x24,  /* [5208] */
    (xdc_Char)0x46,  /* [5209] */
    (xdc_Char)0x25,  /* [5210] */
    (xdc_Char)0x24,  /* [5211] */
    (xdc_Char)0x53,  /* [5212] */
    (xdc_Char)0x0,  /* [5213] */
    (xdc_Char)0x53,  /* [5214] */
    (xdc_Char)0x74,  /* [5215] */
    (xdc_Char)0x61,  /* [5216] */
    (xdc_Char)0x72,  /* [5217] */
    (xdc_Char)0x74,  /* [5218] */
    (xdc_Char)0x3a,  /* [5219] */
    (xdc_Char)0x20,  /* [5220] */
    (xdc_Char)0x25,  /* [5221] */
    (xdc_Char)0x24,  /* [5222] */
    (xdc_Char)0x53,  /* [5223] */
    (xdc_Char)0x0,  /* [5224] */
    (xdc_Char)0x53,  /* [5225] */
    (xdc_Char)0x74,  /* [5226] */
    (xdc_Char)0x6f,  /* [5227] */
    (xdc_Char)0x70,  /* [5228] */
    (xdc_Char)0x3a,  /* [5229] */
    (xdc_Char)0x20,  /* [5230] */
    (xdc_Char)0x25,  /* [5231] */
    (xdc_Char)0x24,  /* [5232] */
    (xdc_Char)0x53,  /* [5233] */
    (xdc_Char)0x0,  /* [5234] */
    (xdc_Char)0x53,  /* [5235] */
    (xdc_Char)0x74,  /* [5236] */
    (xdc_Char)0x61,  /* [5237] */
    (xdc_Char)0x72,  /* [5238] */
    (xdc_Char)0x74,  /* [5239] */
    (xdc_Char)0x49,  /* [5240] */
    (xdc_Char)0x6e,  /* [5241] */
    (xdc_Char)0x73,  /* [5242] */
    (xdc_Char)0x74,  /* [5243] */
    (xdc_Char)0x61,  /* [5244] */
    (xdc_Char)0x6e,  /* [5245] */
    (xdc_Char)0x63,  /* [5246] */
    (xdc_Char)0x65,  /* [5247] */
    (xdc_Char)0x3a,  /* [5248] */
    (xdc_Char)0x20,  /* [5249] */
    (xdc_Char)0x25,  /* [5250] */
    (xdc_Char)0x24,  /* [5251] */
    (xdc_Char)0x53,  /* [5252] */
    (xdc_Char)0x0,  /* [5253] */
    (xdc_Char)0x53,  /* [5254] */
    (xdc_Char)0x74,  /* [5255] */
    (xdc_Char)0x6f,  /* [5256] */
    (xdc_Char)0x70,  /* [5257] */
    (xdc_Char)0x49,  /* [5258] */
    (xdc_Char)0x6e,  /* [5259] */
    (xdc_Char)0x73,  /* [5260] */
    (xdc_Char)0x74,  /* [5261] */
    (xdc_Char)0x61,  /* [5262] */
    (xdc_Char)0x6e,  /* [5263] */
    (xdc_Char)0x63,  /* [5264] */
    (xdc_Char)0x65,  /* [5265] */
    (xdc_Char)0x3a,  /* [5266] */
    (xdc_Char)0x20,  /* [5267] */
    (xdc_Char)0x25,  /* [5268] */
    (xdc_Char)0x24,  /* [5269] */
    (xdc_Char)0x53,  /* [5270] */
    (xdc_Char)0x0,  /* [5271] */
    (xdc_Char)0x45,  /* [5272] */
    (xdc_Char)0x52,  /* [5273] */
    (xdc_Char)0x52,  /* [5274] */
    (xdc_Char)0x4f,  /* [5275] */
    (xdc_Char)0x52,  /* [5276] */
    (xdc_Char)0x3a,  /* [5277] */
    (xdc_Char)0x20,  /* [5278] */
    (xdc_Char)0x45,  /* [5279] */
    (xdc_Char)0x72,  /* [5280] */
    (xdc_Char)0x72,  /* [5281] */
    (xdc_Char)0x6f,  /* [5282] */
    (xdc_Char)0x72,  /* [5283] */
    (xdc_Char)0x43,  /* [5284] */
    (xdc_Char)0x6f,  /* [5285] */
    (xdc_Char)0x64,  /* [5286] */
    (xdc_Char)0x65,  /* [5287] */
    (xdc_Char)0x3a,  /* [5288] */
    (xdc_Char)0x30,  /* [5289] */
    (xdc_Char)0x78,  /* [5290] */
    (xdc_Char)0x25,  /* [5291] */
    (xdc_Char)0x78,  /* [5292] */
    (xdc_Char)0x0,  /* [5293] */
    (xdc_Char)0x45,  /* [5294] */
    (xdc_Char)0x52,  /* [5295] */
    (xdc_Char)0x52,  /* [5296] */
    (xdc_Char)0x4f,  /* [5297] */
    (xdc_Char)0x52,  /* [5298] */
    (xdc_Char)0x3a,  /* [5299] */
    (xdc_Char)0x20,  /* [5300] */
    (xdc_Char)0x45,  /* [5301] */
    (xdc_Char)0x72,  /* [5302] */
    (xdc_Char)0x72,  /* [5303] */
    (xdc_Char)0x6f,  /* [5304] */
    (xdc_Char)0x72,  /* [5305] */
    (xdc_Char)0x43,  /* [5306] */
    (xdc_Char)0x6f,  /* [5307] */
    (xdc_Char)0x64,  /* [5308] */
    (xdc_Char)0x65,  /* [5309] */
    (xdc_Char)0x3a,  /* [5310] */
    (xdc_Char)0x30,  /* [5311] */
    (xdc_Char)0x78,  /* [5312] */
    (xdc_Char)0x25,  /* [5313] */
    (xdc_Char)0x78,  /* [5314] */
    (xdc_Char)0x2e,  /* [5315] */
    (xdc_Char)0x20,  /* [5316] */
    (xdc_Char)0x25,  /* [5317] */
    (xdc_Char)0x24,  /* [5318] */
    (xdc_Char)0x53,  /* [5319] */
    (xdc_Char)0x0,  /* [5320] */
    (xdc_Char)0x48,  /* [5321] */
    (xdc_Char)0x57,  /* [5322] */
    (xdc_Char)0x20,  /* [5323] */
    (xdc_Char)0x45,  /* [5324] */
    (xdc_Char)0x52,  /* [5325] */
    (xdc_Char)0x52,  /* [5326] */
    (xdc_Char)0x4f,  /* [5327] */
    (xdc_Char)0x52,  /* [5328] */
    (xdc_Char)0x3a,  /* [5329] */
    (xdc_Char)0x20,  /* [5330] */
    (xdc_Char)0x45,  /* [5331] */
    (xdc_Char)0x72,  /* [5332] */
    (xdc_Char)0x72,  /* [5333] */
    (xdc_Char)0x6f,  /* [5334] */
    (xdc_Char)0x72,  /* [5335] */
    (xdc_Char)0x43,  /* [5336] */
    (xdc_Char)0x6f,  /* [5337] */
    (xdc_Char)0x64,  /* [5338] */
    (xdc_Char)0x65,  /* [5339] */
    (xdc_Char)0x3a,  /* [5340] */
    (xdc_Char)0x30,  /* [5341] */
    (xdc_Char)0x78,  /* [5342] */
    (xdc_Char)0x25,  /* [5343] */
    (xdc_Char)0x78,  /* [5344] */
    (xdc_Char)0x0,  /* [5345] */
    (xdc_Char)0x48,  /* [5346] */
    (xdc_Char)0x57,  /* [5347] */
    (xdc_Char)0x20,  /* [5348] */
    (xdc_Char)0x45,  /* [5349] */
    (xdc_Char)0x52,  /* [5350] */
    (xdc_Char)0x52,  /* [5351] */
    (xdc_Char)0x4f,  /* [5352] */
    (xdc_Char)0x52,  /* [5353] */
    (xdc_Char)0x3a,  /* [5354] */
    (xdc_Char)0x20,  /* [5355] */
    (xdc_Char)0x45,  /* [5356] */
    (xdc_Char)0x72,  /* [5357] */
    (xdc_Char)0x72,  /* [5358] */
    (xdc_Char)0x6f,  /* [5359] */
    (xdc_Char)0x72,  /* [5360] */
    (xdc_Char)0x43,  /* [5361] */
    (xdc_Char)0x6f,  /* [5362] */
    (xdc_Char)0x64,  /* [5363] */
    (xdc_Char)0x65,  /* [5364] */
    (xdc_Char)0x3a,  /* [5365] */
    (xdc_Char)0x30,  /* [5366] */
    (xdc_Char)0x78,  /* [5367] */
    (xdc_Char)0x25,  /* [5368] */
    (xdc_Char)0x78,  /* [5369] */
    (xdc_Char)0x2e,  /* [5370] */
    (xdc_Char)0x20,  /* [5371] */
    (xdc_Char)0x25,  /* [5372] */
    (xdc_Char)0x24,  /* [5373] */
    (xdc_Char)0x53,  /* [5374] */
    (xdc_Char)0x0,  /* [5375] */
    (xdc_Char)0x46,  /* [5376] */
    (xdc_Char)0x41,  /* [5377] */
    (xdc_Char)0x54,  /* [5378] */
    (xdc_Char)0x41,  /* [5379] */
    (xdc_Char)0x4c,  /* [5380] */
    (xdc_Char)0x20,  /* [5381] */
    (xdc_Char)0x45,  /* [5382] */
    (xdc_Char)0x52,  /* [5383] */
    (xdc_Char)0x52,  /* [5384] */
    (xdc_Char)0x4f,  /* [5385] */
    (xdc_Char)0x52,  /* [5386] */
    (xdc_Char)0x3a,  /* [5387] */
    (xdc_Char)0x20,  /* [5388] */
    (xdc_Char)0x45,  /* [5389] */
    (xdc_Char)0x72,  /* [5390] */
    (xdc_Char)0x72,  /* [5391] */
    (xdc_Char)0x6f,  /* [5392] */
    (xdc_Char)0x72,  /* [5393] */
    (xdc_Char)0x43,  /* [5394] */
    (xdc_Char)0x6f,  /* [5395] */
    (xdc_Char)0x64,  /* [5396] */
    (xdc_Char)0x65,  /* [5397] */
    (xdc_Char)0x3a,  /* [5398] */
    (xdc_Char)0x30,  /* [5399] */
    (xdc_Char)0x78,  /* [5400] */
    (xdc_Char)0x25,  /* [5401] */
    (xdc_Char)0x78,  /* [5402] */
    (xdc_Char)0x0,  /* [5403] */
    (xdc_Char)0x46,  /* [5404] */
    (xdc_Char)0x41,  /* [5405] */
    (xdc_Char)0x54,  /* [5406] */
    (xdc_Char)0x41,  /* [5407] */
    (xdc_Char)0x4c,  /* [5408] */
    (xdc_Char)0x20,  /* [5409] */
    (xdc_Char)0x45,  /* [5410] */
    (xdc_Char)0x52,  /* [5411] */
    (xdc_Char)0x52,  /* [5412] */
    (xdc_Char)0x4f,  /* [5413] */
    (xdc_Char)0x52,  /* [5414] */
    (xdc_Char)0x3a,  /* [5415] */
    (xdc_Char)0x20,  /* [5416] */
    (xdc_Char)0x45,  /* [5417] */
    (xdc_Char)0x72,  /* [5418] */
    (xdc_Char)0x72,  /* [5419] */
    (xdc_Char)0x6f,  /* [5420] */
    (xdc_Char)0x72,  /* [5421] */
    (xdc_Char)0x43,  /* [5422] */
    (xdc_Char)0x6f,  /* [5423] */
    (xdc_Char)0x64,  /* [5424] */
    (xdc_Char)0x65,  /* [5425] */
    (xdc_Char)0x3a,  /* [5426] */
    (xdc_Char)0x30,  /* [5427] */
    (xdc_Char)0x78,  /* [5428] */
    (xdc_Char)0x25,  /* [5429] */
    (xdc_Char)0x78,  /* [5430] */
    (xdc_Char)0x2e,  /* [5431] */
    (xdc_Char)0x20,  /* [5432] */
    (xdc_Char)0x25,  /* [5433] */
    (xdc_Char)0x24,  /* [5434] */
    (xdc_Char)0x53,  /* [5435] */
    (xdc_Char)0x0,  /* [5436] */
    (xdc_Char)0x43,  /* [5437] */
    (xdc_Char)0x52,  /* [5438] */
    (xdc_Char)0x49,  /* [5439] */
    (xdc_Char)0x54,  /* [5440] */
    (xdc_Char)0x49,  /* [5441] */
    (xdc_Char)0x43,  /* [5442] */
    (xdc_Char)0x41,  /* [5443] */
    (xdc_Char)0x4c,  /* [5444] */
    (xdc_Char)0x20,  /* [5445] */
    (xdc_Char)0x45,  /* [5446] */
    (xdc_Char)0x52,  /* [5447] */
    (xdc_Char)0x52,  /* [5448] */
    (xdc_Char)0x4f,  /* [5449] */
    (xdc_Char)0x52,  /* [5450] */
    (xdc_Char)0x3a,  /* [5451] */
    (xdc_Char)0x20,  /* [5452] */
    (xdc_Char)0x45,  /* [5453] */
    (xdc_Char)0x72,  /* [5454] */
    (xdc_Char)0x72,  /* [5455] */
    (xdc_Char)0x6f,  /* [5456] */
    (xdc_Char)0x72,  /* [5457] */
    (xdc_Char)0x43,  /* [5458] */
    (xdc_Char)0x6f,  /* [5459] */
    (xdc_Char)0x64,  /* [5460] */
    (xdc_Char)0x65,  /* [5461] */
    (xdc_Char)0x3a,  /* [5462] */
    (xdc_Char)0x30,  /* [5463] */
    (xdc_Char)0x78,  /* [5464] */
    (xdc_Char)0x25,  /* [5465] */
    (xdc_Char)0x78,  /* [5466] */
    (xdc_Char)0x0,  /* [5467] */
    (xdc_Char)0x43,  /* [5468] */
    (xdc_Char)0x52,  /* [5469] */
    (xdc_Char)0x49,  /* [5470] */
    (xdc_Char)0x54,  /* [5471] */
    (xdc_Char)0x49,  /* [5472] */
    (xdc_Char)0x43,  /* [5473] */
    (xdc_Char)0x41,  /* [5474] */
    (xdc_Char)0x4c,  /* [5475] */
    (xdc_Char)0x20,  /* [5476] */
    (xdc_Char)0x45,  /* [5477] */
    (xdc_Char)0x52,  /* [5478] */
    (xdc_Char)0x52,  /* [5479] */
    (xdc_Char)0x4f,  /* [5480] */
    (xdc_Char)0x52,  /* [5481] */
    (xdc_Char)0x3a,  /* [5482] */
    (xdc_Char)0x20,  /* [5483] */
    (xdc_Char)0x45,  /* [5484] */
    (xdc_Char)0x72,  /* [5485] */
    (xdc_Char)0x72,  /* [5486] */
    (xdc_Char)0x6f,  /* [5487] */
    (xdc_Char)0x72,  /* [5488] */
    (xdc_Char)0x43,  /* [5489] */
    (xdc_Char)0x6f,  /* [5490] */
    (xdc_Char)0x64,  /* [5491] */
    (xdc_Char)0x65,  /* [5492] */
    (xdc_Char)0x3a,  /* [5493] */
    (xdc_Char)0x30,  /* [5494] */
    (xdc_Char)0x78,  /* [5495] */
    (xdc_Char)0x25,  /* [5496] */
    (xdc_Char)0x78,  /* [5497] */
    (xdc_Char)0x2e,  /* [5498] */
    (xdc_Char)0x20,  /* [5499] */
    (xdc_Char)0x25,  /* [5500] */
    (xdc_Char)0x24,  /* [5501] */
    (xdc_Char)0x53,  /* [5502] */
    (xdc_Char)0x0,  /* [5503] */
    (xdc_Char)0x45,  /* [5504] */
    (xdc_Char)0x52,  /* [5505] */
    (xdc_Char)0x52,  /* [5506] */
    (xdc_Char)0x4f,  /* [5507] */
    (xdc_Char)0x52,  /* [5508] */
    (xdc_Char)0x3a,  /* [5509] */
    (xdc_Char)0x20,  /* [5510] */
    (xdc_Char)0x45,  /* [5511] */
    (xdc_Char)0x78,  /* [5512] */
    (xdc_Char)0x63,  /* [5513] */
    (xdc_Char)0x65,  /* [5514] */
    (xdc_Char)0x70,  /* [5515] */
    (xdc_Char)0x74,  /* [5516] */
    (xdc_Char)0x69,  /* [5517] */
    (xdc_Char)0x6f,  /* [5518] */
    (xdc_Char)0x6e,  /* [5519] */
    (xdc_Char)0x20,  /* [5520] */
    (xdc_Char)0x61,  /* [5521] */
    (xdc_Char)0x74,  /* [5522] */
    (xdc_Char)0x20,  /* [5523] */
    (xdc_Char)0x25,  /* [5524] */
    (xdc_Char)0x24,  /* [5525] */
    (xdc_Char)0x46,  /* [5526] */
    (xdc_Char)0x2e,  /* [5527] */
    (xdc_Char)0x0,  /* [5528] */
    (xdc_Char)0x45,  /* [5529] */
    (xdc_Char)0x52,  /* [5530] */
    (xdc_Char)0x52,  /* [5531] */
    (xdc_Char)0x4f,  /* [5532] */
    (xdc_Char)0x52,  /* [5533] */
    (xdc_Char)0x3a,  /* [5534] */
    (xdc_Char)0x20,  /* [5535] */
    (xdc_Char)0x55,  /* [5536] */
    (xdc_Char)0x6e,  /* [5537] */
    (xdc_Char)0x63,  /* [5538] */
    (xdc_Char)0x61,  /* [5539] */
    (xdc_Char)0x75,  /* [5540] */
    (xdc_Char)0x67,  /* [5541] */
    (xdc_Char)0x68,  /* [5542] */
    (xdc_Char)0x74,  /* [5543] */
    (xdc_Char)0x20,  /* [5544] */
    (xdc_Char)0x45,  /* [5545] */
    (xdc_Char)0x78,  /* [5546] */
    (xdc_Char)0x63,  /* [5547] */
    (xdc_Char)0x65,  /* [5548] */
    (xdc_Char)0x70,  /* [5549] */
    (xdc_Char)0x74,  /* [5550] */
    (xdc_Char)0x69,  /* [5551] */
    (xdc_Char)0x6f,  /* [5552] */
    (xdc_Char)0x6e,  /* [5553] */
    (xdc_Char)0x20,  /* [5554] */
    (xdc_Char)0x61,  /* [5555] */
    (xdc_Char)0x74,  /* [5556] */
    (xdc_Char)0x20,  /* [5557] */
    (xdc_Char)0x25,  /* [5558] */
    (xdc_Char)0x24,  /* [5559] */
    (xdc_Char)0x46,  /* [5560] */
    (xdc_Char)0x2e,  /* [5561] */
    (xdc_Char)0x0,  /* [5562] */
    (xdc_Char)0x45,  /* [5563] */
    (xdc_Char)0x52,  /* [5564] */
    (xdc_Char)0x52,  /* [5565] */
    (xdc_Char)0x4f,  /* [5566] */
    (xdc_Char)0x52,  /* [5567] */
    (xdc_Char)0x3a,  /* [5568] */
    (xdc_Char)0x20,  /* [5569] */
    (xdc_Char)0x4e,  /* [5570] */
    (xdc_Char)0x75,  /* [5571] */
    (xdc_Char)0x6c,  /* [5572] */
    (xdc_Char)0x6c,  /* [5573] */
    (xdc_Char)0x20,  /* [5574] */
    (xdc_Char)0x50,  /* [5575] */
    (xdc_Char)0x6f,  /* [5576] */
    (xdc_Char)0x69,  /* [5577] */
    (xdc_Char)0x6e,  /* [5578] */
    (xdc_Char)0x74,  /* [5579] */
    (xdc_Char)0x65,  /* [5580] */
    (xdc_Char)0x72,  /* [5581] */
    (xdc_Char)0x20,  /* [5582] */
    (xdc_Char)0x45,  /* [5583] */
    (xdc_Char)0x78,  /* [5584] */
    (xdc_Char)0x63,  /* [5585] */
    (xdc_Char)0x65,  /* [5586] */
    (xdc_Char)0x70,  /* [5587] */
    (xdc_Char)0x74,  /* [5588] */
    (xdc_Char)0x69,  /* [5589] */
    (xdc_Char)0x6f,  /* [5590] */
    (xdc_Char)0x6e,  /* [5591] */
    (xdc_Char)0x20,  /* [5592] */
    (xdc_Char)0x61,  /* [5593] */
    (xdc_Char)0x74,  /* [5594] */
    (xdc_Char)0x20,  /* [5595] */
    (xdc_Char)0x25,  /* [5596] */
    (xdc_Char)0x24,  /* [5597] */
    (xdc_Char)0x46,  /* [5598] */
    (xdc_Char)0x2e,  /* [5599] */
    (xdc_Char)0x0,  /* [5600] */
    (xdc_Char)0x45,  /* [5601] */
    (xdc_Char)0x52,  /* [5602] */
    (xdc_Char)0x52,  /* [5603] */
    (xdc_Char)0x4f,  /* [5604] */
    (xdc_Char)0x52,  /* [5605] */
    (xdc_Char)0x3a,  /* [5606] */
    (xdc_Char)0x20,  /* [5607] */
    (xdc_Char)0x55,  /* [5608] */
    (xdc_Char)0x6e,  /* [5609] */
    (xdc_Char)0x65,  /* [5610] */
    (xdc_Char)0x78,  /* [5611] */
    (xdc_Char)0x70,  /* [5612] */
    (xdc_Char)0x65,  /* [5613] */
    (xdc_Char)0x63,  /* [5614] */
    (xdc_Char)0x74,  /* [5615] */
    (xdc_Char)0x65,  /* [5616] */
    (xdc_Char)0x64,  /* [5617] */
    (xdc_Char)0x20,  /* [5618] */
    (xdc_Char)0x49,  /* [5619] */
    (xdc_Char)0x6e,  /* [5620] */
    (xdc_Char)0x74,  /* [5621] */
    (xdc_Char)0x65,  /* [5622] */
    (xdc_Char)0x72,  /* [5623] */
    (xdc_Char)0x72,  /* [5624] */
    (xdc_Char)0x75,  /* [5625] */
    (xdc_Char)0x70,  /* [5626] */
    (xdc_Char)0x74,  /* [5627] */
    (xdc_Char)0x20,  /* [5628] */
    (xdc_Char)0x61,  /* [5629] */
    (xdc_Char)0x74,  /* [5630] */
    (xdc_Char)0x20,  /* [5631] */
    (xdc_Char)0x25,  /* [5632] */
    (xdc_Char)0x24,  /* [5633] */
    (xdc_Char)0x46,  /* [5634] */
    (xdc_Char)0x2e,  /* [5635] */
    (xdc_Char)0x0,  /* [5636] */
    (xdc_Char)0x45,  /* [5637] */
    (xdc_Char)0x52,  /* [5638] */
    (xdc_Char)0x52,  /* [5639] */
    (xdc_Char)0x4f,  /* [5640] */
    (xdc_Char)0x52,  /* [5641] */
    (xdc_Char)0x3a,  /* [5642] */
    (xdc_Char)0x20,  /* [5643] */
    (xdc_Char)0x4d,  /* [5644] */
    (xdc_Char)0x65,  /* [5645] */
    (xdc_Char)0x6d,  /* [5646] */
    (xdc_Char)0x6f,  /* [5647] */
    (xdc_Char)0x72,  /* [5648] */
    (xdc_Char)0x79,  /* [5649] */
    (xdc_Char)0x20,  /* [5650] */
    (xdc_Char)0x41,  /* [5651] */
    (xdc_Char)0x63,  /* [5652] */
    (xdc_Char)0x63,  /* [5653] */
    (xdc_Char)0x65,  /* [5654] */
    (xdc_Char)0x73,  /* [5655] */
    (xdc_Char)0x73,  /* [5656] */
    (xdc_Char)0x20,  /* [5657] */
    (xdc_Char)0x46,  /* [5658] */
    (xdc_Char)0x61,  /* [5659] */
    (xdc_Char)0x75,  /* [5660] */
    (xdc_Char)0x6c,  /* [5661] */
    (xdc_Char)0x74,  /* [5662] */
    (xdc_Char)0x20,  /* [5663] */
    (xdc_Char)0x61,  /* [5664] */
    (xdc_Char)0x74,  /* [5665] */
    (xdc_Char)0x20,  /* [5666] */
    (xdc_Char)0x25,  /* [5667] */
    (xdc_Char)0x24,  /* [5668] */
    (xdc_Char)0x46,  /* [5669] */
    (xdc_Char)0x2e,  /* [5670] */
    (xdc_Char)0x20,  /* [5671] */
    (xdc_Char)0x5b,  /* [5672] */
    (xdc_Char)0x41,  /* [5673] */
    (xdc_Char)0x44,  /* [5674] */
    (xdc_Char)0x52,  /* [5675] */
    (xdc_Char)0x53,  /* [5676] */
    (xdc_Char)0x5d,  /* [5677] */
    (xdc_Char)0x30,  /* [5678] */
    (xdc_Char)0x78,  /* [5679] */
    (xdc_Char)0x25,  /* [5680] */
    (xdc_Char)0x78,  /* [5681] */
    (xdc_Char)0x0,  /* [5682] */
    (xdc_Char)0x45,  /* [5683] */
    (xdc_Char)0x52,  /* [5684] */
    (xdc_Char)0x52,  /* [5685] */
    (xdc_Char)0x4f,  /* [5686] */
    (xdc_Char)0x52,  /* [5687] */
    (xdc_Char)0x3a,  /* [5688] */
    (xdc_Char)0x20,  /* [5689] */
    (xdc_Char)0x53,  /* [5690] */
    (xdc_Char)0x65,  /* [5691] */
    (xdc_Char)0x63,  /* [5692] */
    (xdc_Char)0x75,  /* [5693] */
    (xdc_Char)0x72,  /* [5694] */
    (xdc_Char)0x69,  /* [5695] */
    (xdc_Char)0x74,  /* [5696] */
    (xdc_Char)0x79,  /* [5697] */
    (xdc_Char)0x20,  /* [5698] */
    (xdc_Char)0x45,  /* [5699] */
    (xdc_Char)0x78,  /* [5700] */
    (xdc_Char)0x63,  /* [5701] */
    (xdc_Char)0x65,  /* [5702] */
    (xdc_Char)0x70,  /* [5703] */
    (xdc_Char)0x74,  /* [5704] */
    (xdc_Char)0x69,  /* [5705] */
    (xdc_Char)0x6f,  /* [5706] */
    (xdc_Char)0x6e,  /* [5707] */
    (xdc_Char)0x20,  /* [5708] */
    (xdc_Char)0x61,  /* [5709] */
    (xdc_Char)0x74,  /* [5710] */
    (xdc_Char)0x20,  /* [5711] */
    (xdc_Char)0x25,  /* [5712] */
    (xdc_Char)0x24,  /* [5713] */
    (xdc_Char)0x46,  /* [5714] */
    (xdc_Char)0x2e,  /* [5715] */
    (xdc_Char)0x0,  /* [5716] */
    (xdc_Char)0x45,  /* [5717] */
    (xdc_Char)0x52,  /* [5718] */
    (xdc_Char)0x52,  /* [5719] */
    (xdc_Char)0x4f,  /* [5720] */
    (xdc_Char)0x52,  /* [5721] */
    (xdc_Char)0x3a,  /* [5722] */
    (xdc_Char)0x20,  /* [5723] */
    (xdc_Char)0x44,  /* [5724] */
    (xdc_Char)0x69,  /* [5725] */
    (xdc_Char)0x76,  /* [5726] */
    (xdc_Char)0x69,  /* [5727] */
    (xdc_Char)0x73,  /* [5728] */
    (xdc_Char)0x69,  /* [5729] */
    (xdc_Char)0x6f,  /* [5730] */
    (xdc_Char)0x6e,  /* [5731] */
    (xdc_Char)0x20,  /* [5732] */
    (xdc_Char)0x62,  /* [5733] */
    (xdc_Char)0x79,  /* [5734] */
    (xdc_Char)0x20,  /* [5735] */
    (xdc_Char)0x7a,  /* [5736] */
    (xdc_Char)0x65,  /* [5737] */
    (xdc_Char)0x72,  /* [5738] */
    (xdc_Char)0x6f,  /* [5739] */
    (xdc_Char)0x20,  /* [5740] */
    (xdc_Char)0x61,  /* [5741] */
    (xdc_Char)0x74,  /* [5742] */
    (xdc_Char)0x20,  /* [5743] */
    (xdc_Char)0x25,  /* [5744] */
    (xdc_Char)0x24,  /* [5745] */
    (xdc_Char)0x46,  /* [5746] */
    (xdc_Char)0x2e,  /* [5747] */
    (xdc_Char)0x0,  /* [5748] */
    (xdc_Char)0x45,  /* [5749] */
    (xdc_Char)0x52,  /* [5750] */
    (xdc_Char)0x52,  /* [5751] */
    (xdc_Char)0x4f,  /* [5752] */
    (xdc_Char)0x52,  /* [5753] */
    (xdc_Char)0x3a,  /* [5754] */
    (xdc_Char)0x20,  /* [5755] */
    (xdc_Char)0x4f,  /* [5756] */
    (xdc_Char)0x76,  /* [5757] */
    (xdc_Char)0x65,  /* [5758] */
    (xdc_Char)0x72,  /* [5759] */
    (xdc_Char)0x66,  /* [5760] */
    (xdc_Char)0x6c,  /* [5761] */
    (xdc_Char)0x6f,  /* [5762] */
    (xdc_Char)0x77,  /* [5763] */
    (xdc_Char)0x20,  /* [5764] */
    (xdc_Char)0x65,  /* [5765] */
    (xdc_Char)0x78,  /* [5766] */
    (xdc_Char)0x63,  /* [5767] */
    (xdc_Char)0x65,  /* [5768] */
    (xdc_Char)0x70,  /* [5769] */
    (xdc_Char)0x74,  /* [5770] */
    (xdc_Char)0x69,  /* [5771] */
    (xdc_Char)0x6f,  /* [5772] */
    (xdc_Char)0x6e,  /* [5773] */
    (xdc_Char)0x20,  /* [5774] */
    (xdc_Char)0x61,  /* [5775] */
    (xdc_Char)0x74,  /* [5776] */
    (xdc_Char)0x20,  /* [5777] */
    (xdc_Char)0x25,  /* [5778] */
    (xdc_Char)0x24,  /* [5779] */
    (xdc_Char)0x46,  /* [5780] */
    (xdc_Char)0x2e,  /* [5781] */
    (xdc_Char)0x0,  /* [5782] */
    (xdc_Char)0x45,  /* [5783] */
    (xdc_Char)0x52,  /* [5784] */
    (xdc_Char)0x52,  /* [5785] */
    (xdc_Char)0x4f,  /* [5786] */
    (xdc_Char)0x52,  /* [5787] */
    (xdc_Char)0x3a,  /* [5788] */
    (xdc_Char)0x20,  /* [5789] */
    (xdc_Char)0x49,  /* [5790] */
    (xdc_Char)0x6e,  /* [5791] */
    (xdc_Char)0x64,  /* [5792] */
    (xdc_Char)0x65,  /* [5793] */
    (xdc_Char)0x78,  /* [5794] */
    (xdc_Char)0x20,  /* [5795] */
    (xdc_Char)0x6f,  /* [5796] */
    (xdc_Char)0x75,  /* [5797] */
    (xdc_Char)0x74,  /* [5798] */
    (xdc_Char)0x20,  /* [5799] */
    (xdc_Char)0x6f,  /* [5800] */
    (xdc_Char)0x66,  /* [5801] */
    (xdc_Char)0x20,  /* [5802] */
    (xdc_Char)0x72,  /* [5803] */
    (xdc_Char)0x61,  /* [5804] */
    (xdc_Char)0x6e,  /* [5805] */
    (xdc_Char)0x67,  /* [5806] */
    (xdc_Char)0x65,  /* [5807] */
    (xdc_Char)0x20,  /* [5808] */
    (xdc_Char)0x61,  /* [5809] */
    (xdc_Char)0x74,  /* [5810] */
    (xdc_Char)0x20,  /* [5811] */
    (xdc_Char)0x25,  /* [5812] */
    (xdc_Char)0x24,  /* [5813] */
    (xdc_Char)0x46,  /* [5814] */
    (xdc_Char)0x2e,  /* [5815] */
    (xdc_Char)0x20,  /* [5816] */
    (xdc_Char)0x5b,  /* [5817] */
    (xdc_Char)0x49,  /* [5818] */
    (xdc_Char)0x4e,  /* [5819] */
    (xdc_Char)0x44,  /* [5820] */
    (xdc_Char)0x45,  /* [5821] */
    (xdc_Char)0x58,  /* [5822] */
    (xdc_Char)0x5d,  /* [5823] */
    (xdc_Char)0x30,  /* [5824] */
    (xdc_Char)0x78,  /* [5825] */
    (xdc_Char)0x25,  /* [5826] */
    (xdc_Char)0x78,  /* [5827] */
    (xdc_Char)0x0,  /* [5828] */
    (xdc_Char)0x45,  /* [5829] */
    (xdc_Char)0x52,  /* [5830] */
    (xdc_Char)0x52,  /* [5831] */
    (xdc_Char)0x4f,  /* [5832] */
    (xdc_Char)0x52,  /* [5833] */
    (xdc_Char)0x3a,  /* [5834] */
    (xdc_Char)0x20,  /* [5835] */
    (xdc_Char)0x41,  /* [5836] */
    (xdc_Char)0x74,  /* [5837] */
    (xdc_Char)0x74,  /* [5838] */
    (xdc_Char)0x65,  /* [5839] */
    (xdc_Char)0x6d,  /* [5840] */
    (xdc_Char)0x70,  /* [5841] */
    (xdc_Char)0x74,  /* [5842] */
    (xdc_Char)0x20,  /* [5843] */
    (xdc_Char)0x74,  /* [5844] */
    (xdc_Char)0x6f,  /* [5845] */
    (xdc_Char)0x20,  /* [5846] */
    (xdc_Char)0x61,  /* [5847] */
    (xdc_Char)0x63,  /* [5848] */
    (xdc_Char)0x63,  /* [5849] */
    (xdc_Char)0x65,  /* [5850] */
    (xdc_Char)0x73,  /* [5851] */
    (xdc_Char)0x73,  /* [5852] */
    (xdc_Char)0x20,  /* [5853] */
    (xdc_Char)0x66,  /* [5854] */
    (xdc_Char)0x65,  /* [5855] */
    (xdc_Char)0x61,  /* [5856] */
    (xdc_Char)0x74,  /* [5857] */
    (xdc_Char)0x75,  /* [5858] */
    (xdc_Char)0x72,  /* [5859] */
    (xdc_Char)0x65,  /* [5860] */
    (xdc_Char)0x20,  /* [5861] */
    (xdc_Char)0x74,  /* [5862] */
    (xdc_Char)0x68,  /* [5863] */
    (xdc_Char)0x61,  /* [5864] */
    (xdc_Char)0x74,  /* [5865] */
    (xdc_Char)0x20,  /* [5866] */
    (xdc_Char)0x69,  /* [5867] */
    (xdc_Char)0x73,  /* [5868] */
    (xdc_Char)0x20,  /* [5869] */
    (xdc_Char)0x6e,  /* [5870] */
    (xdc_Char)0x6f,  /* [5871] */
    (xdc_Char)0x74,  /* [5872] */
    (xdc_Char)0x20,  /* [5873] */
    (xdc_Char)0x69,  /* [5874] */
    (xdc_Char)0x6d,  /* [5875] */
    (xdc_Char)0x70,  /* [5876] */
    (xdc_Char)0x6c,  /* [5877] */
    (xdc_Char)0x65,  /* [5878] */
    (xdc_Char)0x6d,  /* [5879] */
    (xdc_Char)0x65,  /* [5880] */
    (xdc_Char)0x6e,  /* [5881] */
    (xdc_Char)0x74,  /* [5882] */
    (xdc_Char)0x65,  /* [5883] */
    (xdc_Char)0x64,  /* [5884] */
    (xdc_Char)0x20,  /* [5885] */
    (xdc_Char)0x61,  /* [5886] */
    (xdc_Char)0x74,  /* [5887] */
    (xdc_Char)0x20,  /* [5888] */
    (xdc_Char)0x25,  /* [5889] */
    (xdc_Char)0x24,  /* [5890] */
    (xdc_Char)0x46,  /* [5891] */
    (xdc_Char)0x2e,  /* [5892] */
    (xdc_Char)0x0,  /* [5893] */
    (xdc_Char)0x45,  /* [5894] */
    (xdc_Char)0x52,  /* [5895] */
    (xdc_Char)0x52,  /* [5896] */
    (xdc_Char)0x4f,  /* [5897] */
    (xdc_Char)0x52,  /* [5898] */
    (xdc_Char)0x3a,  /* [5899] */
    (xdc_Char)0x20,  /* [5900] */
    (xdc_Char)0x53,  /* [5901] */
    (xdc_Char)0x74,  /* [5902] */
    (xdc_Char)0x61,  /* [5903] */
    (xdc_Char)0x63,  /* [5904] */
    (xdc_Char)0x6b,  /* [5905] */
    (xdc_Char)0x20,  /* [5906] */
    (xdc_Char)0x4f,  /* [5907] */
    (xdc_Char)0x76,  /* [5908] */
    (xdc_Char)0x65,  /* [5909] */
    (xdc_Char)0x72,  /* [5910] */
    (xdc_Char)0x66,  /* [5911] */
    (xdc_Char)0x6c,  /* [5912] */
    (xdc_Char)0x6f,  /* [5913] */
    (xdc_Char)0x77,  /* [5914] */
    (xdc_Char)0x20,  /* [5915] */
    (xdc_Char)0x64,  /* [5916] */
    (xdc_Char)0x65,  /* [5917] */
    (xdc_Char)0x74,  /* [5918] */
    (xdc_Char)0x65,  /* [5919] */
    (xdc_Char)0x63,  /* [5920] */
    (xdc_Char)0x74,  /* [5921] */
    (xdc_Char)0x65,  /* [5922] */
    (xdc_Char)0x64,  /* [5923] */
    (xdc_Char)0x20,  /* [5924] */
    (xdc_Char)0x61,  /* [5925] */
    (xdc_Char)0x74,  /* [5926] */
    (xdc_Char)0x20,  /* [5927] */
    (xdc_Char)0x25,  /* [5928] */
    (xdc_Char)0x24,  /* [5929] */
    (xdc_Char)0x46,  /* [5930] */
    (xdc_Char)0x2e,  /* [5931] */
    (xdc_Char)0x0,  /* [5932] */
    (xdc_Char)0x45,  /* [5933] */
    (xdc_Char)0x52,  /* [5934] */
    (xdc_Char)0x52,  /* [5935] */
    (xdc_Char)0x4f,  /* [5936] */
    (xdc_Char)0x52,  /* [5937] */
    (xdc_Char)0x3a,  /* [5938] */
    (xdc_Char)0x20,  /* [5939] */
    (xdc_Char)0x49,  /* [5940] */
    (xdc_Char)0x6c,  /* [5941] */
    (xdc_Char)0x6c,  /* [5942] */
    (xdc_Char)0x65,  /* [5943] */
    (xdc_Char)0x67,  /* [5944] */
    (xdc_Char)0x61,  /* [5945] */
    (xdc_Char)0x6c,  /* [5946] */
    (xdc_Char)0x20,  /* [5947] */
    (xdc_Char)0x49,  /* [5948] */
    (xdc_Char)0x6e,  /* [5949] */
    (xdc_Char)0x73,  /* [5950] */
    (xdc_Char)0x74,  /* [5951] */
    (xdc_Char)0x72,  /* [5952] */
    (xdc_Char)0x75,  /* [5953] */
    (xdc_Char)0x63,  /* [5954] */
    (xdc_Char)0x74,  /* [5955] */
    (xdc_Char)0x69,  /* [5956] */
    (xdc_Char)0x6f,  /* [5957] */
    (xdc_Char)0x6e,  /* [5958] */
    (xdc_Char)0x20,  /* [5959] */
    (xdc_Char)0x65,  /* [5960] */
    (xdc_Char)0x78,  /* [5961] */
    (xdc_Char)0x65,  /* [5962] */
    (xdc_Char)0x63,  /* [5963] */
    (xdc_Char)0x75,  /* [5964] */
    (xdc_Char)0x74,  /* [5965] */
    (xdc_Char)0x65,  /* [5966] */
    (xdc_Char)0x64,  /* [5967] */
    (xdc_Char)0x20,  /* [5968] */
    (xdc_Char)0x61,  /* [5969] */
    (xdc_Char)0x74,  /* [5970] */
    (xdc_Char)0x20,  /* [5971] */
    (xdc_Char)0x25,  /* [5972] */
    (xdc_Char)0x24,  /* [5973] */
    (xdc_Char)0x46,  /* [5974] */
    (xdc_Char)0x2e,  /* [5975] */
    (xdc_Char)0x0,  /* [5976] */
    (xdc_Char)0x45,  /* [5977] */
    (xdc_Char)0x52,  /* [5978] */
    (xdc_Char)0x52,  /* [5979] */
    (xdc_Char)0x4f,  /* [5980] */
    (xdc_Char)0x52,  /* [5981] */
    (xdc_Char)0x3a,  /* [5982] */
    (xdc_Char)0x20,  /* [5983] */
    (xdc_Char)0x45,  /* [5984] */
    (xdc_Char)0x6e,  /* [5985] */
    (xdc_Char)0x74,  /* [5986] */
    (xdc_Char)0x72,  /* [5987] */
    (xdc_Char)0x79,  /* [5988] */
    (xdc_Char)0x20,  /* [5989] */
    (xdc_Char)0x50,  /* [5990] */
    (xdc_Char)0x6f,  /* [5991] */
    (xdc_Char)0x69,  /* [5992] */
    (xdc_Char)0x6e,  /* [5993] */
    (xdc_Char)0x74,  /* [5994] */
    (xdc_Char)0x20,  /* [5995] */
    (xdc_Char)0x4e,  /* [5996] */
    (xdc_Char)0x6f,  /* [5997] */
    (xdc_Char)0x74,  /* [5998] */
    (xdc_Char)0x20,  /* [5999] */
    (xdc_Char)0x46,  /* [6000] */
    (xdc_Char)0x6f,  /* [6001] */
    (xdc_Char)0x75,  /* [6002] */
    (xdc_Char)0x6e,  /* [6003] */
    (xdc_Char)0x64,  /* [6004] */
    (xdc_Char)0x20,  /* [6005] */
    (xdc_Char)0x61,  /* [6006] */
    (xdc_Char)0x74,  /* [6007] */
    (xdc_Char)0x20,  /* [6008] */
    (xdc_Char)0x25,  /* [6009] */
    (xdc_Char)0x24,  /* [6010] */
    (xdc_Char)0x46,  /* [6011] */
    (xdc_Char)0x2e,  /* [6012] */
    (xdc_Char)0x0,  /* [6013] */
    (xdc_Char)0x45,  /* [6014] */
    (xdc_Char)0x52,  /* [6015] */
    (xdc_Char)0x52,  /* [6016] */
    (xdc_Char)0x4f,  /* [6017] */
    (xdc_Char)0x52,  /* [6018] */
    (xdc_Char)0x3a,  /* [6019] */
    (xdc_Char)0x20,  /* [6020] */
    (xdc_Char)0x4d,  /* [6021] */
    (xdc_Char)0x6f,  /* [6022] */
    (xdc_Char)0x64,  /* [6023] */
    (xdc_Char)0x75,  /* [6024] */
    (xdc_Char)0x6c,  /* [6025] */
    (xdc_Char)0x65,  /* [6026] */
    (xdc_Char)0x20,  /* [6027] */
    (xdc_Char)0x6e,  /* [6028] */
    (xdc_Char)0x6f,  /* [6029] */
    (xdc_Char)0x74,  /* [6030] */
    (xdc_Char)0x20,  /* [6031] */
    (xdc_Char)0x66,  /* [6032] */
    (xdc_Char)0x6f,  /* [6033] */
    (xdc_Char)0x75,  /* [6034] */
    (xdc_Char)0x6e,  /* [6035] */
    (xdc_Char)0x64,  /* [6036] */
    (xdc_Char)0x20,  /* [6037] */
    (xdc_Char)0x61,  /* [6038] */
    (xdc_Char)0x74,  /* [6039] */
    (xdc_Char)0x20,  /* [6040] */
    (xdc_Char)0x25,  /* [6041] */
    (xdc_Char)0x24,  /* [6042] */
    (xdc_Char)0x46,  /* [6043] */
    (xdc_Char)0x2e,  /* [6044] */
    (xdc_Char)0x20,  /* [6045] */
    (xdc_Char)0x5b,  /* [6046] */
    (xdc_Char)0x4d,  /* [6047] */
    (xdc_Char)0x4f,  /* [6048] */
    (xdc_Char)0x44,  /* [6049] */
    (xdc_Char)0x55,  /* [6050] */
    (xdc_Char)0x4c,  /* [6051] */
    (xdc_Char)0x45,  /* [6052] */
    (xdc_Char)0x5f,  /* [6053] */
    (xdc_Char)0x49,  /* [6054] */
    (xdc_Char)0x44,  /* [6055] */
    (xdc_Char)0x5d,  /* [6056] */
    (xdc_Char)0x30,  /* [6057] */
    (xdc_Char)0x78,  /* [6058] */
    (xdc_Char)0x25,  /* [6059] */
    (xdc_Char)0x78,  /* [6060] */
    (xdc_Char)0x2e,  /* [6061] */
    (xdc_Char)0x0,  /* [6062] */
    (xdc_Char)0x45,  /* [6063] */
    (xdc_Char)0x52,  /* [6064] */
    (xdc_Char)0x52,  /* [6065] */
    (xdc_Char)0x4f,  /* [6066] */
    (xdc_Char)0x52,  /* [6067] */
    (xdc_Char)0x3a,  /* [6068] */
    (xdc_Char)0x20,  /* [6069] */
    (xdc_Char)0x46,  /* [6070] */
    (xdc_Char)0x6c,  /* [6071] */
    (xdc_Char)0x6f,  /* [6072] */
    (xdc_Char)0x61,  /* [6073] */
    (xdc_Char)0x74,  /* [6074] */
    (xdc_Char)0x69,  /* [6075] */
    (xdc_Char)0x6e,  /* [6076] */
    (xdc_Char)0x67,  /* [6077] */
    (xdc_Char)0x20,  /* [6078] */
    (xdc_Char)0x50,  /* [6079] */
    (xdc_Char)0x6f,  /* [6080] */
    (xdc_Char)0x69,  /* [6081] */
    (xdc_Char)0x6e,  /* [6082] */
    (xdc_Char)0x74,  /* [6083] */
    (xdc_Char)0x20,  /* [6084] */
    (xdc_Char)0x45,  /* [6085] */
    (xdc_Char)0x72,  /* [6086] */
    (xdc_Char)0x72,  /* [6087] */
    (xdc_Char)0x6f,  /* [6088] */
    (xdc_Char)0x72,  /* [6089] */
    (xdc_Char)0x20,  /* [6090] */
    (xdc_Char)0x61,  /* [6091] */
    (xdc_Char)0x74,  /* [6092] */
    (xdc_Char)0x20,  /* [6093] */
    (xdc_Char)0x25,  /* [6094] */
    (xdc_Char)0x24,  /* [6095] */
    (xdc_Char)0x46,  /* [6096] */
    (xdc_Char)0x2e,  /* [6097] */
    (xdc_Char)0x0,  /* [6098] */
    (xdc_Char)0x45,  /* [6099] */
    (xdc_Char)0x52,  /* [6100] */
    (xdc_Char)0x52,  /* [6101] */
    (xdc_Char)0x4f,  /* [6102] */
    (xdc_Char)0x52,  /* [6103] */
    (xdc_Char)0x3a,  /* [6104] */
    (xdc_Char)0x20,  /* [6105] */
    (xdc_Char)0x49,  /* [6106] */
    (xdc_Char)0x6e,  /* [6107] */
    (xdc_Char)0x76,  /* [6108] */
    (xdc_Char)0x61,  /* [6109] */
    (xdc_Char)0x6c,  /* [6110] */
    (xdc_Char)0x69,  /* [6111] */
    (xdc_Char)0x64,  /* [6112] */
    (xdc_Char)0x20,  /* [6113] */
    (xdc_Char)0x50,  /* [6114] */
    (xdc_Char)0x61,  /* [6115] */
    (xdc_Char)0x72,  /* [6116] */
    (xdc_Char)0x61,  /* [6117] */
    (xdc_Char)0x6d,  /* [6118] */
    (xdc_Char)0x65,  /* [6119] */
    (xdc_Char)0x74,  /* [6120] */
    (xdc_Char)0x65,  /* [6121] */
    (xdc_Char)0x72,  /* [6122] */
    (xdc_Char)0x20,  /* [6123] */
    (xdc_Char)0x61,  /* [6124] */
    (xdc_Char)0x74,  /* [6125] */
    (xdc_Char)0x20,  /* [6126] */
    (xdc_Char)0x25,  /* [6127] */
    (xdc_Char)0x24,  /* [6128] */
    (xdc_Char)0x46,  /* [6129] */
    (xdc_Char)0x2e,  /* [6130] */
    (xdc_Char)0x20,  /* [6131] */
    (xdc_Char)0x5b,  /* [6132] */
    (xdc_Char)0x50,  /* [6133] */
    (xdc_Char)0x61,  /* [6134] */
    (xdc_Char)0x72,  /* [6135] */
    (xdc_Char)0x61,  /* [6136] */
    (xdc_Char)0x6d,  /* [6137] */
    (xdc_Char)0x4e,  /* [6138] */
    (xdc_Char)0x75,  /* [6139] */
    (xdc_Char)0x6d,  /* [6140] */
    (xdc_Char)0x5d,  /* [6141] */
    (xdc_Char)0x25,  /* [6142] */
    (xdc_Char)0x64,  /* [6143] */
    (xdc_Char)0x20,  /* [6144] */
    (xdc_Char)0x5b,  /* [6145] */
    (xdc_Char)0x50,  /* [6146] */
    (xdc_Char)0x61,  /* [6147] */
    (xdc_Char)0x72,  /* [6148] */
    (xdc_Char)0x61,  /* [6149] */
    (xdc_Char)0x6d,  /* [6150] */
    (xdc_Char)0x56,  /* [6151] */
    (xdc_Char)0x61,  /* [6152] */
    (xdc_Char)0x6c,  /* [6153] */
    (xdc_Char)0x75,  /* [6154] */
    (xdc_Char)0x65,  /* [6155] */
    (xdc_Char)0x5d,  /* [6156] */
    (xdc_Char)0x30,  /* [6157] */
    (xdc_Char)0x78,  /* [6158] */
    (xdc_Char)0x25,  /* [6159] */
    (xdc_Char)0x78,  /* [6160] */
    (xdc_Char)0x0,  /* [6161] */
    (xdc_Char)0x57,  /* [6162] */
    (xdc_Char)0x41,  /* [6163] */
    (xdc_Char)0x52,  /* [6164] */
    (xdc_Char)0x4e,  /* [6165] */
    (xdc_Char)0x49,  /* [6166] */
    (xdc_Char)0x4e,  /* [6167] */
    (xdc_Char)0x47,  /* [6168] */
    (xdc_Char)0x3a,  /* [6169] */
    (xdc_Char)0x20,  /* [6170] */
    (xdc_Char)0x45,  /* [6171] */
    (xdc_Char)0x76,  /* [6172] */
    (xdc_Char)0x65,  /* [6173] */
    (xdc_Char)0x6e,  /* [6174] */
    (xdc_Char)0x74,  /* [6175] */
    (xdc_Char)0x43,  /* [6176] */
    (xdc_Char)0x6f,  /* [6177] */
    (xdc_Char)0x64,  /* [6178] */
    (xdc_Char)0x65,  /* [6179] */
    (xdc_Char)0x3a,  /* [6180] */
    (xdc_Char)0x30,  /* [6181] */
    (xdc_Char)0x78,  /* [6182] */
    (xdc_Char)0x25,  /* [6183] */
    (xdc_Char)0x78,  /* [6184] */
    (xdc_Char)0x0,  /* [6185] */
    (xdc_Char)0x57,  /* [6186] */
    (xdc_Char)0x41,  /* [6187] */
    (xdc_Char)0x52,  /* [6188] */
    (xdc_Char)0x4e,  /* [6189] */
    (xdc_Char)0x49,  /* [6190] */
    (xdc_Char)0x4e,  /* [6191] */
    (xdc_Char)0x47,  /* [6192] */
    (xdc_Char)0x3a,  /* [6193] */
    (xdc_Char)0x20,  /* [6194] */
    (xdc_Char)0x45,  /* [6195] */
    (xdc_Char)0x76,  /* [6196] */
    (xdc_Char)0x65,  /* [6197] */
    (xdc_Char)0x6e,  /* [6198] */
    (xdc_Char)0x74,  /* [6199] */
    (xdc_Char)0x43,  /* [6200] */
    (xdc_Char)0x6f,  /* [6201] */
    (xdc_Char)0x64,  /* [6202] */
    (xdc_Char)0x65,  /* [6203] */
    (xdc_Char)0x3a,  /* [6204] */
    (xdc_Char)0x30,  /* [6205] */
    (xdc_Char)0x78,  /* [6206] */
    (xdc_Char)0x25,  /* [6207] */
    (xdc_Char)0x78,  /* [6208] */
    (xdc_Char)0x2e,  /* [6209] */
    (xdc_Char)0x20,  /* [6210] */
    (xdc_Char)0x25,  /* [6211] */
    (xdc_Char)0x24,  /* [6212] */
    (xdc_Char)0x53,  /* [6213] */
    (xdc_Char)0x0,  /* [6214] */
    (xdc_Char)0x49,  /* [6215] */
    (xdc_Char)0x4e,  /* [6216] */
    (xdc_Char)0x46,  /* [6217] */
    (xdc_Char)0x4f,  /* [6218] */
    (xdc_Char)0x3a,  /* [6219] */
    (xdc_Char)0x20,  /* [6220] */
    (xdc_Char)0x45,  /* [6221] */
    (xdc_Char)0x76,  /* [6222] */
    (xdc_Char)0x65,  /* [6223] */
    (xdc_Char)0x6e,  /* [6224] */
    (xdc_Char)0x74,  /* [6225] */
    (xdc_Char)0x43,  /* [6226] */
    (xdc_Char)0x6f,  /* [6227] */
    (xdc_Char)0x64,  /* [6228] */
    (xdc_Char)0x65,  /* [6229] */
    (xdc_Char)0x3a,  /* [6230] */
    (xdc_Char)0x20,  /* [6231] */
    (xdc_Char)0x30,  /* [6232] */
    (xdc_Char)0x78,  /* [6233] */
    (xdc_Char)0x25,  /* [6234] */
    (xdc_Char)0x78,  /* [6235] */
    (xdc_Char)0x0,  /* [6236] */
    (xdc_Char)0x49,  /* [6237] */
    (xdc_Char)0x4e,  /* [6238] */
    (xdc_Char)0x46,  /* [6239] */
    (xdc_Char)0x4f,  /* [6240] */
    (xdc_Char)0x3a,  /* [6241] */
    (xdc_Char)0x20,  /* [6242] */
    (xdc_Char)0x45,  /* [6243] */
    (xdc_Char)0x76,  /* [6244] */
    (xdc_Char)0x65,  /* [6245] */
    (xdc_Char)0x6e,  /* [6246] */
    (xdc_Char)0x74,  /* [6247] */
    (xdc_Char)0x43,  /* [6248] */
    (xdc_Char)0x6f,  /* [6249] */
    (xdc_Char)0x64,  /* [6250] */
    (xdc_Char)0x65,  /* [6251] */
    (xdc_Char)0x3a,  /* [6252] */
    (xdc_Char)0x30,  /* [6253] */
    (xdc_Char)0x78,  /* [6254] */
    (xdc_Char)0x25,  /* [6255] */
    (xdc_Char)0x78,  /* [6256] */
    (xdc_Char)0x2e,  /* [6257] */
    (xdc_Char)0x20,  /* [6258] */
    (xdc_Char)0x20,  /* [6259] */
    (xdc_Char)0x25,  /* [6260] */
    (xdc_Char)0x24,  /* [6261] */
    (xdc_Char)0x53,  /* [6262] */
    (xdc_Char)0x0,  /* [6263] */
    (xdc_Char)0x44,  /* [6264] */
    (xdc_Char)0x45,  /* [6265] */
    (xdc_Char)0x54,  /* [6266] */
    (xdc_Char)0x41,  /* [6267] */
    (xdc_Char)0x49,  /* [6268] */
    (xdc_Char)0x4c,  /* [6269] */
    (xdc_Char)0x3a,  /* [6270] */
    (xdc_Char)0x20,  /* [6271] */
    (xdc_Char)0x45,  /* [6272] */
    (xdc_Char)0x76,  /* [6273] */
    (xdc_Char)0x65,  /* [6274] */
    (xdc_Char)0x6e,  /* [6275] */
    (xdc_Char)0x74,  /* [6276] */
    (xdc_Char)0x43,  /* [6277] */
    (xdc_Char)0x6f,  /* [6278] */
    (xdc_Char)0x64,  /* [6279] */
    (xdc_Char)0x65,  /* [6280] */
    (xdc_Char)0x3a,  /* [6281] */
    (xdc_Char)0x30,  /* [6282] */
    (xdc_Char)0x78,  /* [6283] */
    (xdc_Char)0x25,  /* [6284] */
    (xdc_Char)0x78,  /* [6285] */
    (xdc_Char)0x0,  /* [6286] */
    (xdc_Char)0x44,  /* [6287] */
    (xdc_Char)0x45,  /* [6288] */
    (xdc_Char)0x54,  /* [6289] */
    (xdc_Char)0x41,  /* [6290] */
    (xdc_Char)0x49,  /* [6291] */
    (xdc_Char)0x4c,  /* [6292] */
    (xdc_Char)0x3a,  /* [6293] */
    (xdc_Char)0x20,  /* [6294] */
    (xdc_Char)0x45,  /* [6295] */
    (xdc_Char)0x76,  /* [6296] */
    (xdc_Char)0x65,  /* [6297] */
    (xdc_Char)0x6e,  /* [6298] */
    (xdc_Char)0x74,  /* [6299] */
    (xdc_Char)0x43,  /* [6300] */
    (xdc_Char)0x6f,  /* [6301] */
    (xdc_Char)0x64,  /* [6302] */
    (xdc_Char)0x65,  /* [6303] */
    (xdc_Char)0x3a,  /* [6304] */
    (xdc_Char)0x30,  /* [6305] */
    (xdc_Char)0x78,  /* [6306] */
    (xdc_Char)0x25,  /* [6307] */
    (xdc_Char)0x78,  /* [6308] */
    (xdc_Char)0x2e,  /* [6309] */
    (xdc_Char)0x20,  /* [6310] */
    (xdc_Char)0x20,  /* [6311] */
    (xdc_Char)0x25,  /* [6312] */
    (xdc_Char)0x24,  /* [6313] */
    (xdc_Char)0x53,  /* [6314] */
    (xdc_Char)0x0,  /* [6315] */
    (xdc_Char)0x56,  /* [6316] */
    (xdc_Char)0x41,  /* [6317] */
    (xdc_Char)0x4c,  /* [6318] */
    (xdc_Char)0x55,  /* [6319] */
    (xdc_Char)0x45,  /* [6320] */
    (xdc_Char)0x3d,  /* [6321] */
    (xdc_Char)0x25,  /* [6322] */
    (xdc_Char)0x64,  /* [6323] */
    (xdc_Char)0x20,  /* [6324] */
    (xdc_Char)0x28,  /* [6325] */
    (xdc_Char)0x41,  /* [6326] */
    (xdc_Char)0x75,  /* [6327] */
    (xdc_Char)0x78,  /* [6328] */
    (xdc_Char)0x44,  /* [6329] */
    (xdc_Char)0x61,  /* [6330] */
    (xdc_Char)0x74,  /* [6331] */
    (xdc_Char)0x61,  /* [6332] */
    (xdc_Char)0x3d,  /* [6333] */
    (xdc_Char)0x25,  /* [6334] */
    (xdc_Char)0x64,  /* [6335] */
    (xdc_Char)0x2c,  /* [6336] */
    (xdc_Char)0x20,  /* [6337] */
    (xdc_Char)0x25,  /* [6338] */
    (xdc_Char)0x64,  /* [6339] */
    (xdc_Char)0x29,  /* [6340] */
    (xdc_Char)0x20,  /* [6341] */
    (xdc_Char)0x4b,  /* [6342] */
    (xdc_Char)0x65,  /* [6343] */
    (xdc_Char)0x79,  /* [6344] */
    (xdc_Char)0x3a,  /* [6345] */
    (xdc_Char)0x25,  /* [6346] */
    (xdc_Char)0x24,  /* [6347] */
    (xdc_Char)0x53,  /* [6348] */
    (xdc_Char)0x0,  /* [6349] */
    (xdc_Char)0x65,  /* [6350] */
    (xdc_Char)0x6e,  /* [6351] */
    (xdc_Char)0x74,  /* [6352] */
    (xdc_Char)0x65,  /* [6353] */
    (xdc_Char)0x72,  /* [6354] */
    (xdc_Char)0x46,  /* [6355] */
    (xdc_Char)0x75,  /* [6356] */
    (xdc_Char)0x6e,  /* [6357] */
    (xdc_Char)0x63,  /* [6358] */
    (xdc_Char)0x74,  /* [6359] */
    (xdc_Char)0x69,  /* [6360] */
    (xdc_Char)0x6f,  /* [6361] */
    (xdc_Char)0x6e,  /* [6362] */
    (xdc_Char)0x41,  /* [6363] */
    (xdc_Char)0x64,  /* [6364] */
    (xdc_Char)0x72,  /* [6365] */
    (xdc_Char)0x73,  /* [6366] */
    (xdc_Char)0x3a,  /* [6367] */
    (xdc_Char)0x20,  /* [6368] */
    (xdc_Char)0x74,  /* [6369] */
    (xdc_Char)0x61,  /* [6370] */
    (xdc_Char)0x73,  /* [6371] */
    (xdc_Char)0x6b,  /* [6372] */
    (xdc_Char)0x48,  /* [6373] */
    (xdc_Char)0x61,  /* [6374] */
    (xdc_Char)0x6e,  /* [6375] */
    (xdc_Char)0x64,  /* [6376] */
    (xdc_Char)0x6c,  /* [6377] */
    (xdc_Char)0x65,  /* [6378] */
    (xdc_Char)0x3d,  /* [6379] */
    (xdc_Char)0x30,  /* [6380] */
    (xdc_Char)0x78,  /* [6381] */
    (xdc_Char)0x25,  /* [6382] */
    (xdc_Char)0x78,  /* [6383] */
    (xdc_Char)0x2c,  /* [6384] */
    (xdc_Char)0x20,  /* [6385] */
    (xdc_Char)0x61,  /* [6386] */
    (xdc_Char)0x64,  /* [6387] */
    (xdc_Char)0x72,  /* [6388] */
    (xdc_Char)0x73,  /* [6389] */
    (xdc_Char)0x3d,  /* [6390] */
    (xdc_Char)0x30,  /* [6391] */
    (xdc_Char)0x78,  /* [6392] */
    (xdc_Char)0x25,  /* [6393] */
    (xdc_Char)0x78,  /* [6394] */
    (xdc_Char)0x0,  /* [6395] */
    (xdc_Char)0x65,  /* [6396] */
    (xdc_Char)0x78,  /* [6397] */
    (xdc_Char)0x69,  /* [6398] */
    (xdc_Char)0x74,  /* [6399] */
    (xdc_Char)0x46,  /* [6400] */
    (xdc_Char)0x75,  /* [6401] */
    (xdc_Char)0x6e,  /* [6402] */
    (xdc_Char)0x63,  /* [6403] */
    (xdc_Char)0x74,  /* [6404] */
    (xdc_Char)0x69,  /* [6405] */
    (xdc_Char)0x6f,  /* [6406] */
    (xdc_Char)0x6e,  /* [6407] */
    (xdc_Char)0x41,  /* [6408] */
    (xdc_Char)0x64,  /* [6409] */
    (xdc_Char)0x72,  /* [6410] */
    (xdc_Char)0x73,  /* [6411] */
    (xdc_Char)0x3a,  /* [6412] */
    (xdc_Char)0x20,  /* [6413] */
    (xdc_Char)0x74,  /* [6414] */
    (xdc_Char)0x61,  /* [6415] */
    (xdc_Char)0x73,  /* [6416] */
    (xdc_Char)0x6b,  /* [6417] */
    (xdc_Char)0x48,  /* [6418] */
    (xdc_Char)0x61,  /* [6419] */
    (xdc_Char)0x6e,  /* [6420] */
    (xdc_Char)0x64,  /* [6421] */
    (xdc_Char)0x6c,  /* [6422] */
    (xdc_Char)0x65,  /* [6423] */
    (xdc_Char)0x3d,  /* [6424] */
    (xdc_Char)0x30,  /* [6425] */
    (xdc_Char)0x78,  /* [6426] */
    (xdc_Char)0x25,  /* [6427] */
    (xdc_Char)0x78,  /* [6428] */
    (xdc_Char)0x2c,  /* [6429] */
    (xdc_Char)0x20,  /* [6430] */
    (xdc_Char)0x61,  /* [6431] */
    (xdc_Char)0x64,  /* [6432] */
    (xdc_Char)0x72,  /* [6433] */
    (xdc_Char)0x73,  /* [6434] */
    (xdc_Char)0x3d,  /* [6435] */
    (xdc_Char)0x30,  /* [6436] */
    (xdc_Char)0x78,  /* [6437] */
    (xdc_Char)0x25,  /* [6438] */
    (xdc_Char)0x78,  /* [6439] */
    (xdc_Char)0x0,  /* [6440] */
    (xdc_Char)0x65,  /* [6441] */
    (xdc_Char)0x6e,  /* [6442] */
    (xdc_Char)0x74,  /* [6443] */
    (xdc_Char)0x65,  /* [6444] */
    (xdc_Char)0x72,  /* [6445] */
    (xdc_Char)0x46,  /* [6446] */
    (xdc_Char)0x75,  /* [6447] */
    (xdc_Char)0x6e,  /* [6448] */
    (xdc_Char)0x63,  /* [6449] */
    (xdc_Char)0x74,  /* [6450] */
    (xdc_Char)0x69,  /* [6451] */
    (xdc_Char)0x6f,  /* [6452] */
    (xdc_Char)0x6e,  /* [6453] */
    (xdc_Char)0x4e,  /* [6454] */
    (xdc_Char)0x61,  /* [6455] */
    (xdc_Char)0x6d,  /* [6456] */
    (xdc_Char)0x65,  /* [6457] */
    (xdc_Char)0x3a,  /* [6458] */
    (xdc_Char)0x20,  /* [6459] */
    (xdc_Char)0x74,  /* [6460] */
    (xdc_Char)0x61,  /* [6461] */
    (xdc_Char)0x73,  /* [6462] */
    (xdc_Char)0x6b,  /* [6463] */
    (xdc_Char)0x48,  /* [6464] */
    (xdc_Char)0x61,  /* [6465] */
    (xdc_Char)0x6e,  /* [6466] */
    (xdc_Char)0x64,  /* [6467] */
    (xdc_Char)0x6c,  /* [6468] */
    (xdc_Char)0x65,  /* [6469] */
    (xdc_Char)0x3d,  /* [6470] */
    (xdc_Char)0x30,  /* [6471] */
    (xdc_Char)0x78,  /* [6472] */
    (xdc_Char)0x25,  /* [6473] */
    (xdc_Char)0x78,  /* [6474] */
    (xdc_Char)0x2c,  /* [6475] */
    (xdc_Char)0x20,  /* [6476] */
    (xdc_Char)0x6e,  /* [6477] */
    (xdc_Char)0x61,  /* [6478] */
    (xdc_Char)0x6d,  /* [6479] */
    (xdc_Char)0x65,  /* [6480] */
    (xdc_Char)0x3d,  /* [6481] */
    (xdc_Char)0x25,  /* [6482] */
    (xdc_Char)0x73,  /* [6483] */
    (xdc_Char)0x0,  /* [6484] */
    (xdc_Char)0x65,  /* [6485] */
    (xdc_Char)0x78,  /* [6486] */
    (xdc_Char)0x69,  /* [6487] */
    (xdc_Char)0x74,  /* [6488] */
    (xdc_Char)0x46,  /* [6489] */
    (xdc_Char)0x75,  /* [6490] */
    (xdc_Char)0x6e,  /* [6491] */
    (xdc_Char)0x63,  /* [6492] */
    (xdc_Char)0x74,  /* [6493] */
    (xdc_Char)0x69,  /* [6494] */
    (xdc_Char)0x6f,  /* [6495] */
    (xdc_Char)0x6e,  /* [6496] */
    (xdc_Char)0x4e,  /* [6497] */
    (xdc_Char)0x61,  /* [6498] */
    (xdc_Char)0x6d,  /* [6499] */
    (xdc_Char)0x65,  /* [6500] */
    (xdc_Char)0x3a,  /* [6501] */
    (xdc_Char)0x20,  /* [6502] */
    (xdc_Char)0x74,  /* [6503] */
    (xdc_Char)0x61,  /* [6504] */
    (xdc_Char)0x73,  /* [6505] */
    (xdc_Char)0x6b,  /* [6506] */
    (xdc_Char)0x48,  /* [6507] */
    (xdc_Char)0x61,  /* [6508] */
    (xdc_Char)0x6e,  /* [6509] */
    (xdc_Char)0x64,  /* [6510] */
    (xdc_Char)0x6c,  /* [6511] */
    (xdc_Char)0x65,  /* [6512] */
    (xdc_Char)0x3d,  /* [6513] */
    (xdc_Char)0x30,  /* [6514] */
    (xdc_Char)0x78,  /* [6515] */
    (xdc_Char)0x25,  /* [6516] */
    (xdc_Char)0x78,  /* [6517] */
    (xdc_Char)0x2c,  /* [6518] */
    (xdc_Char)0x20,  /* [6519] */
    (xdc_Char)0x6e,  /* [6520] */
    (xdc_Char)0x61,  /* [6521] */
    (xdc_Char)0x6d,  /* [6522] */
    (xdc_Char)0x65,  /* [6523] */
    (xdc_Char)0x3d,  /* [6524] */
    (xdc_Char)0x25,  /* [6525] */
    (xdc_Char)0x73,  /* [6526] */
    (xdc_Char)0x0,  /* [6527] */
    (xdc_Char)0x4c,  /* [6528] */
    (xdc_Char)0x57,  /* [6529] */
    (xdc_Char)0x5f,  /* [6530] */
    (xdc_Char)0x64,  /* [6531] */
    (xdc_Char)0x65,  /* [6532] */
    (xdc_Char)0x6c,  /* [6533] */
    (xdc_Char)0x61,  /* [6534] */
    (xdc_Char)0x79,  /* [6535] */
    (xdc_Char)0x65,  /* [6536] */
    (xdc_Char)0x64,  /* [6537] */
    (xdc_Char)0x3a,  /* [6538] */
    (xdc_Char)0x20,  /* [6539] */
    (xdc_Char)0x64,  /* [6540] */
    (xdc_Char)0x65,  /* [6541] */
    (xdc_Char)0x6c,  /* [6542] */
    (xdc_Char)0x61,  /* [6543] */
    (xdc_Char)0x79,  /* [6544] */
    (xdc_Char)0x3a,  /* [6545] */
    (xdc_Char)0x20,  /* [6546] */
    (xdc_Char)0x25,  /* [6547] */
    (xdc_Char)0x64,  /* [6548] */
    (xdc_Char)0x0,  /* [6549] */
    (xdc_Char)0x4c,  /* [6550] */
    (xdc_Char)0x4d,  /* [6551] */
    (xdc_Char)0x5f,  /* [6552] */
    (xdc_Char)0x74,  /* [6553] */
    (xdc_Char)0x69,  /* [6554] */
    (xdc_Char)0x63,  /* [6555] */
    (xdc_Char)0x6b,  /* [6556] */
    (xdc_Char)0x3a,  /* [6557] */
    (xdc_Char)0x20,  /* [6558] */
    (xdc_Char)0x74,  /* [6559] */
    (xdc_Char)0x69,  /* [6560] */
    (xdc_Char)0x63,  /* [6561] */
    (xdc_Char)0x6b,  /* [6562] */
    (xdc_Char)0x3a,  /* [6563] */
    (xdc_Char)0x20,  /* [6564] */
    (xdc_Char)0x25,  /* [6565] */
    (xdc_Char)0x64,  /* [6566] */
    (xdc_Char)0x0,  /* [6567] */
    (xdc_Char)0x4c,  /* [6568] */
    (xdc_Char)0x4d,  /* [6569] */
    (xdc_Char)0x5f,  /* [6570] */
    (xdc_Char)0x62,  /* [6571] */
    (xdc_Char)0x65,  /* [6572] */
    (xdc_Char)0x67,  /* [6573] */
    (xdc_Char)0x69,  /* [6574] */
    (xdc_Char)0x6e,  /* [6575] */
    (xdc_Char)0x3a,  /* [6576] */
    (xdc_Char)0x20,  /* [6577] */
    (xdc_Char)0x63,  /* [6578] */
    (xdc_Char)0x6c,  /* [6579] */
    (xdc_Char)0x6b,  /* [6580] */
    (xdc_Char)0x3a,  /* [6581] */
    (xdc_Char)0x20,  /* [6582] */
    (xdc_Char)0x30,  /* [6583] */
    (xdc_Char)0x78,  /* [6584] */
    (xdc_Char)0x25,  /* [6585] */
    (xdc_Char)0x78,  /* [6586] */
    (xdc_Char)0x2c,  /* [6587] */
    (xdc_Char)0x20,  /* [6588] */
    (xdc_Char)0x66,  /* [6589] */
    (xdc_Char)0x75,  /* [6590] */
    (xdc_Char)0x6e,  /* [6591] */
    (xdc_Char)0x63,  /* [6592] */
    (xdc_Char)0x3a,  /* [6593] */
    (xdc_Char)0x20,  /* [6594] */
    (xdc_Char)0x30,  /* [6595] */
    (xdc_Char)0x78,  /* [6596] */
    (xdc_Char)0x25,  /* [6597] */
    (xdc_Char)0x78,  /* [6598] */
    (xdc_Char)0x0,  /* [6599] */
    (xdc_Char)0x4c,  /* [6600] */
    (xdc_Char)0x4d,  /* [6601] */
    (xdc_Char)0x5f,  /* [6602] */
    (xdc_Char)0x70,  /* [6603] */
    (xdc_Char)0x6f,  /* [6604] */
    (xdc_Char)0x73,  /* [6605] */
    (xdc_Char)0x74,  /* [6606] */
    (xdc_Char)0x3a,  /* [6607] */
    (xdc_Char)0x20,  /* [6608] */
    (xdc_Char)0x65,  /* [6609] */
    (xdc_Char)0x76,  /* [6610] */
    (xdc_Char)0x65,  /* [6611] */
    (xdc_Char)0x6e,  /* [6612] */
    (xdc_Char)0x74,  /* [6613] */
    (xdc_Char)0x3a,  /* [6614] */
    (xdc_Char)0x20,  /* [6615] */
    (xdc_Char)0x30,  /* [6616] */
    (xdc_Char)0x78,  /* [6617] */
    (xdc_Char)0x25,  /* [6618] */
    (xdc_Char)0x78,  /* [6619] */
    (xdc_Char)0x2c,  /* [6620] */
    (xdc_Char)0x20,  /* [6621] */
    (xdc_Char)0x63,  /* [6622] */
    (xdc_Char)0x75,  /* [6623] */
    (xdc_Char)0x72,  /* [6624] */
    (xdc_Char)0x72,  /* [6625] */
    (xdc_Char)0x45,  /* [6626] */
    (xdc_Char)0x76,  /* [6627] */
    (xdc_Char)0x65,  /* [6628] */
    (xdc_Char)0x6e,  /* [6629] */
    (xdc_Char)0x74,  /* [6630] */
    (xdc_Char)0x73,  /* [6631] */
    (xdc_Char)0x3a,  /* [6632] */
    (xdc_Char)0x20,  /* [6633] */
    (xdc_Char)0x30,  /* [6634] */
    (xdc_Char)0x78,  /* [6635] */
    (xdc_Char)0x25,  /* [6636] */
    (xdc_Char)0x78,  /* [6637] */
    (xdc_Char)0x2c,  /* [6638] */
    (xdc_Char)0x20,  /* [6639] */
    (xdc_Char)0x65,  /* [6640] */
    (xdc_Char)0x76,  /* [6641] */
    (xdc_Char)0x65,  /* [6642] */
    (xdc_Char)0x6e,  /* [6643] */
    (xdc_Char)0x74,  /* [6644] */
    (xdc_Char)0x49,  /* [6645] */
    (xdc_Char)0x64,  /* [6646] */
    (xdc_Char)0x3a,  /* [6647] */
    (xdc_Char)0x20,  /* [6648] */
    (xdc_Char)0x30,  /* [6649] */
    (xdc_Char)0x78,  /* [6650] */
    (xdc_Char)0x25,  /* [6651] */
    (xdc_Char)0x78,  /* [6652] */
    (xdc_Char)0x0,  /* [6653] */
    (xdc_Char)0x4c,  /* [6654] */
    (xdc_Char)0x4d,  /* [6655] */
    (xdc_Char)0x5f,  /* [6656] */
    (xdc_Char)0x70,  /* [6657] */
    (xdc_Char)0x65,  /* [6658] */
    (xdc_Char)0x6e,  /* [6659] */
    (xdc_Char)0x64,  /* [6660] */
    (xdc_Char)0x3a,  /* [6661] */
    (xdc_Char)0x20,  /* [6662] */
    (xdc_Char)0x65,  /* [6663] */
    (xdc_Char)0x76,  /* [6664] */
    (xdc_Char)0x65,  /* [6665] */
    (xdc_Char)0x6e,  /* [6666] */
    (xdc_Char)0x74,  /* [6667] */
    (xdc_Char)0x3a,  /* [6668] */
    (xdc_Char)0x20,  /* [6669] */
    (xdc_Char)0x30,  /* [6670] */
    (xdc_Char)0x78,  /* [6671] */
    (xdc_Char)0x25,  /* [6672] */
    (xdc_Char)0x78,  /* [6673] */
    (xdc_Char)0x2c,  /* [6674] */
    (xdc_Char)0x20,  /* [6675] */
    (xdc_Char)0x63,  /* [6676] */
    (xdc_Char)0x75,  /* [6677] */
    (xdc_Char)0x72,  /* [6678] */
    (xdc_Char)0x72,  /* [6679] */
    (xdc_Char)0x45,  /* [6680] */
    (xdc_Char)0x76,  /* [6681] */
    (xdc_Char)0x65,  /* [6682] */
    (xdc_Char)0x6e,  /* [6683] */
    (xdc_Char)0x74,  /* [6684] */
    (xdc_Char)0x73,  /* [6685] */
    (xdc_Char)0x3a,  /* [6686] */
    (xdc_Char)0x20,  /* [6687] */
    (xdc_Char)0x30,  /* [6688] */
    (xdc_Char)0x78,  /* [6689] */
    (xdc_Char)0x25,  /* [6690] */
    (xdc_Char)0x78,  /* [6691] */
    (xdc_Char)0x2c,  /* [6692] */
    (xdc_Char)0x20,  /* [6693] */
    (xdc_Char)0x61,  /* [6694] */
    (xdc_Char)0x6e,  /* [6695] */
    (xdc_Char)0x64,  /* [6696] */
    (xdc_Char)0x4d,  /* [6697] */
    (xdc_Char)0x61,  /* [6698] */
    (xdc_Char)0x73,  /* [6699] */
    (xdc_Char)0x6b,  /* [6700] */
    (xdc_Char)0x3a,  /* [6701] */
    (xdc_Char)0x20,  /* [6702] */
    (xdc_Char)0x30,  /* [6703] */
    (xdc_Char)0x78,  /* [6704] */
    (xdc_Char)0x25,  /* [6705] */
    (xdc_Char)0x78,  /* [6706] */
    (xdc_Char)0x2c,  /* [6707] */
    (xdc_Char)0x20,  /* [6708] */
    (xdc_Char)0x6f,  /* [6709] */
    (xdc_Char)0x72,  /* [6710] */
    (xdc_Char)0x4d,  /* [6711] */
    (xdc_Char)0x61,  /* [6712] */
    (xdc_Char)0x73,  /* [6713] */
    (xdc_Char)0x6b,  /* [6714] */
    (xdc_Char)0x3a,  /* [6715] */
    (xdc_Char)0x20,  /* [6716] */
    (xdc_Char)0x30,  /* [6717] */
    (xdc_Char)0x78,  /* [6718] */
    (xdc_Char)0x25,  /* [6719] */
    (xdc_Char)0x78,  /* [6720] */
    (xdc_Char)0x2c,  /* [6721] */
    (xdc_Char)0x20,  /* [6722] */
    (xdc_Char)0x74,  /* [6723] */
    (xdc_Char)0x69,  /* [6724] */
    (xdc_Char)0x6d,  /* [6725] */
    (xdc_Char)0x65,  /* [6726] */
    (xdc_Char)0x6f,  /* [6727] */
    (xdc_Char)0x75,  /* [6728] */
    (xdc_Char)0x74,  /* [6729] */
    (xdc_Char)0x3a,  /* [6730] */
    (xdc_Char)0x20,  /* [6731] */
    (xdc_Char)0x25,  /* [6732] */
    (xdc_Char)0x64,  /* [6733] */
    (xdc_Char)0x0,  /* [6734] */
    (xdc_Char)0x4c,  /* [6735] */
    (xdc_Char)0x4d,  /* [6736] */
    (xdc_Char)0x5f,  /* [6737] */
    (xdc_Char)0x70,  /* [6738] */
    (xdc_Char)0x6f,  /* [6739] */
    (xdc_Char)0x73,  /* [6740] */
    (xdc_Char)0x74,  /* [6741] */
    (xdc_Char)0x3a,  /* [6742] */
    (xdc_Char)0x20,  /* [6743] */
    (xdc_Char)0x73,  /* [6744] */
    (xdc_Char)0x65,  /* [6745] */
    (xdc_Char)0x6d,  /* [6746] */
    (xdc_Char)0x3a,  /* [6747] */
    (xdc_Char)0x20,  /* [6748] */
    (xdc_Char)0x30,  /* [6749] */
    (xdc_Char)0x78,  /* [6750] */
    (xdc_Char)0x25,  /* [6751] */
    (xdc_Char)0x78,  /* [6752] */
    (xdc_Char)0x2c,  /* [6753] */
    (xdc_Char)0x20,  /* [6754] */
    (xdc_Char)0x63,  /* [6755] */
    (xdc_Char)0x6f,  /* [6756] */
    (xdc_Char)0x75,  /* [6757] */
    (xdc_Char)0x6e,  /* [6758] */
    (xdc_Char)0x74,  /* [6759] */
    (xdc_Char)0x3a,  /* [6760] */
    (xdc_Char)0x20,  /* [6761] */
    (xdc_Char)0x25,  /* [6762] */
    (xdc_Char)0x64,  /* [6763] */
    (xdc_Char)0x0,  /* [6764] */
    (xdc_Char)0x4c,  /* [6765] */
    (xdc_Char)0x4d,  /* [6766] */
    (xdc_Char)0x5f,  /* [6767] */
    (xdc_Char)0x70,  /* [6768] */
    (xdc_Char)0x65,  /* [6769] */
    (xdc_Char)0x6e,  /* [6770] */
    (xdc_Char)0x64,  /* [6771] */
    (xdc_Char)0x3a,  /* [6772] */
    (xdc_Char)0x20,  /* [6773] */
    (xdc_Char)0x73,  /* [6774] */
    (xdc_Char)0x65,  /* [6775] */
    (xdc_Char)0x6d,  /* [6776] */
    (xdc_Char)0x3a,  /* [6777] */
    (xdc_Char)0x20,  /* [6778] */
    (xdc_Char)0x30,  /* [6779] */
    (xdc_Char)0x78,  /* [6780] */
    (xdc_Char)0x25,  /* [6781] */
    (xdc_Char)0x78,  /* [6782] */
    (xdc_Char)0x2c,  /* [6783] */
    (xdc_Char)0x20,  /* [6784] */
    (xdc_Char)0x63,  /* [6785] */
    (xdc_Char)0x6f,  /* [6786] */
    (xdc_Char)0x75,  /* [6787] */
    (xdc_Char)0x6e,  /* [6788] */
    (xdc_Char)0x74,  /* [6789] */
    (xdc_Char)0x3a,  /* [6790] */
    (xdc_Char)0x20,  /* [6791] */
    (xdc_Char)0x25,  /* [6792] */
    (xdc_Char)0x64,  /* [6793] */
    (xdc_Char)0x2c,  /* [6794] */
    (xdc_Char)0x20,  /* [6795] */
    (xdc_Char)0x74,  /* [6796] */
    (xdc_Char)0x69,  /* [6797] */
    (xdc_Char)0x6d,  /* [6798] */
    (xdc_Char)0x65,  /* [6799] */
    (xdc_Char)0x6f,  /* [6800] */
    (xdc_Char)0x75,  /* [6801] */
    (xdc_Char)0x74,  /* [6802] */
    (xdc_Char)0x3a,  /* [6803] */
    (xdc_Char)0x20,  /* [6804] */
    (xdc_Char)0x25,  /* [6805] */
    (xdc_Char)0x64,  /* [6806] */
    (xdc_Char)0x0,  /* [6807] */
    (xdc_Char)0x4c,  /* [6808] */
    (xdc_Char)0x4d,  /* [6809] */
    (xdc_Char)0x5f,  /* [6810] */
    (xdc_Char)0x62,  /* [6811] */
    (xdc_Char)0x65,  /* [6812] */
    (xdc_Char)0x67,  /* [6813] */
    (xdc_Char)0x69,  /* [6814] */
    (xdc_Char)0x6e,  /* [6815] */
    (xdc_Char)0x3a,  /* [6816] */
    (xdc_Char)0x20,  /* [6817] */
    (xdc_Char)0x73,  /* [6818] */
    (xdc_Char)0x77,  /* [6819] */
    (xdc_Char)0x69,  /* [6820] */
    (xdc_Char)0x3a,  /* [6821] */
    (xdc_Char)0x20,  /* [6822] */
    (xdc_Char)0x30,  /* [6823] */
    (xdc_Char)0x78,  /* [6824] */
    (xdc_Char)0x25,  /* [6825] */
    (xdc_Char)0x78,  /* [6826] */
    (xdc_Char)0x2c,  /* [6827] */
    (xdc_Char)0x20,  /* [6828] */
    (xdc_Char)0x66,  /* [6829] */
    (xdc_Char)0x75,  /* [6830] */
    (xdc_Char)0x6e,  /* [6831] */
    (xdc_Char)0x63,  /* [6832] */
    (xdc_Char)0x3a,  /* [6833] */
    (xdc_Char)0x20,  /* [6834] */
    (xdc_Char)0x30,  /* [6835] */
    (xdc_Char)0x78,  /* [6836] */
    (xdc_Char)0x25,  /* [6837] */
    (xdc_Char)0x78,  /* [6838] */
    (xdc_Char)0x2c,  /* [6839] */
    (xdc_Char)0x20,  /* [6840] */
    (xdc_Char)0x70,  /* [6841] */
    (xdc_Char)0x72,  /* [6842] */
    (xdc_Char)0x65,  /* [6843] */
    (xdc_Char)0x54,  /* [6844] */
    (xdc_Char)0x68,  /* [6845] */
    (xdc_Char)0x72,  /* [6846] */
    (xdc_Char)0x65,  /* [6847] */
    (xdc_Char)0x61,  /* [6848] */
    (xdc_Char)0x64,  /* [6849] */
    (xdc_Char)0x3a,  /* [6850] */
    (xdc_Char)0x20,  /* [6851] */
    (xdc_Char)0x25,  /* [6852] */
    (xdc_Char)0x64,  /* [6853] */
    (xdc_Char)0x0,  /* [6854] */
    (xdc_Char)0x4c,  /* [6855] */
    (xdc_Char)0x44,  /* [6856] */
    (xdc_Char)0x5f,  /* [6857] */
    (xdc_Char)0x65,  /* [6858] */
    (xdc_Char)0x6e,  /* [6859] */
    (xdc_Char)0x64,  /* [6860] */
    (xdc_Char)0x3a,  /* [6861] */
    (xdc_Char)0x20,  /* [6862] */
    (xdc_Char)0x73,  /* [6863] */
    (xdc_Char)0x77,  /* [6864] */
    (xdc_Char)0x69,  /* [6865] */
    (xdc_Char)0x3a,  /* [6866] */
    (xdc_Char)0x20,  /* [6867] */
    (xdc_Char)0x30,  /* [6868] */
    (xdc_Char)0x78,  /* [6869] */
    (xdc_Char)0x25,  /* [6870] */
    (xdc_Char)0x78,  /* [6871] */
    (xdc_Char)0x0,  /* [6872] */
    (xdc_Char)0x4c,  /* [6873] */
    (xdc_Char)0x4d,  /* [6874] */
    (xdc_Char)0x5f,  /* [6875] */
    (xdc_Char)0x70,  /* [6876] */
    (xdc_Char)0x6f,  /* [6877] */
    (xdc_Char)0x73,  /* [6878] */
    (xdc_Char)0x74,  /* [6879] */
    (xdc_Char)0x3a,  /* [6880] */
    (xdc_Char)0x20,  /* [6881] */
    (xdc_Char)0x73,  /* [6882] */
    (xdc_Char)0x77,  /* [6883] */
    (xdc_Char)0x69,  /* [6884] */
    (xdc_Char)0x3a,  /* [6885] */
    (xdc_Char)0x20,  /* [6886] */
    (xdc_Char)0x30,  /* [6887] */
    (xdc_Char)0x78,  /* [6888] */
    (xdc_Char)0x25,  /* [6889] */
    (xdc_Char)0x78,  /* [6890] */
    (xdc_Char)0x2c,  /* [6891] */
    (xdc_Char)0x20,  /* [6892] */
    (xdc_Char)0x66,  /* [6893] */
    (xdc_Char)0x75,  /* [6894] */
    (xdc_Char)0x6e,  /* [6895] */
    (xdc_Char)0x63,  /* [6896] */
    (xdc_Char)0x3a,  /* [6897] */
    (xdc_Char)0x20,  /* [6898] */
    (xdc_Char)0x30,  /* [6899] */
    (xdc_Char)0x78,  /* [6900] */
    (xdc_Char)0x25,  /* [6901] */
    (xdc_Char)0x78,  /* [6902] */
    (xdc_Char)0x2c,  /* [6903] */
    (xdc_Char)0x20,  /* [6904] */
    (xdc_Char)0x70,  /* [6905] */
    (xdc_Char)0x72,  /* [6906] */
    (xdc_Char)0x69,  /* [6907] */
    (xdc_Char)0x3a,  /* [6908] */
    (xdc_Char)0x20,  /* [6909] */
    (xdc_Char)0x25,  /* [6910] */
    (xdc_Char)0x64,  /* [6911] */
    (xdc_Char)0x0,  /* [6912] */
    (xdc_Char)0x4c,  /* [6913] */
    (xdc_Char)0x4d,  /* [6914] */
    (xdc_Char)0x5f,  /* [6915] */
    (xdc_Char)0x73,  /* [6916] */
    (xdc_Char)0x77,  /* [6917] */
    (xdc_Char)0x69,  /* [6918] */
    (xdc_Char)0x74,  /* [6919] */
    (xdc_Char)0x63,  /* [6920] */
    (xdc_Char)0x68,  /* [6921] */
    (xdc_Char)0x3a,  /* [6922] */
    (xdc_Char)0x20,  /* [6923] */
    (xdc_Char)0x6f,  /* [6924] */
    (xdc_Char)0x6c,  /* [6925] */
    (xdc_Char)0x64,  /* [6926] */
    (xdc_Char)0x74,  /* [6927] */
    (xdc_Char)0x73,  /* [6928] */
    (xdc_Char)0x6b,  /* [6929] */
    (xdc_Char)0x3a,  /* [6930] */
    (xdc_Char)0x20,  /* [6931] */
    (xdc_Char)0x30,  /* [6932] */
    (xdc_Char)0x78,  /* [6933] */
    (xdc_Char)0x25,  /* [6934] */
    (xdc_Char)0x78,  /* [6935] */
    (xdc_Char)0x2c,  /* [6936] */
    (xdc_Char)0x20,  /* [6937] */
    (xdc_Char)0x6f,  /* [6938] */
    (xdc_Char)0x6c,  /* [6939] */
    (xdc_Char)0x64,  /* [6940] */
    (xdc_Char)0x66,  /* [6941] */
    (xdc_Char)0x75,  /* [6942] */
    (xdc_Char)0x6e,  /* [6943] */
    (xdc_Char)0x63,  /* [6944] */
    (xdc_Char)0x3a,  /* [6945] */
    (xdc_Char)0x20,  /* [6946] */
    (xdc_Char)0x30,  /* [6947] */
    (xdc_Char)0x78,  /* [6948] */
    (xdc_Char)0x25,  /* [6949] */
    (xdc_Char)0x78,  /* [6950] */
    (xdc_Char)0x2c,  /* [6951] */
    (xdc_Char)0x20,  /* [6952] */
    (xdc_Char)0x6e,  /* [6953] */
    (xdc_Char)0x65,  /* [6954] */
    (xdc_Char)0x77,  /* [6955] */
    (xdc_Char)0x74,  /* [6956] */
    (xdc_Char)0x73,  /* [6957] */
    (xdc_Char)0x6b,  /* [6958] */
    (xdc_Char)0x3a,  /* [6959] */
    (xdc_Char)0x20,  /* [6960] */
    (xdc_Char)0x30,  /* [6961] */
    (xdc_Char)0x78,  /* [6962] */
    (xdc_Char)0x25,  /* [6963] */
    (xdc_Char)0x78,  /* [6964] */
    (xdc_Char)0x2c,  /* [6965] */
    (xdc_Char)0x20,  /* [6966] */
    (xdc_Char)0x6e,  /* [6967] */
    (xdc_Char)0x65,  /* [6968] */
    (xdc_Char)0x77,  /* [6969] */
    (xdc_Char)0x66,  /* [6970] */
    (xdc_Char)0x75,  /* [6971] */
    (xdc_Char)0x6e,  /* [6972] */
    (xdc_Char)0x63,  /* [6973] */
    (xdc_Char)0x3a,  /* [6974] */
    (xdc_Char)0x20,  /* [6975] */
    (xdc_Char)0x30,  /* [6976] */
    (xdc_Char)0x78,  /* [6977] */
    (xdc_Char)0x25,  /* [6978] */
    (xdc_Char)0x78,  /* [6979] */
    (xdc_Char)0x0,  /* [6980] */
    (xdc_Char)0x4c,  /* [6981] */
    (xdc_Char)0x4d,  /* [6982] */
    (xdc_Char)0x5f,  /* [6983] */
    (xdc_Char)0x73,  /* [6984] */
    (xdc_Char)0x6c,  /* [6985] */
    (xdc_Char)0x65,  /* [6986] */
    (xdc_Char)0x65,  /* [6987] */
    (xdc_Char)0x70,  /* [6988] */
    (xdc_Char)0x3a,  /* [6989] */
    (xdc_Char)0x20,  /* [6990] */
    (xdc_Char)0x74,  /* [6991] */
    (xdc_Char)0x73,  /* [6992] */
    (xdc_Char)0x6b,  /* [6993] */
    (xdc_Char)0x3a,  /* [6994] */
    (xdc_Char)0x20,  /* [6995] */
    (xdc_Char)0x30,  /* [6996] */
    (xdc_Char)0x78,  /* [6997] */
    (xdc_Char)0x25,  /* [6998] */
    (xdc_Char)0x78,  /* [6999] */
    (xdc_Char)0x2c,  /* [7000] */
    (xdc_Char)0x20,  /* [7001] */
    (xdc_Char)0x66,  /* [7002] */
    (xdc_Char)0x75,  /* [7003] */
    (xdc_Char)0x6e,  /* [7004] */
    (xdc_Char)0x63,  /* [7005] */
    (xdc_Char)0x3a,  /* [7006] */
    (xdc_Char)0x20,  /* [7007] */
    (xdc_Char)0x30,  /* [7008] */
    (xdc_Char)0x78,  /* [7009] */
    (xdc_Char)0x25,  /* [7010] */
    (xdc_Char)0x78,  /* [7011] */
    (xdc_Char)0x2c,  /* [7012] */
    (xdc_Char)0x20,  /* [7013] */
    (xdc_Char)0x74,  /* [7014] */
    (xdc_Char)0x69,  /* [7015] */
    (xdc_Char)0x6d,  /* [7016] */
    (xdc_Char)0x65,  /* [7017] */
    (xdc_Char)0x6f,  /* [7018] */
    (xdc_Char)0x75,  /* [7019] */
    (xdc_Char)0x74,  /* [7020] */
    (xdc_Char)0x3a,  /* [7021] */
    (xdc_Char)0x20,  /* [7022] */
    (xdc_Char)0x25,  /* [7023] */
    (xdc_Char)0x64,  /* [7024] */
    (xdc_Char)0x0,  /* [7025] */
    (xdc_Char)0x4c,  /* [7026] */
    (xdc_Char)0x44,  /* [7027] */
    (xdc_Char)0x5f,  /* [7028] */
    (xdc_Char)0x72,  /* [7029] */
    (xdc_Char)0x65,  /* [7030] */
    (xdc_Char)0x61,  /* [7031] */
    (xdc_Char)0x64,  /* [7032] */
    (xdc_Char)0x79,  /* [7033] */
    (xdc_Char)0x3a,  /* [7034] */
    (xdc_Char)0x20,  /* [7035] */
    (xdc_Char)0x74,  /* [7036] */
    (xdc_Char)0x73,  /* [7037] */
    (xdc_Char)0x6b,  /* [7038] */
    (xdc_Char)0x3a,  /* [7039] */
    (xdc_Char)0x20,  /* [7040] */
    (xdc_Char)0x30,  /* [7041] */
    (xdc_Char)0x78,  /* [7042] */
    (xdc_Char)0x25,  /* [7043] */
    (xdc_Char)0x78,  /* [7044] */
    (xdc_Char)0x2c,  /* [7045] */
    (xdc_Char)0x20,  /* [7046] */
    (xdc_Char)0x66,  /* [7047] */
    (xdc_Char)0x75,  /* [7048] */
    (xdc_Char)0x6e,  /* [7049] */
    (xdc_Char)0x63,  /* [7050] */
    (xdc_Char)0x3a,  /* [7051] */
    (xdc_Char)0x20,  /* [7052] */
    (xdc_Char)0x30,  /* [7053] */
    (xdc_Char)0x78,  /* [7054] */
    (xdc_Char)0x25,  /* [7055] */
    (xdc_Char)0x78,  /* [7056] */
    (xdc_Char)0x2c,  /* [7057] */
    (xdc_Char)0x20,  /* [7058] */
    (xdc_Char)0x70,  /* [7059] */
    (xdc_Char)0x72,  /* [7060] */
    (xdc_Char)0x69,  /* [7061] */
    (xdc_Char)0x3a,  /* [7062] */
    (xdc_Char)0x20,  /* [7063] */
    (xdc_Char)0x25,  /* [7064] */
    (xdc_Char)0x64,  /* [7065] */
    (xdc_Char)0x0,  /* [7066] */
    (xdc_Char)0x4c,  /* [7067] */
    (xdc_Char)0x44,  /* [7068] */
    (xdc_Char)0x5f,  /* [7069] */
    (xdc_Char)0x62,  /* [7070] */
    (xdc_Char)0x6c,  /* [7071] */
    (xdc_Char)0x6f,  /* [7072] */
    (xdc_Char)0x63,  /* [7073] */
    (xdc_Char)0x6b,  /* [7074] */
    (xdc_Char)0x3a,  /* [7075] */
    (xdc_Char)0x20,  /* [7076] */
    (xdc_Char)0x74,  /* [7077] */
    (xdc_Char)0x73,  /* [7078] */
    (xdc_Char)0x6b,  /* [7079] */
    (xdc_Char)0x3a,  /* [7080] */
    (xdc_Char)0x20,  /* [7081] */
    (xdc_Char)0x30,  /* [7082] */
    (xdc_Char)0x78,  /* [7083] */
    (xdc_Char)0x25,  /* [7084] */
    (xdc_Char)0x78,  /* [7085] */
    (xdc_Char)0x2c,  /* [7086] */
    (xdc_Char)0x20,  /* [7087] */
    (xdc_Char)0x66,  /* [7088] */
    (xdc_Char)0x75,  /* [7089] */
    (xdc_Char)0x6e,  /* [7090] */
    (xdc_Char)0x63,  /* [7091] */
    (xdc_Char)0x3a,  /* [7092] */
    (xdc_Char)0x20,  /* [7093] */
    (xdc_Char)0x30,  /* [7094] */
    (xdc_Char)0x78,  /* [7095] */
    (xdc_Char)0x25,  /* [7096] */
    (xdc_Char)0x78,  /* [7097] */
    (xdc_Char)0x0,  /* [7098] */
    (xdc_Char)0x4c,  /* [7099] */
    (xdc_Char)0x4d,  /* [7100] */
    (xdc_Char)0x5f,  /* [7101] */
    (xdc_Char)0x79,  /* [7102] */
    (xdc_Char)0x69,  /* [7103] */
    (xdc_Char)0x65,  /* [7104] */
    (xdc_Char)0x6c,  /* [7105] */
    (xdc_Char)0x64,  /* [7106] */
    (xdc_Char)0x3a,  /* [7107] */
    (xdc_Char)0x20,  /* [7108] */
    (xdc_Char)0x74,  /* [7109] */
    (xdc_Char)0x73,  /* [7110] */
    (xdc_Char)0x6b,  /* [7111] */
    (xdc_Char)0x3a,  /* [7112] */
    (xdc_Char)0x20,  /* [7113] */
    (xdc_Char)0x30,  /* [7114] */
    (xdc_Char)0x78,  /* [7115] */
    (xdc_Char)0x25,  /* [7116] */
    (xdc_Char)0x78,  /* [7117] */
    (xdc_Char)0x2c,  /* [7118] */
    (xdc_Char)0x20,  /* [7119] */
    (xdc_Char)0x66,  /* [7120] */
    (xdc_Char)0x75,  /* [7121] */
    (xdc_Char)0x6e,  /* [7122] */
    (xdc_Char)0x63,  /* [7123] */
    (xdc_Char)0x3a,  /* [7124] */
    (xdc_Char)0x20,  /* [7125] */
    (xdc_Char)0x30,  /* [7126] */
    (xdc_Char)0x78,  /* [7127] */
    (xdc_Char)0x25,  /* [7128] */
    (xdc_Char)0x78,  /* [7129] */
    (xdc_Char)0x2c,  /* [7130] */
    (xdc_Char)0x20,  /* [7131] */
    (xdc_Char)0x63,  /* [7132] */
    (xdc_Char)0x75,  /* [7133] */
    (xdc_Char)0x72,  /* [7134] */
    (xdc_Char)0x72,  /* [7135] */
    (xdc_Char)0x54,  /* [7136] */
    (xdc_Char)0x68,  /* [7137] */
    (xdc_Char)0x72,  /* [7138] */
    (xdc_Char)0x65,  /* [7139] */
    (xdc_Char)0x61,  /* [7140] */
    (xdc_Char)0x64,  /* [7141] */
    (xdc_Char)0x3a,  /* [7142] */
    (xdc_Char)0x20,  /* [7143] */
    (xdc_Char)0x25,  /* [7144] */
    (xdc_Char)0x64,  /* [7145] */
    (xdc_Char)0x0,  /* [7146] */
    (xdc_Char)0x4c,  /* [7147] */
    (xdc_Char)0x4d,  /* [7148] */
    (xdc_Char)0x5f,  /* [7149] */
    (xdc_Char)0x73,  /* [7150] */
    (xdc_Char)0x65,  /* [7151] */
    (xdc_Char)0x74,  /* [7152] */
    (xdc_Char)0x50,  /* [7153] */
    (xdc_Char)0x72,  /* [7154] */
    (xdc_Char)0x69,  /* [7155] */
    (xdc_Char)0x3a,  /* [7156] */
    (xdc_Char)0x20,  /* [7157] */
    (xdc_Char)0x74,  /* [7158] */
    (xdc_Char)0x73,  /* [7159] */
    (xdc_Char)0x6b,  /* [7160] */
    (xdc_Char)0x3a,  /* [7161] */
    (xdc_Char)0x20,  /* [7162] */
    (xdc_Char)0x30,  /* [7163] */
    (xdc_Char)0x78,  /* [7164] */
    (xdc_Char)0x25,  /* [7165] */
    (xdc_Char)0x78,  /* [7166] */
    (xdc_Char)0x2c,  /* [7167] */
    (xdc_Char)0x20,  /* [7168] */
    (xdc_Char)0x66,  /* [7169] */
    (xdc_Char)0x75,  /* [7170] */
    (xdc_Char)0x6e,  /* [7171] */
    (xdc_Char)0x63,  /* [7172] */
    (xdc_Char)0x3a,  /* [7173] */
    (xdc_Char)0x20,  /* [7174] */
    (xdc_Char)0x30,  /* [7175] */
    (xdc_Char)0x78,  /* [7176] */
    (xdc_Char)0x25,  /* [7177] */
    (xdc_Char)0x78,  /* [7178] */
    (xdc_Char)0x2c,  /* [7179] */
    (xdc_Char)0x20,  /* [7180] */
    (xdc_Char)0x6f,  /* [7181] */
    (xdc_Char)0x6c,  /* [7182] */
    (xdc_Char)0x64,  /* [7183] */
    (xdc_Char)0x50,  /* [7184] */
    (xdc_Char)0x72,  /* [7185] */
    (xdc_Char)0x69,  /* [7186] */
    (xdc_Char)0x3a,  /* [7187] */
    (xdc_Char)0x20,  /* [7188] */
    (xdc_Char)0x25,  /* [7189] */
    (xdc_Char)0x64,  /* [7190] */
    (xdc_Char)0x2c,  /* [7191] */
    (xdc_Char)0x20,  /* [7192] */
    (xdc_Char)0x6e,  /* [7193] */
    (xdc_Char)0x65,  /* [7194] */
    (xdc_Char)0x77,  /* [7195] */
    (xdc_Char)0x50,  /* [7196] */
    (xdc_Char)0x72,  /* [7197] */
    (xdc_Char)0x69,  /* [7198] */
    (xdc_Char)0x20,  /* [7199] */
    (xdc_Char)0x25,  /* [7200] */
    (xdc_Char)0x64,  /* [7201] */
    (xdc_Char)0x0,  /* [7202] */
    (xdc_Char)0x4c,  /* [7203] */
    (xdc_Char)0x44,  /* [7204] */
    (xdc_Char)0x5f,  /* [7205] */
    (xdc_Char)0x65,  /* [7206] */
    (xdc_Char)0x78,  /* [7207] */
    (xdc_Char)0x69,  /* [7208] */
    (xdc_Char)0x74,  /* [7209] */
    (xdc_Char)0x3a,  /* [7210] */
    (xdc_Char)0x20,  /* [7211] */
    (xdc_Char)0x74,  /* [7212] */
    (xdc_Char)0x73,  /* [7213] */
    (xdc_Char)0x6b,  /* [7214] */
    (xdc_Char)0x3a,  /* [7215] */
    (xdc_Char)0x20,  /* [7216] */
    (xdc_Char)0x30,  /* [7217] */
    (xdc_Char)0x78,  /* [7218] */
    (xdc_Char)0x25,  /* [7219] */
    (xdc_Char)0x78,  /* [7220] */
    (xdc_Char)0x2c,  /* [7221] */
    (xdc_Char)0x20,  /* [7222] */
    (xdc_Char)0x66,  /* [7223] */
    (xdc_Char)0x75,  /* [7224] */
    (xdc_Char)0x6e,  /* [7225] */
    (xdc_Char)0x63,  /* [7226] */
    (xdc_Char)0x3a,  /* [7227] */
    (xdc_Char)0x20,  /* [7228] */
    (xdc_Char)0x30,  /* [7229] */
    (xdc_Char)0x78,  /* [7230] */
    (xdc_Char)0x25,  /* [7231] */
    (xdc_Char)0x78,  /* [7232] */
    (xdc_Char)0x0,  /* [7233] */
    (xdc_Char)0x4c,  /* [7234] */
    (xdc_Char)0x4d,  /* [7235] */
    (xdc_Char)0x5f,  /* [7236] */
    (xdc_Char)0x73,  /* [7237] */
    (xdc_Char)0x65,  /* [7238] */
    (xdc_Char)0x74,  /* [7239] */
    (xdc_Char)0x41,  /* [7240] */
    (xdc_Char)0x66,  /* [7241] */
    (xdc_Char)0x66,  /* [7242] */
    (xdc_Char)0x69,  /* [7243] */
    (xdc_Char)0x6e,  /* [7244] */
    (xdc_Char)0x69,  /* [7245] */
    (xdc_Char)0x74,  /* [7246] */
    (xdc_Char)0x79,  /* [7247] */
    (xdc_Char)0x3a,  /* [7248] */
    (xdc_Char)0x20,  /* [7249] */
    (xdc_Char)0x74,  /* [7250] */
    (xdc_Char)0x73,  /* [7251] */
    (xdc_Char)0x6b,  /* [7252] */
    (xdc_Char)0x3a,  /* [7253] */
    (xdc_Char)0x20,  /* [7254] */
    (xdc_Char)0x30,  /* [7255] */
    (xdc_Char)0x78,  /* [7256] */
    (xdc_Char)0x25,  /* [7257] */
    (xdc_Char)0x78,  /* [7258] */
    (xdc_Char)0x2c,  /* [7259] */
    (xdc_Char)0x20,  /* [7260] */
    (xdc_Char)0x66,  /* [7261] */
    (xdc_Char)0x75,  /* [7262] */
    (xdc_Char)0x6e,  /* [7263] */
    (xdc_Char)0x63,  /* [7264] */
    (xdc_Char)0x3a,  /* [7265] */
    (xdc_Char)0x20,  /* [7266] */
    (xdc_Char)0x30,  /* [7267] */
    (xdc_Char)0x78,  /* [7268] */
    (xdc_Char)0x25,  /* [7269] */
    (xdc_Char)0x78,  /* [7270] */
    (xdc_Char)0x2c,  /* [7271] */
    (xdc_Char)0x20,  /* [7272] */
    (xdc_Char)0x6f,  /* [7273] */
    (xdc_Char)0x6c,  /* [7274] */
    (xdc_Char)0x64,  /* [7275] */
    (xdc_Char)0x43,  /* [7276] */
    (xdc_Char)0x6f,  /* [7277] */
    (xdc_Char)0x72,  /* [7278] */
    (xdc_Char)0x65,  /* [7279] */
    (xdc_Char)0x3a,  /* [7280] */
    (xdc_Char)0x20,  /* [7281] */
    (xdc_Char)0x25,  /* [7282] */
    (xdc_Char)0x64,  /* [7283] */
    (xdc_Char)0x2c,  /* [7284] */
    (xdc_Char)0x20,  /* [7285] */
    (xdc_Char)0x6f,  /* [7286] */
    (xdc_Char)0x6c,  /* [7287] */
    (xdc_Char)0x64,  /* [7288] */
    (xdc_Char)0x41,  /* [7289] */
    (xdc_Char)0x66,  /* [7290] */
    (xdc_Char)0x66,  /* [7291] */
    (xdc_Char)0x69,  /* [7292] */
    (xdc_Char)0x6e,  /* [7293] */
    (xdc_Char)0x69,  /* [7294] */
    (xdc_Char)0x74,  /* [7295] */
    (xdc_Char)0x79,  /* [7296] */
    (xdc_Char)0x20,  /* [7297] */
    (xdc_Char)0x25,  /* [7298] */
    (xdc_Char)0x64,  /* [7299] */
    (xdc_Char)0x2c,  /* [7300] */
    (xdc_Char)0x20,  /* [7301] */
    (xdc_Char)0x6e,  /* [7302] */
    (xdc_Char)0x65,  /* [7303] */
    (xdc_Char)0x77,  /* [7304] */
    (xdc_Char)0x41,  /* [7305] */
    (xdc_Char)0x66,  /* [7306] */
    (xdc_Char)0x66,  /* [7307] */
    (xdc_Char)0x69,  /* [7308] */
    (xdc_Char)0x6e,  /* [7309] */
    (xdc_Char)0x69,  /* [7310] */
    (xdc_Char)0x74,  /* [7311] */
    (xdc_Char)0x79,  /* [7312] */
    (xdc_Char)0x20,  /* [7313] */
    (xdc_Char)0x25,  /* [7314] */
    (xdc_Char)0x64,  /* [7315] */
    (xdc_Char)0x0,  /* [7316] */
    (xdc_Char)0x4c,  /* [7317] */
    (xdc_Char)0x44,  /* [7318] */
    (xdc_Char)0x5f,  /* [7319] */
    (xdc_Char)0x73,  /* [7320] */
    (xdc_Char)0x63,  /* [7321] */
    (xdc_Char)0x68,  /* [7322] */
    (xdc_Char)0x65,  /* [7323] */
    (xdc_Char)0x64,  /* [7324] */
    (xdc_Char)0x75,  /* [7325] */
    (xdc_Char)0x6c,  /* [7326] */
    (xdc_Char)0x65,  /* [7327] */
    (xdc_Char)0x3a,  /* [7328] */
    (xdc_Char)0x20,  /* [7329] */
    (xdc_Char)0x63,  /* [7330] */
    (xdc_Char)0x6f,  /* [7331] */
    (xdc_Char)0x72,  /* [7332] */
    (xdc_Char)0x65,  /* [7333] */
    (xdc_Char)0x49,  /* [7334] */
    (xdc_Char)0x64,  /* [7335] */
    (xdc_Char)0x3a,  /* [7336] */
    (xdc_Char)0x20,  /* [7337] */
    (xdc_Char)0x25,  /* [7338] */
    (xdc_Char)0x64,  /* [7339] */
    (xdc_Char)0x2c,  /* [7340] */
    (xdc_Char)0x20,  /* [7341] */
    (xdc_Char)0x77,  /* [7342] */
    (xdc_Char)0x6f,  /* [7343] */
    (xdc_Char)0x72,  /* [7344] */
    (xdc_Char)0x6b,  /* [7345] */
    (xdc_Char)0x46,  /* [7346] */
    (xdc_Char)0x6c,  /* [7347] */
    (xdc_Char)0x61,  /* [7348] */
    (xdc_Char)0x67,  /* [7349] */
    (xdc_Char)0x3a,  /* [7350] */
    (xdc_Char)0x20,  /* [7351] */
    (xdc_Char)0x25,  /* [7352] */
    (xdc_Char)0x64,  /* [7353] */
    (xdc_Char)0x2c,  /* [7354] */
    (xdc_Char)0x20,  /* [7355] */
    (xdc_Char)0x63,  /* [7356] */
    (xdc_Char)0x75,  /* [7357] */
    (xdc_Char)0x72,  /* [7358] */
    (xdc_Char)0x53,  /* [7359] */
    (xdc_Char)0x65,  /* [7360] */
    (xdc_Char)0x74,  /* [7361] */
    (xdc_Char)0x4c,  /* [7362] */
    (xdc_Char)0x6f,  /* [7363] */
    (xdc_Char)0x63,  /* [7364] */
    (xdc_Char)0x61,  /* [7365] */
    (xdc_Char)0x6c,  /* [7366] */
    (xdc_Char)0x3a,  /* [7367] */
    (xdc_Char)0x20,  /* [7368] */
    (xdc_Char)0x25,  /* [7369] */
    (xdc_Char)0x64,  /* [7370] */
    (xdc_Char)0x2c,  /* [7371] */
    (xdc_Char)0x20,  /* [7372] */
    (xdc_Char)0x63,  /* [7373] */
    (xdc_Char)0x75,  /* [7374] */
    (xdc_Char)0x72,  /* [7375] */
    (xdc_Char)0x53,  /* [7376] */
    (xdc_Char)0x65,  /* [7377] */
    (xdc_Char)0x74,  /* [7378] */
    (xdc_Char)0x58,  /* [7379] */
    (xdc_Char)0x3a,  /* [7380] */
    (xdc_Char)0x20,  /* [7381] */
    (xdc_Char)0x25,  /* [7382] */
    (xdc_Char)0x64,  /* [7383] */
    (xdc_Char)0x2c,  /* [7384] */
    (xdc_Char)0x20,  /* [7385] */
    (xdc_Char)0x63,  /* [7386] */
    (xdc_Char)0x75,  /* [7387] */
    (xdc_Char)0x72,  /* [7388] */
    (xdc_Char)0x4d,  /* [7389] */
    (xdc_Char)0x61,  /* [7390] */
    (xdc_Char)0x73,  /* [7391] */
    (xdc_Char)0x6b,  /* [7392] */
    (xdc_Char)0x4c,  /* [7393] */
    (xdc_Char)0x6f,  /* [7394] */
    (xdc_Char)0x63,  /* [7395] */
    (xdc_Char)0x61,  /* [7396] */
    (xdc_Char)0x6c,  /* [7397] */
    (xdc_Char)0x3a,  /* [7398] */
    (xdc_Char)0x20,  /* [7399] */
    (xdc_Char)0x25,  /* [7400] */
    (xdc_Char)0x64,  /* [7401] */
    (xdc_Char)0x0,  /* [7402] */
    (xdc_Char)0x4c,  /* [7403] */
    (xdc_Char)0x44,  /* [7404] */
    (xdc_Char)0x5f,  /* [7405] */
    (xdc_Char)0x6e,  /* [7406] */
    (xdc_Char)0x6f,  /* [7407] */
    (xdc_Char)0x57,  /* [7408] */
    (xdc_Char)0x6f,  /* [7409] */
    (xdc_Char)0x72,  /* [7410] */
    (xdc_Char)0x6b,  /* [7411] */
    (xdc_Char)0x3a,  /* [7412] */
    (xdc_Char)0x20,  /* [7413] */
    (xdc_Char)0x63,  /* [7414] */
    (xdc_Char)0x6f,  /* [7415] */
    (xdc_Char)0x72,  /* [7416] */
    (xdc_Char)0x65,  /* [7417] */
    (xdc_Char)0x49,  /* [7418] */
    (xdc_Char)0x64,  /* [7419] */
    (xdc_Char)0x3a,  /* [7420] */
    (xdc_Char)0x20,  /* [7421] */
    (xdc_Char)0x25,  /* [7422] */
    (xdc_Char)0x64,  /* [7423] */
    (xdc_Char)0x2c,  /* [7424] */
    (xdc_Char)0x20,  /* [7425] */
    (xdc_Char)0x63,  /* [7426] */
    (xdc_Char)0x75,  /* [7427] */
    (xdc_Char)0x72,  /* [7428] */
    (xdc_Char)0x53,  /* [7429] */
    (xdc_Char)0x65,  /* [7430] */
    (xdc_Char)0x74,  /* [7431] */
    (xdc_Char)0x4c,  /* [7432] */
    (xdc_Char)0x6f,  /* [7433] */
    (xdc_Char)0x63,  /* [7434] */
    (xdc_Char)0x61,  /* [7435] */
    (xdc_Char)0x6c,  /* [7436] */
    (xdc_Char)0x3a,  /* [7437] */
    (xdc_Char)0x20,  /* [7438] */
    (xdc_Char)0x25,  /* [7439] */
    (xdc_Char)0x64,  /* [7440] */
    (xdc_Char)0x2c,  /* [7441] */
    (xdc_Char)0x20,  /* [7442] */
    (xdc_Char)0x63,  /* [7443] */
    (xdc_Char)0x75,  /* [7444] */
    (xdc_Char)0x72,  /* [7445] */
    (xdc_Char)0x53,  /* [7446] */
    (xdc_Char)0x65,  /* [7447] */
    (xdc_Char)0x74,  /* [7448] */
    (xdc_Char)0x58,  /* [7449] */
    (xdc_Char)0x3a,  /* [7450] */
    (xdc_Char)0x20,  /* [7451] */
    (xdc_Char)0x25,  /* [7452] */
    (xdc_Char)0x64,  /* [7453] */
    (xdc_Char)0x2c,  /* [7454] */
    (xdc_Char)0x20,  /* [7455] */
    (xdc_Char)0x63,  /* [7456] */
    (xdc_Char)0x75,  /* [7457] */
    (xdc_Char)0x72,  /* [7458] */
    (xdc_Char)0x4d,  /* [7459] */
    (xdc_Char)0x61,  /* [7460] */
    (xdc_Char)0x73,  /* [7461] */
    (xdc_Char)0x6b,  /* [7462] */
    (xdc_Char)0x4c,  /* [7463] */
    (xdc_Char)0x6f,  /* [7464] */
    (xdc_Char)0x63,  /* [7465] */
    (xdc_Char)0x61,  /* [7466] */
    (xdc_Char)0x6c,  /* [7467] */
    (xdc_Char)0x3a,  /* [7468] */
    (xdc_Char)0x20,  /* [7469] */
    (xdc_Char)0x25,  /* [7470] */
    (xdc_Char)0x64,  /* [7471] */
    (xdc_Char)0x0,  /* [7472] */
    (xdc_Char)0x4c,  /* [7473] */
    (xdc_Char)0x4d,  /* [7474] */
    (xdc_Char)0x5f,  /* [7475] */
    (xdc_Char)0x62,  /* [7476] */
    (xdc_Char)0x65,  /* [7477] */
    (xdc_Char)0x67,  /* [7478] */
    (xdc_Char)0x69,  /* [7479] */
    (xdc_Char)0x6e,  /* [7480] */
    (xdc_Char)0x3a,  /* [7481] */
    (xdc_Char)0x20,  /* [7482] */
    (xdc_Char)0x68,  /* [7483] */
    (xdc_Char)0x77,  /* [7484] */
    (xdc_Char)0x69,  /* [7485] */
    (xdc_Char)0x3a,  /* [7486] */
    (xdc_Char)0x20,  /* [7487] */
    (xdc_Char)0x30,  /* [7488] */
    (xdc_Char)0x78,  /* [7489] */
    (xdc_Char)0x25,  /* [7490] */
    (xdc_Char)0x78,  /* [7491] */
    (xdc_Char)0x2c,  /* [7492] */
    (xdc_Char)0x20,  /* [7493] */
    (xdc_Char)0x66,  /* [7494] */
    (xdc_Char)0x75,  /* [7495] */
    (xdc_Char)0x6e,  /* [7496] */
    (xdc_Char)0x63,  /* [7497] */
    (xdc_Char)0x3a,  /* [7498] */
    (xdc_Char)0x20,  /* [7499] */
    (xdc_Char)0x30,  /* [7500] */
    (xdc_Char)0x78,  /* [7501] */
    (xdc_Char)0x25,  /* [7502] */
    (xdc_Char)0x78,  /* [7503] */
    (xdc_Char)0x2c,  /* [7504] */
    (xdc_Char)0x20,  /* [7505] */
    (xdc_Char)0x70,  /* [7506] */
    (xdc_Char)0x72,  /* [7507] */
    (xdc_Char)0x65,  /* [7508] */
    (xdc_Char)0x54,  /* [7509] */
    (xdc_Char)0x68,  /* [7510] */
    (xdc_Char)0x72,  /* [7511] */
    (xdc_Char)0x65,  /* [7512] */
    (xdc_Char)0x61,  /* [7513] */
    (xdc_Char)0x64,  /* [7514] */
    (xdc_Char)0x3a,  /* [7515] */
    (xdc_Char)0x20,  /* [7516] */
    (xdc_Char)0x25,  /* [7517] */
    (xdc_Char)0x64,  /* [7518] */
    (xdc_Char)0x2c,  /* [7519] */
    (xdc_Char)0x20,  /* [7520] */
    (xdc_Char)0x69,  /* [7521] */
    (xdc_Char)0x6e,  /* [7522] */
    (xdc_Char)0x74,  /* [7523] */
    (xdc_Char)0x4e,  /* [7524] */
    (xdc_Char)0x75,  /* [7525] */
    (xdc_Char)0x6d,  /* [7526] */
    (xdc_Char)0x3a,  /* [7527] */
    (xdc_Char)0x20,  /* [7528] */
    (xdc_Char)0x25,  /* [7529] */
    (xdc_Char)0x64,  /* [7530] */
    (xdc_Char)0x2c,  /* [7531] */
    (xdc_Char)0x20,  /* [7532] */
    (xdc_Char)0x69,  /* [7533] */
    (xdc_Char)0x72,  /* [7534] */
    (xdc_Char)0x70,  /* [7535] */
    (xdc_Char)0x3a,  /* [7536] */
    (xdc_Char)0x20,  /* [7537] */
    (xdc_Char)0x30,  /* [7538] */
    (xdc_Char)0x78,  /* [7539] */
    (xdc_Char)0x25,  /* [7540] */
    (xdc_Char)0x78,  /* [7541] */
    (xdc_Char)0x0,  /* [7542] */
    (xdc_Char)0x4c,  /* [7543] */
    (xdc_Char)0x44,  /* [7544] */
    (xdc_Char)0x5f,  /* [7545] */
    (xdc_Char)0x65,  /* [7546] */
    (xdc_Char)0x6e,  /* [7547] */
    (xdc_Char)0x64,  /* [7548] */
    (xdc_Char)0x3a,  /* [7549] */
    (xdc_Char)0x20,  /* [7550] */
    (xdc_Char)0x68,  /* [7551] */
    (xdc_Char)0x77,  /* [7552] */
    (xdc_Char)0x69,  /* [7553] */
    (xdc_Char)0x3a,  /* [7554] */
    (xdc_Char)0x20,  /* [7555] */
    (xdc_Char)0x30,  /* [7556] */
    (xdc_Char)0x78,  /* [7557] */
    (xdc_Char)0x25,  /* [7558] */
    (xdc_Char)0x78,  /* [7559] */
    (xdc_Char)0x0,  /* [7560] */
    (xdc_Char)0x4c,  /* [7561] */
    (xdc_Char)0x6f,  /* [7562] */
    (xdc_Char)0x67,  /* [7563] */
    (xdc_Char)0x67,  /* [7564] */
    (xdc_Char)0x65,  /* [7565] */
    (xdc_Char)0x72,  /* [7566] */
    (xdc_Char)0x53,  /* [7567] */
    (xdc_Char)0x74,  /* [7568] */
    (xdc_Char)0x6f,  /* [7569] */
    (xdc_Char)0x70,  /* [7570] */
    (xdc_Char)0x4d,  /* [7571] */
    (xdc_Char)0x6f,  /* [7572] */
    (xdc_Char)0x64,  /* [7573] */
    (xdc_Char)0x65,  /* [7574] */
    (xdc_Char)0x20,  /* [7575] */
    (xdc_Char)0x54,  /* [7576] */
    (xdc_Char)0x65,  /* [7577] */
    (xdc_Char)0x73,  /* [7578] */
    (xdc_Char)0x74,  /* [7579] */
    (xdc_Char)0x0,  /* [7580] */
    (xdc_Char)0x4c,  /* [7581] */
    (xdc_Char)0x53,  /* [7582] */
    (xdc_Char)0x5f,  /* [7583] */
    (xdc_Char)0x63,  /* [7584] */
    (xdc_Char)0x70,  /* [7585] */
    (xdc_Char)0x75,  /* [7586] */
    (xdc_Char)0x4c,  /* [7587] */
    (xdc_Char)0x6f,  /* [7588] */
    (xdc_Char)0x61,  /* [7589] */
    (xdc_Char)0x64,  /* [7590] */
    (xdc_Char)0x3a,  /* [7591] */
    (xdc_Char)0x20,  /* [7592] */
    (xdc_Char)0x25,  /* [7593] */
    (xdc_Char)0x64,  /* [7594] */
    (xdc_Char)0x25,  /* [7595] */
    (xdc_Char)0x25,  /* [7596] */
    (xdc_Char)0x0,  /* [7597] */
    (xdc_Char)0x4c,  /* [7598] */
    (xdc_Char)0x53,  /* [7599] */
    (xdc_Char)0x5f,  /* [7600] */
    (xdc_Char)0x68,  /* [7601] */
    (xdc_Char)0x77,  /* [7602] */
    (xdc_Char)0x69,  /* [7603] */
    (xdc_Char)0x4c,  /* [7604] */
    (xdc_Char)0x6f,  /* [7605] */
    (xdc_Char)0x61,  /* [7606] */
    (xdc_Char)0x64,  /* [7607] */
    (xdc_Char)0x3a,  /* [7608] */
    (xdc_Char)0x20,  /* [7609] */
    (xdc_Char)0x25,  /* [7610] */
    (xdc_Char)0x64,  /* [7611] */
    (xdc_Char)0x2c,  /* [7612] */
    (xdc_Char)0x25,  /* [7613] */
    (xdc_Char)0x64,  /* [7614] */
    (xdc_Char)0x0,  /* [7615] */
    (xdc_Char)0x4c,  /* [7616] */
    (xdc_Char)0x53,  /* [7617] */
    (xdc_Char)0x5f,  /* [7618] */
    (xdc_Char)0x73,  /* [7619] */
    (xdc_Char)0x77,  /* [7620] */
    (xdc_Char)0x69,  /* [7621] */
    (xdc_Char)0x4c,  /* [7622] */
    (xdc_Char)0x6f,  /* [7623] */
    (xdc_Char)0x61,  /* [7624] */
    (xdc_Char)0x64,  /* [7625] */
    (xdc_Char)0x3a,  /* [7626] */
    (xdc_Char)0x20,  /* [7627] */
    (xdc_Char)0x25,  /* [7628] */
    (xdc_Char)0x64,  /* [7629] */
    (xdc_Char)0x2c,  /* [7630] */
    (xdc_Char)0x25,  /* [7631] */
    (xdc_Char)0x64,  /* [7632] */
    (xdc_Char)0x0,  /* [7633] */
    (xdc_Char)0x4c,  /* [7634] */
    (xdc_Char)0x53,  /* [7635] */
    (xdc_Char)0x5f,  /* [7636] */
    (xdc_Char)0x74,  /* [7637] */
    (xdc_Char)0x61,  /* [7638] */
    (xdc_Char)0x73,  /* [7639] */
    (xdc_Char)0x6b,  /* [7640] */
    (xdc_Char)0x4c,  /* [7641] */
    (xdc_Char)0x6f,  /* [7642] */
    (xdc_Char)0x61,  /* [7643] */
    (xdc_Char)0x64,  /* [7644] */
    (xdc_Char)0x3a,  /* [7645] */
    (xdc_Char)0x20,  /* [7646] */
    (xdc_Char)0x30,  /* [7647] */
    (xdc_Char)0x78,  /* [7648] */
    (xdc_Char)0x25,  /* [7649] */
    (xdc_Char)0x78,  /* [7650] */
    (xdc_Char)0x2c,  /* [7651] */
    (xdc_Char)0x25,  /* [7652] */
    (xdc_Char)0x64,  /* [7653] */
    (xdc_Char)0x2c,  /* [7654] */
    (xdc_Char)0x25,  /* [7655] */
    (xdc_Char)0x64,  /* [7656] */
    (xdc_Char)0x2c,  /* [7657] */
    (xdc_Char)0x30,  /* [7658] */
    (xdc_Char)0x78,  /* [7659] */
    (xdc_Char)0x25,  /* [7660] */
    (xdc_Char)0x78,  /* [7661] */
    (xdc_Char)0x0,  /* [7662] */
    (xdc_Char)0x78,  /* [7663] */
    (xdc_Char)0x64,  /* [7664] */
    (xdc_Char)0x63,  /* [7665] */
    (xdc_Char)0x2e,  /* [7666] */
    (xdc_Char)0x0,  /* [7667] */
    (xdc_Char)0x72,  /* [7668] */
    (xdc_Char)0x75,  /* [7669] */
    (xdc_Char)0x6e,  /* [7670] */
    (xdc_Char)0x74,  /* [7671] */
    (xdc_Char)0x69,  /* [7672] */
    (xdc_Char)0x6d,  /* [7673] */
    (xdc_Char)0x65,  /* [7674] */
    (xdc_Char)0x2e,  /* [7675] */
    (xdc_Char)0x0,  /* [7676] */
    (xdc_Char)0x41,  /* [7677] */
    (xdc_Char)0x73,  /* [7678] */
    (xdc_Char)0x73,  /* [7679] */
    (xdc_Char)0x65,  /* [7680] */
    (xdc_Char)0x72,  /* [7681] */
    (xdc_Char)0x74,  /* [7682] */
    (xdc_Char)0x0,  /* [7683] */
    (xdc_Char)0x43,  /* [7684] */
    (xdc_Char)0x6f,  /* [7685] */
    (xdc_Char)0x72,  /* [7686] */
    (xdc_Char)0x65,  /* [7687] */
    (xdc_Char)0x0,  /* [7688] */
    (xdc_Char)0x44,  /* [7689] */
    (xdc_Char)0x65,  /* [7690] */
    (xdc_Char)0x66,  /* [7691] */
    (xdc_Char)0x61,  /* [7692] */
    (xdc_Char)0x75,  /* [7693] */
    (xdc_Char)0x6c,  /* [7694] */
    (xdc_Char)0x74,  /* [7695] */
    (xdc_Char)0x73,  /* [7696] */
    (xdc_Char)0x0,  /* [7697] */
    (xdc_Char)0x44,  /* [7698] */
    (xdc_Char)0x69,  /* [7699] */
    (xdc_Char)0x61,  /* [7700] */
    (xdc_Char)0x67,  /* [7701] */
    (xdc_Char)0x73,  /* [7702] */
    (xdc_Char)0x0,  /* [7703] */
    (xdc_Char)0x45,  /* [7704] */
    (xdc_Char)0x72,  /* [7705] */
    (xdc_Char)0x72,  /* [7706] */
    (xdc_Char)0x6f,  /* [7707] */
    (xdc_Char)0x72,  /* [7708] */
    (xdc_Char)0x0,  /* [7709] */
    (xdc_Char)0x47,  /* [7710] */
    (xdc_Char)0x61,  /* [7711] */
    (xdc_Char)0x74,  /* [7712] */
    (xdc_Char)0x65,  /* [7713] */
    (xdc_Char)0x0,  /* [7714] */
    (xdc_Char)0x4c,  /* [7715] */
    (xdc_Char)0x6f,  /* [7716] */
    (xdc_Char)0x67,  /* [7717] */
    (xdc_Char)0x0,  /* [7718] */
    (xdc_Char)0x4d,  /* [7719] */
    (xdc_Char)0x61,  /* [7720] */
    (xdc_Char)0x69,  /* [7721] */
    (xdc_Char)0x6e,  /* [7722] */
    (xdc_Char)0x0,  /* [7723] */
    (xdc_Char)0x4d,  /* [7724] */
    (xdc_Char)0x65,  /* [7725] */
    (xdc_Char)0x6d,  /* [7726] */
    (xdc_Char)0x6f,  /* [7727] */
    (xdc_Char)0x72,  /* [7728] */
    (xdc_Char)0x79,  /* [7729] */
    (xdc_Char)0x0,  /* [7730] */
    (xdc_Char)0x52,  /* [7731] */
    (xdc_Char)0x65,  /* [7732] */
    (xdc_Char)0x67,  /* [7733] */
    (xdc_Char)0x69,  /* [7734] */
    (xdc_Char)0x73,  /* [7735] */
    (xdc_Char)0x74,  /* [7736] */
    (xdc_Char)0x72,  /* [7737] */
    (xdc_Char)0x79,  /* [7738] */
    (xdc_Char)0x0,  /* [7739] */
    (xdc_Char)0x53,  /* [7740] */
    (xdc_Char)0x74,  /* [7741] */
    (xdc_Char)0x61,  /* [7742] */
    (xdc_Char)0x72,  /* [7743] */
    (xdc_Char)0x74,  /* [7744] */
    (xdc_Char)0x75,  /* [7745] */
    (xdc_Char)0x70,  /* [7746] */
    (xdc_Char)0x0,  /* [7747] */
    (xdc_Char)0x53,  /* [7748] */
    (xdc_Char)0x79,  /* [7749] */
    (xdc_Char)0x73,  /* [7750] */
    (xdc_Char)0x74,  /* [7751] */
    (xdc_Char)0x65,  /* [7752] */
    (xdc_Char)0x6d,  /* [7753] */
    (xdc_Char)0x0,  /* [7754] */
    (xdc_Char)0x53,  /* [7755] */
    (xdc_Char)0x79,  /* [7756] */
    (xdc_Char)0x73,  /* [7757] */
    (xdc_Char)0x53,  /* [7758] */
    (xdc_Char)0x74,  /* [7759] */
    (xdc_Char)0x64,  /* [7760] */
    (xdc_Char)0x0,  /* [7761] */
    (xdc_Char)0x54,  /* [7762] */
    (xdc_Char)0x65,  /* [7763] */
    (xdc_Char)0x78,  /* [7764] */
    (xdc_Char)0x74,  /* [7765] */
    (xdc_Char)0x0,  /* [7766] */
    (xdc_Char)0x54,  /* [7767] */
    (xdc_Char)0x69,  /* [7768] */
    (xdc_Char)0x6d,  /* [7769] */
    (xdc_Char)0x65,  /* [7770] */
    (xdc_Char)0x73,  /* [7771] */
    (xdc_Char)0x74,  /* [7772] */
    (xdc_Char)0x61,  /* [7773] */
    (xdc_Char)0x6d,  /* [7774] */
    (xdc_Char)0x70,  /* [7775] */
    (xdc_Char)0x0,  /* [7776] */
    (xdc_Char)0x54,  /* [7777] */
    (xdc_Char)0x79,  /* [7778] */
    (xdc_Char)0x70,  /* [7779] */
    (xdc_Char)0x65,  /* [7780] */
    (xdc_Char)0x73,  /* [7781] */
    (xdc_Char)0x0,  /* [7782] */
    (xdc_Char)0x74,  /* [7783] */
    (xdc_Char)0x69,  /* [7784] */
    (xdc_Char)0x2e,  /* [7785] */
    (xdc_Char)0x0,  /* [7786] */
    (xdc_Char)0x75,  /* [7787] */
    (xdc_Char)0x69,  /* [7788] */
    (xdc_Char)0x61,  /* [7789] */
    (xdc_Char)0x2e,  /* [7790] */
    (xdc_Char)0x0,  /* [7791] */
    (xdc_Char)0x65,  /* [7792] */
    (xdc_Char)0x76,  /* [7793] */
    (xdc_Char)0x65,  /* [7794] */
    (xdc_Char)0x6e,  /* [7795] */
    (xdc_Char)0x74,  /* [7796] */
    (xdc_Char)0x73,  /* [7797] */
    (xdc_Char)0x2e,  /* [7798] */
    (xdc_Char)0x0,  /* [7799] */
    (xdc_Char)0x44,  /* [7800] */
    (xdc_Char)0x76,  /* [7801] */
    (xdc_Char)0x74,  /* [7802] */
    (xdc_Char)0x54,  /* [7803] */
    (xdc_Char)0x79,  /* [7804] */
    (xdc_Char)0x70,  /* [7805] */
    (xdc_Char)0x65,  /* [7806] */
    (xdc_Char)0x73,  /* [7807] */
    (xdc_Char)0x0,  /* [7808] */
    (xdc_Char)0x55,  /* [7809] */
    (xdc_Char)0x49,  /* [7810] */
    (xdc_Char)0x41,  /* [7811] */
    (xdc_Char)0x45,  /* [7812] */
    (xdc_Char)0x72,  /* [7813] */
    (xdc_Char)0x72,  /* [7814] */
    (xdc_Char)0x0,  /* [7815] */
    (xdc_Char)0x55,  /* [7816] */
    (xdc_Char)0x49,  /* [7817] */
    (xdc_Char)0x41,  /* [7818] */
    (xdc_Char)0x45,  /* [7819] */
    (xdc_Char)0x76,  /* [7820] */
    (xdc_Char)0x74,  /* [7821] */
    (xdc_Char)0x0,  /* [7822] */
    (xdc_Char)0x55,  /* [7823] */
    (xdc_Char)0x49,  /* [7824] */
    (xdc_Char)0x41,  /* [7825] */
    (xdc_Char)0x50,  /* [7826] */
    (xdc_Char)0x72,  /* [7827] */
    (xdc_Char)0x6f,  /* [7828] */
    (xdc_Char)0x66,  /* [7829] */
    (xdc_Char)0x69,  /* [7830] */
    (xdc_Char)0x6c,  /* [7831] */
    (xdc_Char)0x65,  /* [7832] */
    (xdc_Char)0x0,  /* [7833] */
    (xdc_Char)0x45,  /* [7834] */
    (xdc_Char)0x76,  /* [7835] */
    (xdc_Char)0x65,  /* [7836] */
    (xdc_Char)0x6e,  /* [7837] */
    (xdc_Char)0x74,  /* [7838] */
    (xdc_Char)0x48,  /* [7839] */
    (xdc_Char)0x64,  /* [7840] */
    (xdc_Char)0x72,  /* [7841] */
    (xdc_Char)0x0,  /* [7842] */
    (xdc_Char)0x51,  /* [7843] */
    (xdc_Char)0x75,  /* [7844] */
    (xdc_Char)0x65,  /* [7845] */
    (xdc_Char)0x75,  /* [7846] */
    (xdc_Char)0x65,  /* [7847] */
    (xdc_Char)0x44,  /* [7848] */
    (xdc_Char)0x65,  /* [7849] */
    (xdc_Char)0x73,  /* [7850] */
    (xdc_Char)0x63,  /* [7851] */
    (xdc_Char)0x72,  /* [7852] */
    (xdc_Char)0x69,  /* [7853] */
    (xdc_Char)0x70,  /* [7854] */
    (xdc_Char)0x74,  /* [7855] */
    (xdc_Char)0x6f,  /* [7856] */
    (xdc_Char)0x72,  /* [7857] */
    (xdc_Char)0x0,  /* [7858] */
    (xdc_Char)0x55,  /* [7859] */
    (xdc_Char)0x49,  /* [7860] */
    (xdc_Char)0x41,  /* [7861] */
    (xdc_Char)0x4d,  /* [7862] */
    (xdc_Char)0x65,  /* [7863] */
    (xdc_Char)0x74,  /* [7864] */
    (xdc_Char)0x61,  /* [7865] */
    (xdc_Char)0x44,  /* [7866] */
    (xdc_Char)0x61,  /* [7867] */
    (xdc_Char)0x74,  /* [7868] */
    (xdc_Char)0x61,  /* [7869] */
    (xdc_Char)0x0,  /* [7870] */
    (xdc_Char)0x73,  /* [7871] */
    (xdc_Char)0x79,  /* [7872] */
    (xdc_Char)0x73,  /* [7873] */
    (xdc_Char)0x62,  /* [7874] */
    (xdc_Char)0x69,  /* [7875] */
    (xdc_Char)0x6f,  /* [7876] */
    (xdc_Char)0x73,  /* [7877] */
    (xdc_Char)0x2e,  /* [7878] */
    (xdc_Char)0x0,  /* [7879] */
    (xdc_Char)0x6b,  /* [7880] */
    (xdc_Char)0x6e,  /* [7881] */
    (xdc_Char)0x6c,  /* [7882] */
    (xdc_Char)0x2e,  /* [7883] */
    (xdc_Char)0x0,  /* [7884] */
    (xdc_Char)0x43,  /* [7885] */
    (xdc_Char)0x6c,  /* [7886] */
    (xdc_Char)0x6f,  /* [7887] */
    (xdc_Char)0x63,  /* [7888] */
    (xdc_Char)0x6b,  /* [7889] */
    (xdc_Char)0x0,  /* [7890] */
    (xdc_Char)0x49,  /* [7891] */
    (xdc_Char)0x64,  /* [7892] */
    (xdc_Char)0x6c,  /* [7893] */
    (xdc_Char)0x65,  /* [7894] */
    (xdc_Char)0x0,  /* [7895] */
    (xdc_Char)0x49,  /* [7896] */
    (xdc_Char)0x6e,  /* [7897] */
    (xdc_Char)0x74,  /* [7898] */
    (xdc_Char)0x72,  /* [7899] */
    (xdc_Char)0x69,  /* [7900] */
    (xdc_Char)0x6e,  /* [7901] */
    (xdc_Char)0x73,  /* [7902] */
    (xdc_Char)0x69,  /* [7903] */
    (xdc_Char)0x63,  /* [7904] */
    (xdc_Char)0x73,  /* [7905] */
    (xdc_Char)0x0,  /* [7906] */
    (xdc_Char)0x45,  /* [7907] */
    (xdc_Char)0x76,  /* [7908] */
    (xdc_Char)0x65,  /* [7909] */
    (xdc_Char)0x6e,  /* [7910] */
    (xdc_Char)0x74,  /* [7911] */
    (xdc_Char)0x0,  /* [7912] */
    (xdc_Char)0x51,  /* [7913] */
    (xdc_Char)0x75,  /* [7914] */
    (xdc_Char)0x65,  /* [7915] */
    (xdc_Char)0x75,  /* [7916] */
    (xdc_Char)0x65,  /* [7917] */
    (xdc_Char)0x0,  /* [7918] */
    (xdc_Char)0x53,  /* [7919] */
    (xdc_Char)0x65,  /* [7920] */
    (xdc_Char)0x6d,  /* [7921] */
    (xdc_Char)0x61,  /* [7922] */
    (xdc_Char)0x70,  /* [7923] */
    (xdc_Char)0x68,  /* [7924] */
    (xdc_Char)0x6f,  /* [7925] */
    (xdc_Char)0x72,  /* [7926] */
    (xdc_Char)0x65,  /* [7927] */
    (xdc_Char)0x0,  /* [7928] */
    (xdc_Char)0x53,  /* [7929] */
    (xdc_Char)0x77,  /* [7930] */
    (xdc_Char)0x69,  /* [7931] */
    (xdc_Char)0x0,  /* [7932] */
    (xdc_Char)0x54,  /* [7933] */
    (xdc_Char)0x61,  /* [7934] */
    (xdc_Char)0x73,  /* [7935] */
    (xdc_Char)0x6b,  /* [7936] */
    (xdc_Char)0x0,  /* [7937] */
    (xdc_Char)0x68,  /* [7938] */
    (xdc_Char)0x65,  /* [7939] */
    (xdc_Char)0x61,  /* [7940] */
    (xdc_Char)0x70,  /* [7941] */
    (xdc_Char)0x73,  /* [7942] */
    (xdc_Char)0x2e,  /* [7943] */
    (xdc_Char)0x0,  /* [7944] */
    (xdc_Char)0x48,  /* [7945] */
    (xdc_Char)0x65,  /* [7946] */
    (xdc_Char)0x61,  /* [7947] */
    (xdc_Char)0x70,  /* [7948] */
    (xdc_Char)0x4d,  /* [7949] */
    (xdc_Char)0x65,  /* [7950] */
    (xdc_Char)0x6d,  /* [7951] */
    (xdc_Char)0x0,  /* [7952] */
    (xdc_Char)0x48,  /* [7953] */
    (xdc_Char)0x65,  /* [7954] */
    (xdc_Char)0x61,  /* [7955] */
    (xdc_Char)0x70,  /* [7956] */
    (xdc_Char)0x54,  /* [7957] */
    (xdc_Char)0x72,  /* [7958] */
    (xdc_Char)0x61,  /* [7959] */
    (xdc_Char)0x63,  /* [7960] */
    (xdc_Char)0x6b,  /* [7961] */
    (xdc_Char)0x0,  /* [7962] */
    (xdc_Char)0x68,  /* [7963] */
    (xdc_Char)0x61,  /* [7964] */
    (xdc_Char)0x6c,  /* [7965] */
    (xdc_Char)0x2e,  /* [7966] */
    (xdc_Char)0x0,  /* [7967] */
    (xdc_Char)0x48,  /* [7968] */
    (xdc_Char)0x77,  /* [7969] */
    (xdc_Char)0x69,  /* [7970] */
    (xdc_Char)0x0,  /* [7971] */
    (xdc_Char)0x42,  /* [7972] */
    (xdc_Char)0x49,  /* [7973] */
    (xdc_Char)0x4f,  /* [7974] */
    (xdc_Char)0x53,  /* [7975] */
    (xdc_Char)0x0,  /* [7976] */
    (xdc_Char)0x66,  /* [7977] */
    (xdc_Char)0x61,  /* [7978] */
    (xdc_Char)0x6d,  /* [7979] */
    (xdc_Char)0x69,  /* [7980] */
    (xdc_Char)0x6c,  /* [7981] */
    (xdc_Char)0x79,  /* [7982] */
    (xdc_Char)0x2e,  /* [7983] */
    (xdc_Char)0x0,  /* [7984] */
    (xdc_Char)0x61,  /* [7985] */
    (xdc_Char)0x72,  /* [7986] */
    (xdc_Char)0x6d,  /* [7987] */
    (xdc_Char)0x2e,  /* [7988] */
    (xdc_Char)0x0,  /* [7989] */
    (xdc_Char)0x6d,  /* [7990] */
    (xdc_Char)0x73,  /* [7991] */
    (xdc_Char)0x70,  /* [7992] */
    (xdc_Char)0x34,  /* [7993] */
    (xdc_Char)0x33,  /* [7994] */
    (xdc_Char)0x32,  /* [7995] */
    (xdc_Char)0x2e,  /* [7996] */
    (xdc_Char)0x0,  /* [7997] */
    (xdc_Char)0x69,  /* [7998] */
    (xdc_Char)0x6e,  /* [7999] */
    (xdc_Char)0x69,  /* [8000] */
    (xdc_Char)0x74,  /* [8001] */
    (xdc_Char)0x2e,  /* [8002] */
    (xdc_Char)0x0,  /* [8003] */
    (xdc_Char)0x42,  /* [8004] */
    (xdc_Char)0x6f,  /* [8005] */
    (xdc_Char)0x6f,  /* [8006] */
    (xdc_Char)0x74,  /* [8007] */
    (xdc_Char)0x0,  /* [8008] */
    (xdc_Char)0x6d,  /* [8009] */
    (xdc_Char)0x33,  /* [8010] */
    (xdc_Char)0x2e,  /* [8011] */
    (xdc_Char)0x0,  /* [8012] */
    (xdc_Char)0x49,  /* [8013] */
    (xdc_Char)0x6e,  /* [8014] */
    (xdc_Char)0x74,  /* [8015] */
    (xdc_Char)0x72,  /* [8016] */
    (xdc_Char)0x69,  /* [8017] */
    (xdc_Char)0x6e,  /* [8018] */
    (xdc_Char)0x73,  /* [8019] */
    (xdc_Char)0x69,  /* [8020] */
    (xdc_Char)0x63,  /* [8021] */
    (xdc_Char)0x73,  /* [8022] */
    (xdc_Char)0x53,  /* [8023] */
    (xdc_Char)0x75,  /* [8024] */
    (xdc_Char)0x70,  /* [8025] */
    (xdc_Char)0x70,  /* [8026] */
    (xdc_Char)0x6f,  /* [8027] */
    (xdc_Char)0x72,  /* [8028] */
    (xdc_Char)0x74,  /* [8029] */
    (xdc_Char)0x0,  /* [8030] */
    (xdc_Char)0x54,  /* [8031] */
    (xdc_Char)0x61,  /* [8032] */
    (xdc_Char)0x73,  /* [8033] */
    (xdc_Char)0x6b,  /* [8034] */
    (xdc_Char)0x53,  /* [8035] */
    (xdc_Char)0x75,  /* [8036] */
    (xdc_Char)0x70,  /* [8037] */
    (xdc_Char)0x70,  /* [8038] */
    (xdc_Char)0x6f,  /* [8039] */
    (xdc_Char)0x72,  /* [8040] */
    (xdc_Char)0x74,  /* [8041] */
    (xdc_Char)0x0,  /* [8042] */
    (xdc_Char)0x54,  /* [8043] */
    (xdc_Char)0x69,  /* [8044] */
    (xdc_Char)0x6d,  /* [8045] */
    (xdc_Char)0x65,  /* [8046] */
    (xdc_Char)0x72,  /* [8047] */
    (xdc_Char)0x0,  /* [8048] */
    (xdc_Char)0x54,  /* [8049] */
    (xdc_Char)0x69,  /* [8050] */
    (xdc_Char)0x6d,  /* [8051] */
    (xdc_Char)0x65,  /* [8052] */
    (xdc_Char)0x73,  /* [8053] */
    (xdc_Char)0x74,  /* [8054] */
    (xdc_Char)0x61,  /* [8055] */
    (xdc_Char)0x6d,  /* [8056] */
    (xdc_Char)0x70,  /* [8057] */
    (xdc_Char)0x50,  /* [8058] */
    (xdc_Char)0x72,  /* [8059] */
    (xdc_Char)0x6f,  /* [8060] */
    (xdc_Char)0x76,  /* [8061] */
    (xdc_Char)0x69,  /* [8062] */
    (xdc_Char)0x64,  /* [8063] */
    (xdc_Char)0x65,  /* [8064] */
    (xdc_Char)0x72,  /* [8065] */
    (xdc_Char)0x0,  /* [8066] */
    (xdc_Char)0x67,  /* [8067] */
    (xdc_Char)0x61,  /* [8068] */
    (xdc_Char)0x74,  /* [8069] */
    (xdc_Char)0x65,  /* [8070] */
    (xdc_Char)0x73,  /* [8071] */
    (xdc_Char)0x2e,  /* [8072] */
    (xdc_Char)0x0,  /* [8073] */
    (xdc_Char)0x47,  /* [8074] */
    (xdc_Char)0x61,  /* [8075] */
    (xdc_Char)0x74,  /* [8076] */
    (xdc_Char)0x65,  /* [8077] */
    (xdc_Char)0x48,  /* [8078] */
    (xdc_Char)0x77,  /* [8079] */
    (xdc_Char)0x69,  /* [8080] */
    (xdc_Char)0x0,  /* [8081] */
    (xdc_Char)0x47,  /* [8082] */
    (xdc_Char)0x61,  /* [8083] */
    (xdc_Char)0x74,  /* [8084] */
    (xdc_Char)0x65,  /* [8085] */
    (xdc_Char)0x4d,  /* [8086] */
    (xdc_Char)0x75,  /* [8087] */
    (xdc_Char)0x74,  /* [8088] */
    (xdc_Char)0x65,  /* [8089] */
    (xdc_Char)0x78,  /* [8090] */
    (xdc_Char)0x0,  /* [8091] */
    (xdc_Char)0x43,  /* [8092] */
    (xdc_Char)0x6c,  /* [8093] */
    (xdc_Char)0x6f,  /* [8094] */
    (xdc_Char)0x63,  /* [8095] */
    (xdc_Char)0x6b,  /* [8096] */
    (xdc_Char)0x46,  /* [8097] */
    (xdc_Char)0x72,  /* [8098] */
    (xdc_Char)0x65,  /* [8099] */
    (xdc_Char)0x71,  /* [8100] */
    (xdc_Char)0x73,  /* [8101] */
    (xdc_Char)0x0,  /* [8102] */
    (xdc_Char)0x6c,  /* [8103] */
    (xdc_Char)0x6f,  /* [8104] */
    (xdc_Char)0x67,  /* [8105] */
    (xdc_Char)0x67,  /* [8106] */
    (xdc_Char)0x65,  /* [8107] */
    (xdc_Char)0x72,  /* [8108] */
    (xdc_Char)0x73,  /* [8109] */
    (xdc_Char)0x2e,  /* [8110] */
    (xdc_Char)0x0,  /* [8111] */
    (xdc_Char)0x4c,  /* [8112] */
    (xdc_Char)0x6f,  /* [8113] */
    (xdc_Char)0x67,  /* [8114] */
    (xdc_Char)0x67,  /* [8115] */
    (xdc_Char)0x65,  /* [8116] */
    (xdc_Char)0x72,  /* [8117] */
    (xdc_Char)0x53,  /* [8118] */
    (xdc_Char)0x74,  /* [8119] */
    (xdc_Char)0x6f,  /* [8120] */
    (xdc_Char)0x70,  /* [8121] */
    (xdc_Char)0x4d,  /* [8122] */
    (xdc_Char)0x6f,  /* [8123] */
    (xdc_Char)0x64,  /* [8124] */
    (xdc_Char)0x65,  /* [8125] */
    (xdc_Char)0x0,  /* [8126] */
    (xdc_Char)0x75,  /* [8127] */
    (xdc_Char)0x74,  /* [8128] */
    (xdc_Char)0x69,  /* [8129] */
    (xdc_Char)0x6c,  /* [8130] */
    (xdc_Char)0x73,  /* [8131] */
    (xdc_Char)0x2e,  /* [8132] */
    (xdc_Char)0x0,  /* [8133] */
    (xdc_Char)0x4c,  /* [8134] */
    (xdc_Char)0x6f,  /* [8135] */
    (xdc_Char)0x61,  /* [8136] */
    (xdc_Char)0x64,  /* [8137] */
    (xdc_Char)0x0,  /* [8138] */
    (xdc_Char)0x54,  /* [8139] */
    (xdc_Char)0x4d,  /* [8140] */
    (xdc_Char)0x50,  /* [8141] */
    (xdc_Char)0x5f,  /* [8142] */
    (xdc_Char)0x72,  /* [8143] */
    (xdc_Char)0x65,  /* [8144] */
    (xdc_Char)0x61,  /* [8145] */
    (xdc_Char)0x64,  /* [8146] */
    (xdc_Char)0x0,  /* [8147] */
    (xdc_Char)0x70,  /* [8148] */
    (xdc_Char)0x61,  /* [8149] */
    (xdc_Char)0x63,  /* [8150] */
    (xdc_Char)0x65,  /* [8151] */
    (xdc_Char)0x5f,  /* [8152] */
    (xdc_Char)0x53,  /* [8153] */
    (xdc_Char)0x74,  /* [8154] */
    (xdc_Char)0x61,  /* [8155] */
    (xdc_Char)0x72,  /* [8156] */
    (xdc_Char)0x74,  /* [8157] */
    (xdc_Char)0x5f,  /* [8158] */
    (xdc_Char)0x63,  /* [8159] */
    (xdc_Char)0x6c,  /* [8160] */
    (xdc_Char)0x6f,  /* [8161] */
    (xdc_Char)0x63,  /* [8162] */
    (xdc_Char)0x6b,  /* [8163] */
    (xdc_Char)0x0,  /* [8164] */
    (xdc_Char)0x70,  /* [8165] */
    (xdc_Char)0x61,  /* [8166] */
    (xdc_Char)0x63,  /* [8167] */
    (xdc_Char)0x65,  /* [8168] */
    (xdc_Char)0x5f,  /* [8169] */
    (xdc_Char)0x65,  /* [8170] */
    (xdc_Char)0x6e,  /* [8171] */
    (xdc_Char)0x64,  /* [8172] */
    (xdc_Char)0x5f,  /* [8173] */
    (xdc_Char)0x63,  /* [8174] */
    (xdc_Char)0x6c,  /* [8175] */
    (xdc_Char)0x6f,  /* [8176] */
    (xdc_Char)0x63,  /* [8177] */
    (xdc_Char)0x6b,  /* [8178] */
    (xdc_Char)0x0,  /* [8179] */
    (xdc_Char)0x53,  /* [8180] */
    (xdc_Char)0x45,  /* [8181] */
    (xdc_Char)0x4d,  /* [8182] */
    (xdc_Char)0x5f,  /* [8183] */
    (xdc_Char)0x41,  /* [8184] */
    (xdc_Char)0x46,  /* [8185] */
    (xdc_Char)0x45,  /* [8186] */
    (xdc_Char)0x5f,  /* [8187] */
    (xdc_Char)0x52,  /* [8188] */
    (xdc_Char)0x44,  /* [8189] */
    (xdc_Char)0x59,  /* [8190] */
    (xdc_Char)0x5f,  /* [8191] */
    (xdc_Char)0x47,  /* [8192] */
    (xdc_Char)0x4f,  /* [8193] */
    (xdc_Char)0x45,  /* [8194] */
    (xdc_Char)0x53,  /* [8195] */
    (xdc_Char)0x5f,  /* [8196] */
    (xdc_Char)0x4c,  /* [8197] */
    (xdc_Char)0x4f,  /* [8198] */
    (xdc_Char)0x57,  /* [8199] */
    (xdc_Char)0x0,  /* [8200] */
    (xdc_Char)0x53,  /* [8201] */
    (xdc_Char)0x45,  /* [8202] */
    (xdc_Char)0x4d,  /* [8203] */
    (xdc_Char)0x5f,  /* [8204] */
    (xdc_Char)0x55,  /* [8205] */
    (xdc_Char)0x41,  /* [8206] */
    (xdc_Char)0x52,  /* [8207] */
    (xdc_Char)0x54,  /* [8208] */
    (xdc_Char)0x5f,  /* [8209] */
    (xdc_Char)0x44,  /* [8210] */
    (xdc_Char)0x41,  /* [8211] */
    (xdc_Char)0x54,  /* [8212] */
    (xdc_Char)0x41,  /* [8213] */
    (xdc_Char)0x5f,  /* [8214] */
    (xdc_Char)0x54,  /* [8215] */
    (xdc_Char)0x4f,  /* [8216] */
    (xdc_Char)0x5f,  /* [8217] */
    (xdc_Char)0x42,  /* [8218] */
    (xdc_Char)0x45,  /* [8219] */
    (xdc_Char)0x5f,  /* [8220] */
    (xdc_Char)0x53,  /* [8221] */
    (xdc_Char)0x45,  /* [8222] */
    (xdc_Char)0x4e,  /* [8223] */
    (xdc_Char)0x54,  /* [8224] */
    (xdc_Char)0x0,  /* [8225] */
    (xdc_Char)0x53,  /* [8226] */
    (xdc_Char)0x45,  /* [8227] */
    (xdc_Char)0x4d,  /* [8228] */
    (xdc_Char)0x5f,  /* [8229] */
    (xdc_Char)0x41,  /* [8230] */
    (xdc_Char)0x44,  /* [8231] */
    (xdc_Char)0x53,  /* [8232] */
    (xdc_Char)0x5f,  /* [8233] */
    (xdc_Char)0x44,  /* [8234] */
    (xdc_Char)0x52,  /* [8235] */
    (xdc_Char)0x44,  /* [8236] */
    (xdc_Char)0x59,  /* [8237] */
    (xdc_Char)0x5f,  /* [8238] */
    (xdc_Char)0x47,  /* [8239] */
    (xdc_Char)0x4f,  /* [8240] */
    (xdc_Char)0x45,  /* [8241] */
    (xdc_Char)0x53,  /* [8242] */
    (xdc_Char)0x5f,  /* [8243] */
    (xdc_Char)0x4c,  /* [8244] */
    (xdc_Char)0x4f,  /* [8245] */
    (xdc_Char)0x57,  /* [8246] */
    (xdc_Char)0x0,  /* [8247] */
    (xdc_Char)0x53,  /* [8248] */
    (xdc_Char)0x45,  /* [8249] */
    (xdc_Char)0x4d,  /* [8250] */
    (xdc_Char)0x5f,  /* [8251] */
    (xdc_Char)0x41,  /* [8252] */
    (xdc_Char)0x44,  /* [8253] */
    (xdc_Char)0x53,  /* [8254] */
    (xdc_Char)0x5f,  /* [8255] */
    (xdc_Char)0x49,  /* [8256] */
    (xdc_Char)0x4e,  /* [8257] */
    (xdc_Char)0x49,  /* [8258] */
    (xdc_Char)0x54,  /* [8259] */
    (xdc_Char)0x49,  /* [8260] */
    (xdc_Char)0x41,  /* [8261] */
    (xdc_Char)0x4c,  /* [8262] */
    (xdc_Char)0x49,  /* [8263] */
    (xdc_Char)0x5a,  /* [8264] */
    (xdc_Char)0x45,  /* [8265] */
    (xdc_Char)0x0,  /* [8266] */
    (xdc_Char)0x53,  /* [8267] */
    (xdc_Char)0x45,  /* [8268] */
    (xdc_Char)0x4d,  /* [8269] */
    (xdc_Char)0x5f,  /* [8270] */
    (xdc_Char)0x47,  /* [8271] */
    (xdc_Char)0x55,  /* [8272] */
    (xdc_Char)0x49,  /* [8273] */
    (xdc_Char)0x5f,  /* [8274] */
    (xdc_Char)0x49,  /* [8275] */
    (xdc_Char)0x4e,  /* [8276] */
    (xdc_Char)0x49,  /* [8277] */
    (xdc_Char)0x54,  /* [8278] */
    (xdc_Char)0x49,  /* [8279] */
    (xdc_Char)0x41,  /* [8280] */
    (xdc_Char)0x4c,  /* [8281] */
    (xdc_Char)0x49,  /* [8282] */
    (xdc_Char)0x53,  /* [8283] */
    (xdc_Char)0x45,  /* [8284] */
    (xdc_Char)0x0,  /* [8285] */
    (xdc_Char)0x53,  /* [8286] */
    (xdc_Char)0x45,  /* [8287] */
    (xdc_Char)0x4d,  /* [8288] */
    (xdc_Char)0x5f,  /* [8289] */
    (xdc_Char)0x49,  /* [8290] */
    (xdc_Char)0x4e,  /* [8291] */
    (xdc_Char)0x54,  /* [8292] */
    (xdc_Char)0x45,  /* [8293] */
    (xdc_Char)0x52,  /* [8294] */
    (xdc_Char)0x52,  /* [8295] */
    (xdc_Char)0x55,  /* [8296] */
    (xdc_Char)0x50,  /* [8297] */
    (xdc_Char)0x54,  /* [8298] */
    (xdc_Char)0x5f,  /* [8299] */
    (xdc_Char)0x49,  /* [8300] */
    (xdc_Char)0x4e,  /* [8301] */
    (xdc_Char)0x49,  /* [8302] */
    (xdc_Char)0x54,  /* [8303] */
    (xdc_Char)0x0,  /* [8304] */
    (xdc_Char)0x53,  /* [8305] */
    (xdc_Char)0x45,  /* [8306] */
    (xdc_Char)0x4d,  /* [8307] */
    (xdc_Char)0x5f,  /* [8308] */
    (xdc_Char)0x54,  /* [8309] */
    (xdc_Char)0x4d,  /* [8310] */
    (xdc_Char)0x50,  /* [8311] */
    (xdc_Char)0x5f,  /* [8312] */
    (xdc_Char)0x54,  /* [8313] */
    (xdc_Char)0x41,  /* [8314] */
    (xdc_Char)0x53,  /* [8315] */
    (xdc_Char)0x4b,  /* [8316] */
    (xdc_Char)0x0,  /* [8317] */
    (xdc_Char)0x53,  /* [8318] */
    (xdc_Char)0x45,  /* [8319] */
    (xdc_Char)0x4d,  /* [8320] */
    (xdc_Char)0x5f,  /* [8321] */
    (xdc_Char)0x54,  /* [8322] */
    (xdc_Char)0x4d,  /* [8323] */
    (xdc_Char)0x50,  /* [8324] */
    (xdc_Char)0x5f,  /* [8325] */
    (xdc_Char)0x49,  /* [8326] */
    (xdc_Char)0x4e,  /* [8327] */
    (xdc_Char)0x49,  /* [8328] */
    (xdc_Char)0x54,  /* [8329] */
    (xdc_Char)0x49,  /* [8330] */
    (xdc_Char)0x41,  /* [8331] */
    (xdc_Char)0x4c,  /* [8332] */
    (xdc_Char)0x49,  /* [8333] */
    (xdc_Char)0x53,  /* [8334] */
    (xdc_Char)0x45,  /* [8335] */
    (xdc_Char)0x0,  /* [8336] */
    (xdc_Char)0x53,  /* [8337] */
    (xdc_Char)0x45,  /* [8338] */
    (xdc_Char)0x4d,  /* [8339] */
    (xdc_Char)0x5f,  /* [8340] */
    (xdc_Char)0x50,  /* [8341] */
    (xdc_Char)0x41,  /* [8342] */
    (xdc_Char)0x43,  /* [8343] */
    (xdc_Char)0x45,  /* [8344] */
    (xdc_Char)0x5f,  /* [8345] */
    (xdc_Char)0x44,  /* [8346] */
    (xdc_Char)0x45,  /* [8347] */
    (xdc_Char)0x54,  /* [8348] */
    (xdc_Char)0x45,  /* [8349] */
    (xdc_Char)0x43,  /* [8350] */
    (xdc_Char)0x54,  /* [8351] */
    (xdc_Char)0x5f,  /* [8352] */
    (xdc_Char)0x47,  /* [8353] */
    (xdc_Char)0x4f,  /* [8354] */
    (xdc_Char)0x45,  /* [8355] */
    (xdc_Char)0x53,  /* [8356] */
    (xdc_Char)0x5f,  /* [8357] */
    (xdc_Char)0x48,  /* [8358] */
    (xdc_Char)0x49,  /* [8359] */
    (xdc_Char)0x47,  /* [8360] */
    (xdc_Char)0x48,  /* [8361] */
    (xdc_Char)0x0,  /* [8362] */
    (xdc_Char)0x53,  /* [8363] */
    (xdc_Char)0x45,  /* [8364] */
    (xdc_Char)0x4d,  /* [8365] */
    (xdc_Char)0x5f,  /* [8366] */
    (xdc_Char)0x50,  /* [8367] */
    (xdc_Char)0x41,  /* [8368] */
    (xdc_Char)0x43,  /* [8369] */
    (xdc_Char)0x45,  /* [8370] */
    (xdc_Char)0x5f,  /* [8371] */
    (xdc_Char)0x4d,  /* [8372] */
    (xdc_Char)0x41,  /* [8373] */
    (xdc_Char)0x4b,  /* [8374] */
    (xdc_Char)0x45,  /* [8375] */
    (xdc_Char)0x52,  /* [8376] */
    (xdc_Char)0x5f,  /* [8377] */
    (xdc_Char)0x49,  /* [8378] */
    (xdc_Char)0x4e,  /* [8379] */
    (xdc_Char)0x49,  /* [8380] */
    (xdc_Char)0x54,  /* [8381] */
    (xdc_Char)0x0,  /* [8382] */
    (xdc_Char)0x53,  /* [8383] */
    (xdc_Char)0x45,  /* [8384] */
    (xdc_Char)0x4d,  /* [8385] */
    (xdc_Char)0x5f,  /* [8386] */
    (xdc_Char)0x50,  /* [8387] */
    (xdc_Char)0x41,  /* [8388] */
    (xdc_Char)0x43,  /* [8389] */
    (xdc_Char)0x45,  /* [8390] */
    (xdc_Char)0x5f,  /* [8391] */
    (xdc_Char)0x4d,  /* [8392] */
    (xdc_Char)0x41,  /* [8393] */
    (xdc_Char)0x4b,  /* [8394] */
    (xdc_Char)0x45,  /* [8395] */
    (xdc_Char)0x52,  /* [8396] */
    (xdc_Char)0x5f,  /* [8397] */
    (xdc_Char)0x4f,  /* [8398] */
    (xdc_Char)0x4b,  /* [8399] */
    (xdc_Char)0x0,  /* [8400] */
    (xdc_Char)0x53,  /* [8401] */
    (xdc_Char)0x45,  /* [8402] */
    (xdc_Char)0x4d,  /* [8403] */
    (xdc_Char)0x5f,  /* [8404] */
    (xdc_Char)0x41,  /* [8405] */
    (xdc_Char)0x46,  /* [8406] */
    (xdc_Char)0x45,  /* [8407] */
    (xdc_Char)0x5f,  /* [8408] */
    (xdc_Char)0x52,  /* [8409] */
    (xdc_Char)0x45,  /* [8410] */
    (xdc_Char)0x41,  /* [8411] */
    (xdc_Char)0x44,  /* [8412] */
    (xdc_Char)0x5f,  /* [8413] */
    (xdc_Char)0x43,  /* [8414] */
    (xdc_Char)0x4f,  /* [8415] */
    (xdc_Char)0x4d,  /* [8416] */
    (xdc_Char)0x50,  /* [8417] */
    (xdc_Char)0x4c,  /* [8418] */
    (xdc_Char)0x45,  /* [8419] */
    (xdc_Char)0x54,  /* [8420] */
    (xdc_Char)0x45,  /* [8421] */
    (xdc_Char)0x0,  /* [8422] */
    (xdc_Char)0x4d,  /* [8423] */
    (xdc_Char)0x53,  /* [8424] */
    (xdc_Char)0x50,  /* [8425] */
    (xdc_Char)0x34,  /* [8426] */
    (xdc_Char)0x33,  /* [8427] */
    (xdc_Char)0x32,  /* [8428] */
    (xdc_Char)0x5f,  /* [8429] */
    (xdc_Char)0x55,  /* [8430] */
    (xdc_Char)0x41,  /* [8431] */
    (xdc_Char)0x52,  /* [8432] */
    (xdc_Char)0x54,  /* [8433] */
    (xdc_Char)0x5f,  /* [8434] */
    (xdc_Char)0x6d,  /* [8435] */
    (xdc_Char)0x61,  /* [8436] */
    (xdc_Char)0x69,  /* [8437] */
    (xdc_Char)0x6e,  /* [8438] */
    (xdc_Char)0x0,  /* [8439] */
    (xdc_Char)0x41,  /* [8440] */
    (xdc_Char)0x46,  /* [8441] */
    (xdc_Char)0x45,  /* [8442] */
    (xdc_Char)0x5f,  /* [8443] */
    (xdc_Char)0x6d,  /* [8444] */
    (xdc_Char)0x61,  /* [8445] */
    (xdc_Char)0x69,  /* [8446] */
    (xdc_Char)0x6e,  /* [8447] */
    (xdc_Char)0x0,  /* [8448] */
    (xdc_Char)0x41,  /* [8449] */
    (xdc_Char)0x44,  /* [8450] */
    (xdc_Char)0x53,  /* [8451] */
    (xdc_Char)0x5f,  /* [8452] */
    (xdc_Char)0x6d,  /* [8453] */
    (xdc_Char)0x61,  /* [8454] */
    (xdc_Char)0x69,  /* [8455] */
    (xdc_Char)0x6e,  /* [8456] */
    (xdc_Char)0x0,  /* [8457] */
    (xdc_Char)0x47,  /* [8458] */
    (xdc_Char)0x55,  /* [8459] */
    (xdc_Char)0x49,  /* [8460] */
    (xdc_Char)0x5f,  /* [8461] */
    (xdc_Char)0x69,  /* [8462] */
    (xdc_Char)0x6e,  /* [8463] */
    (xdc_Char)0x69,  /* [8464] */
    (xdc_Char)0x74,  /* [8465] */
    (xdc_Char)0x69,  /* [8466] */
    (xdc_Char)0x61,  /* [8467] */
    (xdc_Char)0x6c,  /* [8468] */
    (xdc_Char)0x69,  /* [8469] */
    (xdc_Char)0x7a,  /* [8470] */
    (xdc_Char)0x65,  /* [8471] */
    (xdc_Char)0x0,  /* [8472] */
    (xdc_Char)0x54,  /* [8473] */
    (xdc_Char)0x4d,  /* [8474] */
    (xdc_Char)0x50,  /* [8475] */
    (xdc_Char)0x5f,  /* [8476] */
    (xdc_Char)0x6d,  /* [8477] */
    (xdc_Char)0x61,  /* [8478] */
    (xdc_Char)0x69,  /* [8479] */
    (xdc_Char)0x6e,  /* [8480] */
    (xdc_Char)0x0,  /* [8481] */
    (xdc_Char)0x50,  /* [8482] */
    (xdc_Char)0x61,  /* [8483] */
    (xdc_Char)0x63,  /* [8484] */
    (xdc_Char)0x65,  /* [8485] */
    (xdc_Char)0x5f,  /* [8486] */
    (xdc_Char)0x64,  /* [8487] */
    (xdc_Char)0x65,  /* [8488] */
    (xdc_Char)0x74,  /* [8489] */
    (xdc_Char)0x65,  /* [8490] */
    (xdc_Char)0x63,  /* [8491] */
    (xdc_Char)0x74,  /* [8492] */
    (xdc_Char)0x5f,  /* [8493] */
    (xdc_Char)0x74,  /* [8494] */
    (xdc_Char)0x61,  /* [8495] */
    (xdc_Char)0x73,  /* [8496] */
    (xdc_Char)0x6b,  /* [8497] */
    (xdc_Char)0x0,  /* [8498] */
    (xdc_Char)0x74,  /* [8499] */
    (xdc_Char)0x69,  /* [8500] */
    (xdc_Char)0x2e,  /* [8501] */
    (xdc_Char)0x73,  /* [8502] */
    (xdc_Char)0x79,  /* [8503] */
    (xdc_Char)0x73,  /* [8504] */
    (xdc_Char)0x62,  /* [8505] */
    (xdc_Char)0x69,  /* [8506] */
    (xdc_Char)0x6f,  /* [8507] */
    (xdc_Char)0x73,  /* [8508] */
    (xdc_Char)0x2e,  /* [8509] */
    (xdc_Char)0x6b,  /* [8510] */
    (xdc_Char)0x6e,  /* [8511] */
    (xdc_Char)0x6c,  /* [8512] */
    (xdc_Char)0x2e,  /* [8513] */
    (xdc_Char)0x54,  /* [8514] */
    (xdc_Char)0x61,  /* [8515] */
    (xdc_Char)0x73,  /* [8516] */
    (xdc_Char)0x6b,  /* [8517] */
    (xdc_Char)0x2e,  /* [8518] */
    (xdc_Char)0x49,  /* [8519] */
    (xdc_Char)0x64,  /* [8520] */
    (xdc_Char)0x6c,  /* [8521] */
    (xdc_Char)0x65,  /* [8522] */
    (xdc_Char)0x54,  /* [8523] */
    (xdc_Char)0x61,  /* [8524] */
    (xdc_Char)0x73,  /* [8525] */
    (xdc_Char)0x6b,  /* [8526] */
    (xdc_Char)0x0,  /* [8527] */
    (xdc_Char)0x4c,  /* [8528] */
    (xdc_Char)0x6f,  /* [8529] */
    (xdc_Char)0x61,  /* [8530] */
    (xdc_Char)0x64,  /* [8531] */
    (xdc_Char)0x20,  /* [8532] */
    (xdc_Char)0x4c,  /* [8533] */
    (xdc_Char)0x6f,  /* [8534] */
    (xdc_Char)0x67,  /* [8535] */
    (xdc_Char)0x67,  /* [8536] */
    (xdc_Char)0x65,  /* [8537] */
    (xdc_Char)0x72,  /* [8538] */
    (xdc_Char)0x0,  /* [8539] */
    (xdc_Char)0x4d,  /* [8540] */
    (xdc_Char)0x61,  /* [8541] */
    (xdc_Char)0x69,  /* [8542] */
    (xdc_Char)0x6e,  /* [8543] */
    (xdc_Char)0x20,  /* [8544] */
    (xdc_Char)0x4c,  /* [8545] */
    (xdc_Char)0x6f,  /* [8546] */
    (xdc_Char)0x67,  /* [8547] */
    (xdc_Char)0x67,  /* [8548] */
    (xdc_Char)0x65,  /* [8549] */
    (xdc_Char)0x72,  /* [8550] */
    (xdc_Char)0x0,  /* [8551] */
    (xdc_Char)0x53,  /* [8552] */
    (xdc_Char)0x59,  /* [8553] */
    (xdc_Char)0x53,  /* [8554] */
    (xdc_Char)0x42,  /* [8555] */
    (xdc_Char)0x49,  /* [8556] */
    (xdc_Char)0x4f,  /* [8557] */
    (xdc_Char)0x53,  /* [8558] */
    (xdc_Char)0x20,  /* [8559] */
    (xdc_Char)0x53,  /* [8560] */
    (xdc_Char)0x79,  /* [8561] */
    (xdc_Char)0x73,  /* [8562] */
    (xdc_Char)0x74,  /* [8563] */
    (xdc_Char)0x65,  /* [8564] */
    (xdc_Char)0x6d,  /* [8565] */
    (xdc_Char)0x20,  /* [8566] */
    (xdc_Char)0x4c,  /* [8567] */
    (xdc_Char)0x6f,  /* [8568] */
    (xdc_Char)0x67,  /* [8569] */
    (xdc_Char)0x67,  /* [8570] */
    (xdc_Char)0x65,  /* [8571] */
    (xdc_Char)0x72,  /* [8572] */
    (xdc_Char)0x0,  /* [8573] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[64] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1def,  /* left */
        (xdc_Bits16)0x1df4,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1dfd,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e04,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e09,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e12,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e18,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e1e,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e23,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e27,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e2c,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e33,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e3c,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e44,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e4b,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e52,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e57,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1e61,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x1e67,  /* left */
        (xdc_Bits16)0x1e6b,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1e70,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1e78,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1e81,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1e88,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1e8f,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1df4,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1e9a,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1ea3,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1eb3,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x1e67,  /* left */
        (xdc_Bits16)0x1ebf,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x1ec8,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1ecd,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1ed3,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1ed8,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1ee3,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1ee9,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1eef,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1ef9,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1efd,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x1f02,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8026,  /* left */
        (xdc_Bits16)0x1f09,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8026,  /* left */
        (xdc_Bits16)0x1f11,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x1f1b,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x1f20,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x1f24,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x1f29,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x802c,  /* left */
        (xdc_Bits16)0x1f31,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802d,  /* left */
        (xdc_Bits16)0x1f36,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x802e,  /* left */
        (xdc_Bits16)0x1f3e,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x1f44,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x802d,  /* left */
        (xdc_Bits16)0x1f49,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x1f20,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x1f4d,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x1f5f,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x1f6b,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x1f71,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x1f83,  /* right */
    },  /* [55] */
    {
        (xdc_Bits16)0x8037,  /* left */
        (xdc_Bits16)0x1f8a,  /* right */
    },  /* [56] */
    {
        (xdc_Bits16)0x8037,  /* left */
        (xdc_Bits16)0x1f92,  /* right */
    },  /* [57] */
    {
        (xdc_Bits16)0x802e,  /* left */
        (xdc_Bits16)0x1f6b,  /* right */
    },  /* [58] */
    {
        (xdc_Bits16)0x802e,  /* left */
        (xdc_Bits16)0x1f9c,  /* right */
    },  /* [59] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1fa7,  /* right */
    },  /* [60] */
    {
        (xdc_Bits16)0x803c,  /* left */
        (xdc_Bits16)0x1fb0,  /* right */
    },  /* [61] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x1fbf,  /* right */
    },  /* [62] */
    {
        (xdc_Bits16)0x803e,  /* left */
        (xdc_Bits16)0x1fc6,  /* right */
    },  /* [63] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x217e;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x40;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__startupDoneFxn__C, ".const:xdc_runtime_Timestamp_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Types INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsEnabled__C, ".const:xdc_runtime_Types_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsIncluded__C, ".const:xdc_runtime_Types_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsMask__C, ".const:xdc_runtime_Types_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C = ((CT__xdc_runtime_Types_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gateObj__C, ".const:xdc_runtime_Types_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C = ((CT__xdc_runtime_Types_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gatePrms__C, ".const:xdc_runtime_Types_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C = ((CT__xdc_runtime_Types_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__id__C, ".const:xdc_runtime_Types_Module__id__C");
__FAR__ const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C = (xdc_Bits16)0x8011;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerDefined__C, ".const:xdc_runtime_Types_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerObj__C, ".const:xdc_runtime_Types_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C = ((CT__xdc_runtime_Types_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn0__C, ".const:xdc_runtime_Types_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C = ((CT__xdc_runtime_Types_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn1__C, ".const:xdc_runtime_Types_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C = ((CT__xdc_runtime_Types_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn2__C, ".const:xdc_runtime_Types_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C = ((CT__xdc_runtime_Types_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn4__C, ".const:xdc_runtime_Types_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C = ((CT__xdc_runtime_Types_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn8__C, ".const:xdc_runtime_Types_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C = ((CT__xdc_runtime_Types_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__startupDoneFxn__C, ".const:xdc_runtime_Types_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Types_Module__startupDoneFxn xdc_runtime_Types_Module__startupDoneFxn__C = ((CT__xdc_runtime_Types_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__count__C, ".const:xdc_runtime_Types_Object__count__C");
__FAR__ const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__heap__C, ".const:xdc_runtime_Types_Object__heap__C");
__FAR__ const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__sizeof__C, ".const:xdc_runtime_Types_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__table__C, ".const:xdc_runtime_Types_Object__table__C");
__FAR__ const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C = 0;


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_BIOS_RtsGateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_BIOS_RtsGateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_BIOS_RtsGateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_m3_Hwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_m3_Hwi___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_IHwi_Params), __eb);
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_HwiProxy_Args__create __args;
    __args.intNum = intNum;
    __args.hwiFxn = hwiFxn;
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_hal_Hwi_HwiProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_hal_Hwi_HwiProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_arm_m3_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_heaps_HeapMem_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.msp432.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_msp432_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock_TimerProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_msp432_Timer_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_msp432_Timer___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_ITimer_Params), __eb);
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_TimerProxy_Args__create __args;
    __args.id = id;
    __args.tickFxn = tickFxn;
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_knl_Clock_TimerProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_knl_Clock_TimerProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_knl_Clock_TimerProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_family_arm_msp432_Timer_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_knl_Clock_TimerProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_msp432_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_msp432_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_msp432_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_msp432_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_msp432_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_msp432_Timer_getMaxTicks((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_msp432_Timer_setNextTick((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_msp432_Timer_start((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_msp432_Timer_stop((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_msp432_Timer_setPeriod((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_msp432_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_msp432_Timer_getPeriod((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_msp432_Timer_getCount((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_msp432_Timer_getFreq((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_msp432_Timer_getFunc((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_msp432_Timer_setFunc((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_msp432_Timer_trigger((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_msp432_Timer_getExpiredCounts((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_msp432_Timer_getExpiredTicks((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_msp432_Timer_getCurrentTick((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getDefaultStackSize();
}

/* getCheckValueAddr__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_getCheckValueAddr__E( xdc_Ptr curTask )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getCheckValueAddr(curTask);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)xdc_runtime_Main_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Main_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    xdc_runtime_Main_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(__obj, __osz, __aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IHeap_Params), __eb);
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)xdc_runtime_Memory_HeapProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Memory_HeapProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    xdc_runtime_Memory_HeapProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)xdc_runtime_System_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_System_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    xdc_runtime_System_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysStd */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysStd_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysStd_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysStd_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysStd_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysStd_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysStd_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_arm_m3_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_arm_m3_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_m3_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.m3.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Timer_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Timer___S1) - sizeof(ti_sysbios_family_arm_m3_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Timer_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.msp432.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_msp432_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_msp432_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_msp432_Timer_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_msp432_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_msp432_Timer___S1) - sizeof(ti_sysbios_family_arm_msp432_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_msp432_Timer_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_msp432_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapTrack OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapTrack_Object2__ s0; char c; } ti_sysbios_heaps_HeapTrack___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapTrack_Object__DESC__C, ".const:ti_sysbios_heaps_HeapTrack_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapTrack_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_heaps_HeapTrack_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapTrack_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapTrack___S1) - sizeof(ti_sysbios_heaps_HeapTrack_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapTrack_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_heaps_HeapTrack_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapTrack_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_loggers_LoggerStopMode_Object2__ s0; char c; } ti_uia_loggers_LoggerStopMode___S1;
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__DESC__C, ".const:ti_uia_loggers_LoggerStopMode_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C = {
    (xdc_Ptr)&ti_uia_loggers_LoggerStopMode_Module__FXNS__C, /* fxnTab */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link, /* modLink */
    sizeof(ti_uia_loggers_LoggerStopMode___S1) - sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objSize */
    (xdc_Ptr)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_loggers_LoggerStopMode_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module __mod, const xdc_runtime_IHeap_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IHeap_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IHeap_Params), __eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.IUIATransfer VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_IUIATransfer_Handle ti_uia_runtime_IUIATransfer_create( ti_uia_runtime_IUIATransfer_Module __mod, const ti_uia_runtime_IUIATransfer_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_uia_runtime_IUIATransfer_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (ti_uia_runtime_IUIATransfer_Params), __eb);
}

/* delete */
void ti_uia_runtime_IUIATransfer_delete( ti_uia_runtime_IUIATransfer_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module __mod, const xdc_runtime_IGateProvider_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IGateProvider_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IGateProvider_Params), __eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IFilterLogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IFilterLogger_Handle xdc_runtime_IFilterLogger_create( xdc_runtime_IFilterLogger_Module __mod, const xdc_runtime_IFilterLogger_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IFilterLogger_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IFilterLogger_Params), __eb);
}

/* delete */
void xdc_runtime_IFilterLogger_delete( xdc_runtime_IFilterLogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module __mod, const xdc_runtime_ILogger_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_ILogger_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_ILogger_Params), __eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.ILoggerSnapshot VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_ILoggerSnapshot_Handle ti_uia_runtime_ILoggerSnapshot_create( ti_uia_runtime_ILoggerSnapshot_Module __mod, const ti_uia_runtime_ILoggerSnapshot_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_uia_runtime_ILoggerSnapshot_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (ti_uia_runtime_ILoggerSnapshot_Params), __eb);
}

/* delete */
void ti_uia_runtime_ILoggerSnapshot_delete( ti_uia_runtime_ILoggerSnapshot_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32818;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_m3_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_m3_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_m3_Hwi_Args__create *__args = __aa;
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    ti_sysbios_family_arm_m3_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_m3_Hwi_Handle ti_sysbios_family_arm_m3_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    ti_sysbios_family_arm_m3_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_m3_Hwi_construct(ti_sysbios_family_arm_m3_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_m3_Hwi_destruct(ti_sysbios_family_arm_m3_Hwi_Struct *obj)
{
    ti_sysbios_family_arm_m3_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Hwi_delete(ti_sysbios_family_arm_m3_Hwi_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32821;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_m3_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_m3_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_m3_Timer_Object__ *)ti_sysbios_family_arm_m3_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_m3_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_m3_Timer_Args__create *__args = __aa;
    ti_sysbios_family_arm_m3_Timer_Params __prms;
    ti_sysbios_family_arm_m3_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_m3_Timer_Handle ti_sysbios_family_arm_m3_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_m3_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Timer_Params __prms;
    ti_sysbios_family_arm_m3_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_m3_Timer_construct(ti_sysbios_family_arm_m3_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_m3_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_m3_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_m3_Timer_destruct(ti_sysbios_family_arm_m3_Timer_Struct *obj)
{
    ti_sysbios_family_arm_m3_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, *((ti_sysbios_family_arm_m3_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Timer_delete(ti_sysbios_family_arm_m3_Timer_Handle *instp)
{
    ti_sysbios_family_arm_m3_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.msp432.ClockFreqs SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_msp432_ClockFreqs_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.msp432.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_msp432_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_msp432_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_msp432_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_msp432_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_msp432_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_msp432_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_msp432_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_msp432_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_msp432_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_msp432_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_msp432_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_msp432_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_msp432_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32826;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_msp432_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_msp432_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_msp432_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_msp432_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_msp432_Timer_Object__ *)ti_sysbios_family_arm_msp432_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_msp432_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_msp432_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_msp432_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_msp432_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_msp432_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_msp432_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_msp432_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_msp432_Timer_Args__create *__args = __aa;
    ti_sysbios_family_arm_msp432_Timer_Params __prms;
    ti_sysbios_family_arm_msp432_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_msp432_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_msp432_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_msp432_Timer_Handle ti_sysbios_family_arm_msp432_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_msp432_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_msp432_Timer_Params __prms;
    ti_sysbios_family_arm_msp432_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_msp432_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_msp432_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_msp432_Timer_construct(ti_sysbios_family_arm_msp432_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_msp432_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_msp432_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_msp432_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_msp432_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_msp432_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_msp432_Timer_destruct(ti_sysbios_family_arm_msp432_Timer_Struct *obj)
{
    ti_sysbios_family_arm_msp432_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_msp432_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, *((ti_sysbios_family_arm_msp432_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_msp432_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_msp432_Timer_delete(ti_sysbios_family_arm_msp432_Timer_Handle *instp)
{
    ti_sysbios_family_arm_msp432_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.msp432.init.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_msp432_init_Boot_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32824;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__ *)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *__obj, const ti_sysbios_gates_GateHwi_Params *__paramsPtr )
{
    ti_sysbios_gates_GateHwi_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    ti_sysbios_gates_GateHwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32825;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__ *)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *__obj, const ti_sysbios_gates_GateMutex_Params *__paramsPtr )
{
    ti_sysbios_gates_GateMutex_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    ti_sysbios_gates_GateMutex_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32810;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__ *)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_hal_Hwi_Args__create *__args = __aa;
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    ti_sysbios_hal_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32807;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__ *)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *__obj, const ti_sysbios_heaps_HeapMem_Params *__paramsPtr )
{
    ti_sysbios_heaps_HeapMem_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    ti_sysbios_heaps_HeapMem_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.heaps.HeapTrack SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapTrack_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapTrack_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapTrack_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapTrack_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapTrack_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapTrack_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapTrack_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapTrack_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapTrack_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapTrack_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapTrack_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapTrack_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapTrack_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapTrack_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapTrack_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapTrack_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapTrack_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapTrack_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapTrack_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapTrack_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32808;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapTrack_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapTrack_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapTrack_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapTrack_Object__ *)oa) + i;
    }

    if (ti_sysbios_heaps_HeapTrack_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapTrack_Object__ *)ti_sysbios_heaps_HeapTrack_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapTrack_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapTrack_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapTrack_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapTrack_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapTrack_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapTrack_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapTrack___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_heaps_HeapTrack_Params __prms;
    ti_sysbios_heaps_HeapTrack_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapTrack_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapTrack_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapTrack_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_heaps_HeapTrack_Handle ti_sysbios_heaps_HeapTrack_create( const ti_sysbios_heaps_HeapTrack_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_heaps_HeapTrack_Params __prms;
    ti_sysbios_heaps_HeapTrack_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapTrack_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapTrack_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapTrack_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_heaps_HeapTrack_construct(ti_sysbios_heaps_HeapTrack_Struct *__obj, const ti_sysbios_heaps_HeapTrack_Params *__paramsPtr )
{
    ti_sysbios_heaps_HeapTrack_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapTrack_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapTrack_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_heaps_HeapTrack_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapTrack_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapTrack_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_heaps_HeapTrack_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_heaps_HeapTrack_destruct(ti_sysbios_heaps_HeapTrack_Struct *obj)
{
    ti_sysbios_heaps_HeapTrack_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapTrack_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapTrack_Object__DESC__C, *((ti_sysbios_heaps_HeapTrack_Object**)instp), (xdc_Fxn)ti_sysbios_heaps_HeapTrack_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_heaps_HeapTrack_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapTrack_delete(ti_sysbios_heaps_HeapTrack_Handle *instp)
{
    ti_sysbios_heaps_HeapTrack_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32798;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__ *)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Clock_Args__create *__args = __aa;
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, __args->clockFxn, __args->timeout, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, clockFxn, timeout, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *__obj, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr )
{
    ti_sysbios_knl_Clock_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)__obj, clockFxn, timeout, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    ti_sysbios_knl_Clock_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32801;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Event_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Event_Object__ *)ti_sysbios_knl_Event_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Event___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *__obj, const ti_sysbios_knl_Event_Params *__paramsPtr )
{
    ti_sysbios_knl_Event_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Event_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    ti_sysbios_knl_Event_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32802;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__ *)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Queue___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *__obj, const ti_sysbios_knl_Queue_Params *__paramsPtr )
{
    ti_sysbios_knl_Queue_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    ti_sysbios_knl_Queue_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32803;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__ *)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Semaphore_Args__create *__args = __aa;
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, __args->count, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, count, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *__obj, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr )
{
    ti_sysbios_knl_Semaphore_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)__obj, count, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    ti_sysbios_knl_Semaphore_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32804;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__ *)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Swi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Swi_Args__create *__args = __aa;
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, __args->swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *__obj, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)__obj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    ti_sysbios_knl_Swi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32805;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__ *)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Task___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Task_Args__create *__args = __aa;
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, __args->fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *__obj, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)__obj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    ti_sysbios_knl_Task_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.utils.Load SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_utils_Load_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.DvtTypes SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_DvtTypes_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAErr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAErr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAEvt SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAEvt_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAProfile SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAProfile_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.loggers.LoggerStopMode SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_loggers_LoggerStopMode_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_loggers_LoggerStopMode_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_loggers_LoggerStopMode_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_loggers_LoggerStopMode_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_loggers_LoggerStopMode_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_uia_loggers_LoggerStopMode_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_loggers_LoggerStopMode_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_loggers_LoggerStopMode_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_loggers_LoggerStopMode_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_loggers_LoggerStopMode_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__S( void )
{
    return ti_uia_loggers_LoggerStopMode_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_uia_loggers_LoggerStopMode_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32829;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_uia_loggers_LoggerStopMode_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_uia_loggers_LoggerStopMode_Object__ *)oa) + i;
    }

    if (ti_uia_loggers_LoggerStopMode_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_uia_loggers_LoggerStopMode_Object__ *)ti_uia_loggers_LoggerStopMode_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_loggers_LoggerStopMode_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_uia_loggers_LoggerStopMode___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_uia_loggers_LoggerStopMode_Params __prms;
    ti_uia_loggers_LoggerStopMode_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_loggers_LoggerStopMode_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_uia_loggers_LoggerStopMode_Handle ti_uia_loggers_LoggerStopMode_create( const ti_uia_loggers_LoggerStopMode_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_uia_loggers_LoggerStopMode_Params __prms;
    ti_uia_loggers_LoggerStopMode_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_loggers_LoggerStopMode_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_uia_loggers_LoggerStopMode_construct(ti_uia_loggers_LoggerStopMode_Struct *__obj, const ti_uia_loggers_LoggerStopMode_Params *__paramsPtr )
{
    ti_uia_loggers_LoggerStopMode_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_loggers_LoggerStopMode_Params), NULL);
    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_uia_loggers_LoggerStopMode_destruct(ti_uia_loggers_LoggerStopMode_Struct *obj)
{
    ti_uia_loggers_LoggerStopMode_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, *((ti_uia_loggers_LoggerStopMode_Object**)instp), NULL, -1, FALSE);
    *((ti_uia_loggers_LoggerStopMode_Handle*)instp) = NULL;
}

/* delete */
void ti_uia_loggers_LoggerStopMode_delete(ti_uia_loggers_LoggerStopMode_Handle *instp)
{
    ti_uia_loggers_LoggerStopMode_Object__delete__S(instp);
}


/*
 * ======== ti.uia.runtime.EventHdr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_EventHdr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.QueueDescriptor SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_QueueDescriptor_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.UIAMetaData SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_UIAMetaData_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysStd SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysStd_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysStd_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Types SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Types_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle MSP432_UART_main = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle SEM_AFE_RDY_GOES_LOW = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[0]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle AFE_main = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[1]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle SEM_UART_DATA_TO_BE_SENT = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[1]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle SEM_ADS_DRDY_GOES_LOW = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[2]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle ADS_main = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[2]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle SEM_ADS_INITIALIZE = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[3]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle SEM_GUI_INITIALISE = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[4]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle SEM_INTERRUPT_INIT = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[5]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle GUI_initialize = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[3]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle SEM_TMP_TASK = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[6]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle SEM_TMP_INITIALISE = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[7]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle TMP_main = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[4]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Clock_Handle TMP_read = (ti_sysbios_knl_Clock_Handle)((ti_sysbios_knl_Clock_Handle)&ti_sysbios_knl_Clock_Object__table__V[0]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle SEM_PACE_DETECT_GOES_HIGH = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[8]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle Pace_detect_task = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[5]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle SEM_PACE_MAKER_INIT = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[9]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle SEM_PACE_MAKER_OK = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[10]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle SEM_AFE_READ_COMPLETE = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[11]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Clock_Handle pace_Start_clock = (ti_sysbios_knl_Clock_Handle)((ti_sysbios_knl_Clock_Handle)&ti_sysbios_knl_Clock_Object__table__V[1]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Clock_Handle pace_end_clock = (ti_sysbios_knl_Clock_Handle)((ti_sysbios_knl_Clock_Handle)&ti_sysbios_knl_Clock_Object__table__V[2]);

