// Write a program to read Date and write a function to format that date.
/*
	Please Enter Date dd/mm/УУ? 31/12/2022
	31/12/2022
	2022/31/12
	12/31/2022
	12-31-2022
	31-12-2022
	Day: 31, Month: 12, Year: 2022
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

//
string ReplaceWordInString(string s1, string stringToReplace, string sRepalceTo)
{
	int pos = s1.find(stringToReplace);
	while (pos != std::string::npos)
	{
		s1 = s1.replace(pos, stringToReplace.length(), sRepalceTo);
		pos = s1.find(stringToReplace);
		//find next
	}
	return s1;
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

// Function to 
string FormateDate(sDate date, string dateFormat = "dd/mm/yyyy")
{
	string formattedDateString = "";
	formattedDateString = ReplaceWordInString(dateFormat, "dd", to_string(date.Day));
	formattedDateString = ReplaceWordInString(formattedDateString, "mm", to_string(date.Month));
	formattedDateString = ReplaceWordInString(formattedDateString, "yyyy", to_string(date.Year));
	return formattedDateString;
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
	
	cout << FormateDate(date) << endl;
	cout << FormateDate(date, "yyyy/dd/mm") << endl;
	cout << FormateDate(date, "mm/dd/yyyy") << endl;
	cout << FormateDate(date, "mm-dd-yyyy") << endl;
	cout << FormateDate(date, "dd-mm-yyyy") << endl;
	cout << FormateDate(date, "Day:dd, Month:mm, Year:yyyy") << endl;

	return 0;
}