/* trackuino copyright (C) 2010  EA5HAV Javi
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifdef AVR
#ifndef __SENSORS_AVR_H__
#define __SENSORS_AVR_H__

#include "config.h"
#include <Wire.h>

#ifdef TRACKSOAR_12
	#include "./SparkFunBME280.h"
 	#pragma message("Version 1.2")
#else
	#include "Adafruit_BMP085.h"
	#include "SHT2x.h"
  	#pragma message("Version < 1.2")
#endif

void sensors_setup();
float sensors_temperature_c();
int32_t sensors_pressure_hpa();
float sensors_humidity_rh();
void dump_sensors();

#endif // ifndef __SENSORS_AVR_H__
#endif // ifdef AVR
