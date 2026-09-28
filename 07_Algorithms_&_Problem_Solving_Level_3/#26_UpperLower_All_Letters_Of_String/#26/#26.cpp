// Write a program to read a string then upper all letters, then lower all letters, and print them.
// Example input:
// Please Enter Your String ?
// Sara Omar Alterkawi
// String after Upper :
// SARA OMAR ALTERKAWI
// String after Lower :
// sara omar alterkawi

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Function to read a string from user input
string  ReadString()
{
	string input;
	cout << "Please Enter Your String ?" << endl;
	getline(cin, input);
	return input;
}

// Function to convert the first letter of each word to uppercase
string UpperAllString(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
			str[i] = toupper(str[i]);
	}
	return str;
}

// Function to convert the first letter of each word to lowercase
string LowerAllString(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		str[i] = tolower(str[i]);
	}
	return str;
}


// Main function
int main()
{
	string str = ReadString();

	cout << "\nString after Upper :" << endl;
	str = UpperAllString(str);
	cout << str << endl;

	cout << "\nString after Lower :" << endl;
	str = LowerAllString(str);
	cout << str << endl;

	return 0;
}