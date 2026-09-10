// Write a program to read Date and write a function to validate this date
/*
	Please enter a Day? 35
	Please enter a Month? 1
	Please enter a Year? 2022
	No, Date is a NOT valide date
*/
/*
	Please enter a Day? 29
	Please enter a Month? 2
	Please enter a Year? 2022
	No, Date is a NOT valide date
*/
/*
	Please enter a Day? 29
	Please enter a Month? 2
	Please enter a Year? 2000
	Yes, Date is a valide date.
*/
/*
	Please enter a Day? 31
	Please enter a Month? 4
	Please enter a Year? 2022
	No, Date is a NOT valide date
*/

#pragma warning(disable : 4996)
#include <iostream>
#include <iomanip>
using namespace std;

// Struct to represent a date with year, month, and day components
struct sDate
{
	short Year;
	short Month;
	short Day;
};

// Function to read day input from user
int ReadDay()
{
	int day;
	cout << "Please enter a day? ";
	cin >> day;
	return day;
}

// Function to read month input from user
int ReadMonth()
{
	int month;
	cout << "Please enter a month? ";
	cin >> month;
	return month;
}

// Function to read year input from user
int ReadYear()
{
	int year;
	cout << "Please enter a year? ";
	cin >> year;
	return year;
}

// Function to read a full date (day, month, year) from the user
sDate ReadFullDate()
{
	sDate date;
	date.Day = ReadDay();
	date.Month = ReadMonth();
	date.Year = ReadYear();
	return date;
}

// Function to check if a year is a leap year
bool IsLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get number of days in a month
int NumberOfDaysInAMonth(int month, int year)
{
	if (month < 1 || month > 12)
		return  0;
	int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : NumberOfDays[month - 1];
}

// Function to check if the date is valid
bool IsValidDate(sDate date)
{
	if (date.Day < 1 || date.Day>31)
		return false;
	if (date.Month < 1 || date.Month>12)
		return false;
	if (date.Month == 2)
	{
		if (IsLeapYear(date.Year))
		{
			if (date.Day > 29)
				return false;
		} else {
			if (date.Day > 28)
				return false;
		}
	}
	int daysInMonth = NumberOfDaysInAMonth(date.Month, date.Year);
	if (date.Day > daysInMonth)
		return false;
	return true;
}

// Main function
int main()
{
	sDate date = ReadFullDate();

	if (IsValidDate(date))
		cout << "Yes, Date is a valide date.\n";
	else
		cout << "No, Date is a NOT valide date\n";
	return 0;
}