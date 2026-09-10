// Write a program to print total days from the beginning of year.
/*
	Please enter a day? 20
	Please enter a month? 5
	Please enter a year? 1981
	Number of Days from the begining of the year is 140
*/

#include <iostream>
using namespace std;

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

// Main function
int main()
{
	int day = ReadDay();
	int month = ReadMonth();
	int year = ReadYear();
	int totalDays = NumberOfDaysFromTheBeginingOfTheYear(day, month, year);

	cout << "Number of Days from the begining of the year is " << totalDays << endl;

	return 0;
}