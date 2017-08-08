launchy-build
=============

Build files for https://github.com/cohoe/launchy

### Building
You should be able to just run ```make build``` and get some RPMs.

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
