#include<iostream>
#include "Cube.h"
using polygon::Cube;

#include <string>

int main() {
std::string r = "red";
Cube c(10, r);
std::cout<<c.length_<<std::endl;
std::cout<<c.color_ << std::endl;
return 0;
}
