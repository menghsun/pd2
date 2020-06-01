#include <iomanip>
#include "PhoneNumber.h"
using namespace std;
ostream & operator <<(ostream &out,               const PhoneNumber &num)
{
	out << "(" << num.areaCode << ") "                   << num.exchangeNum << "-"                   << num.serialNum;
	return out;
}
istream &operator >> (istream & in,                       PhoneNumber & num)
{
	in.ignore(); // skip (
	in >> setw(2) >> num.areaCode;
	in.ignore(2); // skip ) and space
	in >> setw(3) >> num.exchangeNum;
	in >> setw(4) >> num.serialNum;
	return in;
}
