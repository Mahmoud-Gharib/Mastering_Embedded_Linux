#include<linux/module.h>
#include<linux/init.h>

/*Meta Data*/
MODULE_LICENSE    ("GPL");
MODULE_AUTHOR     ("Mahmoud Gharib");
MODULE_DESCRIPTION("Test Driver");

static int __init ModuleInit(void)
{
   printk("Hello , Kernel \n");
   return 0;
}

static void __exit ModuleExit(void)
{
   printk("GoodBye , Kernel \n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
