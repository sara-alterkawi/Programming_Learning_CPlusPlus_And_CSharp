// Write a program to ask you to enter clients and save them to file:
// Adding New Client:
// Enter Account Number? A150
// Enter PinCode? 1234
// Enter Name? Mohammed Abu - Hadhoud
// Enter Phone? 09389838
// Enter AccountBalance? 9000
// Client Added Successfully, do you want to add more clients?

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
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

// Function to add a new client
sClient ReadNewClient()
{
	sClient client;
	cout << "Enter Account Number? ";
	getline(cin >> ws, client.AccountNumber);

	cout << "Enter PinCode? ";
	getline(cin, client.PinCode);

	cout << "Enter Name? ";
	getline(cin, client.Name);

	cout << "Enter Phone? ";
	getline(cin, client.Phone);

	cout << "Enter AccountBalance? ";
	cin >> client.AccountBalance;

	return client;
}

// Function to convert record to line
string ConvertClientDataToLine(const sClient& client, string separator = "#//#")
{
	return client.AccountNumber + separator +
		client.PinCode + separator +
		client.Name + separator +
		client.Phone + separator +
		to_string(client.AccountBalance);
}

// Function to add data line to file
void AddDataLineToFile(string FileName, string stDataLine)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);
	if (MyFile.is_open())
	{
		MyFile << stDataLine << endl;
		MyFile.close();
	}
}

// Function to add new client
void AddNewClient()
{
	sClient client = ::ReadNewClient();
	AddDataLineToFile(ClientsFileName, ConvertClientDataToLine(client));
	cout << "Client Added Successfully, do you want to add more clients? (Y/N): ";
	char answer;
	cin >> answer;
	do {
		system("cls");
		cout << "Adding New Client:" << endl;
		AddNewClient();
		cout << "Client Added Successfully, do you want to add more clients? (Y/N): ";
		cin >> answer;
	} while (toupper(answer) == 'Y');
}

// Main function
int main()
{
	AddNewClient();

	return 0;
}