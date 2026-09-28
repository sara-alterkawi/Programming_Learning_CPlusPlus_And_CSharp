// Write a program to read clients file and show them on the screen as follows :
//                                 Client List (3) Client(s).
// ----------------------------------------------------------------------------------------
// | Accout Number	| Pin Code	| Client Name			| Phone		| Balance
// ----------------------------------------------------------------------------------------
// | A150			| 1234		| Mohammed Qasem		| 093938838	| 9000
// | A151			| 1234		| Ali Maher				| 093349939	| 15000
// | A152			| 1234		| Fadi Jamil			| 097383838	| 1000
// ----------------------------------------------------------------------------------------

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
	cout << "| " << setw(15) << left << client.AccountNumber;
	cout << "| " << setw(10) << left << client.PinCode;
	cout << "| " << setw(40) << left << client.Name;
	cout << "| " << setw(12) << left << client.Phone;
	cout << "| " << setw(12) << left << client.AccountBalance;
}

// Function to print all clients
void PrintAllClients(vector <sClient> vClients)
{
	cout << "\n\t\t\t\tClient List (" << vClients.size() << ") Client(s).\n";
	cout << "----------------------------------------------------------------------------------------" << endl;
	cout << "| " << setw(15) << left << "Accout Number";
	cout << "| " << setw(10) << left << "Pin Code";
	cout << "| " << setw(40) << left << "Client Name";
	cout << "| " << setw(12) << left << "Phone";
	cout << "| " << setw(12) << left << "Balance" << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;
	
	for (sClient client : vClients)
	{
		PrintClientRecord(client);
		cout << endl;
	}
	cout << "----------------------------------------------------------------------------------------" << endl;
}

// Main function
int main()
{
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	PrintAllClients(vClients);

	return 0;
}