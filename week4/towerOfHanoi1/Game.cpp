#include "Game.h"
#include "Stack.h"

Game::Game(){

Stack a ;//= Stack();
stacks.push_back(a);//stacks[0].add(Cube(10));


}
int Game::checkTopCube(int k){

	int size = stacks[k].stack.size();

	if (size !=0)
		return stacks[k].stack[size - 1].length_;

	else
		 return 0;

	}


	

		
		
void Game::_legalMove(int i, int j) {
	
	int len_i = checkTopCube(i);
	int len_j = checkTopCube(j);

	if (len_i > len_j){
		


	



















  
	
