// Write a program to read a date and make a functions to
/*
	Decrease date as follows :
	• DecreaseDateByOneDay
	• DecreaseDateByXDays
	• DecreaseDateByOneWeek
	• DecreaseDateByXWeeks
	• DecreaseDateByOneMonth
	• DecreaseDateByXMonths
	• DecreaseDateByOneYear
	• DecreaseDateByXYears
	• DecreaseDateByXYearsFaster
	• DecreaseDateByOneDecade
	• DecreaseDateByXDecades
	• DecreaseDateByXDecadesFaster
	• DecreaseDateByOneCentury
	• DateByOneMillennium
*/
/*
	Please enter a Day? 31
	Please enter a Month? 12
	Please enter a Year? 2022

	Date After:

	01: Subtracting one day				is: 30/12/2022
	02: Subtracting 10 days				is: 20/12/2022
	03: Subtracting one week			is: 13/12/2022
	04: Subtracting 10 weeks			is: 04/10/2022
	05: Subtracting one month			is: 04/09/2022
	06: Subtracting 5 months			is: 04/04/2022
	07: Subtracting one year			is: 04/04/2021
	08: Subtracting 10 Years			is: 04/04/2011
	09: Subtracting 10 Years (faster)	is: 04/04/2001
	10: Subtracting one Decade			is: 04/04/1991
	11: Subtracting 10 Decades			is: 04/04/1891
	12: Subtracting 10 Decade (faster)	is: 04/04/1791
	13: Subtracting One Century			is: 04/04/1691
	14: Subtracting One Millennium		is: 04/04/0691
*/

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

// Function to decrease date one day
sDate DecreaseDateByOneDay(sDate date)
{
	if (date.Day == 1)
	{
		if (date.Month == 1)
		{
			date.Month = 12;
			date.Day = 31;
			date.Year--;
		} else {
			date.Month--;
			date.Day = NumberOfDaysInAMonth(date.Month, date.Year);
		}
	} else {
		date.Day--;
	}
	return date;
}

// Function to decrease date X days
sDate DecreaseDateByXDays(int days, sDate date)
{
	for (int i = 1; i <= days; i++)
		date = DecreaseDateByOneDay(date);
	return date;
}

// Function to decrease date one week
sDate DecreaseDateByOneWeek(sDate date)
{
	for (int i = 1; i <= 7; i++)
		date = DecreaseDateByOneDay(date);
	return date;
}

// Function to decrease date X weeks
sDate DecreaseDateByXWeeks(int weeks, sDate date)
{
	for (int i = 1; i <= weeks; i++)
		date = DecreaseDateByOneWeek(date);
	return date;
}

// Function to decrease date one month
sDate DecreaseDateByOneMonth(sDate date)
{
	if (date.Month == 1)
	{
		date.Month = 12;
		date.Year--;
	} else {
		date.Month--;
	}
	// last check day in date should not exceed max days in the current month
	// example if date is 31/1/2022 increasing one month should not be 31/2/2022, it should// be 28/2/2022
	int numberOfDaysInCurrentMonth = NumberOfDaysInAMonth(date.Month, date.Year);
	if (date.Day > numberOfDaysInCurrentMonth)
		date.Day = numberOfDaysInCurrentMonth;
	return date;
}

// Function to decrease date X months
sDate DecreaseDateByXMonths(int months, sDate date)
{
	for (int i = 1; i <= months; i++)
		date = DecreaseDateByOneMonth(date);
	return date;
}

// Function to decrease date one year
sDate DecreaseDateByOneYear(sDate date)
{
	date.Year--;
	if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		date.Day = 28;
	return date;
}

// Function to decrease date X years
sDate DecreaseDateByXYears(int years, sDate date)
{
	for (int i = 1; i <= years; i++)
		date = DecreaseDateByOneYear(date);
	return date;
}

// Function to decrease date X years faster
sDate DecreaseDateByXYearsFaster(int years, sDate date)
{
	date.Year -= years;
	if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		date.Day = 28;
	return date;
}

// Function to decrease date one decad
sDate DecreaseDateByOneDecade(sDate date)
{
	//Period of 10 years
	date.Year -= 10;
	if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		date.Day = 28;
	return date;
}

// Function to decrease date X decades
sDate DecreaseDateByXDecades(int decade, sDate date)
{
	for (int i = 1; i <= decade * 10; i++)
		date = DecreaseDateByOneYear(date);
	return date;
}

// Function to decrease date X decades faster
sDate DecreaseDateByXDecadesFaster(int decade, sDate date)
{
	date.Year -= decade * 10;
	if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		date.Day = 28;
	return date;
}

// Function to decrease date one century
sDate DecreaseDateByOneCentury(sDate date)
{
	//Period of 100 years
	date.Year -= 100;
	if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		date.Day = 28;
	return date;
}

// Function to decrease date one millinium
sDate DecreaseDateByOneMillennium(sDate date)
{
	//Period of 1000 years
	date.Year -= 1000;
	if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		date.Day = 28;
	return date;
}

// Main function
int main()
{
	sDate date = ReadFullDate();
	cout << "\nDate After: \n";
	cout << endl;

	cout << left;
	cout << setfill(' ');

	date = DecreaseDateByOneDay(date);
	cout << setw(36) << "01: Subtracting one day" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = DecreaseDateByXDays(10, date);
	cout << setw(36) << "02: Subtracting 10 days" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = DecreaseDateByOneWeek(date);
	cout << setw(36) << "03: Subtracting one week" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = DecreaseDateByXWeeks(10, date);
	cout << setw(36) << "04: Subtracting 10 weeks" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = DecreaseDateByOneMonth(date);
	cout << setw(36) << "05: Subtracting one month" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = DecreaseDateByXMonths(5, date);
	cout << setw(36) << "06: Subtracting 5 months" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = DecreaseDateByOneYear(date);
	cout << setw(36) << "07: Subtracting one year" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = DecreaseDateByXYears(10, date);
	cout << setw(36) << "08: Subtracting 10 years" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = DecreaseDateByXYearsFaster(10, date);
	cout << setw(36) << "09: Subtracting 10 years (faster)" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = DecreaseDateByOneDecade(date);
	cout << setw(36) << "10: Subtracting one Decade" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = DecreaseDateByXDecades(10, date);
	cout << setw(36) << "11: Subtracting 10 Decades" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = DecreaseDateByXDecadesFaster(10, date);
	cout << setw(36) << "12: Subtracting 10 Decades (faster)" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = DecreaseDateByOneCentury(date);
	cout << setw(36) << "13: Subtracting one Century" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = DecreaseDateByOneMillennium(date);
	cout << setw(36) << "14: Subtracting one Millennium" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;

	cout << endl;

	return 0;
}