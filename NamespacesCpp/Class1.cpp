#include <iostream>
#include "Class1.h"

using namespace TestNs;

Class1::Class1()
{
}

Class1::~Class1()
{
}

void TestNs::foo()
{
	std::cout << "TestNs:: foo" << std::endl;
}
