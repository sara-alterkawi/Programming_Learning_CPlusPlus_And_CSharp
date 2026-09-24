// Write a program to calculate factorial of N inputed by user 

#include <iostream>
#include <string>
using namespace std;

// Function to read input from user
int ReadPositivNum()
{
	int number;
	do {
		cout << "Enter a Positive number to calculate factorial: ";
		cin >> number;
		if (number < 0) {
			cout << "Error! Number must be non-negative. Try again." << endl;
		}
	} while (number < 0);
	return number;
}

// Function to calculate factorial
int Factorial(int N)
{
	int factorial = 1;
	for (int i = 2; i <= N; i++) {
		factorial *= i;
	}
	return factorial;
}

void printResult(int N, int factorial)
{
	cout << "Factorial of " << N << " is " << factorial << endl;
}

// Main function
int main()
{
	int N = ReadPositivNum();
	printResult(N, Factorial(N));
	return 0;
}