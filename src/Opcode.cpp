/**
 * @file Opcode.cpp
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
 * Contain the Chip8's Basic Instructions.
 */
 
#include <iostream>
#include "Opcode.h"


void Opcode::Add(uint8_t& vx, uint8_t value)
{
	vx = vx + value;
}

void Opcode::Clear()
{
	
}

void Opcode::Draw(uint8_t vx, uint8_t vy, uint8_t data)
{

}

void Opcode::Jump(uint16_t address)
{

}

void Opcode::Load(uint8_t& vx, uint8_t address)
{

}

std::array<std::string, kTotal> Opcode::Instructions()
{
	return {""};
}

Func Opcode::Decode(std::string vx)
{
	return [](void* data){};
}