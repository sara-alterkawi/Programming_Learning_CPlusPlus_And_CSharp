#pragma once
#include <iostream>
#include <string>
#include "clsDate.h"

using namespace std;
class clsUtil
{
public:
	// Enumeration for character types
	enum enCharType
	{
		SmallLetter = 1,
		CapitalLetter = 2, 
		Digit = 3,
		MixChar = 4,
		SpecialCharacter = 5
	};
	// Method to seed the random number generator
	static void Srand()
	{
		srand((unsigned)time(NULL));
	}
	// Method to generate a random number within a specified range
	static int RandomNumber(int from, int to)
	{
		int randomNumb = rand() % (to - from + 1) + from;
		return randomNumb;
	}
	// Method to get a random character based on the specified type
	static char GetRandomCharacter(enCharType charType)
	{
		if (charType == MixChar)
		{
			//Capital/Samll/Digits only
			charType = (enCharType)RandomNumber(1, 3);
		}
		switch (charType)
		{
		case enCharType::SmallLetter:
		{
			return char(RandomNumber(97, 122)); // a-z
			break;
		}
		case enCharType::CapitalLetter:
		{
			return char(RandomNumber(65, 90)); // A-Z
			break;
		}
		case enCharType::SpecialCharacter:
		{
			return char(RandomNumber(33, 47)); // Special Characters
			break;
		}
		case enCharType::Digit:
		{
			return char(RandomNumber(48, 57)); // 0-9
			break;
		}
		default:
		{
			return char(RandomNumber(65, 90));
			break;
		}
		}
	}
	// Method to generate a random word of specified length
	static string GenerateWord(enCharType charType, int length)
	{
		string Word = "";
		for (int i = 0; i < length; i++)
		{
			Word += GetRandomCharacter(charType);
		}
		return Word;
	}
	// Method to generate a random key
	static string GenerateKey(enCharType charType)
	{
		string key = "";
		key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
		key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
		key = key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
		key = key + GenerateWord(enCharType::CapitalLetter, 4);
		return key;
	}
	// Method to generate multiple random keys
	static void GenerateKeys(int numberOfKeys, enCharType charType)
	{
		for (int i = 0; i < numberOfKeys; i++)
		{
			cout << GenerateKey(charType) << endl;
		}
	}
	// Method to fill an array with random numbers
	static void FillArrayWithRandomNumbers(int arr[], int arrLength, int from, int to)
	{
		for (int i = 0; i < arrLength; i++)
		{
			arr[i] = RandomNumber(from, to);
		}
	}
	// Method to fill an array with random words
	static void FillArrayWithRandomWords(string arr[], int arrLength, enCharType charType, int wordLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			arr[i] = GenerateWord(charType, wordLength);
		}
	}
	// Method to fill an array with random keys
	static void FillArrayWithRandomKeys(string arr[], int arrLength, enCharType charType)
	{
		for (int i = 0; i < arrLength; i++)
		{
			arr[i] = GenerateKey(charType);
		}
	}
	// Template function to swap two integer values
	static void Swap(int& A, int& B)
	{
		int temp = A;
		A = B;
		B = temp;
	}
	// Template function to swap two bouble values
	static void Swap(double& A, double& B)
	{
		double temp = A;
		A = B;
		B = temp;
	}
	// Method to swap two bool values
	static void Swap(bool& A, bool& B)
	{
		bool temp = A;
		A = B;
		B = temp;
	}
	// Method to swap two char values
	static void Swap(char& A, char& B)
	{
		char temp = A;
		A = B;
		B = temp;
	}
	// Method to swap two string values
	static void Swap(string& A, string& B)
	{
		string temp = A;
		A = B;
		B = temp;
	}
	// Method to swap two date values
	static void Swap(clsDate& A, clsDate& B)
	{
		clsDate temp = A;
		A = B;
		B = temp;
	}
	// Method to shuffle an int array
	static void ShuffleArray(int arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
		}
	}
	// Method to shuffle a string array
	static void ShuffleArray(string arr[], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
		{
			Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
		}
	}
	// Method to put tabs between words in a string
	static string Tabs(int numberOfTabs)
	{
		string t = "";
		for (int i = 0; i < numberOfTabs; i++)
		{
			t += "\t";
			cout << t;
		}
		return t;
	}
	// Method to encrypt text
	static string EncryptText(string text, int encryptionKey = 2)
	{
		for (int i = 0; i < text.length(); i++)
			text[i] = char((int)text[i] + encryptionKey);
		return text;
	}
	// Method to decrypt text
	static string DecryptText(string text, int encryptionKey = 2)
	{
		for (int i = 0; i < text.length(); i++)
			text[i] = char((int)text[i] - encryptionKey);
		return text;
	}
	// Method to convert a number to its textual representation
	static string NumberToText(int number)
	{
		// Handle units
		if (number >= 0 && number <= 9)
		{
			string units[] = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
			return units[number] + " ";
		}
		// Handle teens
		if (number >= 10 && number <= 19)
		{
			string teens[] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
			return teens[number - 10] + " ";
		}
		// Handle tens
		if (number >= 20 && number <= 99)
		{
			string tens[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
			return tens[number / 10] + " " + NumberToText(number % 10);
		}
		// Handle hundred
		if (number >= 100 && number <= 199)
		{
			return"One Hundred " + NumberToText(number % 100);
		}
		// Handle hundreds
		if (number >= 200 && number <= 999)
		{
			return NumberToText(number / 100) + "Hundreds " + NumberToText(number % 100);
		}
		// Handle thousand
		if (number >= 1000 && number <= 1999)
		{
			return "One Thousand " + NumberToText(number % 1000);
		}
		// Handle thousands
		if (number >= 2000 && number <= 999999)
		{
			return NumberToText(number / 1000) + "Thousands " + NumberToText(number % 1000);
		}
		// Handle million
		if (number >= 1000000 && number <= 1999999)
		{
			return "One Million " + NumberToText(number % 1000000);
		}
		// Handle millions
		if (number >= 2000000 && number <= 999999999)
		{
			return NumberToText(number / 1000000) + "Millions " + NumberToText(number % 1000000);
		}
		// Handle billion
		if (number >= 1000000000 && number <= 1999999999)
		{
			return "One Billion " + NumberToText(number % 1000000000);
		}
		// Handle billions
		else
		{
			return NumberToText(number / 1000000000) + "Billions " + NumberToText(number % 1000000000);

		}
	}
};