#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsBankClient.h"
#include <iomanip>

// Delete client Screen Class
class clsDeleteClientScreen : protected clsScreen
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
    // Method to delete a client
    static void ShowDeleteClientScreen()
    {
        if (!CheckAccessRights(clsUser::enPermissions::pDeleteClient))
        {
            return; // This will exit the function and it will not continue
        }
        _DrawScreenHeader("Delete Client Screen");
        string accountNumber = "";
        cout << "Please enter Account Number to delete: ";
        accountNumber = clsInputValidate::ReadString();
        while (!clsBankClient::IsClientExist(accountNumber))
        {
            cout << "Client with Account Number " << accountNumber << " does not exist, Enter another Account Number: ";
            accountNumber = clsInputValidate::ReadString();
        }
        clsBankClient client1 = clsBankClient::Find(accountNumber);
        client1.Print();
        cout << "Are you sure you want to delete this client? (Y/N): ";
        char answer = 'N';
        cin >> answer;
        if (answer == 'Y' || answer == 'y')
        {
            if (client1.Delete())
            {
                cout << "Client deleted successfully! :-)\n";
            }
            else
            {
                cout << "Failed to delete client! :-(\n";
            }
        }
        else
        {
            cout << "Client deletion cancelled. :-)\n";
        }
    }
};