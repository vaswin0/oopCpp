#include "Cube.h"
#include "Stack.h"
#include<iostream>


Stack::Stack(){
}


std::ostream& operator<<(std::ostream& os, const Stack& s){
	os << s.stack[0] << s.stack[1] << s.stack[2];
	return os;
}	
