/*!
 *  ======== ti.mcu.msp432.driverlib.product ========
 *  MSP432 DriverLib Product Package
 *
 *  This package provides integration of the DriverLib peripheral support
 *  library within the Eclipse/CCS development environment.  It provides:
 *  @p(blist)
 *      - CCS project wizard templates to make it easy to create projects
 *        that build and use DriverLib
 *      - a pre-defined build variable `${msp432_DRIVERLIB_ROOT}`; simplifies
 *        the addition of DriverLib to existing projects and enables projects
 *        to be portable among develipers with differing  installation
 *        directories
 *      - "Available Product" view support; enables DriverLib to be easily
 *        added to existing projects that use a target-content product (e.g.,
 *        SYS/BIOS)
 *      - searchable documentation within the Eclipse help system
 *      - side-by-side versioning support; enables project-specific control
 *        of the version of DriverLib used by the project
 *  @p
 */
package ti.mcu.msp432.driverlib.product [1, 0, 0] {
    module ProductView;
    module DriverLib;
}
