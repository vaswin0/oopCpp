#include<iostream>
#include "Game.h"
#include "Stack.h"

using namespace std;

Game::Game(){

Stack a ;//= Stack();
stacks.push_back(a);//stacks[0].add(Cube(10));
stacks.push_back(a);
stacks.push_back(a);


stacks[0].push_back(Cube(4));
stacks[0].push_back(Cube(3));
stacks[0].push_back(Cube(2));
stacks[0].push_back(Cube(1));

}
int Game::checkTopCube(int k){

	int size = stacks[k].size();

	if (size !=0)
		return stacks[k].peekTop().getLength();

	else
		 return 100;

	}


	
std::ostream& operator<<(std::ostream & os, const Game & game) {
  for (unsigned i = 0; i < game.stacks.size(); i++) {
    os << "Stack[" << i << "]: " << game.stacks[i];
  }
  return os;
}
		
		
void Game::_legalMove(float i, float j) {
	
	float len_i = checkTopCube(i);
	float len_j = checkTopCube(j);

	cout<<len_i<<","<< len_j<<endl;

	int sizej = stacks[j].size();
	int sizei = stacks[i].size();



	if (len_i > len_j && sizej != 0 ) {
		stacks[i].push_back(Cube(len_j));
		stacks[j].pop_back();
		
		//cout<<"moved from" << j << "to" << i << endl;
}

	if (len_j > len_i && sizei != 0) {
		stacks[j].push_back(Cube(len_i));
		stacks[i].pop_back();
		
		//cout<<"moved from" << i << "to" << j << endl;	
		}
}
void Game::toh(){

	while(stacks[2].size() != 4){
	cout<<*this<<endl;

	_legalMove(0,1);
	_legalMove(0,2);
	_legalMove(1,2);



}
}

void Game::_moveCube(Stack & s1, Stack & s2) {
  Cube cube = s1.removeTop();
  s2.push_back(cube);
}


void Game::_move(
	unsigned start, unsigned end, Stack & source, 
	Stack & target, Stack & spare, unsigned depth) {

  cout << "Planning (depth=" << depth++ << "): Move [" << start << ".." << end << "] from Stack@" << &source << " -> Stack@" << &target << ", Spare@" << &spare << "]" << endl; 

	if (start == end) {
		_moveCube(source, target);
		cout << *this << endl;
}

else {
	
	_move(start + 1, end , source, spare, target, depth);
	_move(start , start , source, target, spare, depth);
	_move(start + 1, end , spare, target,source, depth);

}
}

void Game::solve() {
  _move(
    0, stacks[0].size() - 1,  //< Move the entire set of cubes, [0 .. size-1]
    stacks[0], //< Source stack is [0]
    stacks[2], //< Target stack is [2]
    stacks[1], //< Spare stack is [1]
    0   //< Initial depth (for printouts only) is 0
  );
}
















  
	
