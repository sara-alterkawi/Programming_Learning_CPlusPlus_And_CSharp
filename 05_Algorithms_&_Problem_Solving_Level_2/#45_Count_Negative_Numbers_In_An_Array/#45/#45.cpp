// Write a program to fill an array with max size 100 with random numbers from -100 to 100 then print count of Negative numbers in this array.
// Example Input
// Enter number of elements: 10
// Output
// Array Elements: 22 94 -16 -66 77 13 -10 -88 -89 -5
// Negative Numbers count is : 6

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
		arr[i] = RandomNumber(-100, 100);
}

// Function to add numbers to the array
void AddElementToArray(int number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = number;
}

// Function to count Odd numbers
int CountNegativeNumbers(int arr[100], int arrLength)
{
	int count = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] < 0)
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

	cout << "Array Elements: ";
	PrintArray(arr, arrLength);

	cout << "Negative Numbers count is : " << CountNegativeNumbers(arr, arrLength) << endl;

	return 0;
}