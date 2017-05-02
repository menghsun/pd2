#include <iostream>
#include "max.h"
using namespace std;

int main()
{
	int i1 = 7, i2 = 2, i3 = 3;
	double d1 = 2.1, d2 = 5.2, d3 = 3.3;
	char c1 = 'A', c2 = 'B', c3 = 'C';
	cout << "maximum integer is " <<
		maximum(i1, i2, i3) << endl;
	cout << "maximum double is " <<
		maximum(d1, d2, d3) << endl;
	cout << "maximum char is " <<
		maximum(c1, c2, c3) << endl;
	return 0;
}
