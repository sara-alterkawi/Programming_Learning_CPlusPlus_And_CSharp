// Write a program to read a string then count small / capital letters in that string
// Example input:
// Please Enter Your String ?
// sara al - TERKAWI
// Example output:
// String Length = 17
// Capital Letters Count = 7
// Small Letters Count = 6

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
// Enumeration for letter case types
enum enWhatToCount
{ 
	SmallLetters = 0, 
	CapitalLetters = 1,
	All = 3
};

// Function to count letters based on the specified type
int CountLetters(string str, enWhatToCount whatToCount)
{
	int count = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (whatToCount == SmallLetters && islower(str[i]))
			count++;
		else if (whatToCount == CapitalLetters && isupper(str[i]))
			count++;
		else if (whatToCount == All && isalpha(str[i]))
			count++;
	}
	return count;
}

// Main function
int main()
{
	string str = ReadString();
	cout << "String Length = " << str.length() << endl;
	cout << "Capital Letters Count = " << CountLetters(str, CapitalLetters) << endl;
	cout << "Small Letters Count = " << CountLetters(str, SmallLetters) << endl;
	return 0;
}