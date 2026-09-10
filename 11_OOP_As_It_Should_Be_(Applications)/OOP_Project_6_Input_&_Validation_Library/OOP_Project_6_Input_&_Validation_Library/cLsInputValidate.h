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
				return true;
			else
				return false;
		}
		// Method to check if a int number is between two values (inclusive)
		static bool IsNumberBetween(int number, int from, int to)
		{
			if (number >= from && number <= to)
				return true;
			else
				return false;
		}
		// Method to check if a float number is between two values (inclusive)
		static bool IsNumberBetween(float number, float from, float to)
		{
			if (number >= from && number <= to)
				return true;
			else
				return false;
		}
		// Method to check if a double number is between two values (inclusive)
		static bool IsNumberBetween(double number, double from, double to)
		{
			if (number >= from && number <= to)
				return true;
			else
				return false;
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
				(clsDate::IsDate1BeforeDate2(date, from) || clsDate::IsDate1EqualDate2(date, from))
				)
			{
				return true;
			}
			return false;
		}
		// Method to read a int number
		static int ReadIntNumber(string ErrorMessage="Invalid Number, Enter again\n")
		{
			int value;
			while (!(cin >> value))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << ErrorMessage;
			}
			return value;
		}
		// Method to read a int number between two values
		static int ReadIntNumberBetween(int from, int to, string ErrorMessage = "Number is not within range, Enter again:\n")
		{
			int value = ReadIntNumber();
			while (!IsNumberBetween(value, from, to))
			{
				cout << ErrorMessage;
				value = ReadIntNumber();
			}
			return value;
		}
		// Method to read a double number
		static double ReadDblNumber(string ErrorMessage = "Invalid Number, Enter again\n")
		{
			double value;
			while (!(cin >> value))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << ErrorMessage;
			}
			return value;
		}
		// Method to read a double number between two values
		static double ReadDblNumberBetween(double from, double to, string ErrorMessage = "Number is not within range, Enter again:\n")
		{
			double value = ReadDblNumber();
			while (!IsNumberBetween(value, from, to))
			{
				cout << ErrorMessage;
				value = ReadDblNumber();
			}
			return value;
		}
		// Method to check if the date is valid
		static bool IsValidDate(clsDate date)
		{
			return clsDate::IsValidDate(date);
		}
};