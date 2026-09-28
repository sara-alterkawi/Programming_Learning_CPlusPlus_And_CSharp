// Write a program to read a string and read a character then count the character in that string(Match Case or Not)
// Example:
// Please Enter Your String ?
// Input String Example:
// Sara Omar Alterkawi
// Please Enter a Character ?
// a
// Letter 'a' Count = 4
// Letter 'a' Or 'A' Count = 5

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Function to read a string from user input
string ReadString()
{
	string input;
	cout << "Please Enter Your String ?" << endl;
	getline(cin, input);
	return input;
}

// Function to read a character from user input
char ReadCharacter()
{
	char ch;
	cout << "Please Enter a Character ?" << endl;
	cin >> ch;
	return ch;
}

// Function to invert the case of a character
char  InvertLetterCase(char char1)
{
	return isupper(char1) ? tolower(char1) : toupper(char1);
}

// Function to count occurrences of a character in a string
int CountCharacter(string& str, char ch)
{
	int count = 0;
	for (char current : str)
	{
		if (current == ch)
		{
			count++;
		}
	}
	return count;
}

// Main function
int main()
{
	string inputString = ReadString();
	char inputChar = ReadCharacter();

	cout << "\nLetter '" << inputChar << "' Count = " << CountCharacter(inputString, inputChar) << endl;

	char invertedChar = InvertLetterCase(inputChar);
	int countInverted = CountCharacter(inputString, invertedChar);

	cout << "Letter '" << inputChar
		 << "' Or '" << invertedChar
		 << "' Count = " << (CountCharacter(inputString, inputChar) + CountCharacter(inputString, invertedChar)) << endl;
	
	return 0;
}