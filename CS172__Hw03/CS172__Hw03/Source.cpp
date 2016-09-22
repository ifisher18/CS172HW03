// Ian Fisher
// CS172HW03_01
// 9/21/16
/////////////////

#include <iostream>
#include <cmath>
using namespace std;

class Fan // creates a class called "Fan"
{
public:
	int speed; // data field
	bool On;
	double radius;

	// function that gets a value speed (accesor function)
	int getspeed()
	{
		return speed;
	}


	double getradius()
	{
		return radius;
	}


	bool getOn()
	{
		return On;
	}

	// function that sets speed to input value
	void setSpeed(int speed2)
	{
		speed = speed2;
	}

	// function that sets radius to input value
	void setRadius(double radius2)
	{
		radius = radius2;
	}

	// function that sets to on or off
	void setOn(bool OnorOff)
	{
		if (OnorOff == false) // if statement that checks if fan is on or off
		{
			On = false;
		}
		else
		{
			On = true;
		}
	}

	// default Fan constructor (default values)
	Fan()
	{
		speed = 1;
		On = false;
		radius = 5;
	}
};

int main()
{
	Fan F1, F2; // declares two fan objects

	// For first fan, assigns values to variables
	F1.speed = 3;
	F1.radius = 10;
	F1.On = true;

	// for second fan, assigns values to variables
	F2.speed = 2;
	F2.radius = 5;
	F2.On = false;

	// calls set functions for Fan 1
	F1.setSpeed(3);
	F1.setRadius(10);
	F1.setOn(true);

	// calls set functions for Fan 2
	F2.setSpeed(2);
	F2.setRadius(5);
	F2.setOn(false);

	// calls get function for Fan 1 and couts to terminal
	cout << "The fan properties for the first fan are: " << endl;
	cout << "-- The fan speed is: " << F1.getspeed() << endl;
	cout << "-- The fan radius is: " << F1.getradius() << endl;
	cout << "-- The fan is: " << F1.getOn() << endl;
	cout << endl;

	// calls get function for Fan 2 and couts to terminal
	cout << "The fan properties for the second fan are: " << endl;
	cout << "-- The fan speed is: " << F2.getspeed() << endl;
	cout << "-- The fan radius is: " << F2.getradius() << endl;
	cout << "-- The fan is: " << F2.getOn() << endl;
	cout << endl;

	return 0;
}