#include<iostream>
//#include "Cube.h"
//#include "Stack.h"
//using polygon::Cube;
#include "Game.h"
//#include <string>


using namespace std;

int main() {

Game g;

  std::cout << "Initial game state: " << std::endl;
  std::cout << g << std::endl;

  //g.solve(); //recursive
  g.toh();  //iterative

  std::cout << "Final game state: " << std::endl;
  std::cout << g << std::endl;

 

return 0;
}
