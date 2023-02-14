#include<iostream>
//#include "Cube.h"
//#include "Stack.h"
//using polygon::Cube;
#include "Game.h"
//#include <string>


using namespace std;

int main() {

Game g;
/*g.stacks[0].stack.push_back(Cube(5));
g.stacks[1].stack.push_back(Cube(10));
//cout<<g.stacks[1].stack.size()<<endl;
//cout<<g.checkTopCube(1)<<endl;

cout<<g.stacks[0].stack.size()<<endl;
cout<<g.stacks[1].stack.size()<<endl;
g._legalMove(0,1);
cout<<g.stacks[0].stack.size()<<endl;
cout<<g.stacks[1].stack.size()<<endl;
*/
g.toh();

for(int i=0; i < (int) g.stacks[2].stack.size() ; ++i){

	cout<<g.stacks[2].stack[i].length_;//<<endl;

}

return 0;
}
