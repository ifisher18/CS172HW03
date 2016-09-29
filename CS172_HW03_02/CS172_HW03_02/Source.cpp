////////////////////
// Ian Fisher
// CS 172
// HW03_02
// 9/21/16
////////////////////

#include <iostream>
#include <cmath>
using namespace std;

// create class called QuadraticEquation
class QuadraticEquation
{
public: // sets as public 
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
        if (getDiscriminant() >= 0) { // if the discrim. is nonnegative
        return (((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a));
        }
        else {
            return 0;
        }
    }

    // function that returns the second root
    double getRoot2 ()
    {
        if (getDiscriminant() >= 0) // if the Discriminant is nonnegative
            return (((-b) - sqrt((b * b) - (4 * a * c))) / (2 * a));
        else {
            return 0;
        }
    }

};

int main ()
{
    QuadraticEquation input; // declares object 'input'

    // prompt user for a, b, and c values
    cout << "This is a program that calculates the roots of the quadratic equation in the form ax^2 + bx + c = 0." << endl;
    cout << "Enter a value for 'a' :";
    cin >> input.a; // inputs the value for a in location input.a
    cout << endl;
    cout << "Enter a value for 'b' :";
    cin >> input.b; // inputs the value for b in location input.b
    cout << endl;
    cout << "Enter a value for 'c' :";
    cin >> input.c; // inputs the value for c in location input.c

	// this section of main is devoted to the discriminant
    int Discrimcheck = input.getDiscriminant();// declares a variable called Discrimcheck of type int that checks if discriminant is positive, zero, or negative
    if (Discrimcheck > 0) { // the case if discrim. is positive
        cout << "The first root is: " << input.getRoot1() << endl;
        cout << "The second root is: " << input.getRoot2() << endl;
    }
    else if (Discrimcheck == 0) { // the case if discrim. is 0
        cout << "The root is: " << input.getRoot1() << endl;
    }
    else { // the case if discrim. is negative, therefore nonreal roots
        cout << "The equation has no real roots." << endl;
    }
    return 0;
}
