// Write a program to ask the user to enter two numbers , then print the maximum of the two numbers.

#include <iostream>
#include <string>
using namespace std;

// Function Prototypes
void readNumbers(int &num1, int & num2)
{
	cout << "Please Enter number 1: ";
	cin >> num1;
	cout << "Please Enter number 2: ";
	cin >> num2;
}

// Function to find the maximum of two numbers
int maxOf2Numbers(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

// Function to print the result
void printResult(int max)
{
	cout << "-------------------------" << endl;
	cout << "The maximum number is " << max << endl;
	cout << "-------------------------" << endl;
}

// Main Function
int main()
{
	int num1, num2;
	readNumbers(num1, num2);
	printResult(maxOf2Numbers(num1, num2));
	return 0;
}
