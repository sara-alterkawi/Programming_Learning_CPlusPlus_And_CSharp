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
	short _Day = 1;
	short _Month = 1;
	short _Year = 1900;
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
	clsDate(short day, short month, short year)
	{
		_Day = day;
		_Month = month;
		_Year = year;
	}
	// Parameterized Constructor to accept day order in year and year
	clsDate(short dateOrderInYear, short year)
	{
		// This will construct a date by date order in year
		clsDate date1 =
			GetDateFromDayOrderInYear(dateOrderInYear, year);
		_Day = date1.Day;
		_Month = date1.Month;
		_Year = date1.Year;
	}
	// Setter for day
	void SetDay(short day) {
		_Day = day;
	}
	// Getter for day
	short GetDay() {
		return _Day;
	}
	// Property to access Day
	__declspec(property(get = GetDay, put = SetDay)) short Day;
	// Setter for month
	void SetMonth(short month) {
		_Month = month;
	}
	// Getter for month
	short GetMonth() {
		return _Month;
	}
	// Property to access Day
	__declspec(property(get = GetMonth, put = SetMonth)) short Month;
	// Setter for year
	void SetYear(short year) {
		_Year = year;
	}
	// Getter for year
	short GetYear() {
		return _Year;
	}
	// Property to access Year
	__declspec(property(get = GetYear, put = SetYear)) short Year;
	// Method to get system date
	static clsDate GetSystemDate()
	{
		time_t t = time(0);
		tm* now = localtime(&t);
		short day, month, year;
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
		short day, month, year, hour, minute, second;
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
		short daysInMonth = NumberOfDaysInAMonth(date.Month, date.Year);
		if (date.Day > daysInMonth)
			return false;
		return true;
	}
	// Overloaded Method to check if the date is valid
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
	static bool IsLeapYear(short year)
	{
		return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	}
	// Overloaded Method to check if a year is a leap year
	bool IsLeapYear()
	{
		return IsLeapYear(_Year);
	}
	// Method to get number of days in a year
	static short NumberOfDaysInAYear(short year)
	{
		return IsLeapYear(year) ? 366 : 365;
	}
	// Overloaded Method to
	short NumberOfDaysInAYear()
	{
		return NumberOfDaysInAYear(_Year);
	}
	// Method to get number of hours in a year
	static short NumberOfHoursInAYear(short year)
	{
		return NumberOfDaysInAYear(year) * 24;
	}
	// Overloaded Method to get number of hours in a year
	short NumberOfHoursInAYear()
	{
		return NumberOfHoursInAYear(_Year);
	}
	// Method to get number of minutes in a year
	static short NumberOfMinutesInAYear(short year)
	{
		return NumberOfHoursInAYear(year) * 60;
	}
	// Overloaded Method to get number of minutes in a year
	short NumberOfMinutesInAYear()
	{
		return NumberOfMinutesInAYear(_Year);
	}
	// Method to get number of seconds in a year
	static short NumberOfSecondsInAYear(short year)
	{
		return NumberOfMinutesInAYear(year) * 60;
	}
	// Overloaded Method to get number of seconds in a year
	short NumberOfSecondsInAYear()
	{
		return NumberOfSecondsInAYear(_Year);
	}
	// Method to get number of days in a month
	static short NumberOfDaysInAMonth(short month, short year) {
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
	short NumberOfDaysInAMonth()
	{
		return NumberOfDaysInAMonth(_Month, _Year);
	}
	// Method to get number of hours in a month
	static short NumberOfHoursInAMonth(short month, short year)
	{
		return NumberOfDaysInAMonth(month, year) * 24;
	}
	// Overloaded Method to get number of hours in a month
	short NumberOfHoursInAMonth()
	{
		return NumberOfHoursInAMonth(_Month, _Year);
	}
	// Method to get number of minutes in a month
	static short NumberOfMinutesInAMonth(short month, short year)
	{
		return NumberOfHoursInAMonth(month, year) * 60;
	}
	// Overloaded Method to get number of minutes in a month
	short NumberOfMinutesInAMonth()
	{
		return NumberOfMinutesInAMonth(_Month, _Year);
	}
	// Method to get number of seconds in a month
	static short NumberOfSecondsInAMonth(short month, short year)
	{
		return NumberOfMinutesInAMonth(month, year) * 60;
	}
	// Overloaded Method to get number of seconds in a month
	short NumberOfSecondsInAMonth()
	{
		return NumberOfSecondsInAMonth(_Month, _Year);
	}
	// Method to calculate day of the week
	static short DayOfWeekOrder(short day, short month, short year)
	{
		short a, y, m;
		a = (14 - month) / 12;
		y = year - a;
		m = month + (12 * a) - 2; // Gregorian://0:sun, 1:Mon, 2:Tue...etc
		return (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
	}
	// Overloaded Method to calculate day of the week
	short DayOfWeekOrder()
	{
		return DayOfWeekOrder(_Day, _Month, _Year);
	}
	// Method to get day name
	static string DayintName(short dayOrder)
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
	static string MonthintName(short monthNumber)
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
	static void PrintMonthCalendar(short month, short year)
	{
		short numberOfDays;
		short current = DayOfWeekOrder(1, month, year);
		numberOfDays = NumberOfDaysInAMonth(month, year);
		cout << "\n  _______________" << MonthintName(month) << "_______________\n\n";
		cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";
		short i;
		for (i = 0; i < current; i++)
		{
			cout << "     ";
		}
		for (short j = 1; j <= numberOfDays; j++)
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
	static void PrintYearCalendar(short year)
	{
		cout << "-------------------------------------------\n";
		cout << "           Calendar - " << year << "\n";
		cout << "-------------------------------------------\n";
		for (short i = 1; i <= 12; i++)
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
	static short NumberOfDaysFromTheBeginingOfTheYear(short day, short month, short year)
	{
		short totalDays = 0;
		for (short i = 1; i <= month - 1; i++)
		{
			totalDays += NumberOfDaysInAMonth(i, year);
		}
		totalDays += day;
		return totalDays;
	}
	// Overloaded Method to calculate total days from the beginning of the year
	short NumberOfDaysFromTheBeginingOfTheYear()
	{
		return NumberOfDaysFromTheBeginingOfTheYear(_Day, _Month, _Year);
	}
	// Method to get date from day order in year
	static clsDate GetDateFromDayOrderInYear(short dateOrderInYear, short year)
	{
		clsDate Date;
		short RemainingDays = dateOrderInYear;
		short MonthDays = 0;
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
	void AddDays(short days)
	{
		short remainingDays = days + NumberOfDaysFromTheBeginingOfTheYear(_Day, _Month, _Year);
		short monthDays = 0;
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
	static bool IsLastMonthInYear(short month)
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
	clsDate IncreaseDateByXDays(short days, clsDate date)
	{
		for (short i = 1; i <= days; i++)
		{
			date = IncreaseDateByOneDay(date);
		}
		return date;
	}
	// Method to increase date by X days
	void IncreaseDateByXDays(short days)
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
	static short GetDifferenceInDays(clsDate date1, clsDate date2, bool includeEndDay = false)
	{
		short days = 0;
		while (IsDate1BeforeDate2(date1, date2))
		{
			days++;
			date1 = IncreaseDateByOneDay(date1);
		}
		return includeEndDay ? ++days : days;
	}
	// Overloaded Method to get the diffenrance between two dates
	short GetDifferenceInDays(clsDate otherDate, bool includeEndDay = false)
	{
		return GetDifferenceInDays(*this, otherDate, includeEndDay);
	}
	// Method to calculate age in days
	static short CalculateMyAgeInDays(clsDate birthDate)
	{
		clsDate CurrentDate = GetSystemDate();
		return GetDifferenceInDays(birthDate, CurrentDate);
	}
	// Method to add one week to the current date
	static clsDate IncreaseDateByOneWeek(clsDate date)
	{
		for (short i = 0; i < 7; i++)
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
	clsDate IncreaseDateByXWeeks(short weeks, clsDate& date)
	{
		for (short i = 1; i <= weeks; i++)
		{
			date = IncreaseDateByOneWeek(date);
		}
		return date;
	}
	// Method to increase date X weeks
	void IncreaseDateByXWeeks(short weeks)
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
		short numberOfDaysInCurrentMonth = NumberOfDaysInAMonth(date.Month, date.Year);
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
	clsDate IncreaseDateByXMonths(short months, clsDate date)
	{
		for (short i = 1; i <= months; i++)
		{
			date = IncreaseDateByOneMonth(date);
		}
		return date;
	}
	// Method to increase date by X months
	void IncreaseDateByXMonths(short months)
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
	clsDate IncreaseDateByXYears(short years, clsDate date)
	{
		for (short i = 1; i <= years; i++)
		{
			date = IncreaseDateByOneYear(date);
		}
		return date;
	}
	// Method to increase date X years
	void IncreaseDateByXYears(short years)
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
	clsDate IncreaseDateByXDecades(short decade, clsDate date)
	{
		for (short i = 1; i <= decade * 10; i++)
		{
			date = IncreaseDateByOneYear(date);
		}
		return date;
	}
	// Method to increase date X decades
	void IncreaseDateByXDecades(short decade)
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
	static clsDate DecreaseDateByXDays(short days, clsDate date)
	{
		for (short i = 1; i <= days; i++)
		{
			date = DecreaseDateByOneDay(date);
		}
		return date;
	}
	// Method to decrease date by X days
	void DecreaseDateByXDays(short days)
	{
		*this = DecreaseDateByXDays(days, *this);
	}
	// Method to decrease date by one week
	static clsDate DecreaseDateByOneWeek(clsDate date)
	{
		for (short i = 1; i <= 7; i++)
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
	static clsDate DecreaseDateByXWeeks(short weeks, clsDate date)
	{
		for (short i = 1; i <= weeks; i++)
		{
			date = DecreaseDateByOneWeek(date);
		}
		return date;
	}
	// Method to decrease date by X weeks
	void DecreaseDateByXWeeks(short weeks)
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
		short numberOfDaysInCurrentMonth = NumberOfDaysInAMonth(date.Month, date.Year);
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
	static clsDate DecreaseDateByXMonths(short months, clsDate date)
	{
		for (short i = 1; i <= months; i++)
		{
			date = DecreaseDateByOneMonth(date);
		}
		return date;
	}
	// Method to decrease date by X months
	void DecreaseDateByXMonths(short months)
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
	static clsDate DecreaseDateByXYears(short years, clsDate date)
	{
		for (short i = 1; i <= years; i++)
		{
			date = DecreaseDateByOneYear(date);
		}
		return date;
	}
	// Method to decrease date X years
	void DecreaseDateByXYears(short years)
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
	static clsDate DecreaseDateByXDecades(short decade, clsDate date)
	{
		for (short i = 1; i <= decade * 10; i++)
		{
			date = DecreaseDateByOneYear(date);
		}
		return date;
	}
	// Method to decrease date X decades
	void DecreaseDateByXDecades(short decade)
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
	static short DayOfWeekOrder(clsDate date)
	{
		return DayOfWeekOrder(date.Day, date.Month, date.Year);
	}
	// Method to check if the day is the end of the week (Saturday)
	static short IsEndOfWeek(clsDate date)
	{
		return  DayOfWeekOrder(date) == 6;
	}
	// Overloaded Method to check if the day is the end of the week (Saturday)
	short IsEndOfWeek()
	{
		return IsEndOfWeek(*this);
	}
	// Method to check if the day is a weekend day (Friday or Saturday)
	static bool IsWeekEnd(clsDate date)
	{
		//Weekends are Fri and Sat
		short dayIndex = DayOfWeekOrder(date);
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
	static short DaysUntilTheEndOfWeek(clsDate date)
	{
		return 6 - DayOfWeekOrder(date);
	}
	// Overloaded Method to calculate the number of days until the end of the week
	short DaysUntilTheEndOfWeek()
	{
		return DaysUntilTheEndOfWeek(*this);
	}
	// Method to calculate the number of days until the end of the month
	static short DaysUntilTheEndOfMonth(clsDate date)
	{
		clsDate endOfMontDate;
		endOfMontDate.Day = NumberOfDaysInAMonth(date.Month, date.Year);
		endOfMontDate.Month = date.Month;
		endOfMontDate.Year = date.Year;
		return GetDifferenceInDays(date, endOfMontDate, true);
	}
	// Overloaded Method to calculate the number of days until the end of the month
	short DaysUntilTheEndOfMonth()
	{
		return DaysUntilTheEndOfMonth(*this);
	}
	// Method to calculate the number of days until the end of the year
	static short DaysUntilTheEndOfYear(clsDate date)
	{
		clsDate endOfYearDate;
		endOfYearDate.Day = 31;
		endOfYearDate.Month = 12;
		endOfYearDate.Year = date.Year;
		return GetDifferenceInDays(date, endOfYearDate, true);
	}
	// Overloaded Method to calculate the number of days until the end of the year
	short DaysUntilTheEndOfYear()
	{
		return DaysUntilTheEndOfYear(*this);
	}
	// Method to add one day to a given date
	static short CalculateBusinessDays(clsDate dateFrom, clsDate dateTo)
	{
		short days = 0;
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
	static short CalculateVacationDays(clsDate dateFrom, clsDate dateTo)
	{
		short daysCount = 0;
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
	static clsDate CalculateVacationReturnDate(clsDate dateFrom, short vacationDays)
	{
		short weekEndCounter = 0;
		while (IsWeekEnd(dateFrom))
		{
			dateFrom = IncreaseDateByOneDay(dateFrom);
		}
		for (short i = 1; i <= vacationDays + weekEndCounter; i++)
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