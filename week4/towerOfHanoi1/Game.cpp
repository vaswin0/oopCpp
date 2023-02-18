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


	

		
		
void Game::_legalMove(float i, float j) {
	
	float len_i = checkTopCube(i);
	float len_j = checkTopCube(j);

	cout<<len_i<<","<< len_j<<endl;

	int sizej = stacks[j].stack.size();
	int sizei = stacks[i].stack.size();



	if (len_i > len_j && sizej != 0 ) {
		stacks[i].stack.push_back(Cube(len_j));
		stacks[j].stack.pop_back();
		
		cout<<"moved from" << j << "to" << i << endl;
}

	if (len_j > len_i && sizei != 0) {
		stacks[j].stack.push_back(Cube(len_i));
		stacks[i].stack.pop_back();
		
		cout<<"moved from" << i << "to" << j << endl;	
		}

	else cout<<"not a legal move"<< endl;


	
}


	

void Game::toh(){

	while(stacks[2].stack.size() != 4){

	_legalMove(0,1);
	_legalMove(0,2);
	_legalMove(1,2);



}
}

















  
	
