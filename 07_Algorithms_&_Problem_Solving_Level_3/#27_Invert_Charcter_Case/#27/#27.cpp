// Write a program to read a character then invert it's case and print it.
// Please Enter Your Character ?
// Example input:
// a
// Char after inverting case:
// A

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Function to read a string from user input
char  ReadChar()
{
	char input;
	cout << "Please Enter Your character ? ";
	cin >> input;
	return input;
}

// Function to invert the case of a character
char  InvertLetterCase(char char1)
{
	return isupper(char1) ? tolower(char1) : toupper(char1);
}


// Main function
int main()
{
	char char1 = ReadChar();
	cout << "Char after inverting case: " << InvertLetterCase(char1) << endl;

	return 0;
}