#include "Game.hpp"

int main(int argc, char ** argv)
{
  Game game = Game();

  if (game.init())
  {
    while (game.getRunning())
    {
      game.handleEvents();
      game.update();
      game.render();
    }
    game.clean();
  }
}