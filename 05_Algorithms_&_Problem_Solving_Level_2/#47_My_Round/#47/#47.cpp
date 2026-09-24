// Write a program to print Round of numbers, don't use built in round function.
// Example Input
// Please enter a number? 33.54323
// Output
// My round Result : 34
// C++ round Result : 34

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

// Function to get fractional part
float GetFractionPart(float number)
{
	return number - int(number);
}

// MyRound
float MyRound(float number)
{
	int integerPart = number;

	float FractionPart = GetFractionPart(number);

	if (abs(FractionPart) >= 0.5)
	{
		if (number > 0)
			return ++integerPart;
		else
			return --integerPart;
	}
	else
	{
		return integerPart;
	}
}

// Main function
int main()
{
	float number = ReadNumber("Please enter a number? ");

	cout << "My round Result: " << MyRound(number) << endl;
	cout << "C++ round Result: " << round(number) << endl;

	return 0;
}