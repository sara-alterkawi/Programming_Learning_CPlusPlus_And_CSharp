// Write a program to read Date1 & Date2, and write a function to compare dates, it should return:
/*
	• -1 Before
	• 0 Equal
	• 1 After
*/
/*
	Enter Datel:
	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2000

	Enter Date2:
	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2022

	Compare Result = -1
*/
/*
	Enter Date1:
	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2000

	Enter Date2:
	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2000

	Compare Result = 0
*/
/*
	Enter Datel:
	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2022

	Enter Date2:
	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2000

	Compare Result = 1
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

// Enum to 
enum enDateCompare
{
	Before = -1,
	Equal = 0,
	After = 1
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

// Function to compare two dates
bool IsDate1BeforeDate2(sDate date1, sDate date2)
{
	return (date1.Year < date2.Year) ? true :
		((date1.Year == date2.Year) ? (date1.Month < date2.Month ? true :
			(date1.Month == date2.Month ? date1.Day < date2.Day : false)) : false);
}

// Function to compare two dates
bool IsDate1EqualDate2(sDate date1, sDate date2)
{
	return (date1.Year == date2.Year) ? ((date1.Month == date2.Month) ? ((date1.Day == date2.Day) ? true : false) : false) : false;
}

// Function to compare two dates
bool IsDate1AfterDate2(sDate date1, sDate date2)
{
	return (!IsDate1BeforeDate2(date1, date2) && !IsDate1EqualDate2(date1, date2));
}

// Function to compare two dates and return -1 , 0 or 1
enDateCompare CompareDates(sDate date1, sDate date2)
{
	if (IsDate1BeforeDate2(date1, date2))
		return enDateCompare::Before;
	if (IsDate1EqualDate2(date1, date2))
		return enDateCompare::Equal;
	return enDateCompare::After;
}

// Main function
int main()
{
	cout << "\nEnter Date1:";
	sDate date1 = ReadFullDate();

	cout << endl;
	cout << "\nEnter Date2:";
	sDate date2 = ReadFullDate();

	cout << endl;
	cout << "Compare Result = " << CompareDates(date1, date2);
	cout << endl;

	return 0;
}