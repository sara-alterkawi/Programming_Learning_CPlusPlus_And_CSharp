// Write a program to find client by AccountNumber and print it to the screen :
// Example 1 :
// Please enter AccountNumber ? A150
// The following are the client details :
// Accout Number: A150
// Pin Code			: 1234
// Name				: Mohammed Abu - Hadhoud
// Phone			: 093938838
// Account Balance	: 9000
// Example 2 :
// Please enter AccountNumber ? B33
// Client with Account Number(B33) Not Found!

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
const string ClientsFileName = "Clients.txt";

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

// Function to load clients from file
vector <sClient> LoadCleintsDataFromFile(string fileName)
{
	vector <sClient> vClients;
	fstream myFile;
	myFile.open(fileName, ios::in);//read Mode
	if (myFile.is_open())
	{
		string line;
		sClient client;
		while (getline(myFile, line))
		{
			client = ConvertLineToRecord(line);
			vClients.push_back(client);
		}
		myFile.close();
	}
	return vClients;
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

// Function to find and print client by AccountNumber
bool FindClientByAccountNumber(string AccountNumber, sClient& client)
{
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	for (sClient c : vClients)
	{
		if (c.AccountNumber == AccountNumber)
		{
			client = c;
			return true;
		}
	}
	return false;
}

// function to read AccountNumber from user and print client details
string ReadAccountNumberFromUser()
{
	string AccountNumber;
	cout << "Please enter AccountNumber ? ";
	cin >> AccountNumber;
	return AccountNumber;
}

// Main function
int main()
{
	sClient client;
	string AccountNumber = ReadAccountNumberFromUser();
	if (FindClientByAccountNumber(AccountNumber, client))
	{
		PrintClientRecord(client);
	}
	else
	{
		cout << "\nClient with Account Number(" << AccountNumber << ") Not Found!\n";
	}

	return 0;
}