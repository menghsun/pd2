#include <iostream>
using namespace std;

int main()
{
	int x = 3;
	int &y = 3;
	cout << "x = " << x << "\t" << " y = " << y << endl;
	y = 7;
	cout << "x = " << x << "\t" << " y = " << y << endl;
}
