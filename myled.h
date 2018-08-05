#include <linux/module.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/uaccess.h>
#include <linux/io.h>

static dev_t dev;
static struct cdev cdv;
static struct class *cls = NULL;
//bcm2835(cpuの上に他のチップが合わさったcpu) system on chip
//bcm2837 : raspberry pi3 のcpu
//volataile メモリ番地を勝手に変えるなとOSに指定
static volatile u32 *gpio_base = NULL;
static int gpioList[5] = {9, 25, 7, 8, 11};



static void clearLED(void);
static void startLED(int);
static ssize_t led_write(struct file* , const char* , size_t , loff_t* );
static ssize_t sushi_read(struct file* , char* , size_t , loff_t* );
static int __init init_mod(void);
static void __exit cleanup_mod(void);
