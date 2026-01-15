/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

#ifndef __LPM_PLAT_SUSPEND_H__
#define __LPM_PLAT_SUSPEND_H__

int lpm_model_suspend_init(void);

extern void gpio_dump_regs(void);
extern void pll_if_on(void);
extern void subsys_if_on(void);

u32 get_sys_lpm_sleep_time(int index);
u32 get_wakeup_R12_index(void);
char *get_wakeup_R12_source(void);

#endif
