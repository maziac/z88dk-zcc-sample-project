#!/bin/bash

echo "install sjasmplus for the container"
set -x

# Install everything required to compile z88dk
sudo apt install build-essential bison flex libxml2-dev zlib1g-dev m4 ragel re2c dos2unix texinfo texi2html gdb curl perl cpanminus ccache libboost-all-dev libmodern-perl-perl libyaml-perl liblocal-lib-perl libcapture-tiny-perl libpath-tiny-perl libtext-table-perl libdata-hexdump-perl libregexp-common-perl libclone-perl libfile-slurp-perl pkg-config libgmp3-dev

cpanm --local-lib=~/perl5 App::Prove CPU::Z80::Assembler Data::Dump Data::HexDump File::Path List::Uniq Modern::Perl Object::Tiny::RW Regexp::Common Test::Harness Text::Diff Text::Table YAML::Tiny
eval $(perl -I ~/perl5/lib/perl5/ -Mlocal::lib)

# Prepare directory
cd ~

# Fetch z88dk
wget -O z88dk.tgz https://github.com/z88dk/z88dk/releases/download/v2.3/z88dk-src-2.3.tgz
tar xf z88dk.tgz

# Build
cd z88dk
export BUILD_SDCC=1
export BUILD_SDCC_HTTP=1
chmod 777 build.sh
./build.sh

# Add to bash profile
# Add to bash profile
echo 'export PATH=${PATH}:${HOME}/z88dk/bin' >> ~/.bashrc
echo 'export ZCCCFG=${HOME}/z88dk/lib/config' >> ~/.bashrc
echo 'eval $(perl -I ~/perl5/lib/perl5/ -Mlocal::lib)' >> ~/.bashrc
#source ~/.bashrc

# Clean up
rm -rf ~/z88dk.tgz

echo "z88dk is installed"
