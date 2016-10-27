/*! \file xbee/main.h 
 *  \defgroup xbee_group XBEE interface version 1
 *  \brief Main file of the XBEE 
 *  \author Mikael Larsmark, SM2WMV
 *  \date 2016-10-12
 *  \code #include "xbee/main.h" \endcode
 */
//    Copyright (C) 2016  Mikael Larsmark, SM2WMV
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


#ifndef _MAIN_H_
#define _MAIN_H_

/*!Structure of the driver output status. It contains information of which address
 * an output was activated/deactivated from last and also it's status */
typedef struct {
	//! The address of the device that last changed the status of the output */
	unsigned char driver_output_owner[20];	//The address of the last device to change the status
	//! The type of message that activated the output
	unsigned char driver_output_type[20];	
	//! The address of the device that last changed the status of the output */
	unsigned char driver_output_new_owner[20];	//The address of the last device to change the status
	//! The type of message that activated the output
	unsigned char driver_output_new_type[20];
	//! The state of the driver output if it's high or low
	unsigned long driver_output_state;
	//! Flags
	unsigned char flags;
	//! PTT interlock input, byte1 = input 1, byte2 = input 2...byte7 = input 7
	//! 0 = not active, If not 0 then the value does correspond to the address of the openASC box, so 5 for example
	//! means address 5 corresponds to that ptt interlock input
	unsigned char ptt_interlock_input[7];
} driver_status_struct;

#endif
