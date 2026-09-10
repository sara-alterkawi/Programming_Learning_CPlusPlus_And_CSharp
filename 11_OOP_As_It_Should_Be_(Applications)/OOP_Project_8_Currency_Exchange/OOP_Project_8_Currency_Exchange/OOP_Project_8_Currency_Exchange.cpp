/*
OOP Project 7 Bank System
This project is intended to create Bank System with the following requirements:
*/
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
// Main menu
/*
-------------------------------------------
		 Main Screen
-------------------------------------------
User: U01
Date: 28/1/2026
===========================================
		[1] Show Client List.
		[2] Add New Client.
		[3] Delete Client.
		[4] Update Client Info.
		[5] Find Client.
		[6] Transactions.
		[7] Manage Users.
		[8] Login Register.
		[9] Currency Exchange.
		[10] Logout.
===========================================
Choose what do you want to do? [1 to 10]?

When the user selects an option, the program should display a message indicating which option was selected, and press any key to return to the main menu.
*/
// • Option [1] Show Client List.
/*
-------------------------------------------
		 Client List Screen
		 (10) Client(s).
-------------------------------------------
User: U01
Date: 28/1/2026

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
-------------------------------------------
		 Add New Client Screen
-------------------------------------------
User: U01
Date: 28/1/2026

Please enter Account Number: A04
Please enter First Name: Sami
Please enter Last Name: Ameer
Please enter Email: s@gmail.com
Please enter Phone: 098978798
Please enter Pin Code: 1234
Please enter Account Balance: 2950
New Client info saved successfully! :-)
Client Card:
-------------------------------------------
FirstName  : Sami
LastName   : Ameer
Full Nam   : Sami Ameer
Email      : s@gmail.com
Phone      : 098978798
Acc.Number : A104
Password   : 1234
Balance    : 2950
-------------------------------------------
Press any key to go back to Main Menu...
*/
// • Option [3] Delete Client.
/*
-------------------------------------------
		 Delete Client Screen
-------------------------------------------
User: U01
Date: 28/1/2026

Please enter Account Number to delete: A104
Client Card:
-------------------------------------------
FirstName  : Sami
LastName   : Ameer
Full Nam   : Sami Ameer
Email      : s@gmail.com
Phone      : 098978798
Acc.Number : A104
Password   : 1234
Balance    : 2950
-------------------------------------------
Are you sure you want to delete this client? (Y/N): y
Client deleted successfully! :-)
Press any key to go back to Main Menu...
*/
// • Option[4] Update Client Info.
/*
-------------------------------------------
		 Update Client Screen
-------------------------------------------
User: U01
Date: 28/1/2026

Please enter Account Number: a104
Client Card:
-------------------------------------------
FirstName      : Hadi
LastNam        : Aljasem
Full Name      : Hadi Aljasem
Email          : hadi.ahmad.aljasem@gmail.com
Phone          : 0733905303
Acc. Number    : a104
Password       : 1234
Balance        : 2650
-------------------------------------------

Are you sure you want to update this client y/n? y
Update Client Info
================================================
Please enter First Name: Hadi
Please enter Last Name: Sami
Please enter Email: h@gmail.com
Please enter Phone: 04565777
Please enter Pin Code: 1234
Please enter Account Balance: 3000
Client info saved successfully! :-)
Client Card:
-------------------------------------------
FirstName      : Hadi
LastNam        : Sami
Full Name      : Hadi Sami
Email          : h@gmail.com
Phone          : 04565777
Acc. Number    : a104
Password       : 1234
Balance        : 3000
-------------------------------------------
Press any key to go back to Main Menu...
*/
// • Option [5] Find Client.
/*
-------------------------------------------
		 Find Client Screen
-------------------------------------------
User: U01
Date: 28/1/2026

Please enter Account Number: a104

Client Found :-)
Client Card:
-------------------------------------------
FirstName      : Hadi
LastName        : Sami
Full Name      : Hadi Sami
Email          : h@gmail.com
Phone          : 04565777
Acc. Number    : a104
Password       : 1234
Balance        : 3000
-------------------------------------------
Press any key to go back to Main Menu...
*/
// • Option [6] Transactions.
/*
-------------------------------------------
		 Transactions Screen
-------------------------------------------
User: U01
Date: 28/1/2026

===========================================
		[1] Deposit.
		[2] Withdraw.
		[3] Show Total Balances.
		[4] Transfer.
		[5] Transfer Register.
		[6] Main Menu.
===========================================
Choose what do you want to do? [1 to 6]?
*/
		// •• Option [1] Deposit.
/*
-------------------------------------------
		 Deposit Screen
-------------------------------------------
User: U01
Date: 28/1/2026

Please enter AccountNumber? a104
Client Card:
-------------------------------------------
FirstName   : Hadi
LastName    : Sami
Full Name   : Hadi Sami
Email       : h@gmail.com
Phone       : 04565777
Acc. Number : a104
Password    : 1234
Balance     : 3000
-------------------------------------------

Please enter deposit amount? 2000

Are you sure you want to perform this transaction? (Y/N):y

Amount Deposited Successfully.

New Balance Is: 5000Press any key to go back to Transactions Menu...
*/
		// •• Option [2] Withdraw.
/*	
-------------------------------------------
		 Withdraw Screen
-------------------------------------------
User: U01
Date: 28/1/2026

Please enter AccountNumber? a104
Client Card    :
-------------------------------------------
FirstName      : Hadi
LastName       : Sami
Full Name      : Hadi Sami
Email          : h@gmail.com
Phone          : 04565777
Acc. Number    : a104
Password       : 1234
Balance        : 5000
-------------------------------------------

Please enter Withdraw amount? 200
Are you sure you want to perform this transaction? (Y/N):y

Amount Withdraw Successfully.
New Balance Is: 4800Press any key to go back to Transactions Menu...
*/
		// •• Option [3] Total Balances.
/*
-------------------------------------------
		 Balances List Screen
		 (10) Client(s).
-------------------------------------------
User: U01
Date: 28/1/2026
_______________________________________________________________________________________________

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
		// •• Option [4] Transfer.	
/*
-------------------------------------------
		 Transfer Screen
-------------------------------------------
User: U01
Date: 28/1/2026


Please Enter Account Number to Transfer From: a104
Client Card :
-------------------------------------------
Full Name   : Hadi Sami
Acc. Number : a104
Balance     : 4800
-------------------------------------------

Please Enter Account Number to Transfer From: A102
Client Card :
-------------------------------------------
Full Name   : Ahmad Aljasem
Acc. Number : A102
Balance     : 8748
-------------------------------------------

Enter Transfer Amount? 200

Are you sure you want to perform this operation? y/n? y

Transfer done successfully
Client Card :
-------------------------------------------
Full Name   : Hadi Sami
Acc. Number : a104
Balance     : 4600
-------------------------------------------
Client Card :
-------------------------------------------
Full Name   : Ahmad Aljasem
Acc. Number : A102
Balance     : 8948
-------------------------------------------
Press any key to go back to Transactions Menu...
*/
		// •• Option [5] Transfer Register. 
/*
-------------------------------------------
		 Login Register List Screen
		 (2) Record(s).
-------------------------------------------
User: U01
Date: 28/1/2026

-----------------------------------------------------------------------------------------------------------
| Date/Time           | S.Acc.Number   | D.Acc.Number   | Amount  | S.Balance      | D.Balance      | UserName
-----------------------------------------------------------------------------------------------------------
| 27/1/2026 15:49:31  | A102           | A101           | 200     | 8748           | 15000          | U01
| 28/1/2026 15:54:47  | a104           | A102           | 200     | 4600           | 8948           | U01
-----------------------------------------------------------------------------------------------------------
Press any key to go back to Transactions Menu...
*/
// • Option [7] Manage Users.
/*
-------------------------------------------
		 Manage Users Screen
-------------------------------------------
User: U01
Date: 28/1/2026

===========================================
		[1] List Users.
		[2] Add New User.
		[3] Delete User.
		[4] Update User.
		[5] Find User.
		[6] Main Menu.
===========================================
Choose what do you want to do? [1 to 6]?
*/
		// •• Option [1] List Users. 
/*
-------------------------------------------
		 Users List Screen
		 (4) User(s).
-------------------------------------------
User: U01
Date: 28/1/2026

-----------------------------------------------------------------------------------------------------------
| User Name      | Full Name           | Phone       | Email                         | Password  | Permissions
-----------------------------------------------------------------------------------------------------------
| U01            | Sara Alterkawi      | 0706357155  | sara.omar.alterkawi@gmail.com | 1234      | -1
| U02            | Ahmad Aljasem       | 0766352336  | drahmad249791@gmail.com       | 1234      | 59
| U03            | Hadi Aljasem        | 0766352336  | h@gmail.com                   | 1234      | -1
| U04            | Dania Aljasem       | 0223233     | d@gmail.com                   | 1234      | 0
-----------------------------------------------------------------------------------------------------------
Press any key to go back to Manage Users Menu...
*/
		// •• Option [2] Add New User.
/*
-------------------------------------------
		 Add New user Screen
-------------------------------------------
User: U01
Date: 28/1/2026

Please enter User Name: U05
Please enter First Name: Sandi
Please enter Last Name: Amer
Please enter Email: sa@gmail.com
Please enter Phone: 0954565535
Please enter Password: 1234

Enter Permission: Do you want to give full access? y/n? y
User Card:
-------------------------------------------
FirstName   : Sandi
LastName    : Amer
Full Name   : Sandi Amer
Email       : sa@gmail.com
Phone       : 0954565535
User Name   : U05
Password    : 1234
Permissions : -1
-------------------------------------------
Press any key to go back to Manage Users Menu...


If we try to add an existing user, it should not be accepted
Enter Username? User1
User with [User1] already exists, Enter another Username?

If we refuse to give the new user full access, it asks what permissions we will give this user

Do you want to give access to :
Show Client List? y/n? y
Add New Client? y/n? y
Delete Client? y/n? y
Update Client? y/n? y
Find Client? y/n? y
Transactions? y/n? y
Manage Users? y/n? n
Show Log In Register? y/n? y
New user info saved successfully! :-)

After completion, we return to the same menu to manage users.
*/
		// •• Option [3] Delete User.
/*
-------------------------------------------
		 Delete User Screen
-------------------------------------------
User: U01
Date: 28/1/2026

Please enter User to delete: U105
User U105 does not exist, Enter another User: U05
User Card:
-------------------------------------------
FirstName   : Sandi
LastName    : Amer
Full Name   : Sandi Amer
Email       : sa@gmail.com
Phone       : 0954565535
User Name   : U05
Password    : 1234
Permissions : 191
-------------------------------------------
Are you sure you want to delete this User? (Y/N): y
User deleted successfully! :-)
Press any key to go back to Manage Users Menu...
*/
		// •• Option [4] Update User. 
/*
-------------------------------------------
		 Update User Screen
-------------------------------------------
User: U01
Date: 28/1/2026

Please enter UserName: U04
User Card:
-------------------------------------------
FirstName   : Dania
LastName    : Aljasem
Full Name   : Dania Aljasem
Email       : d@gmail.com
Phone       : 0223233
User Name   : U04
Password    : 1234
Permissions : 0
-------------------------------------------

Are you sure you want to update this User y/n? y
Update User Info
================================================
Please enter First Name: Dania
Please enter Last Name: Aljasem
Please enter Email: d@gmail.com
Please enter Phone: 0223233
Please enter Password: 1234

Enter Permission: Do you want to give full access? y/n?y
User info saved successfully! :-)
User Card:
-------------------------------------------
FirstName   : Dania
LastName    : Aljasem
Full Name   : Dania Aljasem
Email       : d@gmail.com
Phone       : 0223233
User Name   : U04
Password    : 1234
Permissions : -1
-------------------------------------------
Press any key to go back to Manage Users Menu...
*/
/*
sss
*/
		// •• Option [5] Find User. 
/*
-------------------------------------------
		 Find User Screen
-------------------------------------------
User: U01
Date: 28/1/2026

Please enter UserName: U03

User Found :-)
User Card:
-------------------------------------------
FirstName   : Hadi
LastName    : Aljasem
Full Name   : Hadi Aljasem
Email       : h@gmail.com
Phone       : 0766352336
User Name   : U03
Password    : 1234
Permissions : -1
-------------------------------------------
Press any key to go back to Manage Users Menu...
*/
		//•• Option [6] Main Menu.
// • Option [9] Currency Exchange.
/*
-------------------------------------------
		 Currency Exhange Menu Screen
-------------------------------------------
User: U01
Date: 28/1/2026

===========================================
		[1] List Currencies.
		[2] Find Currency.
		[3] Update Rate.
		[4] Currency Calculator.
		[5] Main Menu.
===========================================
Choose what do you want to do? [1 to 5]?
*/
		// •• Option [1] List Currencies.
/*
-------------------------------------------
		 Currencies List Screen
		 (222) Currency.
-------------------------------------------
User: U01
Date: 28/1/2026

---------------------------------------------------------------------------------------
| Country                  | Currency Code  | Currency Name                           | Rate
---------------------------------------------------------------------------------------
| Afghanistan              | AFN            | Afghanistan Afghani                     | 87.48
| Albania                  | ALL            | Albania Lek(e)                          | 109.01
| Algeria                  | DZD            | Algerian Dinar                          | 137.046
| American Samoa           | USD            | US Dollar                               | 1
| France                   | EUR            | Euro                                    | 0.9
| Angola                   | AOA            | Angolan Kwanza                          | 504.734
.
.
.
.
.
.
---------------------------------------------------------------------------------------
Press any key to go back to Currencies Menu...
*/

		// •• Option [2] Find Currency.
/*
-------------------------------------------
		 Find Currency Screen
-------------------------------------------
User: U01
Date: 28/1/2026

Find By: [1] Code or [2] Country ? 1

Please Enter CurrencyCode: sek

Currency Found :-)
nCurrency Card:
-------------------------------------------
Country    : Sweden
Code       : SEK
Name       : Swedish Krona
Rate(1$) = : 8.87
-------------------------------------------
Press any key to go back to Currencies Menu...

If the user shoses 2
Find By: [1] Code or [2] Country ? 2

Please Enter Country Name: egypt

Currency Found :-)
nCurrency Card:
-------------------------------------------
Country    : Egypt
Code       : EGP
Name       : Egyptian Pound
Rate(1$) = : 24.592
-------------------------------------------
Press any key to go back to Currencies Menu...
*/
		// •• Option [3] Update Rate.
/*
-------------------------------------------
		 Update  Currency Screen

-------------------------------------------
User: U01
Date: 28/1/2026


Please Enter Currency Code: sek
nCurrency Card:
-------------------------------------------
Country    : Sweden
Code       : SEK
Name       : Swedish Krona
Rate(1$) = : 8.87
-------------------------------------------

Are you sure you want to update the rate of this Currency y/n? y

Update Currency Rate:
-------------------------------------------

Enter New Rate: 8.87
Currency Rate Updated Successfully :-)
nCurrency Card:
-------------------------------------------
Country    : Sweden
Code       : SEK
Name       : Swedish Krona
Rate(1$) = : 8.87
-------------------------------------------
Press any key to go back to Currencies Menu...
*/
		// •• Option [4] Currency Calculator.
/*
-------------------------------------------
		 Calculate Currency Screen
-------------------------------------------
User: U01
Date: 28/1/2026


Please Enter Currency1 Code:
sek

Please Enter Currency2 Code:
jod
Enter Amount to Exchange: 200
Convert From:
-------------------------------------------
Country    : Sweden
Code       : SEK
Name       : Swedish Krona
Rate(1$) = : 8.87
-------------------------------------------
200 SEK = 22.5479 USD

Converting from USD to:
To:
-------------------------------------------
Country    : Jordan
Code       : JOD
Name       : Jordanian Dinar
Rate(1$) = : 0.708
-------------------------------------------
200 SEK = 15.9639 JOD

Do you want to perform another calculation? y/n? n
Press any key to go back to Currencies Menu...
*/
		// •• Option [5] Main Menu.
// • Option [10] Logout.
/*
If User Logout the Login screen will be here again
*/

#include <iostream>
#include "clsLoginScreen.h"
#include "clsCurrency.h"
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
			{
				break;
			}
		}
	}
	return 0;
}