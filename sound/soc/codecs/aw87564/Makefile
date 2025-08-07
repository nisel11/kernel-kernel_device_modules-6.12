# MTK include path
subdir-ccflags-y += -I$(DEVICE_MODULES_PATH)/sound/soc/mediatek/audio_dsp
subdir-ccflags-y += -I$(DEVICE_MODULES_PATH)/sound/soc/mediatek/common
subdir-ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/audio_ipi/include
subdir-ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/include
subdir-ccflags-y += -I$(srctree)/drivers/base

# debugging support (also enables trace_printk)
ccflags-y += -Werror
ccflags-y += $(call cc-option,-Wno-date-time,)

#snd-soc-aw883xx-objs:= aw883xx.o aw_monitor.o aw_bin_parse.o aw_device.o aw_init.o aw_calib.o aw_spin.o

#obj-$(CONFIG_SND_SOC_AW883XX) += snd-soc-aw883xx.o

# subdir-ccflags-y += -I$(srctree)/sound/soc/mediatek/common

# ccflags-y += -I$(DEVICE_MODULES_PATH)/sound/soc/codecs/aw87564
# ccflags-y += -Werror
# ccflags-y += $(call cc-option,-Wno-date-time,)

# snd-soc-aw87564-objs += aw87xxx.o
# snd-soc-aw87564-objs += aw87xxx_acf_bin.o
# snd-soc-aw87564-objs += aw87xxx_bin_parse.o
# snd-soc-aw87564-objs += aw87xxx_device.o
# snd-soc-aw87564-objs += aw87xxx_dsp.o
# snd-soc-aw87564-objs += aw87xxx_monitor.o

# obj-$(CONFIG_SND_SOC_AW87564)+= snd-soc-aw87564.o
