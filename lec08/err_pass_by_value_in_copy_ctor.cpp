#include <iostream>
using namespace std;

class Cls {
public:
	Cls():x(5) {}
	Cls(Cls obj) {   x = obj.x;    }
private:
	int x;
};
int main()
{
	Cls obj1;
	Cls obj2 (obj1);
	return 0;
}

