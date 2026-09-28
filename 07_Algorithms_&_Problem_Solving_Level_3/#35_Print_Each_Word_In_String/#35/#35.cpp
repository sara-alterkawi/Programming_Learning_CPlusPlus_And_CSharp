// Write a program to read a string then print each word in that string.
// Example:
// Please Enter Your String ?
// Sara Al_terkawi @ProgrammingAdvices
// Output:
// Your string wrords are :
// Sara
// Al - terkawi
// @ProgrammingAdvices

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
void PrintEachWordInString(const string& str)
{
	stringstream ss(str);
	string word;
	cout << "Your string words are :" << endl;
	while (ss >> word)
	{
		cout << word << endl;
	}
}

// Main function
int main()
{
	string inputString = ReadString();
	PrintEachWordInString(inputString);

	return 0;
}