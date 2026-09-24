// Write a program to read a number N from user and print all Perfect numbers from 1 to N
// Note: Perfect Number = Sum (all divisors)
// Ex: 28 = 1 + 2 + 4 + 7 + 14
// 6 = 1 + 2 + 3
// input 500 output 6, 28, 496.

#include <iostream>
#include <string>
using namespace std;

// Function to read a number from the user
int ReadNumber()
{
	int Numb;
	do
	{
		cout << "Enter positiv numbers: ";
		cin >> Numb;
	} while (Numb <= 0);

	return Numb;
}

// Function to check if the number is Perfect or not
bool CheckPerfect(int Numb)
{
	int Sum = 0;
	for (int i = 1; i < Numb; i++)
	{
		if (Numb % i == 0)
			Sum += i;
	}
	return Numb == Sum;
}

// Function to print the result
void PrintResult(int N)
{
	for (int i = 1; i <= N; i++)
	{
		if (CheckPerfect(i))
			cout << i << endl;
	}
	
}

// Main function
int main()
{
	PrintResult(ReadNumber());
	return 0;
}