// Write a program to read date1, date2 and check if Datel Equals to Date2
/*
	Example:
	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2000

	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2000
	Yes, Datel is Equal To Date2.
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

// Function to read a full date (day, month, year) from the user
sDate ReadFullDate()
{
	sDate date;
	date.Day = ReadDay();
	date.Month = ReadMonth();
	date.Year = ReadYear();
	return date;
}

// Function to compare two dates
bool IsDate1EqualDate2(sDate date1, sDate date2)
{
	return (date1.Year == date2.Year) ? ((date1.Month == date2.Month) ? ((date1.Day == date2.Day) ? true : false) : false) : false;
}

// Main function
int main()
{
	sDate date1 = ReadFullDate();
	sDate date2 = ReadFullDate();

	if (IsDate1EqualDate2(date1, date2))
		cout << "\nYes, Date1 is Equal to Date2.\n";
	else
		cout << "\nNo, Date1 is NOT Equal to Date2.\n";

	return 0;
}