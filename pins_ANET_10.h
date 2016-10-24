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

#define BOARD_NAME "Anet"

#if defined(__AVR_ATmega1284P__)
#define LARGE_FLASH true
#endif

#define SANGUINOLOLU_V_1_2
#include "pins_SANGUINOLOLU_11.h"

#undef LED_PIN
#undef FAN_PIN

#define LED_PIN -1
#define FAN_PIN 4

#ifdef ENABLED(ULTRA_LCD) && ENABLED(NEWPANEL)

	#ifdef DOGLCD
    // !DOGLCD - Standard Hitachi LCD controller
    #undef LCD_PINS_RS          
    #undef LCD_PINS_ENABLE     

    #define LCD_PINS_RS         27
    #define LCD_PINS_ENABLE     30
    //#define LCD_PINS_RW         28
	
	#else

 //encoder pins
#undef BTN_EN1
#undef BTN_EN2
#undef BTN_ENC

#define BTN_EN1	-1
#define BTN_EN2	-1
#define BTN_ENC	-1

 //lcd pins
#undef LCD_PINS_RS
#undef LCD_PINS_ENABLE
#undef LCD_PINS_D4
#undef LCD_PINS_D5
#undef LCD_PINS_D6
#undef LCD_PINS_D7

#define LCD_PINS_RS			28
#define LCD_PINS_ENABLE		29
#define LCD_PINS_D4			10
#define LCD_PINS_D5			11
#define LCD_PINS_D6			16
#define LCD_PINS_D7			17

	#endif
	
	//#if ENABLED(ADC_KEYPAD)
	//	#define ADC_KEYPAD_PIN 1
	//#endif

#endif


//our pin for debugging.
//#define DEBUG_PIN 0

//our RS485 pins
//#define TX_ENABLE_PIN 12
//#define RX_ENABLE_PIN 13

