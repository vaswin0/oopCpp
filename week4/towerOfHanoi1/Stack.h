#pragma once
#include<string>
#include "Cube.h"
#include<vector>

class Stack {
	public:
		//Stack();
		std::vector<Cube> stack;
		void add(Cube a);
		void remove(Cube a);

	
};
