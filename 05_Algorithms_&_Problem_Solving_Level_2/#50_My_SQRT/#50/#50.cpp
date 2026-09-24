// Write a program to print Sqrt of numbers, don't use built in Sqrt function.
// Example Input
// Please enter a number? 226
// Output
// My Sqrt Result : 15
// C++ Sqrt Result : 15.0333

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

// Function to read a positive number
float ReadNumber(string message)
{
	float N;
	cout << message;
	cin >> N;
	return N;
}

// MySqrt
short MySqrt(short Number)
{
	return pow(Number, 0.5);
}

// Main function
int main()
{
	float number = ReadNumber("Please enter a number? ");

	cout << "My Sqrt Result: " << MySqrt(number) << endl;
	cout << "C++ Sqrt Result: " << sqrt(number) << endl;

	return 0;
}