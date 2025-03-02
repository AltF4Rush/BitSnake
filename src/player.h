#pragma once;
#include <SFML/Graphics.hpp>
class Player{
  private:
    float x = 100;
    float y = 100;
    int speed = 2;
  public:
    Player();
    void move();
    void die();
    void eat();
    void init();
    void draw(sf::RenderWindow & window);
    bool isCollided();
  private:
    sf::RectangleShape snake;
};
