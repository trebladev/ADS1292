/*!
 *  ======== DriverLib ========
 *  MSP432 Low-Level Peripheral Driver Support Library
 *
 *  DriverLib provides low-level peripheral functions that enables simple
 *  and efficient control of peripherals found on the MSP432.  The functions
 *  are provided in source form to allow maximum reuse in a variety of
 *  development environments.
 *
 *  This module provides the "home page" for DriverLib within the Grace
 *  graphical configuration editor.  This enables projects that support
 *  graphical configuration to easily integrate with DriverLib.  In particular,
 *  for these projects
 *  @p(blist)
 *      - DriverLib sources are automatically compiled for your specific device
 *      - compiler and linker options are automatically added, and
 *      - you can easily switch between different versions of DriverLib on
 *        a per-project basis
 *  @p
 *  This support makes it simple to create Code Composer Studio (CCS) projects
 *  that enable you to easily build and manage specific versions of pre-built
 *  DriveLib libraries.  These pre-built libraries can then be referenced by
 *  one or more of your existing projects.
 *  
 *  @a(Using DriverLib)
 *  Using DriverLib is a simple three step process.
 *  @p(nlist)
 *      - modify your `.c` sources to include the appropriate peripheral header
 *        file and call the desired function.
 *      - modify your compiler project options to include the directory
 *        containing the DriverLib product's root directory.
 *      - modify your linker project options to include the path to a
 *        pre-built library of the appropriate DriverLib sources.
 *  @p
 *
 *  Suppose, for example, you want to use the WDT_A watchdog timer functions of
 *  DriverLib.  Your source might be modified to look like the following:
 *  @p(code)
 *      #include <driverlib/msp432FR57xx/wdt_a.h>     // include header for the WDT_A peripheral
 *
 *      int main(void) {
 *          WDT_A_hold(__msp432_BASEADDRESS_WDT_A__); // disable the WDT_A watchdog timer
 *             :
 *          return (0);
 *      }
 *  @p
 *
 *  If you're using Code Composer Studio (CCS), DriverLib automatically defines
 *  a "macro", named `${msp432_DRIVERLIB_ROOT}`, that should be used to specify
 *  include paths.  This ensures  that your projects are portable among users
 *  that may have different installation directories.  In this case, your
 *  compiler include options should include:
 *  @p(code)
 *      -I ${msp432_DRIVERLIB_ROOT}
 *  @p
 *
 *  Finally, suppose you're created a project named `driverlib_5739` which
 *  contains a pre-built DriverLib library for the msp432FR5739.  Your linker
 *  options should include:
 *  @p(code)
 *      -l "${workspace_loc:/driverlib_5739/src/driverlib/driverlib.lib}"
 *  @p
 *  where, `${workspace_loc: ...}` is an Eclipse/CCS macro that
 *  expands to an absolute path to the file `src/driverlib/driverlib.lib`
 *  located in the project named `driverlib_5739`.  Again, using the Eclipse
 *  `${...}` macros enables projects to be directly imported by other
 *  developers even if they have different workspace or product installation
 *  paths.
 *
 *  @a(Building DriverLib)
 *  If you are using Code Composer Studio (CCS), it is easy to build a library
 *  for a specific device.
 *  @p(nlist)
 *      - Create a new project: File -> New -> CCS Project
 *      - Select a device and a project name, say `msp432FR5739` and
 *        "`driverlib_5739`"
 *      - In the "Project templates and examples" selection box, select the
 *        "Configurable DriverLib Example" template under the
 *        "msp432 DriverLib" heading.  If you don't see this heading, the
 *        device you selected is not supported by DriverLib.
 *      - Click the "`Finish`" button.  A new project named `driverlib_5739`
 *        will be created and added to your workspace.
 *      - Build the project: Project -> Build Project
 *  @p
 *  Once the project is finished building, a complete DriverLib library, named
 *  `driverlib.lib`, will exist in the `./src/driverlib` folder of the project
 *  and can be referenced by any other project in your workspace via the
 *  Eclipse/CCS macro:
 *  @p(code)
 *      ${workspace_loc:/driverlib_5739/src/driverlib/driverlib.lib}
 *  @p
 */
@Template("./DriverLib.xdt")
metaonly module DriverLib
{
    /*!
     *  ======== BASENAME ========
     *  The base name of the pre-built DriverLib library
     *  
     *  This name controls the name of a pre-built DriverLib library.  For
     *  example, if BASENAME is set to "driverlib" the name of the library
     *  will be driverlib.lib in the ./src/driverlib folder of your project.
     *  
     *  @_nodoc
     */
    const String BASENAME = "driverlib";

    /*!
     *  ======== getFamilyPath ========
     *  Given a device name, return the path to the device family's sources
     *
     *  This function returns a path relative to the DriverLib source
     *  repository containing the DriverLib sources.  For example,
     *  if `deviceName` is `"msp432FR5969"`, this function returns
     *  `"driverlib/msp432FR5xx_6xx"`.
     *
     *  The string returned by this function can be used with `getSrcRepo`
     *  to obtain the absolute path to the sources for the DriverLib family
     *  that supports the device `deviceName`.
     *  
     *  @see #getSrcRepo
     */
    String getFamilyPath(String deviceName);

    /*!
     *  ======== getLibPath ========
     *  Returns the path to a pre-built DriverLib library
     *  
     *  This function is called by the `getLibs()` method provided by the
     *  package containing the DriverLib module.  This `getLibs()` method
     *  is implemented in the `package.xs` file and is used to provide the
     *  path to a pre-built DriverLib library for any project that uses
     *  DriverLib.
     *  
     *  @_nodoc
     */
    String getLibPath();

    /*!
     *  ======== getSrcRepo ========
     *  Given a family path, return the path to it's source repository
     *
     *  This function returns an absolute path to the repository
     *  containing the DriverLib sources for the specified device family.
     *
     *  @see #getFamilyPath
     */
    String getSrcRepo(String familyPath);

    /*!
     *  ======== outputDir ========
     *  The output directory for all generated sources
     *
     *  The default output directory is the `src/` sub-directory of the
     *  directory containing the configuration script used to specify
     *  the peripherals for which to generate code.
     *
     *  This parameter should only be changed when running the
     *  configuration tool in a command line environment.  Integrated
     *  Development Environments (IDEs) often require that generated sources
     *  be placed in specific directories.  Changes to this parameter often
     *  require corresponding changes to the IDE.
     *
     *  @_nodoc
     */
    config String outputDir;
}
