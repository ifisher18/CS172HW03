////////////////////
// Ian Fisher
// CS172_HW03_EX05
// 9/29/16
////////////////////

#include <iostream>
using namespace std;

class MyInteger {
private:
    // data field
    int value;
public:
    // constructor
    MyInteger(int newVal) {
        value = newVal;
    }

    // get function for value
    int getValue() const {
        return value;
    }

    // Constant functions
    // returns true value is even, odd, or prime
    bool isEven() const {
        return (value % 2 == 0); // returns true if remainder is 0
    }
    bool isOdd() const {
        return (value % 2 != 0); // returns true if remainder is not 0
    }
    bool isPrime() const {
        int i, flag = 0;
        for (i = 2; i <= value / 2; ++i) // loop that checks if value is prime or not
        {
            if (value%i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            return true; // returns true if number is prime
        else
            return false; // returns false if number is not prime
    }

    // static functions
    // returns true if value is even, odd, prime
    static bool isEven(int i) {
        return (i % 2 == 0); // determines if the remainder of i is 0 or not (determining if even or not)
    }
    static bool isOdd(int i) {
        return (i % 2 != 0); // determines if i is odd based on remainder
    }
    static bool isPrime(int j) {
        int i, flag = 0;
        for (i = 2; i <= j / 2; ++i) // loop that checks if value is prime or not
        {
            if (j % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            return true;
        else
            return false;
    }

    // static functions
    // returns true if value is even, odd, prime
    static bool isEven(const MyInteger& i) {
        return (i.getValue() % 2 == 0); // compares the value contained in i to see if even (t or false)
    }
    static bool isOdd(const MyInteger& i) {
        return (i.getValue() % 2 != 0); // compares the value of variable i to see if odd or not
    }
    static bool isPrime(const MyInteger& j) {
        int i, flag = 0;
        for (i = 2; i <= j.getValue() / 2; ++i) // loop that checks if value is prime or not
        {
            if (j.getValue() % i == 0) // if statement that is copied from above that checks to see if prime or not
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            return true;
        else
            return false;
    }

    // Constant functions
    // return true if the value in the object is equal to specified value
    bool equals(int i) const {
        return (i == value); // comparing i to value to determine if true or false
    }
    bool equals (const MyInteger& i) const {
        return (i.getValue() == value); // comparing the value contained in i to value
    }

    //static function
    // converts a string to an int value
    static int parseInt(const string& s) {
        return atoi(s.c_str()); // returns the integer value for a string
    }
};

// "client program"
int main() {
    int V = 0;

    cout << "Enter an integer: "; // prompts the user to enter an integer
    cin >> V;
    MyInteger integer(V); // asigns V
    cout << endl;

    // client program for testing constant isEven, isOdd, and isPrime
    cout << "Constant functions isEven(), isOdd(), and isPrime() output:" << endl;
    if (integer.isEven() == true) {
        cout << "The integer is even" << endl;
    }
    else if (integer.isOdd() == true) {
        cout << "The integer is odd" << endl;
    }
    if (integer.isPrime() == true) {
        cout << "The integer is prime" << endl;
    }
    else cout << "The integer is not prime" << endl;
    cout << endl;

    // client program part for testing static isEven(int), isOdd(int), and isPrime(int)
    cout << "Static functions isEven(int), isOdd(int), and isPrime(int) output:" << endl;
    if (MyInteger::isEven(V) == true) {
        cout << "The integer is even" << endl;
    }
    else if (MyInteger::isOdd(V) == true) {
        cout << "The integer is odd" << endl;
    }
    if (MyInteger::isPrime(V) == true) {
        cout << "The integer is prime" << endl;
    }
    else cout << "The integer is not prime" << endl;
    cout << endl;

    // client program part for testing static isEven(const MyInteger&), isOdd(const MyInteger&), and isPrime(const MyInteger&)
    cout << "Static functions isEven(const MyInteger&), isOdd(const MyInteger&), and isPrime(const MyInteger&) outputs:" << endl;
    if (MyInteger::isEven(integer) == true) {
        cout << "The integer is even" << endl;
    }
    else if (MyInteger::isOdd(integer) == true) {
        cout << "The integer is odd" << endl;
    }
    if (MyInteger::isPrime(integer) == true) {
        cout << "The integer is prime" << endl;
    }
    else cout << "The integer is not prime" << endl;
    cout << endl;

    // client program part for testing constant equals(int) and equals(const MyInteger&)
    cout << "Constant functions equals(int) and equals(const MyInteger&) output:" << endl;
    int g;
    cout << "Enter a random integer: "; // prompts user for a random integer
    cin >> g;
    if (integer.equals(g)) { // if statement that checks truth
        cout << "The inputed value is equal to previously inputed value" << endl;
    } else cout << "The inputed value is not equal to previously inputed value" << endl;

    if (integer.equals(MyInteger(g))) { // if statement that checks if true, truth of statement results in one of two statements
        cout << "The inputed value is equal to previously inputed value" << endl;
    } else cout << "The inputed value is not equal to previously inputed value" << endl;
    cout << endl;

    // client program part for testing static function parseInt(const string&)
    cout << "Static function parseInt(const string&) output:" << endl;
    string x;
    cout << "Enter a number: ";
    cin >> x;
    int t = MyInteger::parseInt(x); // declares a variable t and then converts
    cout << "The number entered was: " << t << endl; // outputs to user what t is, or checks if function is working
    cout << endl;

    
    return 0;
}
