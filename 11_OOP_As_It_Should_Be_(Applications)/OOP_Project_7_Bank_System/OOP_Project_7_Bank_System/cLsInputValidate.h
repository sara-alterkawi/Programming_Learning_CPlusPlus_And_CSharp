#pragma once
#include <iostream>
#include <string>
#include "clsString.h"
#include "clsDate.h"

class clsInputValidate
{
public:
	// Method to check if a short number is between two values (inclusive)
	static bool IsNumberBetween(short number, short from, short to)
	{
		if (number >= from && number <= to)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	// Method to check if a int number is between two values (inclusive)
	static bool IsNumberBetween(int number, int from, int to)
	{
		if (number >= from && number <= to)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	// Method to check if a float number is between two values (inclusive)
	static bool IsNumberBetween(float number, float from, float to)
	{
		if (number >= from && number <= to)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	// Method to check if a double number is between two values (inclusive)
	static bool IsNumberBetween(double number, double from, double to)
	{
		if (number >= from && number <= to)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	// Method to check if a date is between two values (inclusive)
	static bool IsDateBetween(clsDate date, clsDate from, clsDate to)
	{
		if ((clsDate::IsDate1AfterDate2(date, from) || clsDate::IsDate1EqualDate2(date, from))
			&&
			(clsDate::IsDate1BeforeDate2(date, to) || clsDate::IsDate1EqualDate2(date, to))
			)
		{
			return true;
		}
		if ((clsDate::IsDate1AfterDate2(date, to) || clsDate::IsDate1EqualDate2(date, to))
			&&
			(clsDate::IsDate1BeforeDate2(date, from) || clsDate::IsDate1EqualDate2(date, from)))
		{
			return true;
		}
		return false;
	}
	// Method to read a int number
	static int ReadIntNumber(string errorMessage = "Invalid Number, Enter again\n")
	{
		int value;
		while (!(cin >> value))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << errorMessage;
		}
		return value;
	}
	// Method to read a int number between two values
	static int ReadIntNumberBetween(int from, int to, string errorMessage = "Number is not within range, Enter again:\n")
	{
		int value = ReadIntNumber();
		while (!IsNumberBetween(value, from, to))
		{
			cout << errorMessage;
			value = ReadIntNumber();
		}
		return value;
	}
	// Method to read a short number
	static short ReadShortNumber(string errorMessage = "Invalid Number, Enter again\n")
	{
		short value;
		while (!(cin >> value))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << errorMessage;
		}
		return value;
	}
	// Method to read a short number between two values
	static short ReadShortNumberBetween(short from, short to, string errorMessage = "Number is not within range, Enter again:\n")
	{
		short value = ReadShortNumber();
		while (!IsNumberBetween(value, from, to))
		{
			cout << errorMessage;
			value = ReadShortNumber();
		}
		return value;
	}
	// Method to read a double number
	static double ReadDblNumber(string errorMessage = "Invalid Number, Enter again\n")
	{
		double value;
		while (!(cin >> value))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << errorMessage;
		}
		return value;
	}
	// Method to read a double number between two values
	static double ReadDblNumberBetween(double from, double to, string errorMessage = "Number is not within range, Enter again:\n")
	{
		double value = ReadDblNumber();
		while (!IsNumberBetween(value, from, to))
		{
			cout << errorMessage;
			value = ReadDblNumber();
		}
		return value;
	}
	// Method to read a float number
	static float ReadFloatNumber(string errorMessage = "Invalid Number, Enter again\n")
	{
		float value;
		while (!(cin >> value))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << errorMessage;
		}
		return value;
	}
	// Method to read a float number between two values
	static float ReadFloatNumberBetween(float from, float to, string errorMessage = "Number is not within range, Enter again:\n")
	{
		float value = ReadFloatNumber();
		while (!IsNumberBetween(value, from, to))
		{
			cout << errorMessage;
			value = ReadFloatNumber();
		}
		return value;
	}
	// Method to check if the date is valid
	static bool IsValidDate(clsDate date)
	{
		return clsDate::IsValidDate(date);
	}
	// Method to read a string
	static string ReadString()
	{
		string str;
		cin >> ws;
		getline(cin, str);
		return str;
	}
};