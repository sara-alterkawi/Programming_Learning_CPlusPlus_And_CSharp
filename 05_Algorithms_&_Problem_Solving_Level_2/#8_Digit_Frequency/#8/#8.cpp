// Write a program to read a digit and number from user and print digit frequency in that number.
// Ex: Input 122342, 2 output 2.

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

// Function to count the frequency
int CountFrequency(float Digit, int N)
{
	int freq = 0, Remainder = 0;
	while (N > 0)
	{
		Remainder = N % 10;
		N = N / 10;
		if (Digit == Remainder)
			freq++;
	}
	return freq;
}

// Function to print the result
void PrintResult(int Digit, int Number)
{
	int freq = CountFrequency(Digit, Number);
	cout << "The digit " << Digit << " appeared " << freq << " times in " << Number << "." << endl;
}

// Main function
int main()
{
	int Number = ReadNumber("Please enter the main number: ");
	int Digit = ReadNumber("Enter a digit (0-9) to check: ");
	PrintResult(Digit, Number);

	return 0;
}