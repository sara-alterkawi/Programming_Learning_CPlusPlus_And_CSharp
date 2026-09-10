#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "clsClientListScreen.h"
#include "clsAddNewClientScreen.h"
#include "clsDeleteClientScreen.h"
#include "clsUpdateClientScreen.h"
#include "clsFindClientScreen.h"
#include "clsTransactionsScreen.h"
#include "clsManageUsersScreen.h"
#include "clsLoginScreen.h"
#include "Global.h"
#include "clsLoginRegisterScreen.h"
using namespace std;
// Class for main menu options
class clsMainScreen : protected clsScreen
{
private :
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
		eLoginRegister = 8,
		eExit = 9
	};
	// Method to read and validate the main menu option
	static short _ReadMainMenuOption()
	{
		cout << "Choose what do you want to do? [1 to 9]? ";
		short choice = clsInputValidate::ReadShortNumberBetween(1, 9, "Enter Number between 1 to 9? ");
		return choice;
	}
	// Method to go back to the main menu
	static void _GoBackToMainMenu()
	{
		cout << "Press any key to go back to Main Menu...";
		system("pause>0");
		ShowMainMenu();
	}
	// Method to show all clients screen
	static void _ShowAllClientScreen()
	{
		clsClientListScreen::ShowClientsList();
	}
	// Method to show add new clients screen
	static void _ShowAddNewClientsScreen()
	{
		clsAddNewClientScreen::ShowAddNewClientScreen();
	}
	// Method to show delete client screen
	static void _ShowDeleteClientScreen()
	{
		clsDeleteClientScreen::ShowDeleteClientScreen();
	}
	// Method to show update client screen
	static void _ShowUpdateClientScreen()
	{
		clsUpdateClientScreen::ShowUpdateClientScreen();
	}
	// Method to show find client screen
	static void _ShowFindClientScreen()
	{
		clsFindClientScreen::ShowFindClientScreen();
	}
	// Method to show transactions menu
	static void _ShowTransactionsMenu()
	{
		clsTransactionsScreen::ShowTransactionsMenu();
	}
	// Method to show manage users menu
	static void _ShowManageUsersMenu()
	{
		clsManageUsersScreen::ShowManageUsersMenu();
	}
	// Method to show Login Register screen
	static void _ShowLoginRegisterScreen()
	{
		clsLoginRegisterScreen::ShowLoginRegisterScreen();
	}
	// Method to show login screen
	static void _Logout()
	{
		CurrentUser = clsUser::Find("", "");
	}
	// Method to perform the selected main menu option
	static void _PerfromMainMenuOption(enMainMenueOptions MainMenueOption)
	{
		switch (MainMenueOption)
		{
		case enMainMenueOptions::eListClients:
		{
			system("cls");
			_ShowAllClientScreen();
			_GoBackToMainMenu();
			break;
		}
		case enMainMenueOptions::eAddNewClient:
		{
			system("cls");
			_ShowAddNewClientsScreen();
			_GoBackToMainMenu();
			break;
		}
		case enMainMenueOptions::eDeleteClient:
		{
			system("cls");
			_ShowDeleteClientScreen();
			_GoBackToMainMenu();
			break;
		}
		case enMainMenueOptions::eUpdateClient:
		{
			system("cls");
			_ShowUpdateClientScreen();
			_GoBackToMainMenu();
			break;
		}
		case enMainMenueOptions::eFindClient:
		{
			system("cls");
			_ShowFindClientScreen();
			_GoBackToMainMenu();
			break;
		}
		case enMainMenueOptions::eShowTransactionsMenue:
		{
			system("cls");
			_ShowTransactionsMenu();
			_GoBackToMainMenu();
			break;
		}
		case enMainMenueOptions::eManageUsers:
		{
			system("cls");
			_ShowManageUsersMenu();
			_GoBackToMainMenu();
			break;
		}
		case enMainMenueOptions::eLoginRegister:
		{
			system("cls");
			_ShowLoginRegisterScreen();
			_GoBackToMainMenu();
			break;
		}
		case enMainMenueOptions::eExit:
		{
			system("cls");
			_Logout();
			break;
		}
		}
	}
public:
	// Method to display the main menu
	static void ShowMainMenu()
	{
		system("cls");
		_DrawScreenHeader("Main Screen");
		cout << "===========================================\n";
		cout << "\t[1] Show Client List.\n";
		cout << "\t[2] Add New Client.\n";
		cout << "\t[3] Delete Client.\n";
		cout << "\t[4] Update Client Info.\n";
		cout << "\t[5] Find Client.\n";
		cout << "\t[6] Transactions.\n";
		cout << "\t[7] Manage Users.\n";
		cout << "\t[8] Login Register.\n";
		cout << "\t[9] Logout.\n";
		cout << "===========================================\n";
		_PerfromMainMenuOption((enMainMenueOptions)_ReadMainMenuOption());
	}
};