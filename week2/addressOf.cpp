#include <iostream>

void foo() {

	int x = 100;

	std::cout << "x in foo:" << x << std::endl;
	std::cout << "&x in foo:" << &x << std::endl;




}



int main() {

	int num = 36;

	std::cout << "num in main:" << num << std::endl;
	std::cout << "&num in main:" << &num << std::endl;
           
	//foo();   // variable initialised earlier has a higher address value in stack than one initialized later


	/* pointer is a variable that stores the memory address of the data
	 *  pointer is defined by adding an * to the type of the variable*/


	int * p = &num;

	std::cout << "contents of the pointer p, *p = &num \t p = " << p << std::endl;
	std::cout << "value in num = " << *p << std::endl;
		
 	
	//dereference operator
	
	*p = 42;  //  p contains address of num. *p says replace the value at this address to 42 i.e num is 42 now

	std::cout << "num= " << num << std::endl;


	return 0;

}
