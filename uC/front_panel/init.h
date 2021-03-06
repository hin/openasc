/*! \file front_panel/init.h 
 *  \brief Initialization routines for the front panel
 *  \ingroup front_panel_group 
 *  \author Mikael Larsmark, SM2WMV
 *  \date 2010-01-25
 *  \code #include "front_panel/init.h" \endcode
 */

//    Copyright (C) 2008  Mikael Larsmark, SM2WMV
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.


#ifndef _INIT_H_
#define _INIT_H_

void init_timer_0(void);
void init_timer_2(void);
void init_ports(void);
void init_usart_computer(void);
void init_usart(void);
void init_backlight(void);

#endif

