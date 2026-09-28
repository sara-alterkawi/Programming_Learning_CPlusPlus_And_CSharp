// Write a program to read a string then count all vowels in that string(Vowels are : a, e i o ub
// Example:
// 	Please Enter Your String ?
// Input String Example:
// Sara Omar Alterkawi
// Output Example:
// Number of vowels is : 8

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

// Function to check if the character is a vowel
bool IsVowel(char ch)
{
	ch = tolower(ch); // Convert to lowercase for uniformity
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to count occurrences of a character in a string
int CountVowels(string& str)
{
	int vowelCount = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (IsVowel(str[i]))
		{
			vowelCount++;
		}
	}
	return vowelCount;
}

// Main function
int main()
{
	string inputString = ReadString();
	
	cout << "Number of vowels is : " << CountVowels(inputString) << endl;

	return 0;
}