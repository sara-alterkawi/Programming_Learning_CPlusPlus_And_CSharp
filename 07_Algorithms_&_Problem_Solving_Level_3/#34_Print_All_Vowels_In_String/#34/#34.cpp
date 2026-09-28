// Write a program to read a string then print all vowels in that string(Vowels are : a, e, i, o, u)
// Example:
// Please Enter Your String ?
// Input String Example:
// Sara Omar Alterkawi
// Output Example:
// Vowels in string are :	a	a	O	a	A	e	a	i

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

// Function to Print occurrences of a vowels in a string
void PrintVowels(const string& str)
{
	cout << "Vowels in string are : ";
	for (char ch : str)
	{
		if (IsVowel(ch))
		{
			cout << ch << "\t";
		}
	}
	cout << endl;
}


// Main function
int main()
{
	string inputString = ReadString();
	PrintVowels(inputString);

	return 0;
}