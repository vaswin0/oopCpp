#include<iostream>
#include "Game.h"
#include "Stack.h"

using namespace std;

Game::Game(){

Stack a ;//= Stack();
stacks.push_back(a);//stacks[0].add(Cube(10));
stacks.push_back(a);
stacks.push_back(a);


stacks[0].stack.push_back(Cube(4));
stacks[0].stack.push_back(Cube(3));
stacks[0].stack.push_back(Cube(2));
stacks[0].stack.push_back(Cube(1));

}
int Game::checkTopCube(int k){

	int size = stacks[k].stack.size();

	if (size !=0)
		return stacks[k].stack[size - 1].length_;

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

	int sizej = stacks[j].stack.size();
	int sizei = stacks[i].stack.size();



	if (len_i > len_j && sizej != 0 ) {
		stacks[i].stack.push_back(Cube(len_j));
		stacks[j].stack.pop_back();
		
		//cout<<"moved from" << j << "to" << i << endl;
}

	if (len_j > len_i && sizei != 0) {
		stacks[j].stack.push_back(Cube(len_i));
		stacks[i].stack.pop_back();
		
		//cout<<"moved from" << i << "to" << j << endl;	
		}
}
void Game::toh(){

	while(stacks[2].stack.size() != 4){
	cout<<*this<<endl;

	_legalMove(0,1);
	_legalMove(0,2);
	_legalMove(1,2);



}
}

/*
void Game::_move(
	unsigned start, unsigned end, Stack & source, 
	Stack & target, Stack & spare, unsigned depth) {

	cout << "Planning (depth = " << depth++ << "): Move [" << 

	if (start == end) {
		_moveCube(source, target);
		cout << *this << endl;
}

else {
	
	_move(start + 1, end , source, spare, target, depth);
	_move(start , start , source, target, spare, depth);
	_move(start + 1, end , spare, target,source, depth);

}*/



















  
	
