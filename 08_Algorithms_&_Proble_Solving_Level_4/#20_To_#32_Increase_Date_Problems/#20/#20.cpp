// Write a program to read a date and make a functions
/*
	to increase date as follows :
	• IncreaseDateByXDays
	• IncreaseDateByOneWeek
	• IncreaseDateByXWeeks
	• IncreaseDateByOneMonth
	• IncreaseDateByXMonths
	• IncreaseDateByOneYear
	• IncreaseDateByXYears
	• IncreaseDateByXYearsFaster
	• IncreaseDateByOneDecade
	• IncreaseDateByXDecades
	• IncreaseDateByXDecadesFaster
	• IncreaseDateByOneCentury
	• IncreaseDateByOneMillennium
*/
/*
	Please enter a Day? 31
	Please enter a Month? 12
	Please enter a Year? 2022

	Date After:

	01: Adding one day			is: 01/01/2023
	02: Adding 10 days			is: 11/01/2023
	03: Adding one week			is: 18/01/2023
	04: Adding 10 weeks			is: 29/03/2023
	05: Adding one month		is: 29/04/2023
	06: Adding 5 months			is: 29/09/2023
	07: Adding one year			is: 29/09/2024
	08: Adding 10 Years			is: 29/09/2034
	09: Adding 10 Years (faster)is: 29/09/2044
	10: Adding one Decade		is: 29/09/2054
	11: Adding 10 Decades		is: 29/09/2154
	12: Adding 10 Decade(faster)is: 29/09/2254
	13: Adding One Century		is: 29/09/2354
	14: Adding One Millennium	is: 29/09/3354
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

// Function to increase date X days
sDate IncreaseDateByXDays(int days, sDate date)
{
	for (int i = 1; i <= days; i++)
		date = IncreaseDateByOneDay(date);
	return date;
}

// Function to increase date one week
sDate IncreaseDateByOneWeek(sDate date)
{
	for (int i = 1; i <= 7; i++)
		date = IncreaseDateByOneDay(date);
	return date;
}

// Function to increase date X weeks
sDate IncreaseDateByXWeeks(int weeks, sDate date)
{
	for (int i = 1; i <= weeks; i++)
		date = IncreaseDateByOneDay(date);
	return date;
}

// Function to increase date one month
sDate IncreaseDateByOneMonth(sDate date)
{
	if (date.Month == 12)
	{
		date.Month = 1;
		date.Year++;
	} else {
		date.Month++;
	}
	// last check day in date should not exceed max days in the current month
	// example if date is 31/1/2022 increasing one month should not be 31/2/2022, it should// be 28/2/2022
	short numberOfDaysInCurrentMonth = NumberOfDaysInAMonth(date.Month, date.Year);
	if (date.Day > numberOfDaysInCurrentMonth)
		date.Day = numberOfDaysInCurrentMonth;
	return date;
}

// Function to increase date X months
sDate IncreaseDateByXMonths(int months, sDate date)
{
	for (int i = 1; i <= months; i++)
		date = IncreaseDateByOneMonth(date);
	return date;
}

// Function to increase date one year
sDate IncreaseDateByOneYear(sDate date)
{ 
	date.Year++;
	if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		date.Day = 28;
	return date;
}

// Function to increase date X years
sDate IncreaseDateByXYears(int years, sDate date)
{
	for (int i = 1; i <= years; i++)
		date = IncreaseDateByOneYear(date);
	return date;
}

// Function to increase date X years faster
sDate IncreaseDateByXYearsFaster(int years, sDate date)
{
	date.Year += years;
	if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		date.Day = 28;
	return date;
}

// Function to increase date one decad
sDate IncreaseDateByOneDecade(sDate date)
{
	//Period of 10 years
	date.Year += 10;
	if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		date.Day = 28;
	return date;
}

// Function to increase date X decades
sDate IncreaseDateByXDecades(int decade, sDate date)
{
	for (int i = 1; i <= decade * 10; i++)
		date = IncreaseDateByOneYear(date);
	return date;
}

// Function to increase date X decades faster
sDate IncreaseDateByXDecadesFaster(int decade, sDate date)
{
	date.Year += decade * 10;
	if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		date.Day = 28;
	return date;
}

// Function to increase date one century
sDate IncreaseDateByOneCentury(sDate date)
{
	//Period of 100 years
	date.Year += 100;
	if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		date.Day = 28;
	return date;
}

// Function to increase date one millinium
sDate IncreaseDateByOneMillennium(sDate date)
{
	//Period of 1000 years
	date.Year += 1000;
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

	date = IncreaseDateByOneDay(date);
	cout << setw(30) << "01: Adding one day" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = IncreaseDateByXDays(10, date);
	cout << setw(30) << "02: Adding 10 days" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = IncreaseDateByOneWeek(date);
	cout << setw(30) << "03: Adding one week" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = IncreaseDateByXWeeks(10, date);
	cout << setw(30) << "04: Adding 10 weeks" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = IncreaseDateByOneMonth(date);
	cout << setw(30) << "05: Adding one month" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = IncreaseDateByXMonths(5, date);
	cout << setw(30) << "06: Adding 5 months" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = IncreaseDateByOneYear(date);
	cout << setw(30) << "07: Adding one year" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = IncreaseDateByXYears(10, date);
	cout << setw(30) << "08: Adding 10 years" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = IncreaseDateByXYearsFaster(10, date);
	cout << setw(30) << "09: Adding 10 years (faster)" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = IncreaseDateByOneDecade(date);
	cout << setw(30) << "10: Adding one Decade" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = IncreaseDateByXDecades(10, date);
	cout << setw(30) << "11: Adding 10 Decades" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = IncreaseDateByXDecadesFaster(10, date);
	cout << setw(30) << "12: Adding 10 Decades (faster)" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = IncreaseDateByOneCentury(date);
	cout << setw(30) << "13: Adding one Century" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;
	cout << setfill(' ');

	date = IncreaseDateByOneMillennium(date);
	cout << setw(30) << "14: Adding one Millennium" << "is: " << setfill('0') << right << setw(2) << date.Day << "/" << setw(2) << date.Month << "/" << setw(4) << date.Year << left << endl;

	cout << endl;

	return 0;
}