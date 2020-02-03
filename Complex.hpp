//Complex number class
//Elaine Lee
//11/13/19 for Csci 1113

#include <iostream>
#ifndef COMPLEX_HPP
#define COMPLEX_HPP

using namespace std;

class Complex
{
	private:
	double real;
	double imag;
	
	public:
	Complex(); //Complex number with real and imaginary components = 0
	Complex(double r, double im); //Complex number in form <r>+<im>i
	
	double getReal();
	double getImag();
	void setReal(double);
	void setImag(double);
	
	friend Complex operator +(Complex, Complex);
	friend Complex operator -(Complex, Complex);
	friend Complex operator -(Complex);
	
	friend istream& operator >>(istream&, Complex&);
	friend ostream& operator <<(ostream&, Complex); 
};


#endif

