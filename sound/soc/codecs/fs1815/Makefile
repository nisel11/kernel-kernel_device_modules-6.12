# MTK include path
subdir-ccflags-y += -I$(DEVICE_MODULES_PATH)/sound/soc/mediatek/audio_dsp
subdir-ccflags-y += -I$(DEVICE_MODULES_PATH)/sound/soc/mediatek/common
subdir-ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/audio_ipi/include
subdir-ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/include
subdir-ccflags-y += -I$(srctree)/drivers/base

# debugging support (also enables trace_printk)
ccflags-y += -Werror
ccflags-y += $(call cc-option,-Wno-date-time,)

# subdir-ccflags-y += -I$(srctree)/sound/soc/mediatek/common
# obj-$(CONFIG_SND_SOC_FS1815) += snd-soc-fs1815.o
# snd-soc-fs1815-objs += fsm_core.o
# snd-soc-fs1815-objs += fs1815.o
# snd-soc-fs1815-objs += fsm_i2c.o
