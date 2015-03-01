#include <iostream>
using namespace std;

class Cls {
public:      Cls(){  NumObject++;  }
	static int NumObject;
};
int Cls::NumObject = 0;
int main()
{
	cout << Cls::NumObject << endl;
	Cls obj1;
	cout << Cls::NumObject << endl;
	Cls obj2;
	cout << obj1.NumObject << endl;
	cout << obj2.NumObject << endl;
	return 0;
}
