/*
  Keyboard_be_BE.h

  Copyright (c) 2024

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef KEYBOARD_BE_BE_h
#define KEYBOARD_BE_BE_h

#include "HID.h"

#if !defined(_USING_HID)

#warning "Using legacy HID core (non pluggable)"

#else

//================================================================================
//================================================================================
//  Keyboard

// be_BE keys
#define KEY_SUPERSCRIPT_TWO  (136+0x2d)  // °
#define KEY_E_ACUTE          (136+0x1f)  // é
#define KEY_E_GRAVE          (136+0x24)  // è
#define KEY_C_CEDILLA        (136+0x26)  // ç
#define KEY_A_GRAVE          (136+0x27)  // à
#define KEY_CIRCUMFLEX       (136+0x2f)  // ^
#define KEY_U_GRAVE          (136+0x34)  // ù
#define KEY_SECTION_SIGN     (136+0x23)  // §
#define KEY_EURO_SIGN        (136+0x08)  // €

#endif
#endif
