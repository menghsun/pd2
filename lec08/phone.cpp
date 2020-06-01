#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main()
{
	PhoneNumber phone;
	cout << "Enter your phone number as (XX) XXXXXXX: ";
	cin >> phone;
	cout << phone << endl;
	return 0;
}

