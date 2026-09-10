#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsUser.h"
#include "clsPerson.h"
#include "clsInputValidate.h"
#include <iomanip>
// Delete User Screen Class
class clsDeleteUserScreen : protected clsScreen
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
    // Method to delete a User
    static void ShowDeleteUserScreen()
    {
        _DrawScreenHeader("Delete User Screen");
        string userName = "";
        cout << "Please enter User to delete: ";
        userName = clsInputValidate::ReadString();
        while (!clsUser::IsUserExist(userName))
        {
            cout << "User " << userName << " does not exist, Enter another User: ";
            userName = clsInputValidate::ReadString();
        }
        clsUser user1 = clsUser::Find(userName);
        _PrintUser(user1);

        cout << "Are you sure you want to delete this User? (Y/N): ";
        char answer = 'N';
        cin >> answer;
        if (answer == 'Y' || answer == 'y')
        {
            if (user1.Delete())
            {
                cout << "User deleted successfully! :-)\n";
            }
            else
            {
                cout << "Failed to delete User! :-(\n";
            }
        }
        else
        {
            cout << "User deletion cancelled. :-)\n";
        }
    }
};