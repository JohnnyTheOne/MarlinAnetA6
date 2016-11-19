/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Sanguinololu board pin assignments
 */

#if defined(__AVR_ATmega1284P__)
  #error "Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu."
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "Anet v1.0"
#endif


#define LARGE_FLASH true


#define SANGUINOLOLU_V_1_2
#include "pins_SANGUINOLOLU_11.h"

#undef LED_PIN
#undef FAN_PIN

#define LED_PIN 28
#define FAN_PIN 4
#define BEEPER_PIN 29
 //The encoder and click button
#define BTN_EN1               11
#define BTN_EN2               10
#define BTN_ENC               16

#define LCD_PINS_RS     27 // CS chip select /SS chip slave select
#define LCD_PINS_ENABLE 28 // SID (MOSI)
#define LCD_PINS_D4     30 // SCK (CLK) clock


#define LCD_BACKLIGHT_PIN 17 // LCD backlight LED

