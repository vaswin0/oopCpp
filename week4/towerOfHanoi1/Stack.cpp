//#include "Cube.h"
#include "Stack.h"
#include<iostream>

using std::cout;
using std::endl;


Stack::Stack(){
}
unsigned Stack::size() const {
  return stack.size();
}

std::ostream& operator<<(std::ostream & os, const Stack & stackk) {
  for (unsigned i = 0; i < stackk.size(); i++) {
    os << stackk.stack[i].length_ << " ";
  }
  os << endl;
  return os;
}	
