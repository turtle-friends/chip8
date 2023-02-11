/**
 * @file Emulator.cpp
 *
 * @author Jasmine Aburialeh
 * @author Junior Betancourt
 * @author Richard Larancuente
 * @author William Abreu
 *
 * @section LICENSE
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version
 *
 * @section DESCRIPTION
 *
 * It is the memory of the computer that read and store data
 * machine code
 *
 */

#include "Ram.h"


void Ram::SetAddress(uint8_t data, uint8_t location)
{
    m_buf[location] = data; 
}

uint8_t Ram::GetByte(uint8_t location)
{
    return m_buf[location];
}