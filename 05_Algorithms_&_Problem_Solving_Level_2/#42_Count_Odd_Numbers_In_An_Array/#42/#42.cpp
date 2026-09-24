// Write a program to fill an array with max size 100 with random numbers from 1 to 100 then print count of Odd numbers in this array.
// Example Input
// Enter number of elements: 10
// Output
// Array Elements : 42 68 35 1 70 25 79 59 63 65
// Odd Numbers count is : 7

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

enOddOrEven CheckOddOrEven(int Number)
{
	if (Number % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

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

// Function to RandomNumber
int RandomNumber(int from, int to)
{
	int RandomNumb = rand() % (to - from + 1) + from;
	return RandomNumb;
}

// Function to count how many times a certain element is repeated
void FillArrayWithRandomNumber(int arr[], int& arrLength)
{
	cout << "Enter number of elements: ";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

// Function to add numbers to the array
void AddElementToArray(int number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = number;
}

// Function to count Odd numbers
int CountOddNumbers(int arr[100], int arrLength)
{
	int count = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckOddOrEven(arr[i]) == enOddOrEven::Odd)
			count++;
	}
	return count;
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
	srand((unsigned)time(NULL));

	int arrLength = 0, arr[100];

	FillArrayWithRandomNumber(arr, arrLength);

	cout << "Array 1 Elements: ";
	PrintArray(arr, arrLength);

	cout << "Odd Numbers count is : " << CountOddNumbers(arr, arrLength) << endl;

	return 0;
}