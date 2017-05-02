#include <iostream>
using namespace std;

class Timer {
public:
	static void fun() {}
};

using Timer::fun;
using namespace Timer;
using class Timer;
int main()
{
	Timer::fun();
	return 0;
}
