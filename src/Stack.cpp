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
 * The stack is a memory block that is responsible for keeping
 * track of instructions
 *
 */

#include "Stack.h"

void Stack::Push(uint16_t data)
{
    m_top++;
    m_buf[m_top] = data;
}

uint16_t Stack::Pop()
{
    m_top--;
    return m_buf[m_top + 1]; 
}