/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file data.h
 * @brief Abstraction of ...
 *
 * This header file provides ...
 *
* @author <MUSTAFA SAYED>
 * @date  <OCTOBER 13 2023>
 *
 */

#ifndef __DATA_H__
#define __DATA_H__

/**
 * @brief Integer to ASCII
 *
 * Integer-to-ASCII needs to convert data from 
 * a standard integer type into an ASCII string.
 *
 * @param data The number to be converted
 * @param ptr Index into pointer array to set value
 * @param base value to write the the locaiton
 *
 * @return uint8_t.
 */
 uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base); 
 
 int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base)



#endif //__DATA_H__
