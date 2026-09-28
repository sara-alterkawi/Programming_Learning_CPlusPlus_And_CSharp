// Write a program to read a string then count each word in that string.
// Example:
// Please Enter Your String ?
// Sara Al_terkawi @ProgrammingAdvices
// Output:
// The number of words in your string is : 3

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

// Function to print each word in the string
int CountWords(const string& str)
{
	stringstream ss(str);
	string word;
	int wordCount = 0;
	while (ss >> word)
	{
		wordCount++;
	}
	return wordCount;
}

// Main function
int main()
{
	string inputString = ReadString();
	cout << "\nThe number of words in your string is: " << CountWords(inputString) << endl;

	return 0;
}