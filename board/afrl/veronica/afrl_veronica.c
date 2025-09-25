// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (C) 2025 Jay Convertino <johnathan.convertino.1@us.af.mil>
 * 
 * Based on legoev3.c
 * 
 * Copyright (C) 2016 David Lechner <david@lechnology.com>
 *
 * Based on da850evm.c
 *
 * Copyright (C) 2010 Texas Instruments Incorporated - https://www.ti.com/
 *
 * Based on da830evm.c. Original Copyrights follow:
 *
 * Copyright (C) 2009 Nick Thompson, GE Fanuc, Ltd. <nick.thompson@gefanuc.com>
 * Copyright (C) 2007 Sergey Kubushyn <ksi@koi8.net>
 */

#include <config.h>
#include <env.h>
#include <i2c.h>
#include <init.h>
#include <spi.h>
#include <spi_flash.h>
#include <asm/global_data.h>
#include <asm/io.h>
#include <linux/errno.h>
#include <hwconfig.h>
#include <dm/uclass.h>

DECLARE_GLOBAL_DATA_PTR;

int board_init(void)
{
	return 0;
}

int board_late_init(void)
{
	return 0;
}
