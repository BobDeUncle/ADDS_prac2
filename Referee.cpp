#include <iostream>

#include "Referee.h"

Referee::Referee() {

};

char Referee::refGame(Human player1, Computer player2) {
  std::cout << player1.makeMove() << std::endl;
  std::cout << player2.makeMove() << std::endl;
  return 'w';
};