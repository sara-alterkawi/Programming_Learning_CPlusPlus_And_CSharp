#pragma once
#include <iostream>
#include "clsScreen.h"
#include <iomanip>
#include <fstream>
#include "clsUser.h"
// Login Register Screen Class
class clsLoginRegisterScreen :protected clsScreen
{
private:
	// Method to print a login register record line
    static void PrintLoginRegisterRecordLine(clsUser::stLoginRegisterRecord LoginRegisterRecord)
    {
        cout << "| " << setw(20) << left << LoginRegisterRecord.DateTime;
        cout << "| " << setw(15) << left << LoginRegisterRecord.UserName;
        cout << "| " << setw(20) << left << LoginRegisterRecord.Password;
        cout << "| " << setw(12) << left << LoginRegisterRecord.Permissions;
    }
public:
	// Method to show the login register screen
    static void ShowLoginRegisterScreen()
    {
        if (!CheckAccessRights(clsUser::enPermissions::pShowLogInRegister))
        {
            return;
		}
        vector <clsUser::stLoginRegisterRecord> vLoginRegisterRecord = clsUser::GetLoginRegisterList();
        string title = "Login Register List Screen";
        string subTitle = "(" + to_string(vLoginRegisterRecord.size()) + ") Record(s).";
        _DrawScreenHeader(title, subTitle);
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        cout << "| " << left << setw(20) << "Date/Time";
        cout << "| " << left << setw(15) << "UserName";
        cout << "| " << left << setw(20) << "Password";
        cout << "| " << left << setw(12) << "Permissions\n";
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        if (vLoginRegisterRecord.size() == 0)
        {
            cout << "No Logins Available In the System!";
        }
        else
        {
            for (clsUser::stLoginRegisterRecord Record : vLoginRegisterRecord)
            {
                PrintLoginRegisterRecordLine(Record);
                cout << endl;
            }
        }
        cout << "-----------------------------------------------------------------------------------------------------------\n";
    }
};