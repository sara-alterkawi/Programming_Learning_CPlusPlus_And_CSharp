// Write a program to ask the user to enter Day then print the name of the day
// 1 for Sunday,
// 2 for Monday,
// 3 for Tuesday,
// 4 for Wednesday,
// 5 for Thursday,
// 6 for Friday,
// 7 for Saturday
// otherwise print Invalid Day

#include <iostream>
#include <string>
using namespace std;

// Define an enumeration for the days of the week
enum enWeekDay
{
	Sunday = 1, 
	Monday,     
	Tuesday,    
	Wednesday,  
	Thursday,   
	Friday,     
	Saturday
};

// Function to show the week days menu
void ShowWeekDayMenu()
{
	cout << "***************************" << endl;
	cout << "Week Days" << endl;
	cout << "***************************" << endl;
	cout << "1. Sunday" << endl;
	cout << "2. Monday" << endl;
	cout << "3. Tuesday" << endl;
	cout << "4. Wednesday" << endl;
	cout << "5. Thursday" << endl;
	cout << "6. Friday" << endl;
	cout << "7. Saturday" << endl;
	cout << "***************************" << endl;
	cout << "Please enter day number: ";
}

// Function to read the day number from the user
enWeekDay ReadWeekDay()
{
	int Day;
	cin >> Day;
	return enWeekDay(Day);
}

// Function to print the name of the day based on the number
string GetWeekDayName(enWeekDay WeekDay)
{
	switch (WeekDay)
	{
	case enWeekDay::Sunday:
		return "Sunday";
		break;
	case enWeekDay::Monday:
		return "Monday";
		break;
	case enWeekDay::Tuesday:
		return "Tuesday";
		break;
	case enWeekDay::Wednesday:
		return "Wednesday";
		break;
	case enWeekDay::Thursday:
		return "Thursday";
		break;
	case enWeekDay::Friday:
		return "Friday";
		break;
	case enWeekDay::Saturday:
		return "Saturday";
		break;
	default:
		return "Not a Week Day";
		break;
	}
}

// Main function
int main()
{
	ShowWeekDayMenu();
	cout << "Today is " << GetWeekDayName(ReadWeekDay()) << endl;
	return 0;
}