#!/bin/bash

if [ -e /dev/myled0 ] ; then
    sudo rmmod myled
    echo "Remove myled device driver"
fi


if [ -e myled.ko ] ; then
    sudo make clean
fi

make -j1
sudo insmod myled.ko
#777は気分
sudo chmod 777 /dev/myled0
