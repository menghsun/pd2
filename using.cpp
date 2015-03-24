#include <iostream>
class A {
public:
	int fun() {return 10;}
};

int main()
{
using A::fun;
	int x = fun();
	return 0;
}

