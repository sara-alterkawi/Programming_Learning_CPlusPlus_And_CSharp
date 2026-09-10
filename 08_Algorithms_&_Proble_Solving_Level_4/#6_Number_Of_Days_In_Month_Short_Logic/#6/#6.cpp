// Write a program to print Number of Days in a certain Month.
// Note: One Line Logic.
/*
	Example: Input
	Please enter a year to check? 2000
	Please enter a Month to check? 2
	Number of Days in Month [2] is 29
*/

/*
	Please enter a year to check? 1971
	Please enter a Month to check? 2
	Number of Days in Month [2] is 28
*/

#include <iostream>
using namespace std;

// Function to read year input from user
int ReadYear()
{
	int year;
	cout << "Please enter a year to check? ";
	cin >> year;
	return year;
}

// Function to read month input from user
int ReadMonth()
{
	int month;
	cout << "Please enter a Month to check? ";
	cin >> month;
	return month;
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

// Main function
int main()
{
	int year = ReadYear();
	int month = ReadMonth();

	cout << "\nNumber of Days in Month [" << month << "] is " << NumberOfDaysInAMonth(month, year);
	
	return 0;
}