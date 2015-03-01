#include <iostream>
using namespace std;
class Cls {
public:   Cls():y(4){}
  static const int x = 3;
  const int y;
};
int main()
{
	Cls obj;
	cout << "sizeof(Cls) = " << sizeof(Cls) << endl;
	cout << "sizeof(obj) = " << sizeof(obj) << endl;
	return 0;
}
