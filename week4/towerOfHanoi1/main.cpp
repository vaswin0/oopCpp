#include<iostream>
#include "Cube.h"
#include "Stack.h"
//using polygon::Cube;

#include <string>


using namespace std;

int main() {
std::string r = "red";
Cube c(10, r);
//std::cout<<c.length_<<std::endl;
//std::cout<<c.color_ << std::endl;
Stack s;
s.stack.push_back(c);
//std::cout<<s.stack[0].length_<<std::endl;

//cout<<s.stack.size()<<endl;


Cube d(30, r);

s.add(d);

cout<<s.stack.size()<<endl; 

s.remove(d);

cout<<s.stack.size()<<endl; 




return 0;
}
