// Write a program to read a character the check if it is a vowel or not (Vowels are : a, e i, o, u)
// Example:
// Please Enter a Character ?
// Input String Example:
// a
// Output Example:
// YES Letter 'a' is vowel

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Function to read a character from user input
char ReadCharacter()
{
	char ch;
	cout << "Please Enter a Character ?" << endl;
	cin >> ch;
	return ch;
}

// Function to check if the character is a vowel
bool IsVowel(char ch)
{
	ch = tolower(ch); // Convert to lowercase for uniformity
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Main function
int main()
{
	char ch = ReadCharacter();
	if (IsVowel(ch))
	{
		cout << "YES Letter '" << ch << "' is vowel" << endl;
	}
	else
	{
		cout << "NO Letter '" << ch << "' is not vowel" << endl;
	}

	return 0;
}