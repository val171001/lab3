#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>

int simple_init(void) {
	printk(KERN_INFO "Loading module\nDimelo Luian!");
	return 0;
}

void simple_exit(void) {
	printk(KERN_INFO "Remving module\n B*tch don't wear no shoes in my house");
}

module_init(simple_init);
module_exit(simple_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Useless module");
MODULE_AUTHOR("David Valenzuela");
