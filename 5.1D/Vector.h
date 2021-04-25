#pragma once
#include <iostream>
#include "Exception.h"
using namespace std;

class Vector
{
private:
	double x, y, z;
public:
	Vector();
	Vector(double x, double y, double z) ;
	Vector(const Vector&);

	void setX(double value) { x = value; }
	void setY(double value) { y = value; }
	void setZ(double value) { z = value; }
	double getX() const { return x; }
	double getY() const { return y; }
	double getZ() const { return z; }

	friend bool operator ==(const Vector& t1, const Vector& t2);
	friend bool operator >(const Vector& t1, const Vector& t2);
	friend bool operator <(const Vector& t1, const Vector& t2);
	friend bool operator >=(const Vector& t1, const Vector& t2);
	friend bool operator <=(const Vector& t1, const Vector& t2);
	friend bool operator !=(const Vector& t1, const Vector& t2);

};

