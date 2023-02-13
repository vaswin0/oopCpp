#pragma once
#include<vector>
#include "Stack.h"

class Game{
	
	public:
		Game();

		std::vector<Stack> stacks;
		

		void _legalMove(unsigned, unsigned);

		//void toh();

};
	


