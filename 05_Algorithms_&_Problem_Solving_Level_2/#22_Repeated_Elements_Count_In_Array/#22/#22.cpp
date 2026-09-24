// Write a program to read N elements and store them in an array then print all array elements and ask for number to check.
// then print how many number a certain element repeated in that array.
// Example Input
// Enter array elements: 5
// Element[1]: 1
// Element[2]: 1
// Element[3]: 1
// Element[4]: 2
// Element[5]: 3
// Enter the number you want to check: 1
// Output
// Original array: 1 1 1 2 3
// 1 is repeated 2 time(s).

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

// Function to read a positive number
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

// Function to read and store N elements in an array
void ReadArrayElements(int arr[], int& length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "Element[" << i + 1 << "]: ";
		cin >> arr[i];
	}
	cout << endl;
}

// Function to print all array elements
void PrintArrayElements(int arr[], int length)
{
	cout << "Original array: ";
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

// Function to count how many times a certain element is repeated
int CountFrequency(int arr[], int length, int numberToCheck)
{
	int count = 0;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == numberToCheck)
		{
			count++;
		}
	}
	return count;
}

// Main function
int main()
{
	int arrayLength = ReadNumber("Enter array length: ");

	int arr[100];
	ReadArrayElements(arr, arrayLength);

	int numberToCheck = ReadNumber("\nEnter the number you want to check: ");

	PrintArrayElements(arr, arrayLength);

	int frequency = CountFrequency(arr, arrayLength, numberToCheck);

	cout << numberToCheck << " is repeated " << frequency << " time(s)." << endl;

	return 0;
}