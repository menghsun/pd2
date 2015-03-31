#include <iostream>
using namespace std;

int boxVolume(int length=1, int width=1, int height=1);

int main()
{
	cout << boxVolume() << endl;
	cout << boxVolume(20) << endl;
	cout << boxVolume(20, 10) << endl;
	cout << boxVolume(20, 10, 3) << endl;
	return 0;
}

int boxVolume(int length, int width, int height)
{
	return length * width * height;
}
