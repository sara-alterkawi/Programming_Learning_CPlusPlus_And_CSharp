// Write a program to fill an array with max size 100 with random numbers from 1 to 100 copy it to another array and print it.
// Example Input
// Enter number of elements: 10
// Output
// Array 1 Elements: 42 68 35 1 70 25 79 59 63 65
// Array 2 Elements: 42 68 35 1 70 25 79 59 63 65

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
		arr[i] = RandomNumber(1, 100);
}

//
void CoopyArray(int arr1[], int arr2[], int& arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr2[i] = arr1[i];
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
	int arrayLength;
	int arr1[100];
	int arr2[100];
	FillArrayWithRandomNumber(arr1, arrayLength);
	cout << "Array 1 Elements: ";
	PrintArrayElements(arr1, arrayLength);
	CoopyArray(arr1, arr2, arrayLength);
	cout << "Array 2 Elements: ";
	PrintArrayElements(arr2, arrayLength);
	return 0;
}