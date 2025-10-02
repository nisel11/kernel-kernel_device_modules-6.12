# SPDX-License-Identifier: GPL-2.0
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/include/mt-plat

ifneq ($(filter y m, $(CONFIG_MTK_MME_SUPPORT)),)
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/mme
endif

obj-$(CONFIG_DRM_PANEL_NT37801_MSYNC2_RTE) += panel-nt37801-msync2-rte.o
obj-$(CONFIG_DRM_PANEL_BOE_TV106C9MLL0) += ocp2138_i2c.o
obj-$(CONFIG_DRM_PANEL_MAXIAM_MAX96851) += panel-maxiam-max96851.o
obj-$(CONFIG_DRM_PANEL_BOE_ICNL9922C_672_FHD_DPHY_VDO_120HZ) += dsi-panel-mot-boe-icnl9922c-672-fhd-dphy-vdo-120hz.o
obj-$(CONFIG_DRM_PANEL_DIJING_FT8725_672_FHD_DPHY_VDO_120HZ) += dsi-panel-mot-dijing-ft8725-672-fhd-dphy-vdo-120hz.o
obj-$(CONFIG_DRM_PANEL_TM_TD4376_672_FHD_DPHY_VDO_120HZ) += dsi-panel-mot-tm-td4376-672-fhd-dphy-vdo-120hz.o
obj-$(CONFIG_DRM_PANEL_TXD_ILI7807S_672_FHD_DPHY_VDO_120HZ) += dsi-panel-mot-txd-ili7807s-672-fhd-dphy-vdo-120hz.o
obj-$(CONFIG_DRM_PANEL_CSOT_FT8725_650_FHDP_DPHY_VDO_120HZ_HBL) += dsi-panel-mot-csot-ft8725-650-fhdp-dphy-vdo-120hz-hbl.o
obj-$(CONFIG_DRM_PANEL_TM_NT36672C_650_FHDP_DPHY_VDO_120HZ_HBL) += dsi-panel-mot-tm-nt36672c-650-fhdp-dphy-vdo-120hz-hbl.o
obj-$(CONFIG_DRM_PANEL_TXD_ILI7807S_650_FHDP_DPHY_VDO_120HZ_HBL) += dsi-panel-mot-txd-ili7807s-650-fhdp-dphy-vdo-120hz-hbl.o

ccflags-$(CONFIG_DRM_MEDIATEK_PANEL) += -I$(DEVICE_MODULES_PATH)/drivers/leds/
