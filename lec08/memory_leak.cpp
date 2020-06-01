#include <iostream>
using namespace std;

int main()
{
	int x, *y;

	for (x = 0; x < 10000000; x++)
		y = new int;
	cin >> x;

	return 0;
}

