FROM fedora:28

RUN dnf update -y
RUN dnf install -y rpmdevtools boost-devel desktop-file-utils \
    gcc-c++ qt-devel make

COPY . /opt/launchy

WORKDIR /opt/launchy

CMD rpmbuild -bb SPECS/cohoe-launchy-2.6.spec
