#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsBankClient.h"
#include <iomanip>

// Find client Screen Class
class clsFindClientScreen : protected clsScreen
{
private:
    // Method to print client information
    static void _PrintClient(clsBankClient client)
    {
        cout << "Client Card:\n";
        cout << "-------------------------------------------\n";
        cout << "FirstName      : " << client.FirstName << endl;
        cout << "LastName        : " << client.LastName << endl;
        cout << "Full Name      : " << client.FullName() << endl;
        cout << "Email          : " << client.Email << endl;
        cout << "Phone          : " << client.Phone << endl;
        cout << "Acc. Number    : " << client.AccountNumber() << endl;
        cout << "Password       : " << client.PinCode << endl;
        cout << "Balance        : " << client.AccountBalance << endl;
        cout << "-------------------------------------------\n";
    }
public:
    // Method to update client information
    static void ShowFindClientScreen()
    {
        if (!CheckAccessRights(clsUser::enPermissions::pFindClient))
        {
            return; // This will exit the function and it will not continue
        }
        _DrawScreenHeader("Find Client Screen");
        string accountNumber = "";
        cout << "Please enter Account Number: ";
        accountNumber = clsInputValidate::ReadString();
        while (!clsBankClient::IsClientExist(accountNumber))
        {
            cout << "\nAccount number is not found, choose another one: ";
            accountNumber = clsInputValidate::ReadString();
        }
        clsBankClient client1 = clsBankClient::Find(accountNumber);
        if (!client1.IsEmpty())
        {
            cout << "\nClient Found :-)\n";
        }
        else
        {
            cout << "\nClient Was not Found :-(\n";
        }
        _PrintClient(client1);
    }
};