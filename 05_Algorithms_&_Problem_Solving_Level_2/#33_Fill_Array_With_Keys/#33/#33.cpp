// Write a program to read how many keys to generate and fill them in an array then print them on the screen.
// Example Input
// Please enter number of keys? 5
// Output
// Array[0]: CRTW-AWPH-LUEU-UMPO
// Array[1]: AQUE - EKVG - UATH - FBTT
// Array[2] : HUTF - VWSI - HMVF - DXIV
// Array[3] : QBSO - WMIV - KHQL - MKZO
// Array[4] : PHIW - UKSF - SWGU - CWOB

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

// Enumeration to define character types
enum enCharType {
	SmallLetter = 1,
	CapitalLetter = 2,
	SpecialChar = 3,
	Digit = 4
};

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

//
char GetRandomCharacter(enCharType charType)
{
	switch (charType)
	{
	case enCharType::CapitalLetter:
		return char(RandomNumber('A', 'Z'));
	case enCharType::SmallLetter:
		return char(RandomNumber('a', 'z'));
	case enCharType::SpecialChar:
		return char(RandomNumber(33, 47));
	case enCharType::Digit:
		return char(RandomNumber('0', '9'));
	}
}

//
string GenerateWord(enCharType charType, short length)
{
	string Word = "";

	for (short i = 1; i <= length; i++)
	{
		Word += GetRandomCharacter(charType);
	}
	return Word;
}

//
string GenerateKey()
{
	string key = "";

	key = GenerateWord(enCharType::CapitalLetter, 4) + '-';
	key += GenerateWord(enCharType::CapitalLetter, 4) + '-';
	key += GenerateWord(enCharType::CapitalLetter, 4) + '-';
	key += GenerateWord(enCharType::CapitalLetter, 4);

	return key;
}

// Fill array of strings with keys
void FillArrayByKeys(string arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = GenerateKey();
	}
}


// Function to print all array elements
void PrintArrayElements(string arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "Array[" << i << "]: " << arr[i] << endl;
	}
	cout << endl;
}

// Main function
int main()
{
	srand((unsigned)time(NULL));

	string arr[100];

	short keys = ReadNumber("Please enter number of keys? ");

	FillArrayByKeys(arr, keys);

	PrintArrayElements(arr, keys);

	return 0;
}