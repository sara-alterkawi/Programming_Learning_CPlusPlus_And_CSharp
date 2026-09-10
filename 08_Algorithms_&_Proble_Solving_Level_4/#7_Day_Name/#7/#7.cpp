// Write a program to read a date, and print the day name of week.
/*
	Example: Input
	Please enter a year? 2022
	Please enter a Month? 9
	Please enter a Day? 20
	Date: 20/9/2022
	Day Order : 2
	Day Name: Tue
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
	cout << "Please enter a Month? ";
	cin >> month;
	return month;
}

// Function to read month input from user
int ReadDay()
{
	int day;
	cout << "Please enter a Day? ";
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

// Function to calculate day of the week
int DayOfWeekOrder(int day, int month, int year)
{
	int a, y, m;
	a = (14 - month) / 12;
	y = year - a;
	m = month + (12 * a) - 2; // Gregorian://0:sun, 1:Mon, 2:Tue...etc
	return (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

// Function to get day name from day order
string DayShortName(int dayOrder)
{
	string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return arrDayNames[dayOrder];
}


// Main function
int main()
{
	int year = ReadYear();
	int month = ReadMonth();
	int day = ReadDay();
	int dayOrder = DayOfWeekOrder(day, month, year);

	cout << "Date: " << day << "/" << month << "/" << year << endl;
	cout << "Day Order : " << dayOrder << endl;
	cout << "Day Name: " << DayShortName(dayOrder) << endl;

	return 0;
}