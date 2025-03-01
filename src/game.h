#pragma once;
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "./player.h"
class Game{
  private:
    void render();
    void update();
    void handle_event();
  public:
    Game();
    void run();
  private:
    Player player;
    sf::RenderWindow window;
};

