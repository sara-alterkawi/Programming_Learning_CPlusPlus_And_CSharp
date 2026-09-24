// Write a program to ask the user to enter two numbers , then print letter as follows.
// Input		Input
// 3			5
// Output		output
// CCC			EEEEE
// BB			DDDD
// A     		CCC
//				BB
//				A

#include <iostream>
#include <string>
using namespace std;

// Function to read a positive number
int ReadNumber(string message)
{
	int N;
	do
	{
		cout << message;
		cin >> N;
	} while (N < 0);
	return N;
}

// Function to make the inverted Number
void PrintLetterPattern(int Number)
{
	for (int i = 65 ; i <= 65 + Number - 1; i++)
	{
		for (int j = 1; j <= Number - ((65 + Number - 1) - i); j++)
			cout << char(i);
		cout << endl;
	}
}

// Main function
int main()
{
	int Number = ReadNumber("Please enter the main number: ");
	PrintLetterPattern(Number);
	return 0;
}