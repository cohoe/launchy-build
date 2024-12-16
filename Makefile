
all: build install clean

build:
	# Prep
	spectool -C ~/rpmbuild/SOURCES --get-files --sources --patches SPECS/launchy.spec
	rpmbuild -bb SPECS/launchy.spec

install:
	dnf remove launchy -y
	dnf install ~/rpmbuild/RPMS/x86_64/launchy-2*.x86_64.rpm -y

clean:
	rm -rf ~/.launchy
	rm -f ~/history.db
	rm -f ~/launchy.db
	rm -f ~/launchy.ini
	mkdir ~/.launchy
	rm -f ~/rpmbuild/SOURCES/*.tar
