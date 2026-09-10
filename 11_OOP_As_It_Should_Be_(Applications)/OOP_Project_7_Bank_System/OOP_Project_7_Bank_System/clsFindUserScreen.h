#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsBankClient.h"
#include <iomanip>

// Find User Screen Class
class clsFindUserScreen : protected clsScreen
{
private:
    // Method to print User information
    static void _PrintUser(clsUser user)
    {
        cout << "User Card:\n";
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
public:
    // Method to update client information
    static void ShowFindUserScreen()
    {
        _DrawScreenHeader("Find User Screen");
        string userName = "";
        cout << "Please enter UserName: ";
        userName = clsInputValidate::ReadString();
        while (!clsUser::IsUserExist(userName))
        {
            cout << "\nUser is not found, choose another one: ";
            userName = clsInputValidate::ReadString();
        }
        clsUser user1 = clsUser::Find(userName);
        if (!user1.IsEmpty())
        {
            cout << "\nUser Found :-)\n";
        }
        else
        {
            cout << "\tUser Was not Found :-(\n";
        }
        _PrintUser(user1);
    }
};