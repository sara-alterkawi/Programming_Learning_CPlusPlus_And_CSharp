// Write a program to read Datel & Date2, and check if Datel is after Date2 or not.
/*
	Enter Date1:
	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2022

	Enter Date2:
	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2000

	Yes, Datel is After Date2.
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

// Main function
int main()
{
	cout << "\nEnter Date1:";
	sDate date1 = ReadFullDate();
	
	cout << endl;
	cout << "\nEnter Date2:";
	sDate date2 = ReadFullDate();
	
	cout << endl;
	if (IsDate1AfterDate2(date1, date2))
		cout << "Yes, Date1 is After Date2.";
	else
		cout << "No, Date1 is NOT After Date2.";

	cout << endl;

	return 0;
}