#pragma once
#include<vector>
#include "Stack.h"

class Game{
	
	public:
		Game();

		std::vector<Stack> stacks;
		
		int checkTopCube(int);
		void _legalMove(float, float);

		//void showStacks();

		void toh();

};
	


