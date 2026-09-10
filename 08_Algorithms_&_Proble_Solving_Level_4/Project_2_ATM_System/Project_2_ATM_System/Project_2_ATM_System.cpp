// Write a C++ program that displays a menu for a ATM System.
// Login
/*
-----------------------------------
			Login Screen
-----------------------------------
Enter Account Number? A01
Enter PinCode? 1188
Invlaid Account Number/PinCode!
Enter Account Number? A01
Enter PinCode? 1234


If the username is correct:
Enter Account Number? A01
Enter PinCode? 1234


This will log you into the system.
*/
// Main menu
/*
============================================================
					ATM Main Menue Screen
============================================================
			[1] Quick Withdraw.
			[2] Normal Withdraw.
			[3] Deposit
			[4] Check Balance.
			[5] Logout.
============================================================
Choose what you want to do? [1 to 5]?


When the user selects an option, the program should display a message indicating which option was selected, and press any key to return to the main menu.
*/
// • Option [1] Quick Withdraw.
/*
-----------------------------------
		Qucik Withdraw
-----------------------------------
		[1] 20		[2] 50
		[3] 100		[4] 200
		[5] 400		[6] 600
		[7] 800		[8]1000
		[9] Exit
-----------------------------------
Your Balance is 55620
Choose what to withdraw from[1] to [8] ? 8
Are you sure you want perfrom this transaction? y/n ? y
Done Successfully. New balance is: 54620
Press any key to go back to Main Menue...
*/
// • Option [2] Normal Withdraw.
/*
-----------------------------------
		Normal Withdraw Screen
-----------------------------------
Enter an amount multiple of 5's ? 9
Enter an amount multiple of 5's ? 150
Are you sure you want perfrom this transaction? y/n ? y
Done Successfully. New balance is: 54470
Press any key to go back to Main Menue...


If the amount is greater than the current value of the account

Enter an amount multiple of 5's? 60000
The amount exceeds your balance, make another choice.
Press Anykey to continue....
*/
// • Option [3] Deposit
/*
-----------------------------------
		Deposit Screen
-----------------------------------
Enter a positive Deposit Amount? 5000
Are you sure you want perfrom this transaction? y/n ? y
Done Successfully. New balance is: 59470
Press any key to go back to Main Menue...
*/
// • Option [4] Update Client Info.
/*
-----------------------------------
		Check Balance Screen
-----------------------------------
Your Balance is 59470
Press any key to go back to Main Menue...
*/
// • Option [5] Logout.
/*
============================================================
					Login Screen
============================================================
Enter Account Wumber?
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <cctype>
using namespace std;

// --------------------- Enums ---------------------
// Enum for main menu options
enum enMainMenuOptions
{
	eQucikWithdraw = 1,
	eNormalWithDraw = 2,
	eDeposit = 3,
	eCheckBalance = 4,
	eExit = 5
};

// --------------------- Structs ---------------------
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

// --------------------- Globals ---------------------
const string ClientsFileName = "Clients.txt";
sClient CurrentClient;

// --------------------- Prototypes ---------------------
void Login();
void ShowMainMenu();
void ShowQuickWithdrawScreen();
void ShowNormalWithdrawScreen();
void ShowDepositScreen();

// --------------------- Utility Functions ---------------------
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
sClient ConvertClientLineToRecord(string line, string separator = "#//#")
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

// Function to convert Client record to line
string ConvertClientDataToLine(const sClient& client, string separator = "#//#")
{
	return client.AccountNumber + separator +
		client.PinCode + separator +
		client.Name + separator +
		client.Phone + separator +
		to_string(client.AccountBalance);
}

// --------------------- File Read/Write ---------------------
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
			client = ConvertClientLineToRecord(line);
			vClients.push_back(client);
		}
		myFile.close();
	}
	return vClients;
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
				dataLine = ConvertClientDataToLine(C);
				myFile << dataLine << endl;
			}
		}
		myFile.close();
	}
	return vClients;
}

// --------------------- Existence Checks ---------------------
// Function to check if client exists by AccountNumber and pincode
bool FindClientByAccountNumberAndPinCode(string accountNumber, string pinCode, sClient& client)
{
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	for (sClient c : vClients)
	{
		if (c.AccountNumber == accountNumber && c.PinCode == pinCode)
		{
			client = c;
			return true;
		}
	}
	return false;
}

// --------------------- CRUD and operations ---------------------
// Function to read quick withdraw option
int ReadQuickWithdrawOption()
{
	int choice = 0;
	while (choice < 1 || choice>9)
	{
		cout << "\nChoose what to do from [1] to [9] ? ";
		cin >> choice;
	} return choice;
}

// Function to get guick withdraw amount
int GetQuickWithdrawAmount(int quickWithdrawOption)
{
	switch (quickWithdrawOption)
	{
		case 1: 
			return  20;
		case 2: 
			return 50;
		case 3:
			return 100;
		case 4:
			return 200;
		case 5:
			return 400;
		case 6:
			return 600;
		case 7:
			return 800;
		case 8:
			return 1000;
		default:
			return 0;
	}
}

// Function to deposit balance to client by AccountNumber
bool DepositBalanceToClientByAccountNumber(string accountNumber, double amount, vector <sClient>& vClients)
{
	char answer = 'n';
	cout << "\n\nAre you sure you want perfrom this transaction? y/n ? ";
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
	{
		for (sClient& C : vClients)
		{
			if (C.AccountNumber == accountNumber)
			{
				C.AccountBalance += amount;
				SaveCleintsDataToFile(ClientsFileName, vClients);
				cout << "\n\nDone Successfully. New balance is: " << C.AccountBalance;
				return true;
			}
		}
		return false;
	}
}

// Function to perfrom quick withdraw option
void PerfromQuickWithdrawOption(int quickWithdrawOption)
{
	if (quickWithdrawOption == 9)//exit
		return;
	int withDrawBalance = GetQuickWithdrawAmount(quickWithdrawOption);
	if (withDrawBalance > CurrentClient.AccountBalance)
	{
		cout << "\nThe amount exceeds your balance, make another choice.\n";
		cout << "Press Anykey to continue...";
		system("pause>0");
		ShowQuickWithdrawScreen();
		return;
	}
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	DepositBalanceToClientByAccountNumber(CurrentClient.AccountNumber, withDrawBalance * -1, vClients);
	CurrentClient.AccountBalance -= withDrawBalance;
}

// Function to read withdraw amont from client
int ReadWithdrawAmont()
{
	int amount;
	cout << "\nEnter an amount multiple of 5's ? ";
	cin >> amount;
	while (amount % 5 != 0)
	{
		cout << "\nEnter an amount multiple of 5's ? ";
		cin >> amount;
	}
	return amount;
}

// Function to perfrom normal withdraw option
void PerfromNormalWithdrawOption()
{
	int withDrawBalance = ReadWithdrawAmont();
	if (withDrawBalance > CurrentClient.AccountBalance)
	{
		cout << "\nThe amount exceeds your balance, make another choice.\n";
		cout << "Press Anykey to continue...";
		system("pause>0");
		ShowNormalWithdrawScreen();
		return;
	}
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	DepositBalanceToClientByAccountNumber(CurrentClient.AccountNumber, withDrawBalance * -1, vClients);
	CurrentClient.AccountBalance -= withDrawBalance;
}

// Function to read deposit amount from the client
double ReadDepositAmount()
{
	double amount;
	cout << "\nEnter a positive Deposit Amount? ";
	cin >> amount;
	while (amount <= 0)
	{
		cout << "\nEnter a positive Deposit Amount? ";
		cin >> amount;
	}
	return amount;
}

// Function to perfrom deposit options
void PerfromDepositOption()
{
	double depositAmount = ReadDepositAmount();
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	DepositBalanceToClientByAccountNumber(CurrentClient.AccountNumber, depositAmount, vClients);
	CurrentClient.AccountBalance += depositAmount;
}

// --------------------- Screens ---------------------
// Function to show quick withdraw screen
void ShowQuickWithdrawScreen()
{
	system("cls");
	cout << "\n----------------------------------------\n";
	cout << "\t\tQucik Withdraw\n";
	cout << "\n----------------------------------------\n";
	cout << "\t[1] 20\t\t[2] 50\n";
	cout << "\t[3] 100\t\t[4] 200\n";
	cout << "\t[5] 400\t\t[6] 600\n";
	cout << "\t[7] 800\t\t[8] 1000\n";
	cout << "\t[9] Exit\n";
	cout << "\n----------------------------------------\n";
	cout << "Your Balance is " << CurrentClient.AccountBalance;
	PerfromQuickWithdrawOption(ReadQuickWithdrawOption());
}

// Function to show normal withdraw screen
void ShowNormalWithdrawScreen()
{
	system("cls");
	cout << "\n----------------------------------------\n";
	cout << "\t\tNormal Withdraw Screen\n";
	cout << "\n----------------------------------------\n";
	PerfromNormalWithdrawOption();
}

// Function to show deposit screen
void ShowDepositScreen()
{
	system("cls");
	cout << "\n----------------------------------------\n";
	cout << "\t\tDeposit Screen\n";
	cout << "\n----------------------------------------\n";
	PerfromDepositOption();
}

// Function to show check balance screen
void ShowCheckBalanceScreen()
{
	system("cls");
	cout << "\n----------------------------------------\n";
	cout << "\t\tCheck Balance Screen\n";
	cout << "\n----------------------------------------\n";
	cout << "Your Balance is " << CurrentClient.AccountBalance << "\n";
}

// Function to prompt user to press any key to continue
void GoBackToMainMenu()
{
	cout << "\n\nPress any key to go back to Main Menu...";
	system("pause>0");
	system("cls");
	ShowMainMenu();
}

// Function to read main menu option
int ReadMainMenuOption()
{
	cout << "Choose what do you want to do? [1 to 5]? ";
	int choice = 0;
	cin >> choice;
	return choice;
}

// Function to handle user choices
void PerfromMainMenuOption(enMainMenuOptions MainMenueOption)
{
	switch (MainMenueOption)
	{
	case enMainMenuOptions::eQucikWithdraw:
	{
		system("cls");
		ShowQuickWithdrawScreen();
		GoBackToMainMenu();
		break;
	}
	case enMainMenuOptions::eNormalWithDraw:
		system("cls");
		ShowNormalWithdrawScreen();
		GoBackToMainMenu();
		break;
	case enMainMenuOptions::eDeposit:
		system("cls");
		ShowDepositScreen();
		GoBackToMainMenu();
		break;
	case enMainMenuOptions::eCheckBalance:
		system("cls");
		ShowCheckBalanceScreen();
		GoBackToMainMenu();
		break;
	case enMainMenuOptions::eExit:
		system("cls");
		Login();
		break;
	}
}

// Function to display the main menu
void ShowMainMenu()
{
	system("cls");
	cout << "===========================================\n";
	cout << "\t\ttATM Main Menu Screen\n";
	cout << "===========================================\n";
	cout << "\t[1] Quick Withdraw.\n";
	cout << "\t[2] Normal Withdraw.\n";
	cout << "\t[3] Deposit\n";
	cout << "\t[4] Check Balance.\n";
	cout << "\t[5] Logout.\n";
	cout << "===========================================\n";
	PerfromMainMenuOption((enMainMenuOptions)ReadMainMenuOption());
}

// Function to load client informations
bool  LoadClientInfo(string accountNumber, string pinCode)
{
	if (FindClientByAccountNumberAndPinCode(accountNumber, pinCode, CurrentClient))
		return true;
	else
		return false;
}

// Function to show login screen
void Login()
{
	bool loginFaild = false;
	string accountNumber, pinCode;
	do {
		system("cls");
		cout << "\n---------------------------------\n";
		cout << "\tLogin Screen";
		cout << "\n---------------------------------\n";
		if (loginFaild)
		{
			cout << "Account Number/PinCode!\n";
		}
		cout << "Enter Account Number? ";
		cin >> accountNumber;

		cout << "Enter PinCode? ";
		cin >> pinCode;

		loginFaild = !LoadClientInfo(accountNumber, pinCode);
	} while (loginFaild);
	ShowMainMenu();
}

// Main function
int main()
{
	Login();

	system("pause>0");

	return 0;
}