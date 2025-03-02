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

void Player::move() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
        x -= speed;
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
        x += speed;
    } 
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
        y -= speed;
    } 
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
        y += speed;
    }
    
    snake.setPosition({x, y});
}


void Player :: draw(sf::RenderWindow& window){
  window.draw(snake);
}
