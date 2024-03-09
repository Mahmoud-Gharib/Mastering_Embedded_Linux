#include<linux/module.h>
#include<linux/init.h>
#include<linux/moduleparam.h>

int count = 0;

/*Meta Data*/
MODULE_LICENSE    ("GPL");
MODULE_AUTHOR     ("Mahmoud Gharib");
MODULE_DESCRIPTION("Test Driver");

module_param(count , int , 0664);
MODULE_PARM_DESC(count, "Integer Value");

static int __init ModuleInit(void)
{
   int i = 0;
   for(i = 0 ; i <  count ; i++)
   	printk("Hello , Kernel \n");
   return 0;
}

static void __exit ModuleExit(void)
{
   int i = 0;
   for(i = 0 ; i <  count ; i++)
       printk("GoodBye , Kernel \n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
