/*!
 *  ======== ProductView ========
 *  Define the product view of the MSP432 DriverLib product
 *  @_nodoc
 */
metaonly module ProductView inherits xdc.tools.product.IProductView
{
    /*
     *  ======== homeModule ========
     *  Specify the home module for this product
     */
    override config String homeModule = "ti.mcu.msp432.driverlib.product.DriverLib";

    /*
     *  ======== linksToArray ========
     *  Specify other products that are "linked to" from this product
     *
     *  Product named here will have their home button redirected to
     *  the home module of this product.
     */
    override config String linksToArray[] = [
        "org.eclipse.rtsc.xdctools"
    ];

    /* Home module */
    config ProductElemDesc driverLib;

    /* product */
    config ProductElemDesc product;
}
