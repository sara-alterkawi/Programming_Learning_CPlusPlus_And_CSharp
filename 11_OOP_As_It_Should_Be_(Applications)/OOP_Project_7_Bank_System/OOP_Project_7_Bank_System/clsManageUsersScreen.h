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
    enum enManageUsersMenueOptions
    {
        eListUsers = 1,
        eAddNewUser = 2,
        eDeleteUser = 3,
        eUpdateUser = 4,
        eFindUser = 5,
        eMainMenue = 6
    };
	// Method to read and validate the Manage Users Menu option
    static short _ReadManageUsersMenueOption()
    {
        cout << "Choose what do you want to do? [1 to 6]? ";
        short choice = clsInputValidate::ReadShortNumberBetween(1, 6, "Enter Number between 1 to 6? ");
        return choice;
    }
	// Method to go back to the Manage Users Menu
    static void _GoBackToManageUsersMenue()
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
    static void _PerformManageUsersMenueOption(enManageUsersMenueOptions ManageUsersMenueOption)
    {
        switch (ManageUsersMenueOption)
        {
        case enManageUsersMenueOptions::eListUsers:
        {
            system("cls");
            _ShowListUsersScreen();
            _GoBackToManageUsersMenue();
            break;
        }
        case enManageUsersMenueOptions::eAddNewUser:
        {
            system("cls");
            _ShowAddNewUserScreen();
            _GoBackToManageUsersMenue();
            break;
        }
        case enManageUsersMenueOptions::eDeleteUser:
        {
            system("cls");
            _ShowDeleteUserScreen();
            _GoBackToManageUsersMenue();
            break;
        }
        case enManageUsersMenueOptions::eUpdateUser:
        {
            system("cls");
            _ShowUpdateUserScreen();
            _GoBackToManageUsersMenue();
            break;
        }
        case enManageUsersMenueOptions::eFindUser:
        {
            system("cls");

            _ShowFindUserScreen();
            _GoBackToManageUsersMenue();
            break;
        }
        case enManageUsersMenueOptions::eMainMenue:
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
        cout << "\t[6] Main Menue.\n";
        cout << "===========================================\n";
        _PerformManageUsersMenueOption((enManageUsersMenueOptions)_ReadManageUsersMenueOption());
    }
};