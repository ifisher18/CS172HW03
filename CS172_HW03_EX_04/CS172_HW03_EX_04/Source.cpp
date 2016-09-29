////////////////////
// Ian Fisher
// CS172_HW03_EX_04
// 9/26/16
///////////////////

#include <iostream>
#include <string>
using namespace std;

// function that sorts the characters in a string
string sort(string& s)
{
	bool organized = true; // flags organized to be true, defaults to true before the do loop
	s.size(); // declares size of string s
	do {
		organized = true; // flag
		for (int i = 0; i < s.size() - 1; i++) // loops through each memory location of array s
		{
			if (tolower(s[i]) > tolower(s[i + 1])) // if statement that checks if character in first memory location is less than char in second location
			{
				char temp = s[i]; // temp value (used to switch)
				s[i] = s[i + 1]; // switching process
				s[i + 1] = temp; // switching process
				organized = false; // sets organized to false after if statement
			}
		}
	} while (!organized); // the loop will keep running until organized
	return s; // returns the sorted string
}

// function that prompts user for input, 
int main ()
{
	string input; // creates variable input (string type)
	cout << "Enter a string s: ";
	cin >> input;

	cout << "The sorted string is: " << sort(input) << endl; // calls sort function which sorts input, returns result
	return 0;
}