#include "./game.h"
#include <optional>

Game :: Game() : window(sf::VideoMode({720,480}), "BitSnake", sf::Style::Default){
  window.setFramerateLimit(60);
}

void Game :: update(){
  player.move();
}

void Game :: render(){
  window.clear(sf::Color::Black);
  player.draw(window);
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
