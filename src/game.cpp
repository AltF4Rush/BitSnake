#include "./game.h"
#include <optional>

Game :: Game() : window(sf::VideoMode({720,480}), "BitSnake", sf::Style::Default){
  window.setFramerateLimit(60);
}


void Game :: render(){
  window.clear(sf::Color::Black);
  window.display();  
}

void Game :: update(){
  
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
    handle_event();
  }
}
