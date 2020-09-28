/*
 * Do not modify this file; it is automatically generated from the template
 * linkcmd.xdt in the ti.platforms.msp432 package and will be overwritten.
 */

/*
 * put '"'s around paths because, without this, the linker
 * considers '-' as minus operator, not a file name character.
 */


-l"D:\Firmware\TIDA firmware\Swaroop\TIDA - 2\TIDA-01614-Firmware\Debug\configPkg\package\cfg\main_rtos_pem4f.oem4f"
-l"C:\ti\tirtos_msp43x_2_20_00_06\products\uia_2_00_06_52\packages\ti\uia\sysbios\lib\release\ti.uia.sysbios.aem4f"
-l"C:/ti/tirtos_msp43x_2_20_00_06/products/tidrivers_msp43x_2_20_00_08/packages/ti/mw/wifi/cc3x00/lib/cc3x00_host_driver.aem4f"
-l"C:/ti/tirtos_msp43x_2_20_00_06/products/tidrivers_msp43x_2_20_00_08/packages/ti/drivers/lib/drivers_MSP432P401R.aem4f"
-l"C:/ti/tirtos_msp43x_2_20_00_06/products/tidrivers_msp43x_2_20_00_08/packages/ti/drivers/lib/drivers_wifi_MSP432P401R.aem4f"
-l"C:/ti/tirtos_msp43x_2_20_00_06/products/tidrivers_msp43x_2_20_00_08/packages/ti/drivers/lib/power_tirtos_MSP432P401R.aem4f"
-l"C:\ti\tirtos_msp43x_2_20_00_06\products\uia_2_00_06_52\packages\ti\uia\loggers\lib\release\ti.uia.loggers.aem4f"
-l"C:\ti\tirtos_msp43x_2_20_00_06\products\tidrivers_msp43x_2_20_00_08\packages\ti\mw\fatfs\lib\release\ti.mw.fatfs.aem4f"
-l"C:/ti/tirtos_msp43x_2_20_00_06/products/tidrivers_msp43x_2_20_00_08/packages/ti/drivers/ports/lib/tirtosport.aem4f"
-l"D:\Firmware\TIDA firmware\Swaroop\TIDA - 2\TIDA-01614-Firmware\src\sysbios\sysbios.aem4f"
-l"C:\ti\tirtos_msp43x_2_20_00_06\products\uia_2_00_06_52\packages\ti\uia\services\lib\release\ti.uia.services.aem4f"
-l"C:\ti\tirtos_msp43x_2_20_00_06\products\uia_2_00_06_52\packages\ti\uia\runtime\lib\release\ti.uia.runtime.aem4f"
-l"C:\ti\tirtos_msp43x_2_20_00_06\products\uia_2_00_06_52\packages\ti\uia\events\lib\release\ti.uia.events.aem4f"
-l"C:\ti\tirtos_msp43x_2_20_00_06\products\bios_6_46_00_23\packages\ti\targets\arm\rtsarm\lib\ti.targets.arm.rtsarm.aem4f"
-l"C:\ti\tirtos_msp43x_2_20_00_06\products\bios_6_46_00_23\packages\ti\targets\arm\rtsarm\lib\boot.aem4f"
-l"C:\ti\tirtos_msp43x_2_20_00_06\products\bios_6_46_00_23\packages\ti\targets\arm\rtsarm\lib\auto_init.aem4f"

--retain="*(xdc.meta)"

/* C6x Elf symbols */
--symbol_map __TI_STACK_SIZE=__STACK_SIZE
--symbol_map __TI_STACK_BASE=__stack
--symbol_map _stack=__stack


--args 0x0
-heap  0x0
-stack 0x400

/*
 * Linker command file contributions from all loaded packages:
 */

/* Content from xdc.services.global (null): */

/* Content from xdc (null): */

/* Content from xdc.corevers (null): */

/* Content from xdc.shelf (null): */

/* Content from xdc.services.spec (null): */

/* Content from xdc.services.intern.xsr (null): */

/* Content from xdc.services.intern.gen (null): */

/* Content from xdc.services.intern.cmd (null): */

/* Content from xdc.bld (null): */

/* Content from ti.targets (null): */

/* Content from ti.targets.arm.elf (null): */

/* Content from xdc.rov (null): */

/* Content from xdc.runtime (null): */

/* Content from ti.targets.arm.rtsarm (null): */

/* Content from xdc.rta (null): */

/* Content from ti.uia.events (null): */

/* Content from ti.uia.runtime (null): */

/* Content from ti.sysbios.interfaces (null): */

/* Content from ti.sysbios.family (null): */

/* Content from ti.sysbios.family.arm (ti/sysbios/family/arm/linkcmd.xdt): */
--retain "*(.vecs)"

/* Content from xdc.runtime.knl (null): */

/* Content from xdc.services.getset (null): */

/* Content from ti.sysbios.rts (ti/sysbios/rts/linkcmd.xdt): */

/* Content from xdc.services.io (null): */

/* Content from ti.uia.services (null): */

/* Content from ti.catalog.arm.cortexm4 (null): */

/* Content from ti.catalog (null): */

/* Content from ti.catalog.peripherals.hdvicp2 (null): */

/* Content from xdc.platform (null): */

/* Content from xdc.cfg (null): */

/* Content from ti.platforms.msp432 (null): */

/* Content from ti.sysbios (null): */

/* Content from ti.sysbios.family.arm.msp432.init (null): */

/* Content from ti.drivers.ports (null): */

/* Content from ti.mw.fatfs (null): */

/* Content from ti.uia.loggers (null): */

/* Content from ti.sysbios.hal (null): */

/* Content from ti.sysbios.family.arm.m3 (ti/sysbios/family/arm/m3/linkcmd.xdt): */
-u _c_int00
--retain "*(.resetVecs)"
ti_sysbios_family_arm_m3_Hwi_nvic = 0xe000e000;

/* Content from ti.sysbios.knl (null): */

/* Content from ti.sysbios.family.arm.msp432 (null): */

/* Content from ti.sysbios.syncs (null): */

/* Content from ti.drivers (null): */

/* Content from ti.mw.wifi.cc3x00 (null): */

/* Content from ti.mw (null): */

/* Content from ti.sysbios.gates (null): */

/* Content from ti.sysbios.heaps (null): */

/* Content from ti.sysbios.xdcruntime (null): */

/* Content from ti.sysbios.utils (null): */

/* Content from ti.uia.sysbios (null): */

/* Content from configPkg (null): */



/*
 * symbolic aliases for static instance objects
 */
xdc_runtime_Startup__EXECFXN__C = 1;
xdc_runtime_Startup__RESETFXN__C = 1;


SECTIONS
{
    .bootVecs:  type = DSECT
    .vecs: load > 0x20000000
    .resetVecs: load > 0x0



    xdc.meta: type = COPY
}
