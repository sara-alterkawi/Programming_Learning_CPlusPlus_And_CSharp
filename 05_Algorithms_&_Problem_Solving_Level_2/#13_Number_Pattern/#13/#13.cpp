// Write a program to ask the user to enter two numbers , then print inverted pattern as follows.
// Input		Input
// 3			5
// Output		output
// 1			1
// 22			22
// 333			333
//				4444
//				55555

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
void PrintInvertedPattern(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << i;
		cout << endl;
	}
}

// Main function
int main()
{
	int Number = ReadNumber("Please enter the main number: ");
	PrintInvertedPattern(Number);
	return 0;
}