#include<iostream>
//#include "Cube.h"
//#include "Stack.h"
//using polygon::Cube;
#include "Game.h"
//#include <string>


using namespace std;

int main() {

Game g;
g.stacks[0].stack.push_back(Cube(10));
cout<<g.stacks[0].stack.size()<<endl;
cout<<g.checkTopCube(0)<<endl;

cout<<g.stacks[0].stack[0].length_<<endl;

return 0;
}
