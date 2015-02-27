#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	cout << "getline() get " << str
		<< "\t length = " << str.length() << endl;
	cin >> str;
	cout << "cin get " << str 
		<< "\t length = " << str.length() << endl;
	return 0;
}
