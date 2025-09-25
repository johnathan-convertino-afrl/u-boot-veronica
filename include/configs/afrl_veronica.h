/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2025 Jay Convertino <johnathan.convertino.1@us.af.mil>
 * 
 * Based on saxon.h
 * 
 * Copyright (C) 2019 roman3017 <rbacik@hotmail.com>
 *
 */

#ifndef __AFRL_VERONICA_CONFIG_H
#define __AFRL_VERONICA_CONFIG_H

#include <linux/sizes.h>

#define CFG_SYS_SDRAM_BASE      0x80000000
#define CFG_SYS_SDRAM_SIZE      0x20000000 //512

#define CFG_SYS_INIT_RAM_ADDR   CFG_SYS_SDRAM_BASE
#define CFG_SYS_INIT_RAM_SIZE   CFG_SYS_SDRAM_SIZE

#include <config_distro_bootcmd.h>

#endif
