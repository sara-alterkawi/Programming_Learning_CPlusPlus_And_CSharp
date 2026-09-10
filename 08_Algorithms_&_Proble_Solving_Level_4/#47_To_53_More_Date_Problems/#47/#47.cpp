// Write a program to read a date and make functions as follows:
/*
	• Overload the DayOfWeekOrder to take date structure
	• IsEndOfWeek
	• IsWeekEnd
	• IsBusinessDay
	• DaysUntil TheEndOfWeek
	• DaysUntil TheEndOfMonth
	• DaysUntil TheEndOfYear
*/
/*
	Today is Fri, 23/9/2022

	Is it End of Week?
	No Not end of week.

	Is it Weekend?
	Yes it is a week end.

	Is it Business Day?
	No it is NOT a business day.

	Days until end of week : 1 Day (s).
	Days until end of month : 8 Day (s).
	Days until end of year : 100 Day (s).
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

// Function to calculate day of the week (0:sun, 1:Mon, 2:Tue...etc)
int DayOfWeekOrder(int day, int month, int year)
{
	int a, y, m;
	a = (14 - month) / 12;
	y = year - a;
	m = month + (12 * a) - 2; // Gregorian://0:sun, 1:Mon, 2:Tue...etc
	return (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

// Function to get the day of the week order from a date structure
int DayOfWeekOrder(sDate date)
{
	return DayOfWeekOrder(date.Day, date.Month, date.Year);
}

// Function to get day name from day order
string DayShortName(int dayOrder)
{
	string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	return arrDayNames[dayOrder];
}

// Function to check if the day is the end of the week (Saturday)
int IsEndOfWeek(sDate date)
{
	return  DayOfWeekOrder(date) == 6;
}

// Function to check if the day is a weekend day (Friday or Saturday)
bool IsWeekEnd(sDate date)
{
	//Weekends are Fri and Sat
	int dayIndex = DayOfWeekOrder(date);
	return  (dayIndex == 5 || dayIndex == 6);
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

// Function to check if the day is a business day (Sun-Thu)
bool IsBusinessDay(sDate date)
{
	// Business days are Sun, Mon, Tue, Wed, and Thu.
	// We can simply check if it is NOT a weekend day.
	return !IsWeekEnd(date);
}

// Function to calculate the number of days until the end of the week (Saturday)
int DaysUntilTheEndOfWeek(sDate date)
{
	return 6 - DayOfWeekOrder(date);
}

// Function to calculate the number of days until the end of the month
int DaysUntilTheEndOfMonth(sDate date)
{
	sDate endOfMontDate;
	endOfMontDate.Day = NumberOfDaysInAMonth(date.Month, date.Year);
	endOfMontDate.Month = date.Month;
	endOfMontDate.Year = date.Year;

	// We add 1 day to the difference because GetDifferenceInDays is exclusive of the end day by default,
	// but the function call passes 'true' to include the end day.
	return GetDifferenceInDays(date, endOfMontDate, true);
}

// Function to calculate the number of days until the end of the year
int DaysUntilTheEndOfYear(sDate date)
{
	sDate endOfYearDate;
	endOfYearDate.Day = 31;
	endOfYearDate.Month = 12;
	endOfYearDate.Year = date.Year;
	return GetDifferenceInDays(date, endOfYearDate, true);
}

// Main function
int main()
{
	sDate date = GetSystemDate();

	// To read a date manually
	// sDate date = ReadFullDate(); 

	cout << "Today is " << DayShortName(DayOfWeekOrder(date)) << " , " << date.Day << "/" << date.Month << "/" << date.Year << endl;

	cout << endl;
	cout << "Is it End of Week?\n";
	if (IsEndOfWeek(date))
		cout << "Yes it is Saturday, it's of Week.\n";
	else
		cout << "No it's Not end of week.\n";

	cout << endl;
	cout << "Is it Weekend?\n";
	if (IsWeekEnd(date))
		cout << "Yes it is a week end.\n";
	else
		cout << "No today is " << DayShortName(DayOfWeekOrder(date)) << ", Not a weekend.\n";

	cout << endl;
	cout << "Is it Business Day?\n"; 
	if (IsBusinessDay(date))
		cout << "Yes it is a business day.\n";
	else
		cout << "No it is NOT a business day.\n";

	cout << endl;
	cout << "Days until end of week : " << DaysUntilTheEndOfWeek(date) << " Day(s).\n";

	cout << "Days until end of month : "<< DaysUntilTheEndOfMonth(date) << " Day(s).\n";

	cout << "Days until end of year : " << DaysUntilTheEndOfYear(date) << " Day(s).\n";
	
	return 0;
}