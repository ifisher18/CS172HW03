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

	// constructor
	QuadraticEquation()
	{
		a = 0;
		b = 0;
		c = 0;
	}

	// get function for a
	int getA ()
	{
		return a;
	}
	// get function for b
	int getB ()
	{
		return b;
	}
	// get function for c
	int getC ()
	{
		return c;
	}

	// function that returns the discriminant
	double getDiscriminant (int a, int b, int c)
	{
		return ((b * b) - (4 * a * c));
	}

	// function that returns the first root
	double getRoot1(int a, int b, int c)
	{
		return (((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a));
	}

	// function that returns the second root
	double getRoot2(int a, int b, int c)
	{
		if (getDiscriminant() >= 0)
			return (((-b) - sqrt((b * b) - (4 * a * c))) / (2 * a));
		else
			return (0);
	}

};

int main ()
{
	QuadraticEquation Root1, Root2; // declares two root objects

	// prompt user for a, b, and c values
	cout << "This is a program that calculates the roots of the quadratic equation." << endl;
	cout << "Enter a value for 'a' :";
	cin >> a_input;
	cout << endl;
	cout << "Enter a value for 'b' :";
	cin >> b_input;
	cout << endl;
	cout << "Enter a value for 'c' :";
	cin >> c_input;
	
	// if the disc. is positive
	cout << "Based on the discriminant, the two roots are: " << get
}