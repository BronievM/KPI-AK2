
ifneq ($(KERNELRELEASE),)
include Kbuild
else
# normal makefile
KDIR ?= /lib/modules/`uname -r`/build
# strip "ccache " from CROSS_COMPILE for binutils
BINUTILS = $(subst ccache ,,$(CROSS_COMPILE))

default:
	$(MAKE) -C $(KDIR) M=$$PWD
	cp hello.ko hello.ko.unstripped
	$(BINUTILS)strip -g hello.ko   # strip only debugging info
clean:
	$(MAKE) -C $(KDIR) M=$$PWD clean

%.s %.i: %.c
	$(MAKE) -C $(KDIR) M=$$PWD $@
endif
