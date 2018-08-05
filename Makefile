obj-m:= myled.o

myled.ko: myled.c myled.h
	make -C /usr/src/linux M=`pwd` V=1 modules
clean:
	make -C /usr/src/linux M=`pwd` V=1 clean
