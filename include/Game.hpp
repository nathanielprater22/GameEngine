#include <SDL2/SDL.h>

class Game
{
private:
  SDL_Window* window;
  SDL_Renderer* renderer;

  bool running;
public:
  bool init();

  void handleEvents();
  void update();
  void render();

  inline bool getRunning() const { return running; } 

  void clean();
};