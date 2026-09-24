// Write a program to read a NumberOfHours and calculate the number of weeks and days included in that number.
// Ex.Input 365, output 2.17 Weeks 15.20 Days

#include <iostream>
#include <string>
using namespace std;

// Function to read input from user
double ReadPositiveNumb()
{
    double NumberOfHours = 0;
    do
    {
        cout << "Please enter Number of Hours: ";
        cin >> NumberOfHours;
    } while (NumberOfHours <= 0);
    return NumberOfHours;
}

// Function to convert Hours to Days
double HoursToDays(double NumberOfHours)
{
    return NumberOfHours / 24;
}

// Function to convert Hours to Weeks
double HoursToWeeks(double NumberOfHours)
{
    return NumberOfHours / (24 * 7);
}

// Function to convert Days to Weeks
double DaysToWeeks(double NumberOfDays)
{
    return NumberOfDays / 7;
}

// Function to print the number of weeks and days
void Printresult(double NumberOfHours)
{
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << HoursToDays(NumberOfHours) << endl;
    cout << "Total Weeks = " << DaysToWeeks(HoursToDays(NumberOfHours)) << endl;
}

int  main()
{
    Printresult(ReadPositiveNumb());
    return 0;
}
