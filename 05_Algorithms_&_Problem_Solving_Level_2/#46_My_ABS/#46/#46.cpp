// Write a program to print abs of numbers, don't use built in abs function.
// Example Input
// Enter number of elements: -10
// Output
// My abs Result: 10
// C++ abs Result: 10

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

// Function to read a positive number
int ReadNumber(string message)
{
	int N;
	cout << message;
	cin >> N;
	return N;
}

// MyABS Function
int MyABS(int number)
{
	if (number > 0)
		return number;
	else
		return number * -1;
}


// Main function
int main()
{
	int number = ReadNumber("Please enter a number? ");

	cout << "My abs Result: " << MyABS(number) << endl;
	cout << "C++ abs Result: " << abs(number) << endl;

	return 0;
}