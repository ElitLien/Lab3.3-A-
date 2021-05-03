/////////////////
// Close.cpp
/////////////////

#include "Close.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;

Close::Close()
	: x(0), y(0)
{}

Close::Close(double a, double b)
{
	setX(a), setY(b);
}

Close::Close(const Close& t)
{
	*this = t;
}

Close::operator string() const
{
	stringstream sout;
	sout << "(" << getX() << "; " << getY() << ")" << endl;
	return sout.str();
}
Close& Close::operator = (const Close& r)
{
	x = r.x;
	y = r.y;
	return *this;
}

double operator * (Close g, Close f)
{
	double t = g.x * f.x + g.y * f.y;
	return t;
}

Close operator * (Close g, double l)
{
	Close tmp;
	tmp.x = g.x * l;
	tmp.y = g.y * l;
	return tmp;
}

double Close::Modul()
{
	double mod = sqrt((x * x) + (y * y));
	return mod;

}

bool operator > (Close& a, Close& b)
{
	if (a.Modul() > b.Modul())
	{
		return true;
	}
	else
		return false;
}

bool operator < (Close& a, Close& b)
{
	if (a.Modul() < b.Modul())
	{

		return true;
	}
	else
		return false;
}

bool operator ==(Close& a, Close& b)
{
	if (a.Modul() == b.Modul())
	{
		return true;
	}
	else
		return false;
}
bool operator <= (Close& a, Close& b)
{
	if (a.Modul() <= b.Modul())
	{
		return true;
	}
	else
		return false;
}
bool operator >= (Close& a, Close& b)
{
	if (a.Modul() >= b.Modul())
	{
		return true;
	}
	else
		return false;
}
bool operator != (Close& a, Close& b)
{
	if (a.Modul() != b.Modul())
	{
		return true;
	}
	else
		return false;
}
istream& operator >> (istream& in, Close& a)
{
	cout << "x = "; in >> a.x;
	cout << "y = "; in >> a.y;

	return in;
}

ostream& operator << (ostream& out, Close& a)
{
	out << string(a) << endl;
	return out;
}

Close& Close::operator ++()
{
	++x;
	return *this;
}

Close& Close::operator --()
{
	--y;
	return *this;
}

Close Close::operator ++(int)
{
	Close tmp = *this;
	++x;
	return tmp;
}

Close Close::operator --(int)
{
	Close tmp = *this;
	--y;
	return tmp;
}