// Write a program to read a date and check:
/*
	• if it is last Day in Month
	• If it is last Month In Year
*/
/*
	Example:
	Please enter a Day? 31
	Please enter a Month! 12
	Please enter a Year? 2022
	Yes, Day is Last Day in Month.
	Yes, Month is Last Month in Year.
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
int ReadDay() {
	int day;
	cout << "Please enter a day? ";
	cin >> day;
	return day;
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

// Function to check if the day is the last day in the month
bool IsLastDayInMonth(sDate date)
{
	return (date.Day == NumberOfDaysInAMonth(date.Month, date.Year));
}

// Function to check if the month is the last month in the year
bool IsLastMonthInYear(int month)
{
	return (month == 12);
}

// Main function
int main()
{
	sDate date1 = ReadFullDate();

	if (IsLastDayInMonth(date1))
		cout << "\nYes, Day is Last Day in Month.\n";
	else
		cout << "\nNo, Day is Not Last Day in Month.\n";

	if (IsLastMonthInYear(date1.Month))
		cout << "\nYes, Month is Last Month in Year.\n";
	else
		cout << "\nNo, Month is Not Last Month in Year.\n";

	return 0;
}