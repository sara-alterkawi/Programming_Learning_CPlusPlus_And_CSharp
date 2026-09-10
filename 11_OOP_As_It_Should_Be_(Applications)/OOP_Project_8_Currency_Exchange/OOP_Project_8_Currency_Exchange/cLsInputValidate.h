#pragma once
#include <iostream>
#include <string>
#include "clsString.h"
#include "clsDate.h"
// Input Validation Class
class clsInputValidate
{
public:
	// Method to check if number is between two values (inclusive)
	template <typename T> static bool IsNumberBetween(T value, T from, T to)
	{
		if (from > to)
			std::swap(from, to);

		return (value >= from && value <= to);
	}
	// Method to read a number of any type
	template <typename T> static T ReadNumber(string errorMessage = "Invalid Number, Enter again\n")
	{
		T value;
		while (!(cin >> value))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << errorMessage;
		}
		return value;
	}
	// Method to read a number of any type between two values
	template <typename T> static T ReadNumberBetween(T from, T to, string errorMessage = "Number is not within range, Enter again:\n")
	{
		T value = ReadNumber<T>();
		while (!IsNumberBetween(value, from, to))
		{
			cout << errorMessage;
			value = ReadNumber<T>();
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