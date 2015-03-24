#include <iostream>
using namespace std;

class Monkey {
public:
	void jump() 
	{ 
		cout << "Monkey Jump" << endl;
	}
};

class Human {
public:
	void jump() 
	{ 
		cout << "Human Jump" << endl;
	}
};

class Loli: public Human, public Monkey {
public:
	using Monkey::jump;	
};

int main()
{
	Loli x;
	x.jump();
	return 0;
}
