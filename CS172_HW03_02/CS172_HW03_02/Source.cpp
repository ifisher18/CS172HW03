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
	// get function for b
	// get function for c

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

	return 0;
}