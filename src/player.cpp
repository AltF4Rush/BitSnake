#include "./player.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Keyboard.hpp>

Player::Player(){
  init();
}

void Player :: init(){
  Player::snake.setSize(sf::Vector2f(8,8));
  Player::snake.setFillColor(sf::Color::Green);
  Player::snake.setOutlineColor(sf::Color::Black);
  Player::snake.setPosition(sf::Vector2f(x,y));
}

void Player :: move(){
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)){
    snake.move(sf::Vector2f(x+=speed, 0));
  }
  else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)){
    snake.move(sf::Vector2f(0, y+=speed));
  }
  else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)){
    snake.move(sf::Vector2f(0, y-=speed));
  }
  else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)){
    snake.move(sf::Vector2f(x-=speed, 0));
  }
  else{
    snake.move(sf::Vector2f(0,0));
  }
}

void Player :: draw(sf::RenderWindow& window){
  window.draw(snake);
}
