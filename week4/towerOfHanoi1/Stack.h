#pragma once
//#include<string>
#include "Cube.h"
#include <vector>
//#include<iostream>


class Stack {
	public:
		Stack();
		Cube & peekTop() ;
		unsigned size() const;
		void push_back(const Cube & cube);
		void pop_back();
    	Cube removeTop();
		
		friend std::ostream& operator<<(std::ostream & os, const Stack & s);

 	private:
		std::vector<Cube> stack_;	
};
