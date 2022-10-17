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
 * Chip8 emulator that uses SDL
 *
 */

#include <iostream>

#include <SDL2/SDL.h>

int main(int argc, char* args[])
{
  const uint16_t kWidth  = 400;
  const uint16_t kHeight = 300;

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {

    std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError()
              << std::endl;

    return -1;
  }

  SDL_Window* window =
      SDL_CreateWindow("Chip 8", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                       kWidth, kHeight, SDL_WINDOW_SHOWN);
  SDL_Surface* screen = SDL_GetWindowSurface(window);

  SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0xFF, 0xFF, 0xFF));

  SDL_UpdateWindowSurface(window);

  SDL_Event e;
  bool quit = false;

  while (!quit) {
    while (SDL_PollEvent(&e)) {
      if (e.type == SDL_QUIT)
        quit = true;
    }
  }

  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}