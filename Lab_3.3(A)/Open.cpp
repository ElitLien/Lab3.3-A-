/////////////////
// Open.cpp
/////////////////

#include "Open.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;

Open::Open()
	: x(0), y(0)
{}

Open::Open(double a, double b)
{
	setX(a), setY(b);
}

Open::Open(const Open& t)
{
	*this = t;
}

Open::operator string() const
{
	stringstream sout;
	sout << "(" << getX() << "; " << getY() << ")" << endl;
	return sout.str();
}
Open& Open::operator = (const Open& r)
{
	x = r.x;
	y = r.y;
	return *this;
}

double operator * (Open g, Open f)
{
	double t = g.x * f.x + g.y * f.y;
	return t;
}

Open operator * (Open g, double l)
{
	Open tmp;
	tmp.x = g.x * l;
	tmp.y = g.y * l;
	return tmp;
}

double Open::Modul()
{
	double mod = sqrt((x * x) + (y * y));
	return mod;

}

bool operator > (Open& a, Open& b)
{
	if (a.Modul() > b.Modul())
	{
		return true;
	}
	else
		return false;
}

bool operator < (Open& a, Open& b)
{
	if (a.Modul() < b.Modul())
	{

		return true;
	}
	else
		return false;
}

bool operator ==(Open& a, Open& b)
{
	if (a.Modul() == b.Modul())
	{
		return true;
	}
	else
		return false;
}
bool operator <= (Open& a, Open& b)
{
	if (a.Modul() <= b.Modul())
	{
		return true;
	}
	else
		return false;
}
bool operator >= (Open& a, Open& b)
{
	if (a.Modul() >= b.Modul())
	{
		return true;
	}
	else
		return false;
}
bool operator != (Open& a, Open& b)
{
	if (a.Modul() != b.Modul())
	{
		return true;
	}
	else
		return false;
}

Open& Open::operator ++()
{
	++x;
	return *this;
}

Open& Open::operator --()
{
	--y;
	return *this;
}

Open Open::operator ++(int)
{
	Open tmp = *this;
	++x;
	return tmp;
}

Open Open::operator --(int)
{
	Open tmp = *this;
	--y;
	return tmp;
}