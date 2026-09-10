#pragma once
#include <iostream>
#include "clsUser.h"
#include "clsDate.h"
#include "Global.h"
using namespace std;
// Base screen class
class clsScreen
{
protected:
	// Method to draw the screen header
    static void _DrawScreenHeader(string title, string subTitle = "")
    {

        cout << "-------------------------------------------\n";
        cout << "\t " << title << endl;
        if (subTitle != "")
        {
            cout << "\t " << subTitle << endl;
        }
        cout << "-------------------------------------------\n";
        cout << "User: " << CurrentUser.UserName << endl;
        cout << "Date: " << clsDate::DateToString(clsDate()) << endl << endl;
    }
    // Method to check acsess rights
    static bool CheckAccessRights(clsUser::enPermissions permission)
    {
        if (!CurrentUser.CheckAcsessPermission(permission))
        {
            cout << "-------------------------------------------\n";
            cout << "\tAccess Denied! Contact your Admin" << endl;
            cout << "-------------------------------------------\n";
            return false;
        }
        else
        {
			return true;
        }
    }
};

