
all: build install clean run

build:
	# Prep
	#cd ~/Projects/priv/cohoe-launchy && tar cfz launchy.tar --transform 's,^,launchy-2.6/,' *
	#mv -f ~/Projects/priv/cohoe-launchy/launchy.tar ~/rpmbuild/SOURCES/2.6.tar
	spectool -C ~/rpmbuild/SOURCES --get-files --sources --patches SPECS/cohoe-launchy-2.6.spec
	rpmbuild -bb SPECS/cohoe-launchy-2.6.spec

install:
	sudo dnf erase launchy -y
	sudo dnf install RPMS/x86_64/launchy-2.6-01.fc25.x86_64.rpm -y

clean:
	rm -rf ~/.launchy
	rm -f ~/history.db
	rm -f ~/launchy.db
	rm -f ~/launchy.ini
	mkdir ~/.launchy
	cp ~/Projects/priv/workstation/roles/launchy/files/launchy.ini ~/.launchy/launchy.ini
	ln -s ~/.launchy/launchy.ini ~/launchy.ini
	rm -f ~/rpmbuild/SOURCES/2.6.tar

run:
	killall -q launchy || true
	launchy %u
