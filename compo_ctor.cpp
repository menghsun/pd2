#include <iostream>
using namespace std;

class Tire {
public:
	Tire() { cout << "Tire Constructor" << endl;} 
};
class Car {
public:
	Car() { cout << "Car Constructor" << endl;}
private:
	Tire tireB;
};
int main()
{
	Car objA;
	return 0;
}
