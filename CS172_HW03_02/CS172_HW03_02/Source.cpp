////////////////////
// Ian Fisher
// CS 172
// HW03_02
// 9/21/16
////////////////////

#include <iostream>
#include <cmath>
using namespace std;

class QuadraticEquation
{
public:
	// data field
	int a;
	int b;
	int c;
	//

	// constructor sets default values to 0
	QuadraticEquation()
	{
		a = 0;
		b = 0;
		c = 0;
	}

	// get function for a value
	int getA ()
	{
		return a;
	}
	// get function for b value
	int getB ()
	{
		return b;
	}
	// get function for c value
	int getC ()
	{
		return c;
	}

	// function that returns the discriminant
	double getDiscriminant ()
	{
		return ((b * b) - (4 * a * c));
	}

	// function that returns the first root
	double getRoot1 ()
	{
		return (((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a));
	}

	// function that returns the second root
	double getRoot2 ()
	{
		//if (getDiscriminant() >= 0)
			return (((-b) - sqrt((b * b) - (4 * a * c))) / (2 * a));
	//	else
		//	cout << "The equation has no real roots." << endl;
	}

};

int main ()
{
	QuadraticEquation input; // declares object 'input'

	// prompt user for a, b, and c values
	cout << "This is a program that calculates the roots of the quadratic equation in the form ax^2 + bx + c = 0." << endl;
	cout << "Enter a value for 'a' :";
	cin >> input.a;
	cout << endl;
	cout << "Enter a value for 'b' :";
	cin >> input.b;
	cout << endl;
	cout << "Enter a value for 'c' :";
	cin >> input.c;
	
	double discriminantcheck;
	discriminantcheck = ((input.b * input.b) - (4 * input.a * input.c));
	if (discriminantcheck > 0) {
		cout << "The first root is: " << input.getRoot1() << endl;
		cout << "The second root is: " << input.getRoot2() << endl;
	}
	else if (discriminantcheck == 0)
	{
		cout << "The first root is: " << input.getRoot1() << endl;
	}
	else
	{
		cout << "The equation has no real roots" << endl;
	}

	return 0;
}