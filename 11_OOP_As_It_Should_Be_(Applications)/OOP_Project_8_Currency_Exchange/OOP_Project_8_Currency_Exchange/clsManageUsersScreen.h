#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "clsUserListScreen.h"
#include "clsAddNewUserScreen.h"
#include "clsDeleteUserScreen.h"
#include "clsUpdateUserScreen.h"
#include "clsFindUserScreen.h"

#include <iomanip>
using namespace std;
// Manage Users Screen Class
class clsManageUsersScreen :protected clsScreen
{
private:
    // Enum for Manage Users Menu Options
    enum enManageUsersMenuOptions
    {
        eListUsers = 1,
        eAddNewUser = 2,
        eDeleteUser = 3,
        eUpdateUser = 4,
        eFindUser = 5,
        eMainMenu = 6
    };
	// Method to read and validate the Manage Users Menu option
    static short _ReadManageUsersMenuOption()
    {
        cout << "Choose what do you want to do? [1 to 6]? ";
        short choice = clsInputValidate::ReadNumberBetween(1, 6, "Enter Number between 1 to 6? ");
        return choice;
    }
	// Method to go back to the Manage Users Menu
    static void _GoBackToManageUsersMenu()
    {
        cout << "Press any key to go back to Manage Users Menu...";
        system("pause>0");
        ShowManageUsersMenu();
    }
	// Method to show List Users Screen
    static void _ShowListUsersScreen()
    {
        clsUserListScreen::ShowUsersList();
    }
	// Method to show Add New User Screen
    static void _ShowAddNewUserScreen()
    {
        clsAddNewUserScreen::ShowAddNewUserScreen();
    }
	// Method to show Delete User Screen
    static void _ShowDeleteUserScreen()
    {
        clsDeleteUserScreen::ShowDeleteUserScreen();
    }
	// Method to show Update User Screen
    static void _ShowUpdateUserScreen()
    {
        clsUpdateUserScreen::ShowUpdateUserScreen();
    }
	// Method to show Find User Screen
    static void _ShowFindUserScreen()
    {
       clsFindUserScreen::ShowFindUserScreen();
    }
	// Method to perform the selected Manage Users Menu option
    static void _PerformManageUsersMenuOption(enManageUsersMenuOptions manageUsersMenuOption)
    {
        switch (manageUsersMenuOption)
        {
        case enManageUsersMenuOptions::eListUsers:
        {
            system("cls");
            _ShowListUsersScreen();
            _GoBackToManageUsersMenu();
            break;
        }
        case enManageUsersMenuOptions::eAddNewUser:
        {
            system("cls");
            _ShowAddNewUserScreen();
            _GoBackToManageUsersMenu();
            break;
        }
        case enManageUsersMenuOptions::eDeleteUser:
        {
            system("cls");
            _ShowDeleteUserScreen();
            _GoBackToManageUsersMenu();
            break;
        }
        case enManageUsersMenuOptions::eUpdateUser:
        {
            system("cls");
            _ShowUpdateUserScreen();
            _GoBackToManageUsersMenu();
            break;
        }
        case enManageUsersMenuOptions::eFindUser:
        {
            system("cls");

            _ShowFindUserScreen();
            _GoBackToManageUsersMenu();
            break;
        }
        case enManageUsersMenuOptions::eMainMenu:
        {
            // Do nothing here the main screen will handle it :-) ;
        }
        }
    }
public:
	// Method to display the Manage Users Menu
    static void ShowManageUsersMenu()
    {
        if (!CheckAccessRights(clsUser::enPermissions::pManageUsers))
        {
            return; // This will exit the function and it will not continue
        }
        system("cls");
        _DrawScreenHeader("Manage Users Screen");
        cout << "===========================================\n";
        cout << "\t[1] List Users.\n";
        cout << "\t[2] Add New User.\n";
        cout << "\t[3] Delete User.\n";
        cout << "\t[4] Update User.\n";
        cout << "\t[5] Find User.\n";
        cout << "\t[6] Main Menu.\n";
        cout << "===========================================\n";
        _PerformManageUsersMenuOption((enManageUsersMenuOptions)_ReadManageUsersMenuOption());
    }
};