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

// Function to print the name of the day based on the number
void PrintDayName(int Day)
{
	if (Day == 1)
		cout << "Sunday" << endl;
	else if (Day == 2)
		cout << "Monday" << endl;
	else if (Day == 3)
		cout << "Tuesday" << endl;
	else if (Day == 4)
		cout << "Wednesday" << endl;
	else if (Day == 5)
		cout << "Thursday" << endl;
	else if (Day == 6)
		cout << "Friday" << endl;
	else if (Day == 7)
		cout << "Saturday" << endl;
	else
		cout << "Invalid Day" << endl;
}

// Function to read the day number from the user
void ReadDayNumber(int& Day)
{
	cout << "Please enter day number: ";
	cin >> Day;
}

// Main function
int main()
{
	int Day = 0;
	ReadDayNumber(Day);
	PrintDayName(Day);
	return 0;
}