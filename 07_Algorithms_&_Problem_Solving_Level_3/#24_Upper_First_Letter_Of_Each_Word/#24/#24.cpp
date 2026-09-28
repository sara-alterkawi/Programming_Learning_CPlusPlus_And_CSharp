// Write a program to read a string then uppercase the first letter of each word in that string
// Example input:
// Please Enter Your String ?
// Sara omar alterkawi @programming adivces
// Example output:
// Sara Omar Alterkawi @programming Adivces

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

// Function to uppercase the first letter of each word in the string
string UpperFirstLetterOfEachWord(string str)
{
	bool inWord = true;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ' && inWord)
		{
			str[i] = toupper(str[i]);
		}
		inWord = ((str[i] == ' ') ? true : false);
	}
	return str;
}

// Main function
int main()
{
	string str = ReadString();
	cout << "\nString after converging the first letter of each word to uppercase is :\n" << endl;
	str =UpperFirstLetterOfEachWord(str);
	cout << str << endl;
	return 0;
}