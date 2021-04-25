#pragma once
#include "Vector.h"
#include <iostream>
#include <string>

using namespace std;

class Vector3D : public Vector
{
public:

	Vector3D() : Vector() {}
	Vector3D(double x, double y, double z);
	Vector3D(const Vector3D&);

	operator string () const;

	friend	double operator *(Vector3D g, Vector3D f);
	friend Vector3D operator *(Vector3D g, double l);



	friend istream& operator >> (istream& in, Vector3D& a);
	friend ostream& operator << (ostream& in, Vector3D& a);
	void scalar() const;
	void Distance() const { cout << "dov. vectora  " << sqrt((getX() * getX()) + (getY() * getY()) + (getZ() * getZ())) << endl; };
	void isEqual() const;
	void isEqual2() const;
	Vector3D& operator ++();
	Vector3D& operator --();
	Vector3D operator ++(int);
	Vector3D operator --(int);

};


