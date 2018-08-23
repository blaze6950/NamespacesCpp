#include <iostream>
#include "Class1.h"
using namespace std;

namespace
{
	int j = 10;
}

namespace MyNamespace
{
	class A{};
	struct B{};

	void foo(){
		A a;
		B b;
	}

	int i = 10;

	enum E { C1, C2, C3 };
}

using MyNamespace::B;
using namespace MyNamespace;
using namespace MyNamespace::Inner;

int i = 12;


using namespace TestNs;

int main()
{
	MyNamespace::A a;
	MyNamespace::foo();

	B b;

	using MyNamespace::E;

	E e;

	Class1 cls;

	TestNs::foo();

	MyNamespace::C c;

	cout << ::j << endl;
}

namespace MyNamespace
{
	class C : public A
	{

	};

	namespace Inner
	{
		void bar()
		{
			C obj;
			foo();

		}
	}

	void func()
	{
		Inner::bar();
	}
}

