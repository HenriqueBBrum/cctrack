all: install

add: veryclean
	\/bin/rm -rf /usr/src/ice-zc-2.3.10.1
	mkdir -p /usr/src/ice-zc-2.3.10.1/
	cp ice/ice-2.3.10-zc/ddp/ice-*.pkg /usr/src/ice-zc-2.3.10.1/ice.pkg
	cp ice/ice-2.3.10-zc/scripts/ddp_install /usr/src/ice-zc-2.3.10.1/
	cp ice/ice-2.3.10-zc/scripts/check_aux_bus /usr/src/ice-zc-2.3.10.1/
	cd ice/ice-2.3.10-zc/src/ ; make clean; cp -r * /usr/src/ice-zc-2.3.10.1/
	cp ../../kernel/linux/pf_ring.h /usr/src/ice-zc-2.3.10.1/
	sed -i -e 's/ice\.o/ice_zc.o/' -e 's/ice-/ice_zc-/' /usr/src/ice-zc-2.3.10.1/Kbuild
	mv /usr/src/ice-zc-2.3.10.1/Kbuild /usr/src/ice-zc-2.3.10.1/Makefile
	sed -i '1iPF_RING_PATH=\/usr\/src\/pfring-9.3.0.1' /usr/src/ice-zc-2.3.10.1/Makefile
	sed -i -e 's/#HAVE_PF_RING_DKMS //' /usr/src/ice-zc-2.3.10.1/common.mk
	cp dkms.conf.ice /usr/src/ice-zc-2.3.10.1/dkms.conf 
	dkms add -m ice-zc -v 2.3.10.1

build: add
	dkms build -m ice-zc -v 2.3.10.1

install: build
	dkms install --force -m ice-zc -v 2.3.10.1

deb: add add_deb install
	dkms mkdeb -m ice-zc -v 2.3.10.1 --source-only

rpm: add add_rpm install
	dkms mkrpm -m ice-zc -v 2.3.10.1 --source-only

add_rpm:
	cp -f zc.spec /usr/src/ice-zc-2.3.10.1/ice-zc-dkms-mkrpm.spec

add_deb:
	cp -r zc-dkms-mkdeb /usr/src/ice-zc-2.3.10.1/ice-zc-dkms-mkdeb
	-cd  /usr/src/ice-zc-2.3.10.1/ice-zc-dkms-mkdeb ; find . -type d -name ".git" -exec rm -fr {} \;

remove:
	-dkms remove -m ice-zc -v 2.3.10.1 --all
	\/bin/rm -f /lib/modules/*/weak-updates/ice*ko
	\/bin/rm -f /lib/modules/*/extra/ice*ko
	\/bin/rm -rf /var/lib/dkms/ice-zc

veryclean: remove
	\/bin/rm -fr /usr/src/ice-zc-2.3.10.1
	
