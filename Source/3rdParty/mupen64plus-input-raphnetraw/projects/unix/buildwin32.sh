#!/bin/bash

HIDHOME=../../../hidapi
UNAME=MINGW32
DESTDIR=./dist_win32

HID_CFLAGS="-I $HIDHOME/hidapi"
HID_LDLIBS="-L $HIDHOME/windows/.libs/ -lhidapi"
TARGETS=all
MAKEFILE=Makefile

make -f $MAKEFILE clean
if [ $? -ne 0 ]; then
	exit 1
fi

make -f $MAKEFILE CROSS_COMPILE=i686-w64-mingw32- UNAME=$UNAME HID_CFLAGS="$HID_CFLAGS" HID_LDLIBS="$HID_LDLIBS" $TARGETS V=1
if [ $? -ne 0 ]; then
	exit 1
fi

mkdir -p $DESTDIR
cp mupen64plus-input-raphnetraw.dll $DESTDIR -v
cp $HIDHOME/windows/.libs/*.dll $DESTDIR -v
