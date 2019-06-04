
all: build install clean

build:
	# Prep
	spectool -C ~/rpmbuild/SOURCES --get-files --sources --patches SPECS/cohoe-launchy-2.6.spec
	rpmbuild -bb SPECS/cohoe-launchy-2.6.spec

install:
	dnf erase launchy -y
	dnf install ~/rpmbuild/RPMS/x86_64/launchy-2.6-*.x86_64.rpm -y

clean:
	rm -rf ~/.launchy
	rm -f ~/history.db
	rm -f ~/launchy.db
	rm -f ~/launchy.ini
	mkdir ~/.launchy
	rm -f ~/rpmbuild/SOURCES/2.6.tar
