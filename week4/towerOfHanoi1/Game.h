#pragma once
#include<vector>
#include "Stack.h"

class Game{
	
	public:
		Game();

		std::vector<Stack> stacks;
		
		int checkTopCube(int);
		void _legalMove(float, float);
    	friend std::ostream& operator<<(std::ostream & os, const Game & game);

		//void showStacks();

		void toh();

		//void _move(unsigned index1, unsigned index2);

};
	


