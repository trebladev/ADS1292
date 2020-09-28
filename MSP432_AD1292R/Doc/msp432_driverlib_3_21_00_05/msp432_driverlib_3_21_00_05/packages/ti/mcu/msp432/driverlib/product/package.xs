/*
 * ======== getLibs ========
 * This function is called during configuration to get the name of the
 * libraries that should be linked with.
 */
function getLibs()
{
    var DriverLib = xdc.module(this.$name + ".DriverLib");

    /* prepending '!' tells config to not fail if the lib doesn't yet exist */
    return ("!" + DriverLib.getLibPath());
}
