// Write a program to read Vacation Start DateFrom and VacationDays, then make a function to calculate the vacation return Date.
// Note: Weekends are excluded.
/*
	Vacation Starts:
	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2022

	Please enter vacation days? 23

	Return Date: Wed , 2/2/2022
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

// Function to read vacation days
int ReadVacationDays()
{
	int Days;
	cout << "Please enter vacation days? ";
	cin >> Days;
	return Days;
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

// Function To calculate vacation return date
sDate CalculateVacationReturnDate(sDate dateFrom, int vacationDays)
{

	int weekEndCounter = 0;

	//in case the data  is weekend keep adding one day util you reach business day
	//we get rid of all weekends before the first business day
	while (IsWeekEnd(dateFrom))
	{
		dateFrom = IncreaseDateByOneDay(dateFrom);
	}

	//here we increase the vacation dates to add all weekends to it.

	for (short i = 1; i <= vacationDays + weekEndCounter; i++)
	{

		if (IsWeekEnd(dateFrom))
			weekEndCounter++;

		dateFrom = IncreaseDateByOneDay(dateFrom);
	}

	//in case the return date is week end keep adding one day util you reach business day
	while (IsWeekEnd(dateFrom))
	{
		dateFrom = IncreaseDateByOneDay(dateFrom);
	}

	return dateFrom;
}

// Main function
int main()
{
	cout << left;
	cout << setfill(' ');

	cout << "Vacation Starts: " << endl;
	sDate dateFrom = ReadFullDate();

	cout << endl;
	int vacationDays = ReadVacationDays();
	sDate returnDate = CalculateVacationReturnDate(dateFrom, vacationDays);

	cout << endl;
	cout << "Return Date: " << DayShortName(DayOfWeekOrder(returnDate)) << " , "
		<< setfill('0') << right << setw(2) << returnDate.Day << "/" << setfill('0') << right << setw(2) << returnDate.Month << "/" << setw(4) << returnDate.Year << endl;

	return 0;
}