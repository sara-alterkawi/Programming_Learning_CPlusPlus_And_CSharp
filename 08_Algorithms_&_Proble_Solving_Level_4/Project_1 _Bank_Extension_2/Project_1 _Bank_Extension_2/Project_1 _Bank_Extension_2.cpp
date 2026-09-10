// Write a C++ program that displays a menu for managing clients in a banking application.
// Login
/*
Add login screen
Reads the username and password from the user file
If they are incorrect:

============================================================
					Login Screen
============================================================
Enter Username? user2
Enter Password? 234
Invalid Username/Password!
Enter Username?


If the username is correct:
Enter Username? Admin
Enter Password? 1234


This will log you into the system.
*/

/*
============================================================
					Main Menu Screen
============================================================
			[1] Show Client List.
			[2] Add New Client.
			[3] Delete Client.
			[4] Update Client Info.
			[5] Find Client.
			[6] Transactions.
			[7] Manage Users.
			[8] Logout.
============================================================
Choose what you want to do? [1 to 8]?


When the user selects an option, the program should display a message indicating which option was selected, and press any key to return to the main menu.
*/
// • Option [1] Show Client List.
/*
----------------------------------------------------------------------------------------
								Client List (5) Client(s).
----------------------------------------------------------------------------------------
| Accout Number  | Pin Code  | Client Name                             | Phone       | Balance
----------------------------------------------------------------------------------------
| A01            | 1234      | Sara Alterkawi                          | 0706357155  | 300000
| A02            | 1234      | Ahmad Aljasem                           | 0766352336  | 500000
| A03            | 1232      | Dania Aljasem                           | 0760077028  | 50000
| A04            | 1234      | Hadi Aljasem                            | 0733905303  | 60000
| A05            | 1234      | Fadia Alterkawi                         | 657457      | 7000
----------------------------------------------------------------------------------------
Press any key to go back to Main Menue...
*/
// • Option [2] Add New Client.
/*
-----------------------------------
		Add New Clients Screen
-----------------------------------
Adding New Client:
Enter Account Number? A06
Enter PinCode? 1234
Enter Name? Doha Alterkawi
Enter Phone? 075464534
Enter AccountBalance? 2000
Client Added Successfully, do you want to add more clients? Y/N?n
Press any key to go back to Main Menue...
*/
// • Option [3] Delete Client.
/*
-----------------------------------
		Delete Screen
-----------------------------------
Please enter AccountNumber? A06

The following is the extracted client record:
----------------------------------------
Account Number  : A06
Pin Code        : 1234
Name            : Doha Alterkawi
Phone           : 075464534
Account Balance : 2000
----------------------------------------
Are you sure you want delete this client? y/n ? y
Client Deleted Successfully.
Press any key to go back to Main Menue...
*/
// • Option[4] Update Client Info.
/*
-----------------------------------
		Update Client Info Screen
-----------------------------------
Please enter AccountNumber? A05
The following is the extracted client record:
----------------------------------------
Account Number  : A05
Pin Code        : 1234
Name            : Fadia Alterkawi
Phone           : 657457
Account Balance : 7000
----------------------------------------
Are you sure you want update  this client? y/n ? y
Enter PinCode? 1234
Enter Name? Fadia Alterkawi
Enter Phone? 074553455
Enter AccountBalance? 3000
Client Updated Successfully.
Press any key to go back to Main Menue...
*/
// • Option [5] Find Client.
/*
-----------------------------------
		Find Client Screen
-----------------------------------
Please enter AccountNumber? A04
The following is the extracted client record:
----------------------------------------
Account Number  : A04
Pin Code        : 1234
Name            : Hadi Aljasem
Phone           : 0733905303
Account Balance : 60000
----------------------------------------
Press any key to go back to Main Menue...
*/
// • Option [6] Transactions.
/*
===========================================
				Transactions Menue Screen
===========================================
		[1] Deposit.
		[2] Withdraw.
		[3] Total Balances.
		[4] Main Menue.
===========================================
Choose what do you want to do? [1 to 4]?


• Option [1] Deposit.
-----------------------------------
		Deposit Screen
-----------------------------------
Please enter AccountNumber? A01
The following is the extracted client record:
----------------------------------------
Account Number  : A01
Pin Code        : 1234
Name            : Sara Alterkawi
Phone           : 0706357155
Account Balance : 300000
----------------------------------------
Please enter deposit amount? 300000
Are you sure you want perfrom this transaction? y/n ? y
Done Successfully. New balance is: 600000
Press any key to go back to Transactions Menue...


• Option [2] Withdraw.
-----------------------------------
		Withdraw Screen
-----------------------------------
Please enter AccountNumber? A05
The following is the extracted client record:
----------------------------------------
Account Number  : A05
Pin Code        : 1234
Name            : Fadia Alterkawi
Phone           : 074553455
Account Balance : 3000
----------------------------------------
Please enter withdraw amount? 50
Are you sure you want perfrom this transaction? y/n ? y
Done Successfully. New balance is: 2950
Press any key to go back to Transactions Menue...


• Option [3] Total Balances.
________________________________________________________________________________________________
										Balances List (5) Client(s).
________________________________________________________________________________________________

| Accout Number  | Client Name                             | Balance
________________________________________________________________________________________________

| A01            | Sara Alterkawi                          | 600000
| A02            | Ahmad Aljasem                           | 500000
| A03            | Dania Aljasem                           | 50000
| A04            | Hadi Aljasem                            | 60000
| A05            | Fadia Alterkawi                         | 2950
________________________________________________________________________________________________
										   Total Balances = 1.21295e+06
Press any key to go back to Transactions Menue...
*/
// • Option [7] Manage Users.
/*
============================================================
					Manage Users Menu Screen
============================================================
			[1] List Users.
			[2] Add New User.
			[3] Delete User.
			[4] Update User.
			[5] Find User.
			[6] Main Menu.
============================================================
Choose what you want to do? [1 to 6]?


• Option [1] displays the system users.
------------------------------------------------------------
			Users List (1) User(s).
------------------------------------------------------------
| User Name		| Password	| Permissions
------------------------------------------------------------
| Admin			| 1234		|  -1
------------------------------------------------------------
Press any key to go back to Manage Users Menu Screen ...


• Option [2] Add New User
------------------------------------------------------------
			New User Screen
------------------------------------------------------------
Adding New User:
Enter Username? User1
Enter Password? 1111
Do you want to give full access? y/n? y
User Added Successfully, do you want to add more Users? Y/N? n
Press any key to go back to Manage Users Menu Screen ...


If we try to add an existing user, it should not be accepted
Enter Username? User1
User with [User1] already exists, Enter another Username?

If we refuse to give the new user full access, it asks what permissions we will give this user

Adding New User:
Enter Username? User2
Enter Password? 2222
Do you want to give full access? y/n? n
Do you want to give access to:
Show Client List? y/n? y
Add New Client? y/n? n
Delete Client? y/n? n
Update Client? y/n? n
Find Client? y/n? y
Transactions? y/n? n
Manage Users? y/n? n
User Added Successfully, do you want to add more users? Y/N? n


After completion, we return to the same menu to manage users.


• Option [3] Delete User.
------------------------------------------------------------
					Delete User Screen
------------------------------------------------------------
Please enter Username? User7
User with Username (User7) is Not Found!
Press any key to go back to Manage Users Menu Screen ...

If the user is exist in system

Please enter Username? User1
The following are the client details:
------------------------------------------------------------
Username	: User1
Password	: 1111
Permissions	: - 1
------------------------------------------------------------
Are you sure you want delete this User? y/n? y
User Deleted Successfully.
Press any key to go back to Manage Users Menu Screen ...


• Option [4] Update User.
------------------------------------------------------------
					Update User Screen
------------------------------------------------------------
Please enter Username? User2
The following are the client details:
------------------------------------------------------------
Username	: User2
Password	: 2222
Permissions	: 17
------------------------------------------------------------
Are you sure you want update this User? y/n? y
Enter Password? 1111
Do you want to give full access? y/n? n
Do you want to give access to:
Show Client List? y/n? y
Add New Client? y/n? n
Delete Client? y/n? n
Update Client? y/n? n
Find Client? y/n? n
Transactions? y/n? n
Manage Users? y/n? n
User Added Successfully, do you want to add more users? Y/N? n
Press any key to go back to Manage Users Menu Screen ...


• Option [5] Find User.
------------------------------------------------------------
					Find User Screen
------------------------------------------------------------
Please enter Username? Admin
The following are the client details:
------------------------------------------------------------
Username	: Admin
Password	: 1234
Permissions	: -1
------------------------------------------------------------
Press any key to go back to Manage Users Menu Screen ...


• Option [6] Main Menu.
============================================================
					Main Menu Screen
============================================================
			[1] Show Client List.
			[2] Add New Client.
			[3] Delete Client.
			[4] Update Client Info.
			[5] Find Client.
			[6] Transactions.
			[7] Manage Users.
			[8] Logout.
============================================================
Choose what you want to do? [1 to 8]?


If we enter option 8, it logs us out and takes us to the login screen.
*/
// Note1:
/*
If the user hasn't access to all menu it will appera on screen
------------------------------------------------------------
Access Denied,
You dont Have Permission To Do this,
Please Conact Your Admin.
------------------------------------------------------------
*/
// Note2:
/*
No user can delete the Admin
------------------------------------------------------------
					Delete Users Screen
------------------------------------------------------------
Please enter Username? Admin
You cannot Delete This User.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <cctype>
using namespace std;

// --------------------- Enums ---------------------
// Enum for transactions menu options
enum enTransactionsMenueOptions
{
	eDeposit = 1,
	eWithdraw = 2,
	eShowTotalBalance = 3,
	eShowMainMenue = 4
};

// Enum for Managing users options
enum enManageUsersMenueOptions
{
	eListUsers = 1,
	eAddNewUser = 2,
	eDeleteUser = 3,
	eUpdateUser = 4,
	eFindUser = 5,
	eMainMenue = 6
};

// Enum for main menu options
enum enMainMenueOptions
{
	eListClients = 1,
	eAddNewClient = 2,
	eDeleteClient = 3,
	eUpdateClient = 4,
	eFindClient = 5,
	eShowTransactionsMenue = 6,
	eManageUsers = 7,
	eExit = 8
};

// Enum for main menu permission
enum enMainMenuePermissions
{
	eAll = -1,
	pListClients = 1,
	pAddNewClient = 2,
	pDeleteClient = 4,
	pUpdateClients = 8,
	pFindClient = 16,
	pTranactions = 32,
	pManageUsers = 64
};

// --------------------- Structs ---------------------
// Define the structure to hold User data
struct sUser
{
	string UserName;
	string Password;
	int Permissions;
	bool MarkForDelete = false;
};
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
const string UsersFileName = "Users.txt";
sUser CurrentUser;

// --------------------- Prototypes ---------------------
void Login();
void ShowMainMenu();
void ShowTransactionsMenu();
void ShowManageUsersMenu();
int ReadPermissionsToSet();
bool CheckAccessPermission(enMainMenuePermissions permission);

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

// Function to convert user data to a single line string
sUser ConvertUserLineToRecord(string line, string separator = "#//#")
{
	sUser user;
	vector<string> vUserData = SplitString(line, separator);
	if (vUserData.size() < 3 || line.empty()) {
		return user;
	}
	user.UserName = vUserData[0];
	user.Password = vUserData[1];
	try {
		user.Permissions = stoi(vUserData[2]);
	}
	catch (const std::invalid_argument& e) {
		user.Permissions = 0;
	}
	return user;
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

// Function to convert user record to line
string ConvertUserDataToLine(const sUser& user, string separator = "#//#")
{
	return user.UserName + separator +
		user.Password + separator +
		to_string(user.Permissions);
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

// Function to load user from file
vector <sUser> LoadUsersDataFromFile(string fileName)
{
	vector <sUser> vUsers;
	fstream myFile;
	myFile.open(fileName, ios::in);//read Mode
	if (myFile.is_open())
	{
		string line;
		sUser user;
		while (getline(myFile, line))
		{
			user = ConvertUserLineToRecord(line);
			vUsers.push_back(user);
		}
		myFile.close();
	}
	return vUsers;
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

// Function to save user to file
vector <sUser> SaveUsersDataToFile(string fileName, vector <sUser> vUsers)
{
	fstream myFile;
	myFile.open(fileName, ios::out);
	string dataLine;

	if (myFile.is_open())
	{
		for (sUser u : vUsers)
		{
			if (u.MarkForDelete == false)
			{
				dataLine = ConvertUserDataToLine(u);
				myFile << dataLine << endl;
			}
		}
		myFile.close();
	}
	return vUsers;
}

// Function to add data line to file
void AddDataLineToFile(string fileName, string stDataLine)
{
	fstream myFile;
	myFile.open(fileName, ios::out | ios::app);
	if (myFile.is_open())
	{
		myFile << stDataLine << endl;
		myFile.close();
	}
}

// --------------------- Existence Checks ---------------------
// Function to check if client exists by AccountNumber
bool ClientExistsByAccountNumber(string accountNumber, string fileName)
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
			if (client.AccountNumber == accountNumber)
			{
				myFile.close();
				return true;
			}
			vClients.push_back(client);
		}
		myFile.close();
	}
	return false;
}

// Function to check if user exists by username
bool UserExistsByUsername(string username, string fileName)
{
	vector <sUser> vUsers;

	fstream myFile;
	myFile.open(fileName, ios::in);//read Mode
	if (myFile.is_open())
	{
		string line;
		sUser user;
		while (getline(myFile, line))
		{
			user = ConvertUserLineToRecord(line);
			if (user.UserName == username)
			{
				myFile.close();
				return true;
			}
			vUsers.push_back(user);

		}
		myFile.close();
	}
	return false;
}

// --------------------- IO Helpers ---------------------
// Function to add a new client
sClient ReadNewClient()
{
	sClient client;
	cout << "Enter Account Number? ";
	getline(cin >> ws, client.AccountNumber);

	while (ClientExistsByAccountNumber(client.AccountNumber, ClientsFileName))
	{
		cout << "\nClient with [" << client.AccountNumber << "] already exists, Enter another Account Number? ";
		getline(cin >> ws, client.AccountNumber);
	}
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

// Function to add a new user
sUser ReadNewUser()
{
	sUser user;
	cout << "Enter Username? ";
	getline(cin >> ws, user.UserName);
	while (UserExistsByUsername(user.UserName, UsersFileName))
	{
		cout << "\nUser with [" << user.UserName << "] already exists, Enter another Username? ";
		getline(cin >> ws,user.UserName);
	}
	cout << "Enter Password? ";
	getline(cin, user.Password);
	user.Permissions = ReadPermissionsToSet();
	return user;
}

// Function to read user permissions
int ReadPermissionsToSet()
{
	int permissions = 0;
	char answer = 'n';

	cout << "\nDo you want to give full access? y/n? ";
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
		return -1;

	cout << "\nDo you want to give access to : \n ";

	cout << "\nShow Client List? y/n? ";
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
		permissions += enMainMenuePermissions::pListClients;

	cout << "\nAdd New Client? y/n? ";
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
		permissions += enMainMenuePermissions::pAddNewClient;

	cout << "\nDelete Client? y/n? ";
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
		permissions += enMainMenuePermissions::pDeleteClient;

	cout << "\nUpdate Client? y/n? ";
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
		permissions += enMainMenuePermissions::pUpdateClients;

	cout << "\nFind Client? y/n? ";
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
		permissions += enMainMenuePermissions::pFindClient;

	cout << "\nTransactions? y/n? ";
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
		permissions += enMainMenuePermissions::pTranactions;

	cout << "\nManage Users? y/n? ";
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
		permissions += enMainMenuePermissions::pManageUsers;

	return permissions;
}

// --------------------- Printing Helpers ---------------------
// Function to print client data
void PrintClientRecordLine(sClient client)
{
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	cout << "| " << setw(15) << left << client.AccountNumber;
	cout << "| " << setw(10) << left << client.PinCode;
	cout << "| " << setw(40) << left << client.Name;
	cout << "| " << setw(12) << left << client.Phone;
	cout << "| " << setw(12) << left << client.AccountBalance;
}

// Function to print user data
void PrintUserRecordLine(sUser user)
{
	vector <sUser> vUsers = LoadUsersDataFromFile(ClientsFileName);
	cout << "| " << setw(15) << left << user.UserName;
	cout << "| " << setw(10) << left << user.Password;
	cout << "| " << setw(40) << left << user.Permissions;
}

// Function print if the user has no permissin to an item
void ShowAccessDeniedMessage()
{
	cout << "\n------------------------------------\n";
	cout << "Access Denied, \nYou dont Have Permission To Do this,\nPlease Conact Your Admin.";
	cout << "\n------------------------------------\n";
}

// Function to print client balance line
void PrintClientRecordBalanceLine(sClient client)
{
	cout << "| " << setw(15) << left << client.AccountNumber;
	cout << "| " << setw(40) << left << client.Name;
	cout << "| " << setw(12) << left << client.AccountBalance;
}

// Function to print all clients
void PrintAllClients(vector <sClient> vClients)
{
	if (!CheckAccessPermission(enMainMenuePermissions::pListClients))
	{
		ShowAccessDeniedMessage();
		return;
	}
	vClients = LoadCleintsDataFromFile(ClientsFileName);

	cout << "\n\t\t\t\tClient List (" << vClients.size() << ") Client(s).\n";
	cout << "----------------------------------------------------------------------------------------" << endl;
	cout << "| " << setw(15) << left << "Accout Number";
	cout << "| " << setw(10) << left << "Pin Code";
	cout << "| " << setw(40) << left << "Client Name";
	cout << "| " << setw(12) << left << "Phone";
	cout << "| " << setw(12) << left << "Balance" << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;

	if (vClients.size() == 0)
		cout << "\t\t\t\tNo Clients Available In the System!";
	else
		for(sClient Client : vClients)
		{ 
			PrintClientRecordLine(Client);
			cout << endl;
		}
	cout << "----------------------------------------------------------------------------------------" << endl;
}

// Function to print all users
void PrintAllUsers(vector <sUser> vUser)
{
	vUser = LoadUsersDataFromFile(UsersFileName);

	cout << "\n\t\t\t\tClient List (" << vUser.size() << ") User(s).\n";
	cout << "----------------------------------------------------------------------------------------" << endl;
	cout << "| " << setw(15) << left << "User Name";
	cout << "| " << setw(10) << left << "Password";
	cout << "| " << setw(12) << left << "Permissions" << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;

	if (vUser.size() == 0)
		cout << "\t\t\t\tNo Users Available In the System!";
	else
		for (sUser user : vUser)
		{
			PrintUserRecordLine(user);
			cout << endl;
		}
	cout << "----------------------------------------------------------------------------------------" << endl;
}

// --------------------- Business Logic ---------------------
// Function to show total balances
void ShowTotalBalances()
{
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	cout << "\n\t\t\t\t\tBalances List (" << vClients.size() << ") Client(s).";
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	cout << "| " << left << setw(15) << "Accout Number";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Balance";
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	double totalBalances = 0;
	if (vClients.size() == 0)
		cout << "\t\t\t\tNo Clients Available In the System!";
	else
		for (sClient client : vClients)
		{
			PrintClientRecordBalanceLine(client);
			totalBalances += client.AccountBalance;
			cout << endl;
		}
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	cout << "\t\t\t\t\t   Total Balances = " << totalBalances;
}

// Function to print client data
void PrintClientRecord(sClient client)
{
	cout << "\nThe following is the extracted client record:\n";
	cout << "----------------------------------------\n";
	cout << "Account Number\t: " << client.AccountNumber << endl;
	cout << "Pin Code\t: " << client.PinCode << endl;
	cout << "Name\t\t: " << client.Name << endl;
	cout << "Phone\t\t: " << client.Phone << endl;
	cout << "Account Balance\t: " << client.AccountBalance << endl;
	cout << "----------------------------------------\n";
}

// Function to print user data
void PrintUserRecord(sUser user)
{
	cout << "\nThe following is the extracted client record:\n";
	cout << "----------------------------------------\n";
	cout << "Username\t: " << user.UserName << endl;
	cout << "Password\t: " << user.Password << endl;
	cout << "Permissions\t: " << user.Permissions << endl;
	cout << "----------------------------------------\n";
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

// Function to find and print user by UserName
bool FindUserByUserName(string username, vector<sUser> vUsers, sUser& user)
{
	for (sUser u : vUsers)
	{
		if (u.UserName == username)
		{
			user = u;
			return true;
		}
	}
	return false;
}

// Function to find and print user by UserName and Password
bool FindUserByUsernameAndPassword(string username, string password, sUser& user)
{
	vector <sUser> vUsers = LoadUsersDataFromFile(UsersFileName);
	for (sUser u : vUsers)
	{
		if (u.UserName == username && u.Password == password)
		{
			user = u;
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

// Function to change user record
sUser ChangeUserRecord(string username)
{
	sUser user;
	user.UserName = username;
	cout << "\n\nEnter Password? ";
	getline(cin >> ws, user.Password);

	user.Permissions = ReadPermissionsToSet();

	return user;
}

// Function to mark client for delete by AccountNumber
bool MarkClientForDeleteByAccountNumber(string accountNumber, vector <sClient>& vClients)
{
	for (sClient& c : vClients)
	{
		if (c.AccountNumber == accountNumber)
		{
			c.MarkForDelete = true;
			return true;
		}
	}
	return false;
}

// Function to mark user for delete by AccountNumber
bool MarkUserForDeleteByUserName(string username, vector <sUser>& vUsers)
{
	for (sUser& u : vUsers)
	{
		if (u.UserName == username)
		{
			u.MarkForDelete = true;
			return true;
		}
	}
	return false;
}

// --------------------- CRUD and operations ---------------------
// Function to add new client
void AddNewClient()
{
	sClient client = ::ReadNewClient();
	AddDataLineToFile(ClientsFileName, ConvertClientDataToLine(client));
}

// Function to add new user
void AddNewUser()
{
	sUser user = ::ReadNewUser();
	AddDataLineToFile(UsersFileName, ConvertUserDataToLine(user));
}

// Function to add multiple new clients
void AddMoreNewClient()
{
	char answer = 'Y';
	do
	{
		cout << "Adding New Client:\n\n";
		AddNewClient();
		cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";
		cin >> answer;
	} while (toupper(answer) == 'Y');
}

// Function to add multiple new users
void AddMoreNewUser()
{
	char answer = 'Y';
	do
	{
		cout << "Adding New User:\n\n";
		AddNewUser();
		cout << "\nUser Added Successfully, do you want to add more Users? Y/N? ";
		cin >> answer;
	} while (toupper(answer) == 'Y');
}

// Function to delete client by AccountNumber
bool DeleteByAccountNumber(string accountNumber, vector<sClient>& vClients)
{
	sClient client;
	char answer = 'n';
	if (FindClientByAccountNumber(accountNumber, vClients, client))
	{
		PrintClientRecord(client);
		cout << "\n\nAre you sure you want delete this client? y/n ? ";
		cin >> answer;
		if (answer == 'y' || answer == 'Y')
		{
			MarkClientForDeleteByAccountNumber(accountNumber, vClients);
			SaveCleintsDataToFile(ClientsFileName, vClients); //Refresh Clients
			vClients = LoadCleintsDataFromFile(ClientsFileName);
			cout << "\n\nClient Deleted Successfully." << endl;
			return true;
		}
	} else {
		cout << "\nClient with Account Number (" << accountNumber << ") is Not Found!";
		return false;
	}
}

// Function to delete user by UserName
bool DeleteByUserName(string userName, vector<sUser>& vUsers)
{
	if (userName == "Admin")
	{ 
		cout << "\n\nYou cannot Delete This User.";
		return false; 
	}
	sUser user;
	char answer = 'n';
	if (FindUserByUserName(userName, vUsers, user))
	{
		PrintUserRecord(user);
		cout << "\n\nAre you sure you want delete this User? y/n ? ";
		cin >> answer;
		if (answer == 'y' || answer == 'Y')
		{
			MarkUserForDeleteByUserName(userName, vUsers);
			SaveUsersDataToFile(UsersFileName, vUsers);
			vUsers = LoadUsersDataFromFile(UsersFileName);
			cout << "\n\nUser Deleted Successfully." << endl;
			return true;
		}
	}
	else {
		cout << "\nUser with UserName (" << userName << ") is Not Found!";
		return false;
	}
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

// Function to delete user by UserName
bool UpdateUserByUserName(string userName, vector<sUser>& vUsers)
{
	sUser user;
	char answer = 'n';
	if (FindUserByUserName(userName, vUsers, user))
	{
		PrintUserRecord(user);
		cout << "\n\nAre you sure you want update  this user? y/n ? ";
		cin >> answer;
		if (answer == 'y' || answer == 'Y')
		{
			for (sUser& u : vUsers)
			{
				if (u.UserName == userName)
				{
					u = ChangeUserRecord(userName);
					break;
				}
			}
			SaveUsersDataToFile(UsersFileName, vUsers);
			cout << "\n\nUser Updated Successfully.\n";
			return true;
		}
	}
	else
	{
		cout << "\nUser with UserName (" << userName << ") is Not Found!\n";
		return false;
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

// function to read AccountNumber from user
string ReadAccountNumberFromUser()
{
	string accountNumber;
	cout << "Please enter AccountNumber? ";
	cin >> accountNumber;
	return accountNumber;
}

// function to read UserName from user
string ReadUserNameFromUser()
{
	string userName;
	cout << "Please enter UserName? ";
	cin >> userName;
	return userName;
}

// --------------------- Screens ---------------------
// Function to show delete client screen
void ShowDeleteClientScreen()
{
	cout << "\n-----------------------------------\n";
	cout << "\tDelete Client Screen";
	cout << "\n-----------------------------------\n";
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	string accountNumber = ReadAccountNumberFromUser();
	DeleteByAccountNumber(accountNumber, vClients);
}

// Function to show delete user screen
void ShowDeleteUserScreen()
{
	cout << "\n-----------------------------------\n";
	cout << "\tDelete Users Screen";
	cout << "\n-----------------------------------\n";
	vector <sUser> vUsers = LoadUsersDataFromFile(UsersFileName);
	string username = ReadUserNameFromUser();
	DeleteByUserName(username, vUsers);
}

// Function to show delete client screen
void ShowUpdateClientScreen()
{
	cout << "\n-----------------------------------\n";
	cout << "\tUpdate Client Info Screen";
	cout << "\n-----------------------------------\n";
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	string accountNumber = ReadAccountNumberFromUser();
	UpdateClientByAccountNumber(accountNumber, vClients);
}

// Function to show delete user screen
void ShowUpdateUserScreen()
{
	cout << "\n-----------------------------------\n";
	cout << "\tUpdate Users Screen";
	cout << "\n-----------------------------------\n";
	vector <sUser> vUsers = LoadUsersDataFromFile(UsersFileName);
	string Username = ReadUserNameFromUser();
	UpdateUserByUserName(Username, vUsers);
}

// Function to show add new clients screen
void ShowAddNewClientsScreen()
{
	cout << "\n-----------------------------------\n";
	cout << "\tAdd New Clients Screen";
	cout << "\n-----------------------------------\n";
	AddMoreNewClient();
}

// Function to show add new users screen
void ShowAddNewUsersScreen()
{
	cout << "\n-----------------------------------\n";
	cout << "\tAdd New User Screen";
	cout << "\n-----------------------------------\n";
	AddMoreNewUser();
}

// Function to show find client screen
void ShowFindClientScreen()
{
	cout << "\n-----------------------------------\n";
	cout << "\tFind Client Screen";
	cout << "\n-----------------------------------\n";
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	sClient client;
	string accountNumber = ReadAccountNumberFromUser();
	if (FindClientByAccountNumber(accountNumber, vClients, client))
		PrintClientRecord(client);
	else
		cout << "\nClient with Account Number[" << accountNumber << "] is not found!";
}

// Function to show find user screen
void ShowFindUserScreen()
{
	cout << "\n-----------------------------------\n";
	cout << "\tFind User Screen";
	cout << "\n-----------------------------------\n";
	vector <sUser> vUsers = LoadUsersDataFromFile(UsersFileName);
	sUser user;
	string userName = ReadUserNameFromUser();
	if (FindUserByUserName(userName, vUsers, user))
		PrintUserRecord(user);
	else
		cout << "\nUser with Username [" << userName << "] is not found!";
}

// Function to show end screen
void ShowEndScreen()
{
	cout << "\n-----------------------------------\n";
	cout << "\tProgram Ends :-)";
	cout << "\n-----------------------------------\n";
}

// Function to show deposit screen
void ShowDepositScreen()
{
	cout << "\n-----------------------------------\n";
	cout << "\tDeposit Screen";
	cout << "\n-----------------------------------\n";
	sClient client; vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	string accountNumber = ReadAccountNumberFromUser();
	while (!FindClientByAccountNumber(accountNumber, vClients, client))
	{
		cout << "\nClient with [" << accountNumber << "] does not exist.\n";
		accountNumber = ReadAccountNumberFromUser();
	}
	PrintClientRecord(client);
	double Amount = 0;
	cout << "\nPlease enter deposit amount? ";
	cin >> Amount;
	DepositBalanceToClientByAccountNumber(accountNumber, Amount, vClients);
}

// Function to read client account number
void ShowWithDrawScreen()
{
	cout << "\n-----------------------------------\n";
	cout << "\tWithdraw Screen";
	cout << "\n-----------------------------------\n";
	sClient client; vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	string accountNumber = ReadAccountNumberFromUser();
	while (!FindClientByAccountNumber(accountNumber, vClients, client))
	{
		cout << "\nClient with [" << accountNumber << "] does not exist.\n";
		accountNumber = ReadAccountNumberFromUser();
	}
	PrintClientRecord(client);
	double amount = 0;
	cout << "\nPlease enter withdraw amount? ";
	cin >> amount;
	//Validate that the amount does not exceeds the balance
	while (amount > client.AccountBalance)
	{
		cout << "\nAmount Exceeds the balance, you can withdraw up to : " << client.AccountBalance << endl;
		cout << "Please enter another amount? ";
		cin >> amount;
	}
	DepositBalanceToClientByAccountNumber(accountNumber, amount * -1, vClients);
}

// Function to show total balances screen
void ShowTotalBalancesScreen()
{
	ShowTotalBalances();
}

// Function to check User permission
bool CheckAccessPermission(enMainMenuePermissions permission)
{
	if (CurrentUser.Permissions == enMainMenuePermissions::eAll)
		return true;
	if ((permission & CurrentUser.Permissions) == permission)
		return true;
	else
		return false;
}

// Function to prompt user to press any key to continue
void GoBackToMainMenu()
{
	cout << "\n\nPress any key to go back to Main Menue...";
	system("pause>0");
	system("cls");
	ShowMainMenu();
}

// Function to display transactions menu
void GoBackToTransactionsMenu()
{
	cout << "\n\nPress any key to go back to Transactions Menue...";
	system("pause>0");
	system("cls");
	ShowTransactionsMenu();
}

// Function to display manage user menu
void GoBackToManageUsersMenu()
{
	cout << "\n\nPress any key to go back to Manage Users Menu Screen...";
	system("pause>0");
	system("cls");
	ShowManageUsersMenu();
}

// Function to display transactions menu
short ReadTransactionsMenueOption()
{
	cout << "Choose what do you want to do? [1 to 4]? ";
	short choice = 0;
	cin >> choice;
	return choice;
}

// Enum for transactions menu options
void PerfromTranactionsMenuOption(enTransactionsMenueOptions TransactionMenueOption)
{
	switch (TransactionMenueOption)
	{
	case enTransactionsMenueOptions::eDeposit:
	{
		system("cls");
		ShowDepositScreen();
		GoBackToTransactionsMenu();
		break;
	}
	case enTransactionsMenueOptions::eWithdraw:
	{
		system("cls");
		ShowWithDrawScreen();
		GoBackToTransactionsMenu();
		break;
	}
	case enTransactionsMenueOptions::eShowTotalBalance:
	{
		system("cls");
		ShowTotalBalancesScreen();
		GoBackToTransactionsMenu();
		break;
	} case enTransactionsMenueOptions::eShowMainMenue:
	{
		system("cls");
		ShowMainMenu();
	}
	}
}

// Function to display the transactions menu
void ShowTransactionsMenu()
{
	system("cls");
	cout << "===========================================\n";
	cout << "\t\tTransactions Menue Screen\n";
	cout << "===========================================\n";
	cout << "\t[1] Deposit.\n";
	cout << "\t[2] Withdraw.\n";
	cout << "\t[3] Total Balances.\n";
	cout << "\t[4] Main Menue.\n";
	cout << "===========================================\n";
	PerfromTranactionsMenuOption((enTransactionsMenueOptions)ReadTransactionsMenueOption());
}

// Function to read main menu option
int ReadMainMenuOption()
{
	cout << "Choose what do you want to do? [1 to 8]? ";
	int choice = 0;
	cin >> choice;
	return choice;
}

// Function to read manging user option
int ReadManageUsersMenuOption()
{
	cout << "Choose what do you want to do? [1 to 6]? ";
	int choice = 0;
	cin >> choice;
	return choice;
}

// Function to handle user choices in manging user options
void PerfromManageUsersMenuOption(enManageUsersMenueOptions manageUsersMenueOption)
{
	switch (manageUsersMenueOption)
	{
		case enManageUsersMenueOptions::eListUsers:
		{
			system("cls");
			vector <sUser> vUsers = LoadUsersDataFromFile(UsersFileName);
			PrintAllUsers(vUsers);
			GoBackToManageUsersMenu();
			break;
		}
		case enManageUsersMenueOptions::eAddNewUser :
		{
			system("cls");
			ShowAddNewUsersScreen();
			GoBackToManageUsersMenu(); 
			break;
		} 
		case enManageUsersMenueOptions::eDeleteUser :
		{
			system("cls");
			ShowDeleteUserScreen();
			GoBackToManageUsersMenu();
			break;
		}
		case enManageUsersMenueOptions::eUpdateUser :
		{
			system("cls");
			ShowUpdateUserScreen();
			GoBackToManageUsersMenu();
			break;
		}
		case enManageUsersMenueOptions::eFindUser :
		{
			system("cls");
			ShowFindUserScreen();
			GoBackToManageUsersMenu();
			break;
		}
		case enManageUsersMenueOptions::eMainMenue :
		{
			system("cls");
			ShowMainMenu();
		}
	}
}

// Function to handle user choices
void PerfromMainMenuOption(enMainMenueOptions MainMenueOption)
{
	switch (MainMenueOption)
	{
	case enMainMenueOptions::eListClients:
	{
		system("cls");
		vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
		PrintAllClients(vClients);
		GoBackToMainMenu();
		break;
	}
	case enMainMenueOptions::eAddNewClient:
		system("cls");
		ShowAddNewClientsScreen();
		GoBackToMainMenu();
		break;
	case enMainMenueOptions::eDeleteClient:
		system("cls");
		ShowDeleteClientScreen();
		GoBackToMainMenu();
		break;
	case enMainMenueOptions::eUpdateClient:
		system("cls");
		ShowUpdateClientScreen();
		GoBackToMainMenu();
		break;
	case enMainMenueOptions::eFindClient:
		system("cls");
		ShowFindClientScreen();
		GoBackToMainMenu();
		break;
	case enMainMenueOptions::eShowTransactionsMenue:
		system("cls");
		ShowTransactionsMenu();
		break;
	case enMainMenueOptions::eManageUsers:
		system("cls");
		ShowManageUsersMenu();
		break;
	case enMainMenueOptions::eExit:
		system("cls");
		//ShowEndScreen();
		Login();
		break;
	}
}

// Function to display the main menu
void ShowMainMenu()
{
	system("cls");
	cout << "===========================================\n";
	cout << "\t\tMain Menu Screen\n";
	cout << "===========================================\n";
	cout << "\t[1] Show Client List.\n";
	cout << "\t[2] Add New Client.\n";
	cout << "\t[3] Delete Client.\n";
	cout << "\t[4] Update Client Info.\n";
	cout << "\t[5] Find Client.\n";
	cout << "\t[6] Transactions.\n";
	cout << "\t[7] Manage Users.\n";
	cout << "\t[8] Logout.\n";
	cout << "===========================================\n";
	PerfromMainMenuOption((enMainMenueOptions)ReadMainMenuOption());
}

// Function to display the manage user menu
void ShowManageUsersMenu()
{
	if (!CheckAccessPermission(enMainMenuePermissions::pManageUsers))
	{
		system("cls");
		ShowAccessDeniedMessage();
		GoBackToMainMenu();
		return;
	}
	system("cls");
	cout << "===========================================\n";
	cout << "\t\tManage Users Menue Screen\n";
	cout << "===========================================\n";
	cout << "\t[1] List Users.\n";
	cout << "\t[2] Add New User.\n";
	cout << "\t[3] Delete User.\n";
	cout << "\t[4] Update User.\n";
	cout << "\t[5] Find User.\n";
	cout << "\t[6] Main Menue.\n";
	cout << "===========================================\n";
	PerfromManageUsersMenuOption((enManageUsersMenueOptions)ReadManageUsersMenuOption());
}

// Function to load user info
bool  LoadUserInfo(string username, string password)
{
	if (FindUserByUsernameAndPassword(username, password, CurrentUser))
		return true;
	else
		return false;
}

// Function to show login screen
void Login()
{
	bool LoginFaild = false;
	string userName, password;
	do {
		system("cls");
		cout << "\n---------------------------------\n";
		cout << "\tLogin Screen";
		cout << "\n---------------------------------\n";
		if (LoginFaild)
		{
			cout << "Invlaid Username/Password!\n";
		}
		cout << "Enter Username? ";
		cin >> userName;

		cout << "Enter Password? ";
		cin >> password;
		
		LoginFaild = !LoadUserInfo(userName, password);
	}
	while (LoginFaild);
	ShowMainMenu();
}

// Main function
int main()
{
	Login();

	system("pause>0");

	return 0;
}