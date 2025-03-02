#include "./game.h"
#include <SFML/Window/Window.hpp>
#include <optional>

Game :: Game() : window(sf::VideoMode({720,480}), "BitSnake", sf::Style::Default){
  window.setFramerateLimit(60);
  window.setKeyRepeatEnabled(false);
}

void Game :: update(){
  player.move();
  apple.random_gen(window);
}

void Game :: render(){
  window.clear(sf::Color::Black);
  player.draw(window);
  apple.draw(window);
  window.display();  
}

void Game :: handle_event(){
  while(const std::optional event = window.pollEvent()){
    if(event->is<sf::Event::Closed>()){
      window.close();
    }
  }  
}

void Game :: run(){
  while(window.isOpen()){
    render();
    update();
    handle_event();
  }
}
