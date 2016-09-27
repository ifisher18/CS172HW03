/////////////////////////
// Ian Fisher
// CS 172_HW03_EX_03
// 9/26/16
/////////////////////////

#include <iostream>
using namespace std;

class EvenNumber // define class EvenNumber
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

    // function that sets even number
    void setValue (int number)
    {
        value = number;
    }

    // function
    int GetValue()
    {
        return value;
    }

    // function
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

    // function
    EvenNumber getPrevious()
    {
        if (value % 2 == 0) {
            EvenNumber wildcat = EvenNumber();
            wildcat.setValue(value - 2);
            return wildcat;
        }
        else {
            EvenNumber bluebird = EvenNumber();
            bluebird.setValue(value - 1);
            return bluebird;
        }
    }
};

int main ()
{
    EvenNumber var1 = EvenNumber(); // new EvenNumber type
    var1.setValue(16);

    cout << "The starting even value is " << var1.GetValue() << "." << endl;
    cout << "The next even number is: " << var1.getNext().GetValue() << "." << endl; // performing getNext on even number object
    cout << "The previous even number is: " << var1.getPrevious().GetValue() << "." << endl; // perfomring getPrevious on even number object

    return 0;
}
