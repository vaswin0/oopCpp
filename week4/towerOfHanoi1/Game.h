#pragma once
#include<vector>
#include "Stack.h"

class Game{
	
	public:
		Game();

		std::vector<Stack> stacks;
		void solveRecur();
		void solve();
		int checkTopCube(int);
		void _legalMove(float, float);
    	friend std::ostream& operator<<(std::ostream & os, const Game & game);

		//void showStacks();

		void toh();

		void _move(unsigned start, unsigned end, Stack & source, Stack & target, Stack & spare, unsigned depth);

		//void _move(unsigned index1, unsigned index2);
		void _moveCube(Stack & s1, Stack & s2);
};
	


