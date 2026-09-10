#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsBankClient.h"
#include <iomanip>

// Delete client Screen Class
class clsUpdateClientScreen : protected clsScreen
{
private:
    // Method to read client information from user input
    static void _ReadClientInfo(clsBankClient& client)
    {
        cout << "Please enter First Name: ";
        client.FirstName = clsInputValidate::ReadString();
        cout << "Please enter Last Name: ";
        client.LastName = clsInputValidate::ReadString();
        cout << "Please enter Email: ";
        client.Email = clsInputValidate::ReadString();
        cout << "Please enter Phone: ";
        client.Phone = clsInputValidate::ReadString();
        cout << "Please enter Pin Code: ";
        client.PinCode = clsInputValidate::ReadString();
        cout << "Please enter Account Balance: ";
        client.AccountBalance = clsInputValidate::ReadFloatNumber();
    }
    // Method to print client information
    static void _PrintClient(clsBankClient client)
    {
        cout << "Client Card:\n";
        cout << "-------------------------------------------\n";
        cout << "FirstName      : " << client.FirstName << endl;
        cout << "LastNam        : " << client.LastName << endl;
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
    static void ShowUpdateClientScreen()
    {
        if (!CheckAccessRights(clsUser::enPermissions::pUpdateClient))
        {
            return; // This will exit the function and it will not continue
        }
        _DrawScreenHeader("Update Client Screen");
        string accountNumber = "";
        cout << "Please enter Account Number: ";
        accountNumber = clsInputValidate::ReadString();
        while (!clsBankClient::IsClientExist(accountNumber))
        {
            cout << "Client with Account Number " << accountNumber << " does not exist, Enter another Account Number: ";
            accountNumber = clsInputValidate::ReadString();
        }
        clsBankClient client1 = clsBankClient::Find(accountNumber);
		_PrintClient(client1);
        cout << "\nAre you sure you want to update this client y/n? ";
        char answer = 'n';
        cin >> answer;
        if (answer == 'y' || answer == 'Y')
        {
            cout << "Update Client Info\n";
            cout << "================================================\n";
            _ReadClientInfo(client1);
        }
        clsBankClient::enSaveResults SaveResult = client1.Save();
        switch (SaveResult)
        {
        case clsBankClient::enSaveResults::svSucceeded:
        {
            cout << "Client info saved successfully! :-)\n";
            _PrintClient(client1);
            break;
        }
        case clsBankClient::enSaveResults::svFaildEmptyObject:
        {
            cout << "Failed to save client info because the object is empty! :-(\n";
            break;
        }
        }
    }
};