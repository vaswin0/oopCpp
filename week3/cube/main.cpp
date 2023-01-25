#include<iostream>
#include "Cube.h"
using polygon::Cube;

void foo(Cube cube) {
	//nothing :)
}

Cube bar() {
     Cube c1; //invokes defacult ctor
     return c1;// invokes copy ctor as it should be copiede from bar's stack 
}              //frame to main's

int main() {

	//std::cout << "\n calling foo, passing obj as a param\n" << std::endl;
	//Cube c; // this invokes the defacult ctor
	//foo(c); // copy constructor invocation as c should be copied to foo's stack frame from main's	
	

	std::cout << "\n calling bar, returning obj from a fn\n" << std::endl;
	Cube c2 = bar();

	return 0;

}
