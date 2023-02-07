#include<iostream>
#include "Cube.h"
#include "Stack.h"
//using polygon::Cube;

#include <string>

int main() {
std::string r = "red";
Cube c(10, r);
std::cout<<c.length_<<std::endl;
std::cout<<c.color_ << std::endl;
Stack s;
s.stack.push_back(c);
std::cout<<s.stack[0].length_<<std::endl;
return 0;
}
