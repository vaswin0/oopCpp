#include <iostream>
#include "Pair.h"

int main() {
	Pair p;
	p.a = 100;
	p.b = 200;

	if (p.a + p.b == p.sum()) {
		std::cout << "success!" << std::endl;
	}
	else {
		std::cout << "p.Sum () returns" << p.sum() << "instead of " << (p.a + p.b) << std::endl;
	}

return 0;
}
