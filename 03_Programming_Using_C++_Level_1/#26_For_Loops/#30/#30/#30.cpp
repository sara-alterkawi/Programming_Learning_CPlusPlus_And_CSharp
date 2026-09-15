// Write a program to calculate factorial of N inputed by user 

#include <iostream>
#include <string>
using namespace std;

// Function to calculate factorial
void CalcFactorial(int N)
{
	int factorial = 1;
	for (int i = 1; i <= N; i = i ++)
	{
		factorial = factorial * i;
	}
	if (N < 0)
	{
		cout << "Error! Factorial of a negative number doesn't exist.";
	}
	else
	{
		cout << "Factorial of " << N << " = " << factorial;
	}
}

// Function to read input from user
int ReadInput()
{
	int number;
	cout << "Enter a number to calculate factorial: ";
	cin >> number;
	return number;
}

// Main function
int main()
{
	int N = ReadInput();
	CalcFactorial(N);
	return 0;
}