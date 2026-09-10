// Write a program to read a Period and calculate period length in days?
/*
	Enter Period 1:
	----------------------------
	Enter Start Date:
	Please enter a Day? 1
	Please enter a Month? 2
	Please enter a Year? 2022
	****************************
	Enter End Date:
	----------------------------
	Please enter a Day? 5
	Please enter a Month? 1
	Please enter a Year? 2022
	****************************
	****************************
	Period Length is: 4
	Period Length (Including End Date) is: 5
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

// Function to calculate period in days
int PeriodLengthInDays(sPeriod period, bool includeEndDate = false)
{
	return GetDifferenceInDays(period.StartDate, period.EndDate, includeEndDate);
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
	cout << "Enter Period:" << endl;
	cout << "----------------------------" << endl;
	sPeriod  period = ReadPeriod();

	cout << "Period Length is: " << PeriodLengthInDays(period) << endl;
	cout << "Period Length (Including End Date) is: " << PeriodLengthInDays(period, true) << endl;

	return 0;
}