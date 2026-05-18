#include <linux/init.h>
#include <linux/module.h>
#include "tp_common.h"
bool capacitive_keys_enabled;
struct kobject *touchpanel_kobj;
#define TS_ENABLE_FOPS(type)                                                   \
	int tp_common_set_##type##_ops(struct tp_common_ops *ops)              \
	{                                                                      \
		static struct kobj_attribute kattr =                           \
			__ATTR(type, (S_IWUSR | S_IWGRP | S_IRUSR | S_IRGRP), NULL, NULL);         \
		kattr.show = ops->show;                                        \
		kattr.store = ops->store;                                      \
		return sysfs_create_file(touchpanel_kobj, &kattr.attr);        \
	}
TS_ENABLE_FOPS(capacitive_keys)
TS_ENABLE_FOPS(double_tap)
TS_ENABLE_FOPS(reversed_keys)
int tp_common_init(void)
{
	touchpanel_kobj = kobject_create_and_add("touchpanel", NULL);
	if (!touchpanel_kobj)
		return -ENOMEM;
	return 0;
}
