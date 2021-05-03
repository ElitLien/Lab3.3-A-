/////////////////
// Close.h
/////////////////

#pragma once
#include <iostream>
#include <string>
#include "Vector2D.h"

using namespace std;

class Close : private Vector2D
{
private:
	double x, y;
public:
	Close();
	Close(double x, double y);
	Close(const Close&);

	void setX(double value) { x = value; }
	void setY(double value) { y = value; }
	double getX() const { return x; }
	double getY() const { return y; }

	Close& operator = (const Close&);

	operator string () const;

	friend	double operator *(Close g, Close f);
	friend Close operator *(Close g, double l);

	double Modul();

	friend bool operator <(Close& g, Close& f);
	friend bool operator > (Close& g, Close& f);
	friend bool operator ==(Close& g, Close& f);
	friend bool operator >=(Close& g, Close& f);
	friend bool operator <=(Close& g, Close& f);
	friend bool operator !=(Close& g, Close& f);

	friend istream& operator >> (istream& in, Close& a);
	friend ostream& operator << (ostream& in, Close& a);

	Close& operator ++();
	Close& operator --();
	Close operator ++(int);
	Close operator --(int);

};
