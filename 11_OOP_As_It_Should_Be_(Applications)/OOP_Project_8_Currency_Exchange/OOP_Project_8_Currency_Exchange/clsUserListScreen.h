#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsUser.h"
#include <iomanip>
// User List Screen Class
class clsUserListScreen :protected clsScreen
{
private:
    // Method to print all users
    static void _PrintUserRecordLine(clsUser user)
    {
        cout << "| " << setw(15) << left << user.UserName;
        cout << "| " << setw(20) << left << user.FullName();
        cout << "| " << setw(12) << left << user.Phone;
        cout << "| " << setw(30) << left << user.Email;
        cout << "| " << setw(10) << left << user.Password;
        cout << "| " << setw(12) << left << user.Permissions;
    }
public:
    // Method to show all users list
    static void ShowUsersList()
	{
        vector <clsUser> vUsers = clsUser::GetUsersList();
        string title = "Users List Screen";
        string subTitle = "(" + to_string(vUsers.size()) + ") User(s).";
        _DrawScreenHeader(title, subTitle);
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        cout << "| " << setw(15) << left << "User Name";
        cout << "| " << setw(20) << left << "Full Name";
        cout << "| " << setw(12) << left << "Phone";
        cout << "| " << setw(30) << left << "Email";
        cout << "| " << setw(10) << left << "Password";
        cout << "| " << setw(10) << left << "Permissions\n";
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        if (vUsers.size() == 0)
        {
            cout << "No Users Available In the System!\n";
        }
        else
        {
            for (clsUser user : vUsers)
            {
                _PrintUserRecordLine(user);
                cout << endl;
            }
        }            
        cout << "-----------------------------------------------------------------------------------------------------------\n";
    }
};

