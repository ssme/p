# This is an automatically generated record.
# The area between QNX Internal Start and QNX Internal End is controlled by
# the QNX IDE properties.

ifndef QCONFIG
QCONFIG=qconfig.mk
endif
include $(QCONFIG)

#===== USEFILE - the file containing the usage message for the application. 
USEFILE=$(PROJECT_ROOT)/src/Usemsg

#===== EXTRA_SRCVPATH - a space-separated list of directories to search for source files.
EXTRA_SRCVPATH+=$(PROJECT_ROOT)/src $(PROJECT_ROOT)/man

#===== POST_BUILD - extra steps to do after building the image.
define POST_BUILD
phabbind $(BUILDNAME) $(PHAB_MODULES)
endef

#===== EXTRA_INCVPATH - a space-separated list of directories to search for include files.
EXTRA_INCVPATH+=$(PROJECT_ROOT)/common/inc  \
	$(PROJECT_ROOT)/sync/inc $(PROJECT_ROOT)/man

#===== EXTRA_LIBVPATH - a space-separated list of directories to search for library files.
EXTRA_LIBVPATH+=D:/pro/workspace/p/sync/src/axnclientif/$(CPU)  \
	$(QNX_TARGET)/$(CPU)$(VARIANT)/lib  \
	$(PROJECT_ROOT_rfc)/$(CPU)/$(patsubst o%,a%,$(notdir $(CURDIR)))

#===== LIBS - a space-separated list of library items to be included in the link.
LIBS+=expat axnclientif

#===== CCFLAGS - add the flags to the C compiler command line. 
CCFLAGS+=-DAXN_NEUTRINO -DXCU_XCSSTYLE -lang-c++ -lstd-c++

#===== LDFLAGS - add the flags to the linker command line.
LDFLAGS+=-Wl,-E

include $(MKFILES_ROOT)/qmacros.mk
ifndef QNX_INTERNAL
QNX_INTERNAL=$(PROJECT_ROOT)/.qnx_internal.mk
endif
include $(QNX_INTERNAL)

postbuild:
	$(POST_BUILD)

include $(MKFILES_ROOT)/qtargets.mk
OPTIMIZE_TYPE_g=none
OPTIMIZE_TYPE=$(OPTIMIZE_TYPE_$(filter g, $(VARIANTS)))
