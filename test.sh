#!/bin/bash

# Create archive
cd ~/Projects/priv/launchy
tar cfz launchy.tar --transform 's,^,launchy-master/,' *
mv -f launchy.tar ~/rpmbuild/SOURCES/master.tar

# Build
cd ~/rpmbuild
rpmbuild -bb SPECS/cohoe-launchy.spec

# Install
sudo dnf erase launchy -y
sudo dnf install RPMS/x86_64/launchy-master-22.fc25.x86_64.rpm -y

# Clear
rm ~/.launchy
rm ~/history.db
rm ~/launchy.db
rm ~/launchy.ini
mkdir ~/.launchy
cp ~/Projects/priv/workstation/roles/launchy/files/launchy.ini ~/.launchy/launchy.ini
ln -s ~/.launchy/launchy.ini ~/launchy.ini

# Run
killall launchy
launchy %u
