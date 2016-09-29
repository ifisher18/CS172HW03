/////////////////////////
// Ian Fisher
// CS 172_HW03_EX_03
// 9/26/16
/////////////////////////

#include <iostream>
using namespace std;

class EvenNumber // define class EvenNumber
{
public: // this data field is public (nothing is private)
    // data field
    int value;
    //

    // constructor that sets default value of 'value' to 0
    EvenNumber()
    {
        value = 0;
    }

    // function that sets even number
    void setValue (int number)
    {
        value = number;
    }

    // function that gets 'value'
    int GetValue()
    {
        return value;
    }

    // function that gets the next even number based on if value entered is even or odd
    EvenNumber getNext()
    {
        // if statement that checks if value is even or odd
        if (value % 2 == 0) { // value is even
            EvenNumber wildcat = EvenNumber(); // creates new EvenNumber object
            wildcat.setValue(value + 2); // setting number in NewNumber to next even number
            return wildcat; // returns new even number
        }
        else { // value is odd
            EvenNumber bluebird = EvenNumber(); // creates new EvenNumber object
            bluebird.setValue(value + 1); // sets NewNumber to next even number
            return bluebird; // returns new even number
        }
    }

    // function that gets the previous even number if value entered is even or odd
    EvenNumber getPrevious()
    {
		// if statement that checks if modulus is 0 or not (even or odd value)
        if (value % 2 == 0) {
            EvenNumber wildcat = EvenNumber(); // creates new EvenNumber object
            wildcat.setValue(value - 2); // setting number to previous even number if value entered is even
            return wildcat; // returns the value after the alteration
        }
        else {
            EvenNumber bluebird = EvenNumber(); // creates new EvenNumber object
            bluebird.setValue(value - 1); // of the value entered was odd, the previous even number would be one less than odd number
            return bluebird; // returns the new set value
        }
    }
};

int main ()
{
    EvenNumber var1 = EvenNumber(); // new EvenNumber type
    var1.setValue(16); // this sets the value that will then be used in above functions to determine the next and prev. even numbers
    cout << "The starting even value is " << var1.GetValue() << "." << endl;
    cout << "The next even number is: " << var1.getNext().GetValue() << "." << endl; // performing getNext on even number object
    cout << "The previous even number is: " << var1.getPrevious().GetValue() << "." << endl; // perfomring getPrevious on even number object
    return 0;
}
