// Write a program to calculate factorial of N inputed by user 

#include <iostream>
#include <string>
using namespace std;

// Function to calculate factorial
void CalcFactorial(int N)
{
	int factorial = 1;
	while (N > 1)
	{
		factorial *= N;
		N--;
	}
	cout << "Factorial of " << N << " is " << factorial << endl;
}

// Function to read input from user
int ReadInput()
{
	int number;
	cout << "Enter a Positive number to calculate factorial: ";
	cin >> number;
	while (number < 0)
	{
		cout << "Error! Number must be non-negative. Try again: ";
		cin >> number;
	}
	return number;
}

// Main function
int main()
{
	int N = ReadInput();
	CalcFactorial(N);
	return 0;
}