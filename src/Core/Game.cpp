#include "Game.hpp"
#include <iostream>

bool Game::init()
{
  if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
  {
    window = SDL_CreateWindow("GameEngine", 100, 100, 640, 480, 0);

    if (window != nullptr)
    {
      renderer = SDL_CreateRenderer(window, -1, 0);

      if (renderer != nullptr)
      {
        //do stuff
      }
    }
  }
  running = true; 
  return true;
}

void Game::handleEvents()
{
  SDL_Event event;

  while (SDL_PollEvent(&event))
  {
    if (event.type == SDL_QUIT)
    {
      running = false;
    }
  }

  const Uint8* state = SDL_GetKeyboardState(nullptr);

  if (state[SDL_SCANCODE_ESCAPE])
  {
    running = false;
  }
}

void Game::update()
{

}

void Game::render()
{
  SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

  SDL_RenderClear(renderer);

  //draw stuff

  SDL_RenderPresent(renderer);
}

void Game::clean()
{
  SDL_DestroyWindow(window);
  SDL_DestroyRenderer(renderer);
  SDL_Quit();
  running = false;
}