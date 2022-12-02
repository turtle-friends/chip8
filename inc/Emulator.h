#pragma once

#include <SDL2/SDL.h>

class Emulator {
public:
	Emulator();
	~Emulator();

	bool Setup();
	void ShowWindow();
	void Terminate();
private:
  static const uint16_t kHeight = 300;
  static const uint16_t kWidth  = 400;

	SDL_Surface* m_background = nullptr;
  SDL_Event m_evt;
	bool m_quit = false;
	SDL_Surface* m_screen = nullptr;
	SDL_Window* m_window = nullptr;
};