#include <asm/uaccess.h>
#include <linux/init.h>
#include <linux/cdev.h>
#include <linux/slab.h>

#define MAJORNO 300
#define MINORNO  0
#define CHAR_DEV_NAME "char_dri"
#define MAX_LENGTH 4000
#define SUCCESS 0

static char char_device_buf[MAX_LENGTH];
struct cdev *char_dri;
dev_t mydev;
int count=1,inuse=0;

static int __init char_dev_init(void)
{
//      int ret;
        mydev = MKDEV(MAJORNO,MINORNO);                             // step 1 to create major and minor no.==mydev
        register_chrdev_region(mydev,count,CHAR_DEV_NAME);          // step 2:create one name for character driverv  and `
        return 0;
}

static void __exit char_dev_exit(void)
{

         cdev_del(char_dri);
         unregister_chrdev_region(mydev,1);
         printk(KERN_INFO "\n Driver unregistered \n");
}

module_init(char_dev_init);
module_exit(char_dev_exit);

MODULE_AUTHOR("Johny");
MODULE_DESCRIPTION("Static Character Device Driver");
MODULE_LICENSE("GPL");
~                       
