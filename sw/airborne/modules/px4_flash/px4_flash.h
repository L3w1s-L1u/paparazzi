/*
 * Copyright (C) Kevin van Hecke
 *
 * This file is part of paparazzi
 *
 * paparazzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * paparazzi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with paparazzi; see the file COPYING.  If not, see
 * <http://www.gnu.org/licenses/>.
 */
/**
 * @file "modules/px4_flash/px4_flash.h"
 * @author Kevin van Hecke
 * Enables to flashes the px4 FBW and AP through the original px4 bootloader.
 * Assumes the flash port on the Pixhawk is configured as the usb.
 */

#ifndef PX4_FLASH_H
#define PX4_FLASH_H

extern void px4flash_init(void);
extern void px4flash_event(void);

#endif

