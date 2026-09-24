// Write a program to fill array with max size 100 with random number from 1 to 100,
// read number and return its index in array if found otherwise return -1.
// Example Input
// Please enter number of elements: 8
// Array Elements : 19 70 18 86 70 9 16 23
// Please enter a number to search for ? 19
// Number you are looking for is : 19
// The number found at position(index) : 0
// The number found its order : 1

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

// Function to print all array elements
void PrintArrayElements(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//
int FindNumberPositionInArray(int arr[], int arrayLength, int numb)
{
	for (short i = 0; i < arrayLength; i++)
	{
		if (arr[i] == numb)
		{
			return i;
		}
	}
	return -1;
}

//
bool IsNumbInArray(int arr[], int arrLenght, int numb)
{
	return FindNumberPositionInArray(arr, arrLenght, numb) != 1;
}

//
void PrintSearchResult(int position, int number)
{
	if (position == -1)
		cout << "The Number " << number << " is not found :-( " << endl;
	else
	{
		cout << "The number " << number << " is found: -) " << endl;
	}
}

// Main function
int main()
{
	srand((unsigned)time(NULL));

	int array[100];
	int arrayLength = ReadNumber("Please enter number of elements: ");

	FillArrayWithRandomNumber(array, arrayLength);

	cout << "Array Elements: ";
	PrintArrayElements(array, arrayLength);


	int numb = ReadNumber("Please enter a number to search for? ");

	int position = FindNumberPositionInArray(array, arrayLength, numb);

	PrintSearchResult(position, numb);

	return 0;
}