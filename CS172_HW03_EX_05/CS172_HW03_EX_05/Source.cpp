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
	int getValue() {
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
			return true;
		else
			return false;
	}
	
	// static functions
	// returns true if value is even, odd, prime
	static bool isEven(int) {
		return 
	}
	static bool isOdd(int) {}
	static bool isPrime(int) {}

	// static functions
	// returns true if value is even, odd, prime
	static bool isEven(const MyInteger&) {}
	static bool isOdd(const MyInteger&) {}
	static bool isPrime(const MyInteger&) {}

	// Constant functions
	// return true if the value in the object is equal to specified value
	bool equals(int) const {}
	bool equals (const MyInteger&) const {}

	//static function
	// converts a string to an int value
	static void parseInt(const string&) {}
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
	// code for the test

	// cient program part for testing static isEven(const MyInteger&), isOdd(const MyInteger&), and isPrime(const MyInteger&)
	cout << "Static functions isEven(const MyInteger&), isOdd(const MyInteger&), and isPrime(const MyInteger&) outputs:" << endl;
	// code for the test

	// client program part for testing constant equals(int) and equals(const MyInteger&)
	cout << "Constant functions equals(int) and equals(const MyInteger&) output:" << endl;
	// code for the test

	// client program part for testing static function parseInt(const string&)
	cout << "Static function parseInt(const string&) output:" << endl;
	// code for the test

	return 0;
}
