// Write a program to red  a number from user and check if it is odd or even and print the result.

#include <iostream>
#include <string>
using namespace std;

// Define an enumeration for number types
enum enNumberType { ODD = 1, EVEN = 2 };

// Function prototypes
int readNumber()
{
	int num;
	cout << "Please Enter a number: ";
	cin >> num;
	return num;
}

// Function to check if the number is odd or even
enNumberType checkNumberType(int num)
{
	if (num % 2 == 0)
		return enNumberType::EVEN;
	else
		return enNumberType::ODD;
}

// Function to print the result
 void printResult(enNumberType numType)
{
	if (numType == enNumberType::EVEN)
		cout << "The number is even." << endl;
	else
		cout << "The number is odd." << endl;
}

 // Main function
int main()
{
	printResult(checkNumberType(readNumber()));
	return 0;
}