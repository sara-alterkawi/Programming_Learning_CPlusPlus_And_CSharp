// Write a program to fill an array with numbers,
// then checkif it is Palindrome array or not,
// Palindrome is a number that reads the same from right to left.
// Example
// Input
// 10 20 30 30 20 10
// Output
// Array Elements: 10 20 30 30 20 10
// Yes array is Palindrome

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

// Read a positive number between 1 and 100
int ReadNumber(string message)
{
	int N;
	do
	{
		cout << message;
		cin >> N;
	} while (N <= 0);
	return N;
}

// Function to add numbers to the array
void AddElementToArray(int number, int arr[100], int& arrayLength)
{
	arrayLength++;
	arr[arrayLength - 1] = number;
}

// Function to ask if the user need to add more
void AskUserToInputMoreNumberInArray(int arr[100], int& arrayLength)
{
	bool addNumb = true;

	do
	{
		AddElementToArray(ReadNumber("Please enter a number? "), arr, arrayLength);
		cout << "\nDo you want to add numbers? [0]:No, [1]:Yes? ";
		cin >> addNumb;

	} while (addNumb);
}

// Function to check if array is Palindrome
bool IsPalindromeArray(int arr[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] != arr[length - i - 1])
			return false;
	}
	return true;
}


// Function to print all array elements
void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

// Main function
int main()
{
	int arr[100], arrLength = 0;
	AskUserToInputMoreNumberInArray(arr, arrLength);

	cout << "Array Elements: ";
	PrintArray(arr, arrLength);

	if (IsPalindromeArray(arr, arrLength))
		cout << "Yes array is Palindrome" << endl;
	else
		cout << "No array is not Palindrome" << endl;

	return 0;
}