//Quadratic class 
//Elaine Lee
//11/13/19 for Csci 1113

#ifndef QUADRATIC_HPP
#define QUADRATIC_HPP
#include <iostream>
#include "Complex.hpp"
using namespace std;

class Quadratic
{
	public:
	Quadratic(); //Creates quadratic where a, b, c = 0
	Quadratic(double a, double b, double c); //Creates quadratic ax^2+bx+c
	
	
	void getRoot();
	
	friend Quadratic operator +(Quadratic, Quadratic);
	friend Quadratic operator -(Quadratic, Quadratic);
	friend ostream& operator <<(ostream&, Quadratic);
	friend istream& operator >>(istream&, Quadratic&);
	
	private:
	double a, b, c;
	Complex rt1, rt2;
};

#endif
