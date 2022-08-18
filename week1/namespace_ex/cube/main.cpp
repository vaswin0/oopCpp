#include<iostream>
#include "Cube.h"


int main() {

	polygon::Cube c;
	c.setLength(2.4);

	std::cout << "Volume: " << c.getVolume() << std::endl;
	
	double surfaceArea =  c.getSurfaceArea();
	std::cout << "surface area :" << surfaceArea << std::endl;

	return 0;

};
