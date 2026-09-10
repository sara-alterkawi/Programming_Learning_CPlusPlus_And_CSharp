#pragma once
#include <iostream>
#include <string>
#include "clsDate.h"
using namespace std;
// Utility Class
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
	static short RandomNumber(short from, short to)
	{
		short randomNumb = rand() % (to - from + 1) + from;
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
	static string GenerateWord(enCharType charType, short length)
	{
		string Word = "";
		for (short i = 0; i < length; i++)
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
	static void GenerateKeys(short numberOfKeys, enCharType charType)
	{
		for (short i = 0; i < numberOfKeys; i++)
		{
			cout << GenerateKey(charType) << endl;
		}
	}
	// Method to fill an array with random numbers
	static void FillArrayWithRandomNumbers(short arr[], short arrLength, short from, short to)
	{
		for (short i = 0; i < arrLength; i++)
		{
			arr[i] = RandomNumber(from, to);
		}
	}
	// Method to fill an array with random words
	static void FillArrayWithRandomWords(string arr[], short arrLength, enCharType charType, short wordLength)
	{
		for (short i = 0; i < arrLength; i++)
		{
			arr[i] = GenerateWord(charType, wordLength);
		}
	}
	// Method to fill an array with random keys
	static void FillArrayWithRandomKeys(string arr[], short arrLength, enCharType charType)
	{
		for (short i = 0; i < arrLength; i++)
		{
			arr[i] = GenerateKey(charType);
		}
	}
	// Template function to swap two values
	template <typename T> static void Swap(T& A, T& B)
	{
		T temp = A;
		A = B;
		B = temp;
	}
	// Method to shuffle an array
	template <typename T>
	static void ShuffleArray(T arr[], short arrLength)
	{
		for (short i = 0; i < arrLength; i++)
		{
			short index1 = RandomNumber(1, arrLength) - 1;
			short index2 = RandomNumber(1, arrLength) - 1;
			Swap(arr[index1], arr[index2]);
		}
	}
	// Method to put tabs between words in a string
	static string Tabs(short numberOfTabs)
	{
		string t = "";
		for (short i = 0; i < numberOfTabs; i++)
		{
			t += "\t";
			cout << t;
		}
		return t;
	}
	// Method to encrypt text
	static string EncryptText(string text, short encryptionKey = 2)
	{
		for (short i = 0; i < text.length(); i++)
			text[i] = char((short)text[i] + encryptionKey);
		return text;
	}
	// Method to decrypt text
	static string DecryptText(string text, short encryptionKey = 2)
	{
		for (short i = 0; i < text.length(); i++)
			text[i] = char((short)text[i] - encryptionKey);
		return text;
	}
	// Method to convert a number to its textual representation
	static string NumberToText(short number)
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