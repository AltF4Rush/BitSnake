#pragma once;
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Game{
  private:
    void render();
    void update();
    void handle_event();
  public:
    Game();
    void run();
  private:
    sf::RenderWindow window;
};

