// Write a program to Update client by AccountNumber :
// Example 1 :
// Please enter AccountNumber ? A150
// The following are the client details :
// Accout Number: A150
// Pin Code			: 1234
// Name				: Mohammed Abu - Hadhoud
// Phone			: 093938838
// Account Balance	: 9000
// Are you sure you want update this client ? y / n ? Y
// Enter PinCode ? 4444
// Enter Name ? Omar Hamed
// Enter Phone ? 8177172
// Enter AccountBalance ? 4000
// Client Updated Successfully.
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
	bool MarkForDelete = false;
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

// Function to convert client data to a single line string
string ConvertClientDataToLine(const sClient& client, string separator = "#//#")
{
	return client.AccountNumber + separator +
		client.PinCode + separator +
		client.Name + separator +
		client.Phone + separator +
		to_string(client.AccountBalance);
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
bool FindClientByAccountNumber(string accountNumber, vector<sClient> vClients, sClient& client)
{
	for (sClient c : vClients)
	{
		if (c.AccountNumber == accountNumber)
		{
			client = c;
			return true;
		}
	}
	return false;
}

// Function to change client record
sClient ChangeClientRecord(string accountNumber)
{
	sClient client;
	client.AccountNumber = accountNumber;
	cout << "\n\nEnter PinCode? ";
	getline(cin >> ws, client.PinCode);
	
	cout << "Enter Name? ";
	getline(cin, client.Name);
	
	cout << "Enter Phone? ";
	getline(cin, client.Phone);
	
	cout << "Enter AccountBalance? ";
	cin >> client.AccountBalance;
	
	return client;
}

// Function to save clients to file
vector <sClient> SaveCleintsDataToFile(string fileName, vector <sClient> vClients)
{
	fstream myFile;
	myFile.open(fileName, ios::out);
	string dataLine;

	if (myFile.is_open())
	{
		for (sClient C : vClients)
		{
			if (C.MarkForDelete == false)
			{
				//we only write records that are not marked for delete.
				dataLine = ConvertClientDataToLine(C);
				myFile << dataLine << endl;
			}
		}

		myFile.close();
	}
	return vClients;
}

// Function to delete client by AccountNumber
bool UpdateClientByAccountNumber(string accountNumber, vector<sClient>& vClients)
{
	sClient client;
	char answer = 'n';
	if (FindClientByAccountNumber(accountNumber, vClients, client))
	{
		PrintClientRecord(client);
		cout << "\n\nAre you sure you want update  this client? y/n ? ";
		cin >> answer;
		if (answer == 'y' || answer == 'Y')
		{
			for (sClient& C : vClients)
			{
				if (C.AccountNumber == accountNumber)
				{
					C = ChangeClientRecord(accountNumber);
					break;
				}
			}
			SaveCleintsDataToFile(ClientsFileName, vClients);
			cout << "\n\nClient Updated Successfully.\n";
			return true;
		}
	}
	else
	{
		cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!\n";
		return false;
	}
}

// function to read AccountNumber from user and print client details
string ReadAccountNumberFromUser()
{
	string accountNumber;
	cout << "Please enter AccountNumber? ";
	cin >> accountNumber;
	return accountNumber;
}

// Main function
int main()
{
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	string accountNumber = ReadAccountNumberFromUser();
	UpdateClientByAccountNumber(accountNumber, vClients);

	return 0;
}