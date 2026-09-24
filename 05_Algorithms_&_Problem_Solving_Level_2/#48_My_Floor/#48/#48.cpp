// Write a program to print Floor of numbers, don't use built in Floor function.
// Example Input
// Please enter a number? 33.54323
// Output
// My Floor Result : 33
// C++ Floor Result : 33

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

// MyFloor
float MyFloor(float number)
{
	if (number > 0)
		return int(number);
	else
		return int(--number);
}

// Main function
int main()
{
	float number = ReadNumber("Please enter a number? ");

	cout << "My Floor Result: " << MyFloor(number) << endl;
	cout << "C++ Floor Result: " << floor(number) << endl;

	return 0;
}