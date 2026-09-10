// Write a program to read Vacation Period DateFrom and DateTo and make a function to calculate the actual vacation days.
// Note: Weekends are excluded.
/*
	Vacation Starts:
	Please enter a Day? 1
	Please enter a Month? 9
	Please enter a Year? 2022

	Vacation Ends:
	Please enter a Day? 5
	Please enter a Month? 9
	Please enter a Year? 2022

	Vaction From: Thu, 1/9/2022
	Vaction To: Mon, 5/9/2022

	Actual Vacation Days is: 2
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
		}
		else {
			date.Day = 1;
			date.Month++;
		}
	}
	else {
		date.Day++;
	}
	return date;
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

// Function to check if the day is a weekend day (Friday or Saturday)
bool IsWeekEnd(sDate date)
{
	//Weekends are Fri and Sat
	int dayIndex = DayOfWeekOrder(date);
	return  (dayIndex == 5 || dayIndex == 6);
}

// Function to check if the day is a business day (Sun-Thu)
bool IsBusinessDay(sDate date)
{
	// Business days are Sun, Mon, Tue, Wed, and Thu.
	// We can simply check if it is NOT a weekend day.
	return !IsWeekEnd(date);
}

// Function To calculate vacation days
int CalculateVacationDays(sDate dateFrom, sDate dateTo)
{
	int daysCount = 0;
	while (IsDate1BeforeDate2(dateFrom, dateTo))
	{
		if (IsBusinessDay(dateFrom))
			daysCount++;
		dateFrom = IncreaseDateByOneDay(dateFrom);
	}
	return daysCount;
}

// Main function
int main()
{
	cout << left;
	cout << setfill(' ');

	cout << setw(17) << "Vacation Starts" << " :" << endl;
	sDate dateFrom = ReadFullDate();
	
	

	cout << endl;
	cout << setw(17) << "Vacation Ends" << " :" << endl;
	sDate dateTo = ReadFullDate();
	
	cout << endl;
	cout << setw(17) << "Vaction From"<< " :" << DayShortName(DayOfWeekOrder(dateFrom)) << " , " << setfill('0') << right << setw(2) << dateFrom.Day << "/" << setfill('0') << right << setw(2) << dateFrom.Month << "/" << setw(4) << dateFrom.Year << endl;
	cout << setw(17) << "Vaction To" << " :" << DayShortName(DayOfWeekOrder(dateTo)) << " , " << setfill('0') << right << setw(2) << dateTo.Day << "/" << setfill('0') << right << setw(2) << dateTo.Month << "/" << setw(4) << dateTo.Year << endl;
	
	cout << endl;
	cout << "Actucal Vacation Days is: " << CalculateVacationDays(dateFrom, dateTo) << endl;
	
	return 0;
}