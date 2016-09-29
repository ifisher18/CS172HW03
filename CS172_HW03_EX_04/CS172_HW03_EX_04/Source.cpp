////////////////////
// Ian Fisher
// CS172_HW03_EX_04
// 9/26/16
///////////////////

#include <iostream>
#include <string>

using namespace std;

// sort characters in a string

string sort(string& s)
{
	bool organized = true;

	
	s.size();
	do {
		organized = true; // flag
		for (int i = 0; i < s.size() - 1; i++)
		{
			if (s[i] > s[i + 1])
			{
				char temp = s[i];
				s[i] = s[i + 1];
				s[i + 1] = temp;
				organized = false;
			}
		}
	} while (!organized);
	
	return s;
}

int main ()
{
	string input;
	cout << "Enter a string s: ";
	cin >> input;
	for (int i = 0;
	cout << "The sorted string is: " << sort(input) << endl;
}