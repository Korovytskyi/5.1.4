#include "Vector3D.h"
#include<iostream>
#include <string>
#include <sstream>
#include "Exception"

using namespace std;

Vector3D::Vector3D(double a, double b, double c)
	:Vector(a, b, c) {}

Vector3D::Vector3D(const Vector3D& t)
	: Vector(t) {}

Vector3D::operator string() const
{
	stringstream sout;
	sout << "(" << getX() << "; " << getY() << "; " << getZ() << ")" << endl;
	return sout.str();
}

double operator * (Vector3D g, Vector3D f)
{
	double t = g.getX() * f.getX() + g.getY() * f.getY() + g.getZ() * f.getZ();
	return t;
}

Vector3D operator * (Vector3D g, double l)
{
	Vector3D tmp(0, 0, 0);
	double a = g.getX() * l;
	tmp.setX(a);
	a = g.getX() * l;
	tmp.setY(a);
	return tmp;
}





istream& operator >> (istream& in, Vector3D& a)
{
	double x, y, z;
	cout << "x = "; in >> x;
	cout << "y = "; in >> y;
	cout << "z = "; in >> z;
	a.setX(x), a.setY(y), a.setZ(z);
	if (x == 1 && y == 1 && z == 1)
		throw invalid_argument("Invalid_argument");
	else if (x == 1 && y == 1 && z == 1)
		throw bad_exception();
	else if (x == 1 && y == 1 && z == 1)
		throw Exception("Exception");
	else if (x == 1 && y == 1 && z == 1)
		throw "Exception";
	return in;
}

ostream& operator << (ostream& out, Vector3D& a)
{
	out << string(a) << endl;
	return out;
}
void Vector3D::scalar() const
{
	int k;
	cout << "scallar = "; cin >> k;
	cout << "vektor" << "(" << getX() << ";" << getY() << ";" << getZ() << ")" << endl;
	cout << "vector*scalar" << "(" << getX() * k << ";" << getY() * k << ";" << getZ() * k << ")" << endl;
	cout << "=================================================================================================" << endl;
}

void Vector3D::isEqual() const
{
	cout << "porivnana vectoriv" << endl;
	if (getX() == getY() && getY() == getZ())
		cout << "x = ó ; y= z ; x=z" << endl;
	if (getX() == getY() && getY() != getZ())
		cout << " x = y ; y != z ; x != z " << endl;
	if (getX() == getZ() && getX() != getY())
		cout << " x = z ; x != y ; y != z " << endl;
	if (getY() == getZ() && getY() == getX())
		cout << " y = z ; x != y ; x != z " << endl;
	if (getX() != getZ() && getX() != getY())
		cout << " x != ó ; z != y ; x != z " << endl;
	cout << "==================================================================================================" << endl;
}
void Vector3D::isEqual2() const
{
	cout << "porivnana dovzhyn vectoriv" << endl;
	double c, v, b;
	c = sqrt((getX() * getX()) + (getY() * getY()));
	v = sqrt((getY() * getY()) + (getZ() * getZ()));
	b = sqrt((getZ() * getZ()) + (getX() * getX()));
	cout << "dovzhyna xy = " << c << endl;
	cout << "dovzhyna yz = " << v << endl;
	cout << "dovzhyna zx = " << b << endl;
	if (c > v && v > b)
		cout << "xó > yz > zx" << endl;
	if (c < v && v < b)
		cout << "xó < yz < zx" << endl;
	if (c > v && v < b)
		cout << "xó > yz < zx" << endl;
	if (c < v && v > b)
		cout << "xó < yz > zx" << endl;
	if (c == v && v == b)
		cout << "xó = yz = zx" << endl;
	if (c > v && v == b)
		cout << "xó < yz = zx" << endl;
	if (c < v && v == b)
		cout << "xó < yz = zx" << endl;
	if (c == v && v > b)
		cout << "xó = yz > zx" << endl;
	if (c == v && v < b)
		cout << "xó = yz < zx" << endl;
	cout << "==================================================================================================" << endl;
}




Vector3D& Vector3D::operator ++()
{
	setX(getX() + 1);
	setY(getY() + 1);
	setZ(getZ() + 1);
	return *this;
}

Vector3D& Vector3D::operator --()
{
	setX(getX() - 1);
	setY(getY() - 1);
	setZ(getZ() - 1);
	return *this;
}

Vector3D Vector3D::operator ++(int)
{
	Vector3D tmp = *this;
	setX(getX() + 1);
	setY(getY() + 1);
	setZ(getZ() + 1);
	return tmp;
}

Vector3D Vector3D::operator --(int)
{
	Vector3D tmp = *this;
	setX(getX() - 1);
	setY(getY() - 1);
	setZ(getZ() - 1);
	return tmp;
}
