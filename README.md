launchy-build
=============

Build files for https://github.com/cohoe/launchy

### Building
Update the base image tag in `Dockerfile` and bump the release/changelog in `SPECS/launchy.spec` (TWO PLACES IN FILE!).

```
~ # docker build -t launchy .
~ # docker run --name launchy -it launchy make
~ # docker cp launchy:/root/rpmbuild/RPMS/x86_64/ /tmp
~ # ls /tmp/x86_64
launchy-2.6-07.fc30.x86_64.rpm            launchy-debugsource-2.6-07.fc30.x86_64.rpm
launchy-debuginfo-2.6-07.fc30.x86_64.rpm  launchy-devel-2.6-07.fc30.x86_64.rpm
```

### Consuming
```
[grantcohoe_launchy]
name=grantcohoe_launchy
baseurl=https://packagecloud.io/grantcohoe/launchy/fedora/$releasever/$basearch
repo_gpgcheck=1
gpgcheck=0
enabled=1
gpgkey=https://packagecloud.io/grantcohoe/launchy/gpgkey
sslverify=1
sslcacert=/etc/pki/tls/certs/ca-bundle.crt
metadata_expire=300
```
