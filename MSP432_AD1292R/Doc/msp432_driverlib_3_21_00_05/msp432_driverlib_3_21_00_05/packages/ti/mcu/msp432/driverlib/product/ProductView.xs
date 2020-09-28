/* --COPYRIGHT--,EPL
 *  Copyright (c) 2015 Texas Instruments and others.
 *  All rights reserved. This program and the accompanying materials
 *  are made available under the terms of the Eclipse Public License v1.0
 *  which accompanies this distribution, and is available at
 *  http://www.eclipse.org/legal/epl-v10.html
 * 
 *  Contributors:
 *      Texas Instruments - initial implementation
 * 
 * --/COPYRIGHT--*/

/*
 *  ======== ProductView.xs ========
 */

/*
 *  ======== module$meta$init ========
 *  Initialize all product element descriptors
 *
 *  We initialize them here so we don't need to re-compile the ProductView
 *  specification everytime we make a change.
 */
function module$meta$init()
{
    /* Top-level Product Group Modules */
    this.driverLib.elemName = "DriverLib";
    this.driverLib.moduleName = this.homeModule;
    this.driverLib.iconFileName = "icons/mem.ico";

    /* product */
    this.product.elemName = "MSP432 DriverLib";
    this.product.moduleName = null;
    this.product.iconFileName = "icons/mem.ico";
    this.product.elemArray = [
        this.driverLib
    ];
}

/*
 *  ======== getProductDescriptor ========
 */
function getProductDescriptor()
{
    return (this.product);
}
