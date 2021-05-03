/////////////////
// Open.h
/////////////////

#pragma once
#include <iostream>
#include <string>
#include "Vector2D.h"

using namespace std;

class Open: public Vector2D
{
private:
	double x, y;
public:
	Open();
	Open(double x, double y);
	Open(const Open&);

	void setX(double value) { x = value; }
	void setY(double value) { y = value; }
	double getX() const { return x; }
	double getY() const { return y; }

	Open& operator = (const Open&);

	operator string () const;

	friend	double operator *(Open g, Open f);
	friend Open operator *(Open g, double l);

	double Modul();

	friend bool operator <(Open& g, Open& f);
	friend bool operator > (Open& g, Open& f);
	friend bool operator ==(Open& g, Open& f);
	friend bool operator >=(Open& g, Open& f);
	friend bool operator <=(Open& g, Open& f);
	friend bool operator !=(Open& g, Open& f);

	Open& operator ++();
	Open& operator --();
	Open operator ++(int);
	Open operator --(int);

};

