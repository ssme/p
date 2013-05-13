This project is referenced by other projects to gain access to the external gbl
include directory.

Because of this the _gbl_ext_ project does not contain any source files.

To use this project and reference the external gbl include directory add a
reference to this project and attach "/.." after project path variable:

EXTRA_INCVPATH+=$(PROJECT_ROOT__gbl_ext_)/..
