#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
const int Date::days[] =
	{0,31,28,31,30,31,30,31,31,30,31,30,31};
Date::Date(int m, int d, int y)
{
	setDate(m,d,y);
}
void Date::setDate(int mm, int dd, int yy)
{
	month = (mm>=1 && mm<=12)?mm:1;
	year = (yy>=1900 && yy<=2100)?yy:1900;
	if(month == 2 && leapYear(year))
		day = (dd>=1 && dd<=29)?dd:1;
	else
		day = (dd>=1 && dd<=days[month])?dd:1;
}
Date& Date::operator++()
{
	helpIncrement();
	return *this;
}
Date Date::operator++(int)
{
	Date temp = *this;
	helpIncrement();
	return temp;
}
const Date& Date::operator+=            (int addDays)
{
	for(int i=0;i<addDays;++i)
		helpIncrement();
	return *this;
}
bool Date::leapYear(int y)
{
	if(y % 400 == 0 ||
		(y % 100 != 0 && y % 4 == 0))
		return true;
	else
		return false;
}
bool Date::endOfMonth(int d) const
{
	if(month == 2 && leapYear(year))
		return d == 29;
	else
		return d == days[month];
}
void Date::helpIncrement()
{
	if(!endOfMonth(day))
		++day;
	else
		if(month<12)
		{
			++month;
			day=1;
		}
		else
		{
			++year;
			month=1;
			day=1;
		}
	}

ostream& operator<<(ostream & out,const Date & d)
{
	static string monthName[13] =
		{"", "January", "February",
		"March", "April", "May",
		"June", "July", "August",
		"September", "October",
		"November", "December" };
	out << monthName[d.month] << ' ' << d.day << ", " << d.year;
	return out;
}

