// Write a program to read a number from user and print all digit frequency in that number.
// Ex: Input 122342, 
// output:
// Digit 1 frequency is 1 Time(s).
// Digit 2 frequency is 3 Time(s).
// Digit 3 frequency is 1 Time(s).
// Digit 4 frequency is 1 Time(s).


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
void PrintResult(int Number)
{
	for (int i = 0; i < 10; i++)
	{
		int freq = CountFrequency(i, Number);
		if (freq > 0)
		{
			cout << "The digit " << i << " frequency is " << freq << " Time(s)." << endl;
		}
	}
}

// Main function
int main()
{
	int Number = ReadNumber("Please enter the main number: ");
	PrintResult(Number);

	return 0;
}