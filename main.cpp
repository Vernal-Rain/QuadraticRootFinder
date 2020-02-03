//Testing out quadratic class - contains main function
//Elaine Lee
//Csci 1113

#include <iostream>
#include "Quadratic.cpp"
#include "Complex.cpp"
using namespace std;

int main()
{
	Quadratic a, b, c;
	cout << "Enter quadratic: ";
	cin >> a;
	cout << "Enter another quadratic: ";
	cin >> b;
	c = a + b;
	cout << c << endl;
	c.getRoot();
	return 0;
}
