//#include "Cube.h"
#include "Stack.h"
#include<iostream>

using std::cout;
using std::endl;


Stack::Stack(){}

/*unsigned Stack::size() const {
  return stack_.size();
}*/

std::ostream& operator<<(std::ostream & os, const Stack & stackk) {
  for (unsigned i = 0; i < stackk.size(); i++) {
    os << stackk.stack_[i].getLength() << " ";
  }
  os << endl;
  return os;
}



Cube & Stack::peekTop() {
  return stack_[stack_.size() - 1];
}




void Stack::push_back(const Cube & cube){
	stack_.push_back(cube);
}
	

void Stack::pop_back(){
	stack_.pop_back();
}






/*

void Stack::push_back(const Cube & cube) {
  // Ensure that we do not push a cube on top of a smaller cube:
  if ( size() > 0 && cube.getLength() > peekTop().getLength() ) {
    std::cerr << "A smaller cube cannot be placed on top of a larger cube." << std::endl;
    std::cerr << "  Tried to add Cube(length=" << cube.getLength() << ")" << std::endl;
    std::cerr << "  Current stack: " << *this << std::endl;

    throw std::runtime_error("A smaller cube cannot be placed on top of a larger cube.");
  }

  stack.push_back(cube);
}
*/
Cube Stack::removeTop() {
  Cube cube = peekTop();
  stack_.pop_back();
  return cube;
}




unsigned Stack::size() const{


	return stack_.size();
}	
