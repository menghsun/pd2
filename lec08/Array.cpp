#include <iostream>
#include <iomanip>
#include <cstdlib>  // for exit()
#include "Array.h"
using namespace std;

Array::Array(int arrSize)
{
	size = (arrSize>0?arrSize:10);
	ptr = new int[size];
	for(int i=0;i<size;++i)
		ptr[i] = 0;
}
Array::Array(const Array & arrToCpy)                 :size(arrToCpy.size)
{
	ptr = new int[size];
	for(int i=0;i<size;++i)
		ptr[i] = arrToCpy.ptr[i];
}
int Array::getSize() const
{
	return size;
}
const Array & Array::operator=              (const Array &right)
{
	if(&right != this)
	{
		if(size != right.size)
		{
			delete [] ptr;
			size = right.size;
			ptr = new int[size];
		}
		for(int i=0;i<size;++i)
			ptr[i] = right.ptr[i];
	}
	return *this;
}
bool Array::operator==(const Array &right) const
{
	if(size != right.size)
		return false;
	for(int i=0;i<size;++i)
		if(ptr[i] != right.ptr[i])
			return false;
	return true;
}
int & Array::operator[](int subscr)
{
	if(subscr<0 || subscr>=size)
	{
		cerr << "Error: subscript "<< subscr
			<< " out of range" << endl;
		exit(1);
	}
	return ptr[subscr];
}
int Array::operator[](int subscr) const
{
	if(subscr<0 || subscr>=size)
	{
		cerr << "Error: subscript "<< subscr
			<< " out of range" << endl;
		exit(1);
	}
	return ptr[subscr];
}
Array::~Array()
{
	delete [] ptr;
}
istream & operator>>(istream &in, Array &a)
{
	for(int i=0;i<a.size;++i)
		in >> a.ptr[i];
	return in;
}
ostream & operator<<           (ostream &out, const Array &a)
{
	int i;

	for(int i=0;i<a.size;++i)
		out << setw(3) << a.ptr[i];
	out << endl;
	return out;
}

