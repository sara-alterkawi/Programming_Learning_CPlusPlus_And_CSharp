// Write a program to read a tow periods then count overlap days?
/*
	Enter Period 1:
	----------------------------
	Enter Start Date:
	Please enter a Day? 1
	Please enter a Month? 1
	Please enter a Year? 2022
	****************************
	Enter End Date:
	----------------------------
	Please enter a Day? 10
	Please enter a Month? 1
	Please enter a Year? 2022
	****************************
	****************************
	Enter Period 2:
	----------------------------
	Enter Start Date:
	Please enter a Day? 5
	Please enter a Month? 1
	Please enter a Year? 2022
	****************************
	Enter End Date:
	----------------------------
	Please enter a Day? 30
	Please enter a Month? 12
	Please enter a Year? 2050
	****************************
	****************************
	Overlap Days Count Is: 5
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

// Struct to represent a time period defined by a StartDate and an EndDate.
struct sPeriod
{
	sDate StartDate;
	sDate EndDate;
};

// Enum to specify the comparison result when comparing two dates.
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

// Function to compare two dates and return an enDateCompare enum value.
enDateCompare CompareDates(sDate date1, sDate date2)
{
	if (IsDate1BeforeDate2(date1, date2))
		return enDateCompare::Before;
	if (IsDate1EqualDate2(date1, date2))
		return enDateCompare::Equal;
	return enDateCompare::After;
}

// Function to calculate period in days
int PeriodLengthInDays(sPeriod period, bool includeEndDate = false)
{
	return GetDifferenceInDays(period.StartDate, period.EndDate, includeEndDate);
}

// Function to check if two time periods (period1 and period2) overlap.
bool IsOverlapPeriods(sPeriod period1, sPeriod period2)
{
	if (CompareDates(period2.EndDate, period1.StartDate) == enDateCompare::Before
		|| CompareDates(period2.StartDate, period1.EndDate) == enDateCompare::After)
		return false;
	else
		return true;
}

// Function to check if date is in period
bool isDateInPeriod(sDate date, sPeriod period)
{
	return !(CompareDates(date, period.StartDate) == enDateCompare::Before
		|| CompareDates(date, period.EndDate) == enDateCompare::After);
}

// Function to count how many days overlap
int CountOverlapDays(sPeriod period1, sPeriod period2)
{
	int period1Length = PeriodLengthInDays (period1, true);
	int period2Length = PeriodLengthInDays(period2, true);
	int overlapDays = 0;
	if (!IsOverlapPeriods(period1, period2))
		return 0;
	if (period1Length < period2Length)
	{
		while (IsDate1BeforeDate2(period1.StartDate, period1.EndDate))
		{
			if (isDateInPeriod(period1.StartDate, period2))
				overlapDays++;
			period1.StartDate = IncreaseDateByOneDay(period1.StartDate);
		}
	} else {
		while (IsDate1BeforeDate2(period2.StartDate, period2.EndDate))
		{
			if (isDateInPeriod(period2.StartDate, period1))
				overlapDays++;
			period2.StartDate = IncreaseDateByOneDay(period2.StartDate);
		}
	}
	return overlapDays;
}

// Function to read a full period (start date and end date) from the user.
sPeriod ReadPeriod()
{
	sPeriod period;
	cout << "Enter Start Date:\n";
	period.StartDate = ReadFullDate();
	cout << "****************************" << endl;

	cout << "Enter End Date:\n";
	period.EndDate = ReadFullDate();
	cout << "****************************" << endl;
	cout << "****************************" << endl;

	return period;
}

// Main function
int main()
{
	cout << "Enter Period 1:" << endl;
	cout << "----------------------------" << endl;
	sPeriod  period1 = ReadPeriod();

	cout << "Enter Period 2:" << endl;
	cout << "----------------------------" << endl;
	sPeriod  period2 = ReadPeriod();

	cout << "Overlap Days Count Is: " << CountOverlapDays(period1, period2) << endl;

	return 0;
}