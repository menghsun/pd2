#include <iostream>
using namespace std;

class Cls {
public:
	~Cls() { cout << "Destructor" << endl; }
private:
	int x;
};

int main()
{
	Cls * ptr = new Cls[10];

	delete ptr;

	return 0;
}

