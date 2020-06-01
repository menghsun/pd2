#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1("happy");
	string s2("birthday");
	string s3;

	cout << "s1: " << s1;
	cout << "\ns2: " << s2;
	cout << "\ns3: " << s3;
	cout << "\ns2 == s1?: " << ((s2==s1)?"true":"false");
	cout << "\ns2 != s1?: " << ((s2!=s1)?"true":"false");
	cout << "\ns2 > s1?: " << ((s2>s1)?"true":"false");
	cout << "\ns2 < s1?: " << ((s2<s1)?"true":"false");
	cout << "\ns2 >= s1?: " << ((s2>=s1)?"true":"false");
	cout << "\ns2 <= s1?: " << ((s2<=s1)?"true":"false");

	cout << "\nIs s3 empty?: " << ((s3.empty())?"true":"false");
	s3=s1;
	cout << "\ns3: " << s3;

	s1+=s2;
	cout << "\ns1: " << s1;
	s1+= "to you";
	cout << "\ns1: " << s1;
	cout << "\ns1.substr(0,14): " << s1.substr(0,14);
	cout << "\ns1.substr(15): " << s1.substr(15);

	string s4(s1);
	cout << "\ns4: " << s4;
	s4=s4;
	cout << "\ns4: " << s4;

	s1[0]='H';
	s1[6]='B';
	cout << "\ns1: " << s1;
	s1.at(30)='D';
	return 0;
}
