#include "Cube.h"
#include "Stack.h"

void Stack::move(Stack src, Stack dst){
	lenSrc =  src.stack.size()
	idx = lenSrc - 1;

	srcCube = src.stack[idx];
	dst.stack.push_back(srcCube);
	src.stack.erase(src.stack()+idx);

}



