// Write a program to ask the user to enter three numbers , then print the maximum of the three numbers.

#include <iostream>
#include <string>
using namespace std;

// Function Prototypes
void readNumbers(int& num1, int& num2, int& num3)
{
	cout << "Please Enter number 1: ";
	cin >> num1;
	cout << "Please Enter number 2: ";
	cin >> num2;
	cout << "Please Enter number 3: ";
	cin >> num3;
}

// Function to find the maximum of two numbers
int maxOf3Numbers(int num1, int num2, int num3)
{
	if (num1 >= num2 && num1 >= num3)
		return num1;
	else if (num2 >= num1 && num2 >= num3)
		return num2;
	else
		return num3;
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
	int num1, num2, num3;
	readNumbers(num1, num2, num3);
	printResult(maxOf3Numbers(num1, num2, num3));
	return 0;
}
