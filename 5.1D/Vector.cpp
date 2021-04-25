#include "Vector.h"
#include "Exception.h"

Vector::Vector()
	: x(0), y(0), z(0)
{}

Vector::Vector(double a, double b, double c)
{
	

	
	setX(a), setY(b), setZ(c);

}

Vector::Vector(const Vector& t)
{
	x = t.x;
	y = t.y;
	z = t.z;
}
bool operator ==(const Vector& t1, const Vector& t2)
{
	return t1.getX() == t2.getX() && t1.getY() == t2.getY();
}
bool operator >(const Vector& t1, const Vector& t2)
{
	return t1.getX() > t2.getX() || t1.getX() == t2.getX() && t1.getY() > t2.getY();
}
bool operator <(const Vector& t1, const Vector& t2)
{
	return t1.getX() < t2.getX() || t1.getX() == t2.getX() && t1.getY() < t2.getY();
}

bool operator >=(const Vector& t1, const Vector& t2)
{
	return !(t1 < t2);
}
bool operator <=(const Vector& t1, const Vector& t2)
{
	return !(t1 > t2);
}
bool operator !=(const Vector& t1, const Vector& t2)
{
	return !(t1 == t2);
}
