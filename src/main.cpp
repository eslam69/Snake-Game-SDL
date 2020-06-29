#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  int Mode;
  std::cout << "Welcome to the Game\n";
  std::cout <<"Modes: \n" ;
  std::cout << "Hit 1 if you want to play the game yourself.\n";
  std::cout << "Hit 2 if you want to watch the computer play the game.\n";
  std::cin >> Mode;

  while (Mode != 1 && Mode != 2) 
  {
    std::cout << "Invalid choice. please chode 1 or 2\n";
    std::cout << "Hit 1 if you want to play the game yourself.\n";
    std::cout << "Hit 2 if you want to watch a simple AI play the game.\n";
    std::cin >> Mode;
  }

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Controller controller;
  Game game(kGridWidth, kGridHeight, Mode); 
  game.Run(controller, renderer, kMsPerFrame);
  std::cout << "Game has terminated successfully!\n";
  std::cout << "Score: " << game.GetScore() << "\n";
  std::cout << "Size: " << game.GetSize() << "\n";
  return 0;
}