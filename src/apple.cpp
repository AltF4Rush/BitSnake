#include "apple.h"
#include <cstdlib>

Apple::Apple(){
  init();
}

void Apple :: init(){
  Apple::apple.setSize(sf::Vector2f(8,8));
  Apple::apple.setFillColor(sf::Color::Red);
  Apple::apple.setOutlineColor(sf::Color::Black);
  Apple::apple.setPosition(sf::Vector2f(x,y));
}

void Apple :: random_gen(sf::RenderWindow& window){
  int x = window.getSize().x;
  int y = window.getSize().y;
  
  std::srand(std::time(nullptr));
  pos_x.push_back((rand() % x) + 1.0f);
  pos_y.push_back((rand() % y) + 1.0f);
  
  // if(player.isCollided()){
  //   apple.setPosition(sf::Vector2f(pos_x, pos_y));
  // }
}

void Apple::draw(sf::RenderWindow& window){
  window.draw(apple);  
}
