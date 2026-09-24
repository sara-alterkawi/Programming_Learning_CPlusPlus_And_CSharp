// Write a program to fill an array with max size 100 with random numbers from 1 to 100 then print sum of all numbers.
// Example Input
// Enter number of elements: 10
// Output
// Array Elements : 42 68 35 1 70 25 79 59 63 65
// Sum of all Numbers is : 439

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

// Function to find the minimunm number
int SumAllNumbInArray(int arr[], int length)
{
	int sum = arr[0];
	for (int i = 0; i < length; i++)
	{
		if (arr[i] < sum)
			sum += arr[i];
	}
	return sum;
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
	int arr[100];
	FillArrayWithRandomNumber(arr, arrayLength);
	cout << "Array Elements: ";
	PrintArrayElements(arr, arrayLength);
	cout << "Sum of all Numbers is: ";
	cout << SumAllNumbInArray(arr, arrayLength) << endl;
	return 0;
}