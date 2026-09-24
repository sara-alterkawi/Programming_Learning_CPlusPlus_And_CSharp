// Write a program to fill an array with max size 100 with random numbers from 1 to 100 copy only prime numbers to another array and print it.
// Example Input
// Enter number of elements: 10
// Output
// Array 1 Elements: 41 89 90 86 6 54 96 84 95 100
// Array 2 Elements(Primes) : 41

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

//
enum enPrime{Prime = 1, NotPrime = 2};

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
	cout << "Enter number of elements: ";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

// Check if number is prime
enPrime IsPrime(int num)
{
	if (num <= 1)
		return enPrime::NotPrime;
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return enPrime::NotPrime;
	}
	return enPrime::Prime;
}


// Copy prime numbers from arr1 to arr2
void CopyPrimeNumbersInArray(int arr1[], int arr2[], int arr1Length, int& arr2Length)
{
	int counter = 0;
	for (int i = 0; i < arr1Length; i++)
	{
		if (IsPrime(arr1[i]) == enPrime::Prime)
		{
			arr2[counter] = arr1[i];
			counter++;
		}
	}
	arr2Length = --counter;
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
	int arrayLength, primesLength;
	FillArrayWithRandomNumber(arr1, arrayLength);
	cout << "Array 1 Elements: ";
	PrintArrayElements(arr1, arrayLength);
	CopyPrimeNumbersInArray(arr1, arr2, arrayLength, primesLength);
	cout << "Array 2 Elements (Primes): ";
	PrintArrayElements(arr2, primesLength);
	return 0;
}