#include <iostream>
using namespace std;

class A {
public:
	A(int i1,int i2,int i3, float f1, float f2, float f3):b1(i1),b2(i2),b3(i3),c1(f1),c2(f2),c3(f3)
	{
		// process pointer p	
		p = new int;
	}
	A(const A & aa)
	{
		memcpy(this, &aa, sizeof(A));
		// process pointer p
		p = new int;
	}
	void dump()
	{
		cout << b1 << " " << b2 << " " << b3 << "\t"
		     << c1 << " " << c2 << " " << c3 << "\t" << p << endl;

	}
private:
	int b1,b2,b3;
	float c1,c2,c3;
	int * p;
};

int main()
{
	A a1(1,2,3,4.4,5.5,6.6);
	A a2(a1);

	a1.dump();
	a2.dump();

	return 0;
}

