/////////////////////////
// Ian Fisher
// CS 172_HW03_EX_03
// 9/26/16
/////////////////////////

#include <iostream>
using namespace std;

class EvenNumber
{
public:
	// data field
	int value;
	//

	// constructor
	EvenNumber()
	{
		value = 0;
	}

	// function that sets even number at 16
	void setEvenNumber (int number)
	{
		number = 16;
	}

	// function 
	int GetValue()
	{
		return value;
	}

	// function
	int getNext()
	{
		return; // even number (next even number after current even number
	}

	// function
	int getPrevious ()
	{
		return; // even number before current number
	}
};

int main ()
{
	cout << "The starting even value is 16." << endl;
	cout << "The next even number is: " << getNext() << "." << endl;
	cout << "The previous even number is: " << getPrevious() << "." << endl;
	
	return 0;
}