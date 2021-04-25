
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Object
{
	string name;
public:
	Object(string name)
		:name(name) {}
	string what() const { return name; }

};