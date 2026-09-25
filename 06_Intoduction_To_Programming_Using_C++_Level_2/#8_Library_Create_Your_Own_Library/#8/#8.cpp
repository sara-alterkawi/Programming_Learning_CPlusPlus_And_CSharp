// Write a program to read a digit and number from user and print digit frequency in that number.
// Ex: Input 122342, 2 output 2.

#include <iostream>
#include <string>
#include "MyInputLib.h"
#include "MyPrintLib.h"
using namespace std;

// Main function
int main()
{
	int Number = MyInputLib::ReadNumber("Please enter the main number: ");
	int Digit = MyInputLib::ReadNumber("Enter a digit (0-9) to check: ");
	MyPrintLib::PrintResult(Digit, Number);
	return 0;
}