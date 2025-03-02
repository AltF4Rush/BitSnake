#pragma once 
#include <ctime>
#include "./player.h"
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <vector>

class Apple{
  public:
    void get_eaten();
    void random_gen(sf::RenderWindow& window);
    void draw(sf::RenderWindow& window);
    void init();
    Apple();
  private:
    float x = 400;
    float y = 130;
    sf::RectangleShape apple;
    std::vector<float> pos_x , pos_y;
  private:
    Player player;
};
