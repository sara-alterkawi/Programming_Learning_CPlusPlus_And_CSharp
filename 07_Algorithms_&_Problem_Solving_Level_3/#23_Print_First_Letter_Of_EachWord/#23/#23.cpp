// Write a program to read a string then print the first letter of each word in that string
// Example input:
// Please Enter Your String ?
// Sara Omar Al - terkawi @Programming Adivces
// Example output:
// S 
// O
// A
// -
// t
// @
// P
// A

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

// Function to print the first letter of each word in the string
void PrintFirstLetterOfEachWord(string str)
{
	bool inWord = true;
	cout << "The First Letter of Each Word in the String is :" << endl;
	for (int i=0; i < str.length(); i++)
	{
		if (str[i] != ' ' && inWord)
		{
			cout << str[i] << endl;
		}
		inWord = ((str[i] == ' ') ? true : false);
	}
}

// Main function
int main()
{
	PrintFirstLetterOfEachWord(ReadString());
	return 0;
}