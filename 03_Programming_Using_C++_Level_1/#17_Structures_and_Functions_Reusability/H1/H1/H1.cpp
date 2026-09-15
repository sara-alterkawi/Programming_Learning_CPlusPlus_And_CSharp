// Structure reusability: High
#include <iostream>
#include <string>

using namespace std;

// Define a structure to hold personal information
struct strInfo
{
	string Name;
	int Age;
	string City;
	string Country;
	int MonthlyIncome;
	int YearlyIncome;
	string Gender;
	bool  Marrid;
};

// Function to read personal information from user input
void ReadInfo(strInfo& Info)
{
	cout << "Please enter your Name: \n";
	getline(cin, Info.Name);
	cout << "Please enter your Age: \n";
	cin >> Info.Age;
	cin.ignore();
	cout << "Please enter your City: \n";
	getline(cin, Info.City);
	cout << "Please enter your Country: \n";
	getline(cin, Info.Country);
	cout << "Please enter your Monthly Income: \n";
	cin >> Info.MonthlyIncome;
	Info.YearlyIncome = Info.MonthlyIncome * 12;
	cout << "Please enter your gender (M for male / F for female): \n";
	cin >> Info.Gender;
	cout << "Are you marrid ? (1 for yes / 0 for no) : \n";
	cin >> Info.Marrid;
}
	

// Function to print personal information to the console
void PrintInfo(const strInfo &Info)
{
	cout << "************************************\n";
	cout << "Name: " << Info.Name << "\n";
	cout << "Age: " << Info.Age << "\n";
	cout << "City: " << Info.City << "\n";
	cout << "Country: " << Info.Country << "\n";
	cout << "Monthly Income: " << Info.MonthlyIncome << "\n";
	cout << "Yearly Income: " << Info.YearlyIncome << "\n";
	cout << "Gender: " << (Info.Gender) << "\n";
	cout << "Marrid: " << (Info.Marrid ? "Yes" : "No") << "\n";
	cout << "************************************\n";
}

// Main function to demonstrate reading and printing personal information
int main()
{
	strInfo Person1Info;
	ReadInfo(Person1Info);
	PrintInfo(Person1Info);

    return 0;
}
