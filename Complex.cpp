//Complex class definitions
//Elaine Lee
#include <iostream>
#include "Complex.hpp"
using namespace std;

Complex::Complex()
{
	real = 0;
	imag = 0;
}
Complex::Complex(double r, double im)
{
	real = r;
	imag = im;
}

double Complex::getReal()
{
	return real;
}
double Complex::getImag()
{
	return imag;
}

void Complex::setReal(double a)
{
	real = a;
}
void Complex::setImag(double b)
{
	imag = b;
}

Complex operator +(Complex c1, Complex c2)
{
	return Complex(c1.real+c2.real, c1.imag+c2.imag);
}

Complex operator -(Complex c1, Complex c2)
{
	return Complex(c1.real-c2.real, c1.imag-c2.imag);
}

Complex operator -(Complex c)
{
	return Complex(-1.0*c.real, -1.0*c.imag);
}

istream& operator >>(istream& in, Complex& c)
{
	in >> c.real >> c.imag;
	return in;
}

ostream& operator <<(ostream& out, Complex c)
{
	if (c.imag == 0)
	{cout << c.real;}
	else
	{
		out << noshowpos << c.real << showpos << c.imag << "i";
	}
	return out;
}
