// Write a program to fill an arrays with ordered numbers from 1 to N, then print it, after that shuffle this array and print it after shuffle.
// Example Input
// Enter number of elements: 10
// Output
// Array Elements before shuffle: 1 2 3 4 5 6 7 8 9 10
// Array Elements after shuffle: 2 4 6 3 10 1 7 8 5 9

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
	int arr[100];

	int arrayLength = ReadNumber("How many elements do you need? ");

	FillArrayWithNumbersFrom1ToN(arr, arrayLength);

	cout << "Array Elements before shuffle: ";
	PrintArrayElements(arr, arrayLength);

	ShuffleArray(arr, arrayLength);
	cout << "Array Elements after shuffle: ";
	PrintArrayElements(arr, arrayLength);

	return 0;
}