// Write a program to read date and read how many days to add to it, prink the results on screen.
/*
	Example:
	Please enter a Day? 20
	Please enter a Month? 5
	Please enter a Year? 1981
	How many days to add? 3000
	Date after adding [3000] days is: 14/8/2029
*/

#include <iostream>
using namespace std;

// Struct to represent a date with year, month, and day components
struct sDate
{
	short Year;
	short Month;
	short Day;
};

// Function to read year input from user
int ReadYear()
{
	int year;
	cout << "Please enter a year? ";
	cin >> year;
	return year;
}

// Function to read month input from user
int ReadMonth()
{
	int month;
	cout << "Please enter a month? ";
	cin >> month;
	return month;
}

// Function to read day input from user
int ReadDay()
{
	int day;
	cout << "Please enter a day? ";
	cin >> day;
	return day;
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

// Function to calculate total days from the beginning of the year
int NumberOfDaysFromTheBeginingOfTheYear(int day, int month, int year)
{
	int totalDays = 0;
	for (int i = 1; i <= month - 1; i++)
	{
		totalDays += NumberOfDaysInAMonth(i, year);
	}
	totalDays += day;
	return totalDays;
}

// Function to add a specified number of days to a given date
sDate DateAddDays(int days, sDate date)
{
	int remainingDays = days + NumberOfDaysFromTheBeginingOfTheYear(date.Day, date.Month, date.Year);
	int monthDays = 0;
	date.Month = 1;
	while (true)
	{
		monthDays = NumberOfDaysInAMonth(date.Month, date.Year);
		if (remainingDays > monthDays)
		{
			remainingDays -= monthDays;
			date.Month++;
			if (date.Month > 12)
			{
				date.Month = 1;
				date.Year++;
			}
		} else {
			date.Day = remainingDays;
			break;
		}
	}
	return date;
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

// Function to read the number of days to add to a date from the user
int ReadDaysToAdd()
{
	int days;
	cout << "\nHow many days to add? ";
	cin >> days;
	return days;
}

// Main function
int main()
{
	sDate date = ReadFullDate();
	int days = ReadDaysToAdd();

	date = DateAddDays(days, date);
	cout << "\nDate after adding [" << days << "] days is: " << date.Day << "/" << date.Month << "/" << date.Year << endl;

	return 0;
}