// Write a program to fill an array with max size 100 with random numbers from 1 to 100,
// copy only Prime numbers to another array using AddElementToArray,and print it.
// Example Input
// Enter number of elements: 10
// Output
// Array 1 Elements: 42 68 35 1 70 25 79 59 63 65
// Array 2 Elements: 35 1 25 79 59 63 65

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

// 
enPrimeNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);

	for (int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
		{
			return enPrimeNotPrime::NotPrime;
		}
	}

	return enPrimeNotPrime::Prime;
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

// Function to 
void CopyPrimeNumbers(int arr1[100], int arr2[100], int arr1Length, int& arr2Length)
{
	for (int i = 0; i < arr1Length; i++)
	{
		if (CheckPrime(arr1[i]) == enPrimeNotPrime::Prime)
			AddElementToArray(arr1[i], arr2, arr2Length);
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

	int arr1Length = 0, arr1[100], arr2Length = 0, arr2[100];

	FillArrayWithRandomNumber(arr1, arr1Length);

	cout << "Array 1 Elements: ";
	PrintArrayElements(arr1, arr1Length);

	CopyPrimeNumbers(arr1, arr2, arr1Length, arr2Length);
	cout << "Array 2 Prime Numbers: ";

	PrintArrayElements(arr2, arr2Length);
	return 0;
}