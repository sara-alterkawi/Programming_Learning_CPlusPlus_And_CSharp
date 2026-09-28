// Write a program to read a string then invert all its letter's case and print it.
// Example input:
// Please Enter Your String ?
// sara al - TERKAWI
// Example output:
// String after Inverting All Letters Case :
// SARA AL - terkawi

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

// Function to invert the case of a character
char  InvertLetterCase(char char1)
{
	return isupper(char1) ? tolower(char1) : toupper(char1);
}

// Function to invert the case of all letters in a string
string  InvertAllStringLettersCase(string str)
{
	for (short i = 0; i < str.length(); i++)
	{
		str[i] = InvertLetterCase(str[i]); 
	}
	return str; 
}

// Main function
int main()
{
	string str = ReadString();
	cout << "\nString after Inverting All Letters Case:\n";
	cout << InvertAllStringLettersCase(str) << endl;

	return 0;
}