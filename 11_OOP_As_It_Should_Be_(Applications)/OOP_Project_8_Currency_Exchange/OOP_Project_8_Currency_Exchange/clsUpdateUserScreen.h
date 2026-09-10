#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsPerson.h"
#include "clsUser.h"
#include "clsInputValidate.h"
#include <iomanip>
// Delete User Screen Class
class clsUpdateUserScreen : protected clsScreen
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
    // Method to print User information
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
    }public:
    // Method to update User information
    static void ShowUpdateUserScreen()
    {
        _DrawScreenHeader("Update User Screen");
        string userName = "";
        cout << "Please enter UserName: ";
        userName = clsInputValidate::ReadString();
        while (!clsUser::IsUserExist(userName))
        {
            cout << "User " << userName << " does not exist, Enter another one: ";
            userName = clsInputValidate::ReadString();
        }
        clsUser user1 = clsUser::Find(userName);
        _PrintUser(user1);
        cout << "\nAre you sure you want to update this User y/n? ";
        char answer = 'n';
        cin >> answer;
        if (answer == 'y' || answer == 'Y')
        {
            cout << "Update User Info\n";
            cout << "================================================\n";
            _ReadUserInfo(user1);
        }
        clsUser::enSaveResults SaveResult = user1.Save();
        switch (SaveResult)
        {
        case clsUser::enSaveResults::svSucceeded:
        {
            cout << "User info saved successfully! :-)\n";
            _PrintUser(user1);
            break;
        }
        case clsUser::enSaveResults::svFaildEmptyObject:
        {
            cout << "Failed to save User info because the object is empty! :-(\n";
            break;
        }
        }
    }
};