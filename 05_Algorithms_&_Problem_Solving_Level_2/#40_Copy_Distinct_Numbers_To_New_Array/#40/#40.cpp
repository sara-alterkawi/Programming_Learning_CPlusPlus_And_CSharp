// Write a program to fill an array with numbers,
// then print distinct numbers To another array.
// Example Input
// Enter number of elements: 10
// Output
// Array 1 Elements: 10 10 10 50 50 70 70 70 70 90
// Array 2 Distinct numbers : 10 10 10 50

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

// function to fill the array with specific numbers
void FillArray(int arr[10], int& ArrayLength)
{
	ArrayLength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
}

// Function to add numbers to the array
void AddElementToArray(int number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = number;
}

int FindNumberPositionInArray(int arr[10], int arrLength, int number)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == number)
		{
			return i;
		}
	}
	return -1;
}

// Function to find if number is in the array
bool IsNumberInArray(int arr[100], int arrLength, int number)
{
	return FindNumberPositionInArray(arr, arrLength, number) != -1;
}

// Function to Copy Distinct Numbers from the first array to another one 
void CopyDistinctNumbers(int arr1[10], int arr2[10], int arr1Length, int& arr2Length)
{
	for (int i = 0; i < arr1Length; i++)
	{
		if (!IsNumberInArray(arr2, arr1Length, arr1[i]))
		{
			AddElementToArray(arr1[i], arr2, arr2Length);
		}
	}
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
	int arr1[10], arr2[10], arr1Length = 0, arr2Length = 0;
	FillArray(arr1, arr1Length);

	cout << "Array 1 Elements: ";
	PrintArray(arr1, arr1Length);

	CopyDistinctNumbers(arr1, arr2, arr1Length, arr2Length);

	cout << "Array 2 Distinct numbers: ";
	PrintArray(arr1, arr2Length);

	return 0;
}