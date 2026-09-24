// Write a program to ask the user to read a number and print the sum of its digits.
// Ex: input 1234 output Sum Of Digits = 10.

#include <iostream>
#include <string>
using namespace std;

// Function to read a number from the user
int ReadNumber()
{
	int N;
	do
	{
		cout << "Enter positiv numbers: ";
		cin >> N;
	} while (N <= 0);

	return N;
}

// Function to print the result
int SumOfDigits(int N)
{
	int Sum = 0, Remainder = 0;
	while (N > 0)
	{
		Remainder = N % 10;
		N = N / 10;
		Sum = Sum + Remainder;
	}
	return Sum;
}

// Function to Print the result
void PrintResult(int N)
{
	cout << "Sum Of Digits = " << SumOfDigits(N) << endl;
}

// Main function
int main()
{
	PrintResult(ReadNumber());
	return 0;
}