#
# Makefile for both static and dynamic PF_RING user libraries
#
#

BUILD_KERNEL=$(shell uname -r)
PF_RING_KERNEL=../../kernel

#
# Search directories
#
INCLUDE   = -I$(PF_RING_KERNEL) -I../libpcap-1.10.1

#
# Installation directories
#
prefix = /usr/local
exec_prefix = ${prefix}
libdir =  ${exec_prefix}/lib
includedir = ${prefix}/include

#
# PF_RING ZC
#
PF_RING_ZC_OBJS  = pfring_zc_dev_e1000.o pfring_zc_dev_e1000e.o pfring_zc_dev_ixgbe.o pfring_zc_dev_ixgbevf.o pfring_zc_dev_igb.o pfring_zc_dev_i40e.o pfring_zc_dev_iavf.o pfring_zc_dev_ice.o pfring_zc_dev_rss.o pfring_zc_dev_sal.o pfring_mod_zc.o pfring_mod_zc_dev.o pfring_mod_zc_spsc.o pfring_zc_cluster.o pfring_zc_mm.o uio_lib.o hugetlb_lib.o numa_lib.o pfring_zc_kvm.o pfring_zc_kvm_utils.o silicom_ts_card.o 

#
# PF_RING FT
#
PF_RING_FT_OBJS  = pfring_ft_flow.o pfring_ft_hash.o pfring_ft_list.o pfring_ft_dpi.o pfring_ft_utils.o pfring_ft_table.o pfring_ft_fragment_hash.o pfring_ft_export.o pfring_ft_zmq.o 

#
# AF_XDP
#
AF_XDP_OBJS  = 

#
# FIBERBLAZE
#
FIBERBLAZE_OBJS = pfring_mod_fiberblaze.o 

#
# NT
#
NT_OBJS  = pfring_mod_nt.o 

#
# Mellanox
#
MLX_OBJS  = pfring_mod_mlx.o 

# nPCAP
#
NPCAP_OBJS  = pfring_mod_timeline.o npcap_extract.o index_match.o npcap_utils.o npcap_compression.o npcap_index.o npcap_timeline.o npcap_storage.o npcap_notify.o npcap_hash_filter.o lzf_c.o lzf_d.o 

#
# nBPF
#
NBPF_HOME = ../nbpf
NBPF_HDR = ${NBPF_HOME}/nbpf.h
NBPF_LIB = ${NBPF_HOME}/libnbpf.a
NBPF_OBJS = `$(AR) t ${NBPF_LIB} | grep -F .o | tr '\n' ' '`

#
# Object files
#
OBJS_MIN = pfring.o pfring_mod.o pfring_utils.o pfring_mod_stack.o pfring_hw_filtering.o pfring_runtime_manager.o \
	   pfring_hw_timestamp.o pfring_mod_pcap.o pfring_device.o ${PF_RING_ZC_OBJS} \
	   ${AF_XDP_OBJS} ${FIBERBLAZE_OBJS} ${NT_OBJS} ${MLX_OBJS} ${NPCAP_OBJS}

OBJS =     ${OBJS_MIN} ${PF_RING_FT_OBJS}

#
# C compiler and flags
#
#
# CROSS_COMPILE=arm-mv5sft-linux-gnueabi-
#
CC        = ${CROSS_COMPILE}gcc
GCC_MAJ_VERSION=$(shell ${CC} -dumpversion | cut -f1 -d.)
WFLAGS    = -Wall
ifeq ($(shell test $(GCC_MAJ_VERSION) -ge 5 && echo 1), 1)
WFLAGS += -Wno-stringop-truncation -Wno-address-of-packed-member
endif

CFLAGS_MIN = -O2  ${WFLAGS} -fPIC ${INCLUDE} -D HAVE_PF_RING_ZC  -D HAVE_FIBERBLAZE -D ENABLE_BPF -D ENABLE_HW_TIMESTAMP -D HAVE_NT -D HAVE_MLX -D HAVE_NPCAP 
CFLAGS += ${CFLAGS_MIN} -D HAVE_PF_RING_FT 

EXTRA_DEPS_MIN = extract_nbpf extract_pfring_zc_lib  extract_nt_lib extract_mlx_lib extract_fiberblaze_lib extract_npcap_lib
EXTRA_DEPS =     ${EXTRA_DEPS_MIN} extract_pfring_ft_lib

LDFLAGS   += -g -shared
SYSLIBS   = -lpthread  -lrt -ldl -lnl-genl-3 -lnl-3  -lm -ldl

# How to make an object file
%.o: %.c %.h Makefile
#	@echo "=*= making object $@ =*="
	${CC} ${CFLAGS} -c $< -o $@

#
# Main targets
#
STATICLIB  = libpfring.a
DYNAMICLIB = libpfring.so
DYNAMICLIB_MIN = libpfring_min.so
TARGETS    = ${STATICLIB} ${DYNAMICLIB} ${DYNAMICLIB_MIN}
RING_H     = $(PF_RING_KERNEL)/linux/pf_ring.h
AR ?= ar
RANLIB ?= ranlib

all: ${TARGETS}

${STATICLIB}: Makefile ${EXTRA_DEPS} ${OBJS} pfring.h ${RING_H}
	@echo "=*= making library $@ =*="
	$(AR) rs $@ ${OBJS} ${NBPF_OBJS}
	$(RANLIB) $@

${DYNAMICLIB}: Makefile ${EXTRA_DEPS} ${OBJS} pfring.h ${RING_H}
	@echo "=*= making library $@ =*="
	${CC} -Wl,-soname,$@.9 ${LDFLAGS} ${OBJS} ${NBPF_OBJS} ${SYSLIBS} -o $@.9.3.0

${DYNAMICLIB_MIN}: Makefile ${EXTRA_DEPS_MIN} ${OBJS_MIN} pfring.h ${RING_H}
	@echo "=*= making library $@ =*="
	${CC} -Wl,-soname,$@.9 ${LDFLAGS} ${OBJS_MIN} ${NBPF_OBJS} ${SYSLIBS} -o $@.9.3.0

extract_pfring_zc_lib:
	ar x libs/libpfring_zc_x86_64.a

extract_pfring_ft_lib:
	ar x libs/libpfring_ft_x86_64_dl.a

extract_nt_lib:
	ar x libs/libpfring_nt_x86_64.a

extract_mlx_lib:
	ar x libs/libpfring_mlx_x86_64.a

extract_fiberblaze_lib:
	ar x libs/libpfring_fiberblaze_x86_64.a

extract_npcap_lib:
	ar x libs/libnpcap_x86_64.a

extract_nbpf: ${NBPF_LIB}
	$(AR) x ${NBPF_LIB}
	cp ${NBPF_HDR} .

copy_if_xdp:
	cp /usr/src/linux-headers-$(BUILD_KERNEL)/include/uapi/linux/if_xdp.h $(PF_RING_KERNEL)/linux/

${NBPF_LIB}:
	$(MAKE) -C ../nbpf

install: install-static install-shared

install-includes:
	mkdir -p $(DESTDIR)$(includedir)
	cp pfring.h pfring_mod_pcap.h pfring_zc.h pfring_ft.h npcap.h ${NBPF_HDR} $(DESTDIR)$(includedir)/

install-static: ${STATICLIB} install-includes
	mkdir -p $(DESTDIR)$(libdir)
	cp ${STATICLIB} $(DESTDIR)$(libdir)/

install-shared:	${DYNAMICLIB} ${DYNAMICLIB_MIN} install-includes
	mkdir -p $(DESTDIR)$(libdir)
	cp ${DYNAMICLIB}.9.3.0 $(DESTDIR)$(libdir)/
	cd $(DESTDIR)$(libdir); ln -sf ${DYNAMICLIB}.9.3.0 ${DYNAMICLIB}.9
	cd $(DESTDIR)$(libdir); ln -sf ${DYNAMICLIB}.9 ${DYNAMICLIB}
	cp ${DYNAMICLIB_MIN}.9.3.0 $(DESTDIR)$(libdir)/
	cd $(DESTDIR)$(libdir); ln -sf ${DYNAMICLIB_MIN}.9.3.0 ${DYNAMICLIB_MIN}.9
	cd $(DESTDIR)$(libdir); ln -sf ${DYNAMICLIB_MIN}.9 ${DYNAMICLIB_MIN}
	-@if test "$(USER)" = "root"; then \
		ldconfig; \
	fi

clean:
	@rm -f ${TARGETS} *.o *~
