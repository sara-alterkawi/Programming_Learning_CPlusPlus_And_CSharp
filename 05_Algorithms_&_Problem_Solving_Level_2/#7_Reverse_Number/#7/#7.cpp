// Write a program to read a number N from user and print it in a reversed order.
// Ex: Input 1234 output 4321.

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
void PrintResult(int N)
{
	int Sum = 0, Remainder = 0;
	while (N > 0)
	{
		Remainder = N % 10;
		N = N / 10;
		cout << Remainder;
	}
}

// Main function
int main()
{
	PrintResult(ReadNumber());
	return 0;
}