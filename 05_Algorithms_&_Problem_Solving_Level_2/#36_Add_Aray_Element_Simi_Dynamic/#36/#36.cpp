// Write a program to dinamically read numbers and save them in an array
// Max size of array is 100, allocate simi-dynamic array length.
// Example Input
// Please enter number: 8
// Do you want to add more number? [0]: No, [1]:yes? 1
// Please enter number: 20
// Do you want to add more number? [0]: No, [1]:yes? 1
// Please enter number: 44
// Do you want to add more number? [0]: No, [1]:yes? 0
// Array Length: 3
// Array Elements : 8 20 44

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

// Function to add numbers to the array
void AddElementToArray(int number, int arr[100], int& arrayLength)
{
	arrayLength++;
	arr[arrayLength - 1] = number;
}

// Function to ask if the user need to add more
void AskUserToInputMoreNumberInArray(int arr[100], int& arrayLength)
{
	bool addNumb = true;

	do
	{
		AddElementToArray(ReadNumber("Please enter a number? "), arr, arrayLength);
		cout << "\nDo you want to add numbers? [0]:No, [1]:Yes? ";
		cin >> addNumb;

	} while (addNumb);
}

// Function to print all array elements
void PrintArrayElements(int arr[], int arrLength)
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
	int arr[100], arrLength = 0;
	AskUserToInputMoreNumberInArray(arr, arrLength);

	cout << "\nArray Length: " << arrLength << endl;
	cout << "Array Elements : ";
	PrintArrayElements(arr, arrLength);

	return 0;
}