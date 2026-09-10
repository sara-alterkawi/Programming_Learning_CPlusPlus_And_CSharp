#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsUser.h"
#include <iomanip>
#include "clsMainScreen.h"
#include "Global.h"
// Login Screen Class
class clsLoginScreen :protected clsScreen
{
private:
	// Method to handle the login process
	static bool _Login()
	{
		bool loginFaild = false;
		short count = 0;
		string userName, password;
		do
		{
			if (loginFaild)
			{
				count++;
				cout << "Invalid UserName/Password\n";
				cout << "You have " << (3 - count) << " Trial(s) to login\n\n";
			}
			if (count == 3)
			{
				system("cls");
				cout << "===========================================\n";
				cout << "\tSYSTEM LOCKED AFTER 3 TRIALS\n";
				cout << "===========================================\n";
				system("pause");
				exit(0);
			}
			cout << "Enter User Name? ";
			cin >> userName;
			cout << "Enter Password? ";
			cin >> password;
			CurrentUser = clsUser::Find(userName, password);
			loginFaild = CurrentUser.IsEmpty();
		} while (loginFaild);
		CurrentUser.RegisterLogin();
		clsMainScreen::ShowMainMenu();
		return true;
	}
public:
	// Method to display the login screen
	static bool ShowLoginScreen()
	{
		system("cls");
		_DrawScreenHeader("Login Screen");
		cout << "-------------------------------------------\n";
		return _Login();
	}
};