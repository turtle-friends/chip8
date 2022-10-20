#include <iostream>

#include "Emulator.h"

Emulator::Emulator()
{
  Setup();
}

Emulator::~Emulator()
{
  Terminate();
}

bool Emulator::Setup()
{
  bool failed = false;

  if (SDL_Init(SDL_INIT_VIDEO) < 0) {

    std::cerr << "SDL: Could not initialize! SDL_Error: " << SDL_GetError()
              << std::endl;

    failed = true;
  }

  if (!(m_window =
      SDL_CreateWindow("Chip 8", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                       kWidth, kHeight, SDL_WINDOW_SHOWN))
     ) {
      std::cerr << "SDL: Unable to create window" << SDL_GetError()
                << std::endl;

      failed = true;
  }

  if (!(m_screen = SDL_GetWindowSurface(m_window))) {
      std::cerr << "SDL: Unable to setup screen" << SDL_GetError()
                << std::endl;

      failed = true;

  }

  SDL_FillRect(m_screen, NULL, SDL_MapRGB(m_screen->format, 0xFF, 0xFF, 0xFF));
  SDL_UpdateWindowSurface(m_window);

  return failed;

}

void Emulator::ShowWindow()
{
  while (!m_quit) {
    while (SDL_PollEvent(&m_evt)) {
      if (m_evt.type == SDL_QUIT)
        m_quit = true;
    }
  }
}


void Emulator::Terminate()
{
  SDL_DestroyWindow(m_window);
  SDL_Quit();
}