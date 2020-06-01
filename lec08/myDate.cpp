#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	Date d1;
	Date d2(12,27,1992);
	Date d3(0,99,8045);

	cout << "d1: "<< d1 << endl;
	cout << "d2: "<< d2 << endl;
	cout << "d3: "<< d3 << endl;
	cout << "d2 += 7: "<< (d2+=7) << endl;

	d3.setDate(2,28,1992);
	cout << "d3: "<< d3 << endl;
	cout << "++d3: "<< ++d3 << endl;

	Date d4(7,13,2002);
	cout << "d4: "<< d4 << endl;
	cout << "++d4: "<< ++d4 << endl;
	cout << "d4: "<< d4 << endl;

	cout << "d4: "<< d4 << endl;
	cout << "d4++: "<< d4++ << endl;
	cout << "d4: "<< d4 << endl;

	return 0;
}

