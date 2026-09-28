// Write a program to read bank client data record and convert it to one line :
// Please Enter Client Data :
// Enter Account Number? A150
// Enter PinCode? 1234
// Enter Name? Mohammed Abu - Hadhoud
// Enter Phone? 079939999
// Enter AccountBalance? 5000
// Client Record for Saving is :
// A150#//#1234#//#Mohammed Abu-Hadhoud#//#079939999#//#5000.000000

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Define the structure to hold client data
struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

// Function to read client data from user input
sClient ReadClientData()
{
	sClient client;
	cout << "Enter Account Number? ";
	getline(cin, client.AccountNumber);

	cout << "Enter PinCode? ";
	getline(cin, client.PinCode);

	cout << "Enter Name? ";
	getline(cin, client.Name);

	cout << "Enter Phone? ";
	getline(cin, client.Phone);

	cout << "Enter AccountBalance? ";
	cin >> client.AccountBalance;

	cin.ignore(); // To ignore the newline character after reading AccountBalance
	return client;
}

// Function to convert client data to a single line string
string ConvertClientDataToLine(const sClient& client, string separator = "#//#")
{
	return client.AccountNumber + separator +
		   client.PinCode + separator +
		   client.Name + separator +
		   client.Phone + separator +
		   to_string(client.AccountBalance);
}

// Main function
int main()
{
	cout << "Please Enter Client Data :" << endl;
	sClient client = ReadClientData();

	cout << "\nClient Record for Saving is :\n" << ConvertClientDataToLine(client) << endl;
	
	return 0;
}