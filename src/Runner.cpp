/**
 * @file Runner.cpp
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
 * Runs the Chip8 emulator
 *
 */


#include "Emulator.h"

int main(int argc, char* args[])
{
	Emulator emulator;

	emulator.Setup();
	emulator.ShowWindow();
	emulator.Terminate();
}