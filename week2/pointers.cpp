#include <iostream>




int main() {

	int num = 36;

	std::cout << "num : " << num << std::endl;
	std::cout << "&num : " << &num << std::endl;
           

	/* pointer is a variable that stores the memory address of the data
	 *  pointer is defined by adding an * to the type of the variable*/


	int * p = &num; // p is an integer pointer

	std::cout << " p :  " << p << std::endl;  // p contains address of the variable
	std::cout<< " &p : " << &p << std::endl;   // p also has an address
	std::cout << "*p : " << *p << std::endl;    // *p is contents at the address stored in p i.e num
		
 	
	//dereference operator
	
	*p = 42;  //  p contains address of num. *p says replace the value at this address to 42 i.e num is 42 now

	std::cout << "*p changed to 42 ie the address stored in p is assigned with 42, so num : " << num << std::endl;


	return 0;

}
