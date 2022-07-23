FROM fedora:36

RUN dnf update -y
RUN dnf install -y rpmdevtools boost-devel desktop-file-utils \
    gcc-c++ qt-devel make

RUN mkdir -p /root/rpmbuild/SOURCES

COPY . /opt/launchy

WORKDIR /opt/launchy

#RUN make
