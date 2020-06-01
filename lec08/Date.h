#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date {
	friend ostream & operator<<(ostream&,const Date&);
public:
	Date(int m=1, int d=1, int y=1900);
	void setDate(int, int , int);
	Date &operator++();      // for ++d
	Date operator++(int);     // for d++
	const Date &operator+=(int);   // for d += n
	static bool leapYear(int);
	bool endOfMonth(int) const;
private:
	int month, day, year;
	static const int days[];
	void helpIncrement();
};
#endif

