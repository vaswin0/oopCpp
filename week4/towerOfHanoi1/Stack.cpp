#include "Cube.h"
#include "Stack.h"


void Stack::add(Cube a){
	
	stack.push_back(a);

}


void Stack::remove(Cube a){

	stack.pop_back();


}

	
