// Write a program calculate you age in days.
/*
	Example:
	Please Enter Your Date of Birth:

	Please enter a Day? 20
	Please enter a Month? 5
	Please enter a Year? 1981

	Your Age is : 16233 Day (s).
*/

#pragma warning(disable : 4996)
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

// Function to check if a year is a leap year
bool IsLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to compare two dates
bool IsDate1BeforeDate2(sDate date1, sDate date2)
{
	return (date1.Year < date2.Year) ? true :
		((date1.Year == date2.Year) ? (date1.Month < date2.Month ? true :
			(date1.Month == date2.Month ? date1.Day < date2.Day : false)) : false);
}

// Function to get number of days in a month
int NumberOfDaysInAMonth(int month, int year)
{
	if (month < 1 || month > 12)
		return  0;
	int NumberOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (month == 2) ? (IsLeapYear(year) ? 29 : 28) : NumberOfDays[month - 1];
}

// Function to see if the day is the Last day in month
bool IsLastDayInMonth(sDate date)
{
	return (date.Day == NumberOfDaysInAMonth(date.Month, date.Year));
}

// Function to see if the month is the Last month in year
bool IsLastMonthInYear(int month)
{
	return (month == 12);
}

// Function to increase date one day
sDate IncreaseDateByOneDay(sDate date)
{
	if (IsLastDayInMonth(date))
	{
		if (IsLastMonthInYear(date.Month))
		{
			date.Month = 1;
			date.Day = 1;
			date.Year++;
		} else {
			date.Day = 1;
			date.Month++;
		}
	} else {
		date.Day++;
	}
	return date;
}

// Function to get the diffenrance between two dates
int GetDifferenceInDays(sDate date1, sDate date2, bool includeEndDay = false)
{
	int days = 0;
	while (IsDate1BeforeDate2(date1, date2))
	{
		days++;
		date1 = IncreaseDateByOneDay(date1);
	}
	return includeEndDay ? ++days : days;
}

// Function to get the current system date
sDate GetSystemDate()
{
	sDate date;
	time_t t = time(0);
	tm* now = localtime(&t);
	date.Year = now->tm_year + 1900;
	date.Month = now->tm_mon + 1;
	date.Day = now->tm_mday;
	return date;
}

// Main function
int main()
{
	cout << "Please Enter Your Date of Birth:\n";
	sDate date1 = ReadFullDate();
	sDate date2 = GetSystemDate();

	cout << "\nYour Age is : " << GetDifferenceInDays(date1, date2, true) << " Day(s)." << endl;
	
	return 0;
}