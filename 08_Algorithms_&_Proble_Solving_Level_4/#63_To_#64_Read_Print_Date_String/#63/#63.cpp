/*
	Write a program to:
		• Read Date String.
		• Convert it to date structure
		• Print Day, Mont, Year separately.
		• Then convert Date Structure to string and print it on the screen.
	Note : write the following functions :
		• String ToDate.
		• Date ToString.
*/
/*
	Please Enter Date dd/mm/yyyy? 31/3/2022
	Day: 31
	Month: 3
	Year: 2022
	You Entered: 31/3/2022
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Struct to represent a date with year, month, and day components
struct sDate
{
	short Year;
	short Month;
	short Day;
};

// Function to split a string into words based on a delimiter
vector<string> SplitString(string str, string delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord; // define a string variable
	// use find() function to get the position of the delimiters
	while ((pos = str.find(delim)) != std::string::npos)
	{
		sWord = str.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		str.erase(0, pos + delim.length());  /* erase() until positon and move to next word. */
	}
	if (str != "")
	{
		vString.push_back(str); // it adds last word of the string.
	}
	return vString;
}

// Function to change date into string
string DateToString(sDate date)
{
	return to_string(date.Day) + "/" + to_string(date.Month) + "/" + to_string(date.Year);
}

// Function to change string into date
sDate StringToDate(string dateString)
{
	sDate date;
	vector <string> vDate;
	vDate = SplitString(dateString, "/");
	date.Day = stoi(vDate[0]);
	date.Month = stoi(vDate[1]);
	date.Year = stoi(vDate[2]);
	return date;
}

// Function to read user input
string ReadStringDate(string message)
{
	string dateString;
	cout << message;
	getline(cin >> ws, dateString);
	return dateString;
}

// Main function
int main()
{
	string dateString = ReadStringDate("Please Enter Date dd/mm/yyyy? ");
	sDate date = StringToDate(dateString);
	cout << "Day:" << date.Day << endl;
	cout << "Month:" << date.Month << endl;
	cout << "Year:" << date.Year << endl;
	cout << "You Entered: " << DateToString(date) << "\n";

	return 0;
}