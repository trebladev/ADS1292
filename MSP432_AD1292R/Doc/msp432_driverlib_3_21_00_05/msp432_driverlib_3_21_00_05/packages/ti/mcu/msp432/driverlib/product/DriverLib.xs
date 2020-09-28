/*
 *  ======== DriverLib.xs ========
 *  This file contains the JavaScript functions declared in DriverLib.xdc 
 */
 
 /*
 *  ======== getFamilyPath ========
 *  This function is called from the makefile template (makefile.xdt) to
 *  determine the proper "family" of DriverLib sources to build.
 * 
 *  It can also be called by other target-content products, such as Grace,
 *  to locate the appropriate "family" of source files to build.
 */
function getFamilyPath(deviceName)
{
    var family = null;

    if (deviceName.match(/^MSP432P4xx/i)) {
        family = "driverlib/MSP432P4xx";
    }

    return (family);
}

/*
 *      The functions below this line probably never need to be modified 
 * ============================================================================
 */

/*
 *  ======== getLibPath ========
 *  This function is called by this package's getLibs() function (defined
 *  in package.xs) to supply the path to the compiled DriverLib library.
 */
function getLibPath()
{
    return (this.outputDir + "/" + this.BASENAME + ".lib");
}

/*
 *  ======== getSrcRepo ========
 *  This function is called from the makefile template (makefile.xdt) to
 *  determine the absolute path to the source repository.  
 * 
 *  The path returned is also added to the compiler's include path when 
 *  building  the DriverLib sources.  This ensures that C code that references
 *  headers via the familyPath will always find the header corresponding to
 *  the correct DriverLib C source.
 */
function getSrcRepo(familyPath)
{
    if (familyPath == null) {
	throw new Error(this.$name + ".getSrcRepo: invalid family path: " 
			 + familyPath);
    }

    /* locate familyPath along the package path */
    var dir = xdc.findFile(familyPath);
    if (dir == null) {
	throw new Error(this.$name 
	    + ".getSrcRepo: can't find DriverLib source repository '" 
	    + familyPath + "' along the path '" + xdc.curPath() + "'");
    }

    /* convert familyPath into a sequence of /..'s to get to the family repo */
    var up = ("//" + familyPath).replace(/\/\w+/g, "../");

    /* return absolute path to the top-level directory containing familyPath */
    return (String(java.io.File(dir + up).getCanonicalPath()));
}

/*
 *  ======== module$use ========
 *  This function is called only when this module (DriverLib) is used in a
 *  configuration (via xdc.useModule()).
 */
function module$use()
{
    var SourceDir = xdc.useModule("xdc.cfg.SourceDir");

    /* get source directory for generated files */
    var src = SourceDir.create(this.BASENAME);
    this.outputDir = String(java.io.File(src.getGenSourceDir()).getAbsolutePath());
}
