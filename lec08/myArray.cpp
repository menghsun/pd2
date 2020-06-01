#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
	Array ints1(7);
	Array ints2;

	cout << "Size of ints1 = " << ints1.getSize();
	cout << "\ncontent = " << ints1;
	cout << "Size of ints2 = " << ints2.getSize();
	cout << "\ncontent = " << ints2;

	cout << "\nEnter 17 numbers: " << endl;
	cin >> ints1 >> ints2;

	cout << "ints1: " << ints1 << endl;
	cout << "ints2: " << ints2 << endl;

	if (ints1 != ints2)
		cout << "ints1 != ints2" << endl;

	Array ints3(ints1);
	cout << "ints3: " << ints3 << endl;

	ints1 = ints2;
	cout << "ints1: " << ints1 << endl;
	cout << "ints2: " << ints2 << endl;

	cout << ints1[5] << endl;
	ints1[5] = 50;
	cout << "ints1: " << ints1 << endl;

	ints1[20] = 60;
	return 0;
}

