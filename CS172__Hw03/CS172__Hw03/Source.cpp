/////////////////
// Ian Fisher
// CS172HW03_01
// 9/21/16
/////////////////

#include <iostream>

using namespace std;

class Fan // creates a class called "Fan"
{
public:
	// data field
	int speed;
	bool On;
	double radius;

	// function that gets a value speed (accessor function)
	int getspeed()
	{
		return speed; // returns the value for speed
	}

	// function that gets a value radius (accessor function)
	double getradius()
	{
		return radius; // returns the value for radius
	}

	// function that gets a value On (accessor function)
	bool getOn()
	{
		return On; // returns the value for On
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
			On = false; // if fan is off, sets boolean to false
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

	// For first fan, assigns values to variables (speed, radius, on/off)
	F1.speed = 3;
	F1.radius = 10;
	F1.On = true;

	// for second fan, assigns values to variables (speed, radius, on/off)
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
	cout << "-- The fan speed is: " << F1.getspeed() << endl; // calls get speed function that sets feed to needed value
	cout << "-- The fan radius is: " << F1.getradius() << endl; // calls getradius function as well
	if (F1.getOn() == 1) // if statement that checks if fan is on or off
		cout << "-- The fan is on" << endl;
	else
		cout << "-- The fan is off" << endl;
	cout << endl;

	// calls get function for Fan 2 and couts to terminal
	cout << "The fan properties for the second fan are: " << endl;
	cout << "-- The fan speed is: " << F2.getspeed() << endl;
	cout << "-- The fan radius is: " << F2.getradius() << endl;
	if (F2.getOn() == 1) // same thing as above-- checks if fan is on or off
		cout << "-- The fan is on" << endl;
	else
		cout << "-- The fan is off" << endl;
	cout << endl;

	return 0;
}