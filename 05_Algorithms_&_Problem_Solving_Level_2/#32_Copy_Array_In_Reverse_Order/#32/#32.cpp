// Write a program to fill an arrays with max size 100 random numbers from 1 to 100, copy it to another array in reverse order and print it.
// Example Input
// Enter number of elements: 10
// Output
// Array 1 Elements: 2 95 66 41 19 28 35 85 7 41
// Array 2 Elements after copying array2 in reverse : 41 7 85 35 28 19 41 66 95 2

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

// Function to fill the array with numbers from 1 to N
void FillArrayWithNumbersFrom1ToN(int arr[], int& arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = i + 1;
}

// function to swp two numbers
void Swap(int& A, int& B)
{
	int temp;
	temp = A;
	A = B;
	B = temp;
}

// 
void ShuffleArray(int arr[], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		int j = RandomNumber(0, i);
		Swap(arr[i], arr[j]);
	}
}

void RverseArray(int arr[], int reverseArr[], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		reverseArr[i] = arr[arrLength - 1 - i];
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
	int arr1[100], arr2[100];

	int arrayLength = ReadNumber("How many elements do you need? ");

	FillArrayWithRandomNumber(arr1, arrayLength);

	cout << "Array 1 Elements: ";
	PrintArrayElements(arr1, arrayLength);

	RverseArray(arr1, arr2, arrayLength);
	cout << "Array 2 Elements after copying array2 in reverse: ";
	PrintArrayElements(arr2, arrayLength);

	return 0;
}