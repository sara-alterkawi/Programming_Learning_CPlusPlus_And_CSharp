#pragma warning(disable : 4996)
#pragma once
#include<iostream>
#include<string>
#include <iomanip>
#include "clsString.h"
using namespace std;
// Class Date
class clsDate
{
	// Data Members
private:
	int _Day = 1;
	int _Month = 1;
	int _Year = 1900;
public:
	// Default Constructor to initialize today's date
	clsDate()
	{
		time_t t = time(0);
		tm* now = localtime(&t);
		_Day = now->tm_mday;
		_Month = now->tm_mon + 1;
		_Year = now->tm_year + 1900;
	}
	// Parameterized Constructor to accept date in "dd/mm/yyyy" format
	clsDate(string sDate)
	{
		vector <string> vDate;
		vDate = clsString::Split(sDate, "/");
		_Day = stoi(vDate[0]);
		_Month = stoi(vDate[1]);
		_Year = stoi(vDate[2]);
	}
	// Parameterized Constructor to accept day number in year and year
	clsDate(int day, int month, int year)
	{
		_Day = day;
		_Month = month;
		_Year = year;
	}
	// Parameterized Constructor to accept day order in year and year
	clsDate(int dateOrderInYear, int year)
	{
		// This will construct a date by date order in year
		clsDate date1 =
			GetDateFromDayOrderInYear(dateOrderInYear, year);
		_Day = date1.Day;
		_Month = date1.Month;
		_Year = date1.Year;
	}
	// Setter for day
	void SetDay(int day) {
		_Day = day;
	}
	// Getter for day
	int GetDay() {
		return _Day;
	}
	// Property to access Day
	__declspec(property(get = GetDay, put = SetDay)) int Day;
	// Setter for month
	void SetMonth(int month) {
		_Month = month;
	}
	// Getter for month
	int GetMonth() {
		return _Month;
	}
	// Property to access Day
	__declspec(property(get = GetMonth, put = SetMonth)) int Month;
	// Setter for year
	void SetYear(int year) {
		_Year = year;
	}
	// Getter for year
	int GetYear() {
		return _Year;
	}
	// Property to access Year
	__declspec(property(get = GetYear, put = SetYear)) int Year;
	// Method to get system date
	static clsDate GetSystemDate()
	{
		time_t t = time(0);
		tm* now = localtime(&t);
		int day, month, year;
		year = now->tm_year + 1900;
		month = now->tm_mon + 1;
		day = now->tm_mday;
		return clsDate(day, month, year);
	}
	// Method to get system date time as string
	static string GetSystemDateToString()
	{
		time_t t = time(0);
		tm* now = localtime(&t);
		int day, month, year, hour, minute, second;
		year = now->tm_year + 1900;
		month = now->tm_mon + 1;
		day = now->tm_mday;
		hour = now->tm_hour;
		minute = now->tm_min;
		second = now->tm_sec;
		return to_string(day) + "/" + to_string(month) + "/" + to_string(year) + " " +
			to_string(hour) + ":" + to_string(minute) + ":" + to_string(second);
	}
	// Method to print date
	void Print()
	{
		cout << DateToString() << endl;
	}
	// Method to check if the date is valid
	static bool IsValidDate(clsDate date)
	{
		if (date.Day < 1 || date.Day>31)
		{
			return false;
		}
		if (date.Month < 1 || date.Month>12)
		{
			return false;
		}
		if (date.Month == 2)
		{
			if (IsLeapYear(date.Year))
			{
				if (date.Day > 29)
				{
					return false;
				}
			}
			else {
				if (date.Day > 28)
				{
					return false;
				}
			}
		}
		int daysInMonth = NumberOfDaysInAMonth(date.Month, date.Year);
		if (date.Day > daysInMonth)
			return false;
		return true;
	}
	bool IsValid()
	{
		return IsValidDate(*this);
	}
	// Method to convert date to string in "dd/mm/yyyy" format
	static string DateToString(clsDate date)
	{
		return to_string(date.Day) + "/" + to_string(date.Month) + "/" + to_string(date.Year);
	}
	// Overloaded Method to convert date to string in "dd/mm/yyyy" format
	string DateToString()
	{
		return DateToString(*this);
	}
	// Method to check if a year is a leap year
	static bool IsLeapYear(int year)
	{
		return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	}
	// Overloaded Method to check if a year is a leap year
	bool IsLeapYear()
	{
		return IsLeapYear(_Year);
	}
	// Method to get number of days in a year
	static int NumberOfDaysInAYear(int year)
	{
		return IsLeapYear(year) ? 366 : 365;
	}
	// Overloaded Method to
	int NumberOfDaysInAYear()
	{
		return NumberOfDaysInAYear(_Year);
	}
	// Method to get number of hours in a year
	static int NumberOfHoursInAYear(int year)
	{
		return NumberOfDaysInAYear(year) * 24;
	}
	// Overloaded Method to get number of hours in a year
	int NumberOfHoursInAYear()
	{
		return NumberOfHoursInAYear(_Year);
	}
	// Method to get number of minutes in a year
	static int NumberOfMinutesInAYear(int year)
	{
		return NumberOfHoursInAYear(year) * 60;
	}
	// Overloaded Method to get number of minutes in a year
	int NumberOfMinutesInAYear()
	{
		return NumberOfMinutesInAYear(_Year);
	}
	// Method to get number of seconds in a year
	static int NumberOfSecondsInAYear(int year)
	{
		return NumberOfMinutesInAYear(year) * 60;
	}
	// Overloaded Method to get number of seconds in a year
	int NumberOfSecondsInAYear()
	{
		return NumberOfSecondsInAYear(_Year);
	}
	// Method to get number of days in a month
	static int NumberOfDaysInAMonth(int month, int year) {
		switch (month) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
		case 4: case 6: case 9: case 11:
			return 30;
		case 2:
			return IsLeapYear(year) ? 29 : 28;
		default:
			return 0;
		}
	}
	// Overloaded Method to get number of days in a month
	int NumberOfDaysInAMonth()
	{
		return NumberOfDaysInAMonth(_Month, _Year);
	}
	// Method to get number of hours in a month
	static int NumberOfHoursInAMonth(int month, int year)
	{
		return NumberOfDaysInAMonth(month, year) * 24;
	}
	// Overloaded Method to get number of hours in a month
	int NumberOfHoursInAMonth()
	{
		return NumberOfHoursInAMonth(_Month, _Year);
	}
	// Method to get number of minutes in a month
	static int NumberOfMinutesInAMonth(int month, int year)
	{
		return NumberOfHoursInAMonth(month, year) * 60;
	}
	// Overloaded Method to get number of minutes in a month
	int NumberOfMinutesInAMonth()
	{
		return NumberOfMinutesInAMonth(_Month, _Year);
	}
	// Method to get number of seconds in a month
	static int NumberOfSecondsInAMonth(int month, int year)
	{
		return NumberOfMinutesInAMonth(month, year) * 60;
	}
	// Overloaded Method to get number of seconds in a month
	int NumberOfSecondsInAMonth()
	{
		return NumberOfSecondsInAMonth(_Month, _Year);
	}
	// Method to calculate day of the week
	static int DayOfWeekOrder(int day, int month, int year)
	{
		int a, y, m;
		a = (14 - month) / 12;
		y = year - a;
		m = month + (12 * a) - 2; // Gregorian://0:sun, 1:Mon, 2:Tue...etc
		return (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
	}
	// Overloaded Method to calculate day of the week
	int DayOfWeekOrder()
	{
		return DayOfWeekOrder(_Day, _Month, _Year);
	}
	// Method to get day name
	static string DayintName(int dayOrder)
	{
		string arrDayNames[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
		return arrDayNames[dayOrder];
	}
	// Overloaded Method to get day name
	string DayintName()
	{
		return DayintName(DayOfWeekOrder());
	}
	// Method to get month name
	static string MonthintName(int monthNumber)
	{
		string Months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
		return (Months[monthNumber - 1]);
	}
	// Overloaded Method to get month name
	string MonthintName()
	{
		return MonthintName(_Month);
	}
	// Method to print month calendar
	static void PrintMonthCalendar(int month, int year)
	{
		int numberOfDays;
		int current = DayOfWeekOrder(1, month, year);
		numberOfDays = NumberOfDaysInAMonth(month, year);
		cout << "\n  _______________" << MonthintName(month) << "_______________\n\n";
		cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";
		int i;
		for (i = 0; i < current; i++)
		{
			cout << "     ";
		}
		for (int j = 1; j <= numberOfDays; j++)
		{
			cout << setw(5) << j;
			if (++i == 7)
			{
				i = 0;
				cout << "\n";
			}
		}
		cout << "-------------------------------------------\n";
	}
	// Overloaded Method to print month calendar
	void PrintMonthCalendar()
	{
		PrintMonthCalendar(_Month, _Year);
	}
	// Method to print year calendar
	static void PrintYearCalendar(int year)
	{
		cout << "-------------------------------------------\n";
		cout << "           Calendar - " << year << "\n";
		cout << "-------------------------------------------\n";
		for (int i = 1; i <= 12; i++)
		{
			PrintMonthCalendar(i, year);
		}
	}
	// Overloaded Method to print year calendar
	void PrintYearCalendar()
	{
		PrintYearCalendar(_Year);
	}
	// Method to calculate total days from the beginning of the year
	static int NumberOfDaysFromTheBeginingOfTheYear(int day, int month, int year)
	{
		int totalDays = 0;
		for (int i = 1; i <= month - 1; i++)
		{
			totalDays += NumberOfDaysInAMonth(i, year);
		}
		totalDays += day;
		return totalDays;
	}
	// Overloaded Method to calculate total days from the beginning of the year
	int NumberOfDaysFromTheBeginingOfTheYear()
	{
		return NumberOfDaysFromTheBeginingOfTheYear(_Day, _Month, _Year);
	}
	// Method to get date from day order in year
	static clsDate GetDateFromDayOrderInYear(int dateOrderInYear, int year)
	{
		clsDate Date;
		int RemainingDays = dateOrderInYear;
		int MonthDays = 0;
		Date.Year = year;
		Date.Month = 1;
		while (true)
		{
			MonthDays = NumberOfDaysInAMonth(Date.Month, year);
			if (RemainingDays > MonthDays)
			{
				RemainingDays -= MonthDays;
				Date.Month++;
			}
			else
			{
				Date.Day = RemainingDays;
				break;
			}
		}
		return Date;
	}
	// Method to add a specified number of days to a given date
	void AddDays(int days)
	{
		int remainingDays = days + NumberOfDaysFromTheBeginingOfTheYear(_Day, _Month, _Year);
		int monthDays = 0;
		_Month = 1;
		while (true)
		{
			monthDays = NumberOfDaysInAMonth(_Month, _Year);
			if (remainingDays > monthDays)
			{
				remainingDays -= monthDays;
				_Month++;
				if (_Month > 12)
				{
					_Month = 1;
					_Year++;
				}
			}
			else
			{
				_Day = remainingDays;
				break;
			}
		}
	}
	// Method to compare two dates
	static bool IsDate1EqualDate2(clsDate date1, clsDate date2)
	{
		return (date1.Year == date2.Year) ? ((date1.Month == date2.Month) ? ((date1.Day == date2.Day) ? true : false) : false) : false;
	}
	// Overloaded Method to compare two dates
	bool IsDate1EqualDate2(clsDate otherDate)
	{
		return IsDate1EqualDate2(*this, otherDate);
	}
	// Method to check if the day is the last day in the month
	static bool IsLastDayInMonth(clsDate date)
	{
		return (date.Day == NumberOfDaysInAMonth(date.Month, date.Year));
	}
	// Overloaded Method to check if the day is the last day in the month
	bool IsLastDayInMonth()
	{
		return IsLastDayInMonth(*this);
	}
	// Method to check if the month is the last month in the year
	static bool IsLastMonthInYear(int month)
	{
		return (month == 12);
	}
	// Overloaded Method to check if the month is the last month in the year
	bool IsLastMonthInYear()
	{
		return IsLastMonthInYear(_Month);
	}
	// Method to add date one day AddOneDay
	static clsDate IncreaseDateByOneDay(clsDate date)
	{
		if (IsLastDayInMonth(date))
		{
			if (IsLastMonthInYear(date.Month))
			{
				date.Month = 1;
				date.Day = 1;
				date.Year++;
			}
			else
			{
				date.Day = 1;
				date.Month++;
			}
		}
		else
		{
			date.Day++;
		}
		return date;
	}
	// Method to increase date by one day
	void IncreaseDateByOneDay()
	{
		*this = IncreaseDateByOneDay(*this);
	}
	// Method to increase date by X days
	clsDate IncreaseDateByXDays(int days, clsDate date)
	{
		for (int i = 1; i <= days; i++)
		{
			date = IncreaseDateByOneDay(date);
		}
		return date;
	}
	// Method to increase date by X days
	void IncreaseDateByXDays(int days)
	{
		*this = IncreaseDateByXDays(days, *this);
	}
	// Method to swap two dates
	static void  SwapDates(clsDate& date1, clsDate& date2)
	{
		clsDate TempDate;
		TempDate = date1;
		date1 = date2;
		date2 = TempDate;
	}
	// Method to get the diffenrance between two dates
	static int GetDifferenceInDays(clsDate date1, clsDate date2, bool includeEndDay = false)
	{
		int days = 0;
		while (IsDate1BeforeDate2(date1, date2))
		{
			days++;
			date1 = IncreaseDateByOneDay(date1);
		}
		return includeEndDay ? ++days : days;
	}
	// Overloaded Method to get the diffenrance between two dates
	int GetDifferenceInDays(clsDate otherDate, bool includeEndDay = false)
	{
		return GetDifferenceInDays(*this, otherDate, includeEndDay);
	}
	// Method to calculate age in days
	static int CalculateMyAgeInDays(clsDate birthDate)
	{
		clsDate CurrentDate = GetSystemDate();
		return GetDifferenceInDays(birthDate, CurrentDate);
	}
	// Method to add one week to the current date
	static clsDate IncreaseDateByOneWeek(clsDate date)
	{
		for (int i = 0; i < 7; i++)
		{
			date = IncreaseDateByOneDay(date);
		}
		return date;
	}
	// Method to increase date by one week
	void IncreaseDateByOneWeek()
	{
		*this = IncreaseDateByOneWeek(*this);
	}
	// Method to increase date X weeks
	clsDate IncreaseDateByXWeeks(int weeks, clsDate& date)
	{
		for (int i = 1; i <= weeks; i++)
		{
			date = IncreaseDateByOneWeek(date);
		}
		return date;
	}
	// Method to increase date X weeks
	void IncreaseDateByXWeeks(int weeks)
	{
		*this = IncreaseDateByXWeeks(weeks, *this);
	}
	// Method to increase date by one month
	clsDate IncreaseDateByOneMonth(clsDate& date)
	{
		if (date.Month == 12)
		{
			date.Month = 1;
			date.Year++;
		}
		else
		{
			date.Month++;
		}
		int numberOfDaysInCurrentMonth = NumberOfDaysInAMonth(date.Month, date.Year);
		if (date.Day > numberOfDaysInCurrentMonth)
		{
			date.Day = numberOfDaysInCurrentMonth;
		}
		return date;
	}
	// Method to increase date by one month
	void IncreaseDateByOneMonth()
	{
		*this = IncreaseDateByOneMonth(*this);
	}
	// Method to increase date by X months
	clsDate IncreaseDateByXMonths(int months, clsDate date)
	{
		for (int i = 1; i <= months; i++)
		{
			date = IncreaseDateByOneMonth(date);
		}
		return date;
	}
	// Method to increase date by X months
	void IncreaseDateByXMonths(int months)
	{
		*this = IncreaseDateByXMonths(months, *this);
	}
	// Method to increase date by one year
	clsDate IncreaseDateByOneYear(clsDate date)
	{
		date.Year++;
		if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		{
			date.Day = 28;
		}
		return date;
	}
	// Method to increase date by one year
	void IncreaseDateByOneYear()
	{
		*this = IncreaseDateByOneYear(*this);
	}
	// Method to increase date X years
	clsDate IncreaseDateByXYears(int years, clsDate date)
	{
		for (int i = 1; i <= years; i++)
		{
			date = IncreaseDateByOneYear(date);
		}
		return date;
	}
	// Method to increase date X years
	void IncreaseDateByXYears(int years)
	{
		*this = IncreaseDateByXYears(years, *this);
	}
	// Method to increase date one decad
	clsDate IncreaseDateByOneDecade(clsDate date)
	{
		//Period of 10 years
		date.Year += 10;
		if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		{
			date.Day = 28;
		}
		return date;
	}
	// Method to increase date one decad
	void IncreaseDateByOneDecade()
	{
		*this = IncreaseDateByOneDecade(*this);
	}
	// Method to increase date X decades
	clsDate IncreaseDateByXDecades(int decade, clsDate date)
	{
		for (int i = 1; i <= decade * 10; i++)
		{
			date = IncreaseDateByOneYear(date);
		}
		return date;
	}
	// Method to increase date X decades
	void IncreaseDateByXDecades(int decade)
	{
		*this = IncreaseDateByXDecades(decade, *this);
	}
	// Method to increase date one century
	clsDate IncreaseDateByOneCentury(clsDate date)
	{
		//Period of 100 years
		date.Year += 100;
		if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		{
			date.Day = 28;
		}
		return date;
	}
	// Method to increase date one century
	void IncreaseDateByOneCentury()
	{
		*this = IncreaseDateByOneCentury(*this);
	}
	// Mthod to increase date one millinium
	clsDate IncreaseDateByOneMillennium(clsDate date)
	{
		// Period of 1000 years
		date.Year += 1000;
		if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		{
			date.Day = 28;
		}
		return date;
	}
	// Method to increase date one millinium
	void IncreaseDateByOneMillennium()
	{
		*this = IncreaseDateByOneMillennium(*this);
	}
	// Method to decrease date by one day
	static clsDate DecreaseDateByOneDay(clsDate date)
	{
		if (date.Day == 1)
		{
			if (date.Month == 1)
			{
				date.Month = 12;
				date.Day = 31;
				date.Year--;
			}
			else
			{
				date.Month--;
				date.Day = NumberOfDaysInAMonth(date.Month, date.Year);
			}
		}
		else
		{
			date.Day--;
		}
		return date;
	}
	// Method to decrease date by one day
	void DecreaseDateByOneDay()
	{
		*this = DecreaseDateByOneDay(*this);
	}
	// Method to decrease date by X days
	static clsDate DecreaseDateByXDays(int days, clsDate date)
	{
		for (int i = 1; i <= days; i++)
		{
			date = DecreaseDateByOneDay(date);
		}
		return date;
	}
	// Method to decrease date by X days
	void DecreaseDateByXDays(int days)
	{
		*this = DecreaseDateByXDays(days, *this);
	}
	// Method to decrease date by one week
	static clsDate DecreaseDateByOneWeek(clsDate date)
	{
		for (int i = 1; i <= 7; i++)
		{
			date = DecreaseDateByOneDay(date);
		}
		return date;
	}
	// Method to decrease date by one week
	void DecreaseDateByOneWeek()
	{
		*this = DecreaseDateByOneWeek(*this);
	}
	// Method to decrease date by X weeks
	static clsDate DecreaseDateByXWeeks(int weeks, clsDate date)
	{
		for (int i = 1; i <= weeks; i++)
		{
			date = DecreaseDateByOneWeek(date);
		}
		return date;
	}
	// Method to decrease date by X weeks
	void DecreaseDateByXWeeks(int weeks)
	{
		*this = DecreaseDateByXWeeks(weeks, *this);
	}
	// Method to decrease date one month
	static clsDate DecreaseDateByOneMonth(clsDate date)
	{
		if (date.Month == 1)
		{
			date.Month = 12;
			date.Year--;
		}
		else
		{
			date.Month--;
		}
		int numberOfDaysInCurrentMonth = NumberOfDaysInAMonth(date.Month, date.Year);
		if (date.Day > numberOfDaysInCurrentMonth)
		{
			date.Day = numberOfDaysInCurrentMonth;
		}
		return date;
	}
	// Method to decrease date by one month
	void DecreaseDateByOneMonth()
	{
		*this = DecreaseDateByOneMonth(*this);
	}
	// Method to decrease date by X months
	static clsDate DecreaseDateByXMonths(int months, clsDate date)
	{
		for (int i = 1; i <= months; i++)
		{
			date = DecreaseDateByOneMonth(date);
		}
		return date;
	}
	// Method to decrease date by X months
	void DecreaseDateByXMonths(int months)
	{
		*this = DecreaseDateByXMonths(months, *this);
	}
	// Method to decrease date one year
	static clsDate DecreaseDateByOneYear(clsDate date)
	{
		date.Year--;
		if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		{
			date.Day = 28;
		}
		return date;
	}
	// Method to decrease date one year
	void DecreaseDateByOneYear()
	{
		*this = DecreaseDateByOneYear(*this);
	}
	// Method to decrease date X years
	static clsDate DecreaseDateByXYears(int years, clsDate date)
	{
		for (int i = 1; i <= years; i++)
		{
			date = DecreaseDateByOneYear(date);
		}
		return date;
	}
	// Method to decrease date X years
	void DecreaseDateByXYears(int years)
	{
		*this = DecreaseDateByXYears(years, *this);
	}
	// Method to decrease date one decad
	static clsDate DecreaseDateByOneDecade(clsDate date)
	{
		// Period of 10 years
		date.Year -= 10;
		if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		{
			date.Day = 28;
		}
		return date;
	}
	// Method to decrease date one decad
	void DecreaseDateByOneDecade()
	{
		*this = DecreaseDateByOneDecade(*this);
	}
	// Method to decrease date X decades
	static clsDate DecreaseDateByXDecades(int decade, clsDate date)
	{
		for (int i = 1; i <= decade * 10; i++)
		{
			date = DecreaseDateByOneYear(date);
		}
		return date;
	}
	// Method to decrease date X decades
	void DecreaseDateByXDecades(int decade)
	{
		*this = DecreaseDateByXDecades(decade, *this);
	}
	// Method to decrease date one century
	static clsDate DecreaseDateByOneCentury(clsDate date)
	{
		//Period of 100 years
		date.Year -= 100;
		if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		{
			date.Day = 28;
		}
		return date;
	}
	// Method to decrease date one century
	void DecreaseDateByOneCentury()
	{
		*this = DecreaseDateByOneCentury(*this);
	}
	// Method to decrease date one millinium
	static clsDate DecreaseDateByOneMillennium(clsDate date)
	{
		// Period of 1000 years
		date.Year -= 1000;
		if (date.Month == 2 && date.Day == 29 && !IsLeapYear(date.Year))
		{
			date.Day = 28;
		}
		return date;
	}
	// Method to decrease date one millinium
	void DecreaseDateByOneMillennium()
	{
		*this = DecreaseDateByOneMillennium(*this);
	}
	// Method to get the day of the week order from a date structure
	static int DayOfWeekOrder(clsDate date)
	{
		return DayOfWeekOrder(date.Day, date.Month, date.Year);
	}
	// Method to check if the day is the end of the week (Saturday)
	static int IsEndOfWeek(clsDate date)
	{
		return  DayOfWeekOrder(date) == 6;
	}
	// Overloaded Method to check if the day is the end of the week (Saturday)
	int IsEndOfWeek()
	{
		return IsEndOfWeek(*this);
	}
	// Method to check if the day is a weekend day (Friday or Saturday)
	static bool IsWeekEnd(clsDate date)
	{
		//Weekends are Fri and Sat
		int dayIndex = DayOfWeekOrder(date);
		return  (dayIndex == 5 || dayIndex == 6);
	}
	// Overloaded Method to check if the day is a weekend day (Friday or Saturday)
	bool IsWeekEnd()
	{
		return IsWeekEnd(*this);
	}
	// Method to check if the day is a business day (Sun-Thu)
	static bool IsBusinessDay(clsDate date)
	{
		return !IsWeekEnd(date);
	}
	// Overloaded Method to check if the day is a business day (Sun-Thu)
	bool IsBusinessDay()
	{
		return IsBusinessDay(*this);
	}
	// Method to calculate the number of days until the end of the week (Saturday)
	static int DaysUntilTheEndOfWeek(clsDate date)
	{
		return 6 - DayOfWeekOrder(date);
	}
	// Overloaded Method to calculate the number of days until the end of the week
	int DaysUntilTheEndOfWeek()
	{
		return DaysUntilTheEndOfWeek(*this);
	}
	// Method to calculate the number of days until the end of the month
	static int DaysUntilTheEndOfMonth(clsDate date)
	{
		clsDate endOfMontDate;
		endOfMontDate.Day = NumberOfDaysInAMonth(date.Month, date.Year);
		endOfMontDate.Month = date.Month;
		endOfMontDate.Year = date.Year;
		return GetDifferenceInDays(date, endOfMontDate, true);
	}
	// Overloaded Method to calculate the number of days until the end of the month
	int DaysUntilTheEndOfMonth()
	{
		return DaysUntilTheEndOfMonth(*this);
	}
	// Method to calculate the number of days until the end of the year
	static int DaysUntilTheEndOfYear(clsDate date)
	{
		clsDate endOfYearDate;
		endOfYearDate.Day = 31;
		endOfYearDate.Month = 12;
		endOfYearDate.Year = date.Year;
		return GetDifferenceInDays(date, endOfYearDate, true);
	}
	// Overloaded Method to calculate the number of days until the end of the year
	int DaysUntilTheEndOfYear()
	{
		return DaysUntilTheEndOfYear(*this);
	}
	// Method to add one day to a given date
	static int CalculateBusinessDays(clsDate dateFrom, clsDate dateTo)
	{
		int days = 0;
		while (IsDate1BeforeDate2(dateFrom, dateTo))
		{
			if (IsBusinessDay(dateFrom))
			{
				days++;
			}
			dateFrom = IncreaseDateByOneDay(dateFrom);
		}
		return days;
	}
	// Method To calculate vacation days
	static int CalculateVacationDays(clsDate dateFrom, clsDate dateTo)
	{
		int daysCount = 0;
		while (IsDate1BeforeDate2(dateFrom, dateTo))
		{
			if (IsBusinessDay(dateFrom))
			{
				daysCount++;
			}
			dateFrom = IncreaseDateByOneDay(dateFrom);
		}
		return daysCount;
	}
	// Method to calculate vacation return date
	static clsDate CalculateVacationReturnDate(clsDate dateFrom, int vacationDays)
	{
		int weekEndCounter = 0;
		while (IsWeekEnd(dateFrom))
		{
			dateFrom = IncreaseDateByOneDay(dateFrom);
		}
		for (int i = 1; i <= vacationDays + weekEndCounter; i++)
		{
			if (IsWeekEnd(dateFrom))
			{
				weekEndCounter++;
			}
			dateFrom = IncreaseDateByOneDay(dateFrom);
		}
		while (IsWeekEnd(dateFrom))
		{
			dateFrom = IncreaseDateByOneDay(dateFrom);
		}
		return dateFrom;
	}
	// Function to compare two dates
	static bool IsDate1BeforeDate2(clsDate date1, clsDate date2)
	{
		return (date1.Year < date2.Year) ? true :
			((date1.Year == date2.Year) ? (date1.Month < date2.Month ? true :
				(date1.Month == date2.Month ? date1.Day < date2.Day : false)) : false);
	}
	// Overloaded Function to compare two dates
	bool IsDate1BeforeDate2(clsDate otherDate)
	{
		return IsDate1BeforeDate2(*this, otherDate);
	}
	// Function to compare two dates
	static bool IsDate1AfterDate2(clsDate date1, clsDate date2)
	{
		return (!IsDate1BeforeDate2(date1, date2) && !IsDate1EqualDate2(date1, date2));
	}
	// Overloaded Function to compare two dates
	bool IsDate1AfterDate2(clsDate otherDate)
	{
		return IsDate1AfterDate2(*this, otherDate);
	}
	// Enum and Method to compare two dates
	enum enDateCompare
	{
		Before = -1,
		Equal = 0,
		After = 1
	};
	// Function to compare two dates
	static enDateCompare DateCompare(clsDate date1, clsDate date2)
	{
		if (IsDate1BeforeDate2(date1, date2))
		{
			return enDateCompare::Before;
		}
		else if (IsDate1EqualDate2(date1, date2))
		{
			return enDateCompare::Equal;
		}
		else
		{
			return enDateCompare::After;
		}
	}
	// Overloaded Function to compare two dates
	enDateCompare DateCompare(clsDate otherDate)
	{
		return DateCompare(*this, otherDate);
	}
};