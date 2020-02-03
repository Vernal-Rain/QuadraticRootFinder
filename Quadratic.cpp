//Quadratic definitions
//Elaine Lee
#include <iostream> 
#include <cmath>
#include "Quadratic.hpp"
#include "Complex.hpp"
using namespace std;

Quadratic::Quadratic()
{
	a = 0;
	b = 0;
	c = 0;
}
Quadratic::Quadratic(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

void Quadratic::getRoot()
{
	double d = b*b - 4*a*c;
	if (d < 0)
	{
		rt1 = Complex(-1.0*b/2.0/a, sqrt(abs(d))/2.0/a);
		rt2 = Complex(-1.0*b/2.0/a, -1.0*sqrt(abs(d))/2.0/a);
	}
	else
	{
		rt1 = Complex(-1.0*b/2.0/a+sqrt(abs(d))/2.0/a, 0);
		rt2 = Complex(-1.0*b/2.0/a-1.0*sqrt(abs(d))/2.0/a, 0);
	}
	cout << "Roots:\n" << rt1 << endl << rt2 << endl;
}
	
Quadratic operator +(Quadratic q1, Quadratic q2)
{
	return Quadratic(q1.a+q2.a, q1.b+q2.b, q1.c+q2.c);
}
Quadratic operator -(Quadratic q1, Quadratic q2)
{
	return Quadratic(q1.a-q2.a, q1.b-q2.b, q1.c-q2.c);
}

ostream& operator <<(ostream& out, Quadratic q)
{
	out << noshowpos << q.a << "x^2" << showpos 
	<< q.b << "x" << showpos << q.c;
	return out;
}
istream& operator >>(istream& in, Quadratic& q)
{
	in >> q.a >> q.b >> q.c;
	return in;
}
