#include <iostream>
#include "Cube.h"


Cube *CreateUnitCube() {

	Cube cube;
	cube.setLength(15);
	return &cube;


}


int main() {

	Cube *c = CreateUnitCube();

	
	double v = c->getVolume();
	double a = c->getSurfaceArea();
	std::cout << "Volume:" << v  << std::endl;
	std::cout << "surface area:" << a  << std::endl;

	return 0;

}



/*  there will be two stack frame viz the main's and CreateUnitCube's(cuc).
 *  main's memory will be higher up on the stack than cuc's.
 *  The cube will be in cuc's stack frame, and the address of the 
 *  cube is in the main's memory as pointer c.
 *  But the problem is that a function's stack frame exist only so long
 *  as the function is running, ie here once cube's address is returned by cuc function,
 *  cuc's stack frame will deallocated 
 *
 *  NEVER RETURN A REFERENCE TO A LOCAL VARIABLE
 *
 *
 *  */
