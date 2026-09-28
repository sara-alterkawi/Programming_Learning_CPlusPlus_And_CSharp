// Write a program to convert line data to record and print it:
// Line Record is:
// A150#//#1234#//#Mohammed Abu-Hadhoud#//#679999#//#5270.000080
// The following is the extracted client record:
// Accout Number	: A150
// Pin Code			: 1234
// Name				: Mohammed Abu - Hadhoud
// Phone			: 079999
// Account Balance	: 5270

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

// Function to convert client data to a single line string
sClient ConvertLineToRecord(string line, string separator = "#//#")
{
	sClient client;
	vector<string> vClientData = SplitString(line, separator);
	client.AccountNumber = vClientData[0];
	client.PinCode = vClientData[1];
	client.Name = vClientData[2];
	client.Phone = vClientData[3];
	client.AccountBalance = stod(vClientData[4]);
	return client;
}

// Function to print client data
void PrintClientRecord(sClient client)
{
	cout << "\nThe following is the extracted client record:\n";
	cout << "Account Number\t: " << client.AccountNumber << endl;
	cout << "Pin Code\t: " << client.PinCode << endl;
	cout << "Name\t\t: " << client.Name << endl;
	cout << "Phone\t\t: " << client.Phone << endl;
	cout << "Account Balance\t: " << client.AccountBalance << endl;
}

// Main function
int main()
{
	string line = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#679999#//#5270.000080";
	cout << "Line Record is:\n" << line << endl;

	sClient client = ConvertLineToRecord(line);
	PrintClientRecord(client);
	return 0;
}