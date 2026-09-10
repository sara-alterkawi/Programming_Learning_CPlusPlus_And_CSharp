#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsUser.h"
#include "clsInputValidate.h"
#include <iomanip>
// Add user Screen Class
class clsAddNewUserScreen : protected clsScreen
{
private:
    // Method to read User information
    static void _ReadUserInfo(clsUser& user)
    {
        cout << "Please enter First Name: ";
        user.FirstName = clsInputValidate::ReadString();
        cout << "Please enter Last Name: ";
        user.LastName = clsInputValidate::ReadString();
        cout << "Please enter Email: ";
        user.Email = clsInputValidate::ReadString();
        cout << "Please enter Phone: ";
        user.Phone = clsInputValidate::ReadString();
        cout << "Please enter Password: ";
        user.Password = clsInputValidate::ReadString();
        cout << "\nEnter Permission: ";
        user.Permissions = _ReadPermissionsToSet();
    }
    // Method to print user information
    static void _PrintUser(clsUser user)
    {
        cout << "User Card:" << endl;
        cout << "-------------------------------------------\n";
        cout << "FirstName   : " << user.FirstName << endl;
        cout << "LastName    : " << user.LastName << endl;
        cout << "Full Name   : " << user.FullName() << endl;
        cout << "Email       : " << user.Email << endl;
        cout << "Phone       : " << user.Phone << endl;
        cout << "User Name   : " << user.UserName << endl;
        cout << "Password    : " << user.Password << endl;
        cout << "Permissions : " << user.Permissions << endl;
        cout << "-------------------------------------------\n";
    }
    // Method to read Permissions
    static short _ReadPermissionsToSet()
    {
        short permissions = 0;
        char answer = 'n';
        cout << "Do you want to give full access? y/n?";
        cin >> answer;
        if (answer == 'y' || answer == 'Y')
        {
            return -1;
        }
        cout << "Do you want to give access to :\n";
        cout << "Show Client List? y/n? ";
        cin >> answer;
        if (answer == 'y' || answer == 'Y')
        {
            permissions += clsUser::enPermissions::pListClients;
        }
        cout << "Add New Client? y/n? ";
        cin >> answer;
        if (answer == 'y' || answer == 'Y')
        {
            permissions += clsUser::enPermissions::pAddNewClient;
        }
        cout << "Delete Client? y/n? ";
        cin >> answer;
        if (answer == 'y' || answer == 'Y')
        {
            permissions += clsUser::enPermissions::pDeleteClient;
        }
        cout << "Update Client? y/n? ";
        cin >> answer;
        if (answer == 'y' || answer == 'Y')
        {
            permissions += clsUser::enPermissions::pUpdateClient;
        }
        cout << "Find Client? y/n? ";
        cin >> answer;
        if (answer == 'y' || answer == 'Y')
        {
            permissions += clsUser::enPermissions::pFindClient;
        }
        cout << "Transactions? y/n? ";
        cin >> answer;
        if (answer == 'y' || answer == 'Y')
        {
            permissions += clsUser::enPermissions::pTranactions;
        }
        cout << "Manage Users? y/n? ";
        cin >> answer;
        if (answer == 'y' || answer == 'Y')
        {
            permissions += clsUser::enPermissions::pManageUsers;
        }
		cout << "Show Log In Register? y/n? ";
		cin >> answer;
		if (answer == 'y' || answer == 'Y')
		{
			permissions += clsUser::enPermissions::pShowLogInRegister;
		}
        return permissions;
    }
public:
    // Method to add a new user
    static void ShowAddNewUserScreen()
    {
        _DrawScreenHeader("Add New user Screen");
        string userName = "";
        cout << "Please enter User Name: ";
        userName = clsInputValidate::ReadString();
        while (clsUser::IsUserExist(userName))
        {
            cout << "User " << userName << " already exists, Enter another one: ";
            userName = clsInputValidate::ReadString();
        }
        clsUser newUser = clsUser::GetAddNewUserObject(userName);
        _ReadUserInfo(newUser);
        clsUser::enSaveResults saveResult;
        saveResult = newUser.Save();
        switch (saveResult)
        {
        case clsUser::enSaveResults::svSucceeded:
        {
            cout << "New user info saved successfully! :-)\n";
            _PrintUser(newUser);
            break;
        }
        case clsUser::enSaveResults::svFaildEmptyObject:
        {
            cout << "Failed to save New user info because the object is empty! :-(\n";
            break;
        }
        case clsUser::enSaveResults::svFaildUserExists:
        {
            cout << "\nError User was not saved because User Name is used!\n";
            break;
        }
        }
    }
};