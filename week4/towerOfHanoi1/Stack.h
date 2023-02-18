#pragma once
//#include<string>
#include "Cube.h"
#include<vector>
#include<iostream>


class Stack {
	public:
		Stack();
		std::vector<Cube> stack;
		
		friend std::ostream& operator<<(std::ostream& os, const Stack& s);

	
};
