// OOP Project 7 Input Bank System
// This project is intended to create a Input & Validation Library with the following requirements:
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
// • Option [8] Logout.
/*
If User Logout the Login screen will be here again
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
// Extension 01 
/*
	Add Current Date and Logged In User to All Screens
*/
// Extension 02
/*
	Lock the System After 3 Failed Logins
*/
// Extension 03
/*
	Register Logins In a Log File
*/
// Extension 04
/*
	Show Login Register Screen
*/
// Extension 05
/*
	Permission to Show Log Register Screen
*/
// Extension 06
/*
	Transfer Screen
*/
// Extension 07
/*
	Create Transfer Log
*/
// Extension 08
/*
	Show Transfers Log Screen
*/
// Extension 09
/*
	Encrypt Password In File
*/
// Extension 10
/*
  Abstract Class/Interface
  InterfaceCommunication
*/
#include <iostream>
#include "clsLoginScreen.h"
// Main function
int main()
{
	while (true)
	{
		while (!CurrentUser.IsEmpty())
		{
			clsMainScreen::ShowMainMenu();
		}

		while (CurrentUser.IsEmpty())
		{
			if (clsLoginScreen::ShowLoginScreen())
				break;
		}
	}

	return 0;
}