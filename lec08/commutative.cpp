#include <iostream>
using namespace std;

class Cls {
	friend int operator+(int b, Cls & anObj);
public:
	int operator+(int y) {return x + y; }
	Cls(int j):x(j) {}
private:
	int x;
};
int operator+(int b, Cls & anObj)
{
	return anObj + b;               
}
int main()
{
	int a = 5;
	Cls obj(3);

	cout << obj + a << endl;
	cout << a + obj ;
	return 0;
}


