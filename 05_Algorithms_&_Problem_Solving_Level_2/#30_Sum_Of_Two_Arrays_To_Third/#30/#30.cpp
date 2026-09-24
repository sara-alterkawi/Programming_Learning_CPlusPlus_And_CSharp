// Write a program to fill two arrays with max size 100 with random numbers from 1 to 100 sum their elements to a third array and print the result.
// Example Input
// Enter number of elements: 10
// Output
// Array 1 Elements: 30 95 2 18 63 91 70 15 54 14
// Array 2 Elements: 48 81 97 86 58 4 72 35 71 45
// Sum of array1 and array2 Elements : 78 176 99 104 121 95 142 50 125 59

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

// Function to RandomNumber
int RandomNumber(int from, int to)
{
	int RandomNumb = rand() % (to - from + 1) + from;
	return RandomNumb;
}

// Function to count how many times a certain element is repeated
void FillArrayWithRandomNumber(int arr[], int& arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}


// Copy prime numbers from arr1 to arr2
void SumOfTwoArrays(int arr1[], int arr2[], int arrSum[], int arrLength)
{
	int counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		arrSum[i] = arr1[i] + arr2[i];
	}
}

// Function to print all array elements
void PrintArrayElements(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

// Main function
int main()
{
	srand((unsigned)time(NULL));
	int arr1[100], arr2[100], arrSum[100];

	int arrayLength = ReadNumber("How many elements do you need? ");

	FillArrayWithRandomNumber(arr1, arrayLength);
	FillArrayWithRandomNumber(arr2, arrayLength);

	cout << "Array 1 Elements: ";
	PrintArrayElements(arr1, arrayLength);

	cout << "Array 2 Elements: ";
	PrintArrayElements(arr2, arrayLength);

	cout << "Sum of array1 and array2 Elements: ";
	SumOfTwoArrays(arr1, arr2, arrSum, arrayLength);
	PrintArrayElements(arrSum, arrayLength);

	return 0;
}