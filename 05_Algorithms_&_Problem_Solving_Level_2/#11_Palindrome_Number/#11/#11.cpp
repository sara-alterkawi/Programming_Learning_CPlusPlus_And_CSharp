// Write a program to ask the userr to enter number and check if it is Palindrome.
// Note: Palindrome is a number that reads the same from right to left
// Ex Input 12321 output Yes it is Palindrome number:

#include <iostream>
#include <string>
using namespace std;

// Function to read a positive number
int ReadNumber(string message)
{
	int numb;
	do
	{
		cout << message;
		cin >> numb;
	} while (numb < 0);
	return numb;
}

// Function to Reverse the Number
int ReverseNumber(int number)
{
	int numb = 0, remainder = 0;
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		numb = numb * 10 + remainder;
	}
	return numb;
}

bool IsPalindrome(int number)
{
	return number == ReverseNumber(number);
}

// Function to print the result
void PrintResult(int number)
{
		if (IsPalindrome (number))
			cout << number << " Yes it is a Palindrome number." << endl;
		else 
			cout << number << " No it is Not aPalindrome number." << endl;
}

// Main function
int main()
{
	int number = ReadNumber("Please enter the main number: ");
	PrintResult(number);

	return 0;
}