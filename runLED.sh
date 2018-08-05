#!/bin/bash

if [ ! $1 ]; then
	echo "No Input Number"
	echo "Please Input Number"
	echo "Example : bash runLED.sh 0"
	wxit 1

else 
	echo $1 > /dev/myled0
fi
