// Write a program to read a string and read a character then count the character in that string
// Example input:
// Please Enter Your String ?
// Sara al - Terkawi
// Please Enter a Character ?
// a
// Example output:
// Letter 'a' Count = 4

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

// Function to read a character from user input
char ReadCharacter()
{
	char ch;
	cout << "Please Enter a Character ?" << endl;
	cin >> ch;
	return ch;
}

// Main function
int main()
{
	string inputString = ReadString();
	char inputChar = ReadCharacter();
	cout << "Letter '" << inputChar << "' Count = " << CountCharacter(inputString, inputChar) << endl;
	return 0;
}