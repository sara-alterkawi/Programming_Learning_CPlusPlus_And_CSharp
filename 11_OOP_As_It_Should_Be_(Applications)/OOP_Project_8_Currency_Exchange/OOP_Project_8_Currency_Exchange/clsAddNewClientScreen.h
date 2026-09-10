#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsBankClient.h"
#include <iomanip>
// Add client Screen Class
class clsAddNewClientScreen : protected clsScreen
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
		client.AccountBalance = clsInputValidate::ReadNumber<short>();
    }
	// Method to print client information
    static void _PrintClient(clsBankClient client)
    {
        cout << "Client Card:\n";
        cout << "-------------------------------------------\n";
        cout << "FirstName   : " << client.FirstName << endl;
        cout << "LastName    : " << client.LastName << endl;
        cout << "Full Name   : " << client.FullName() << endl;
        cout << "Email       : " << client.Email << endl;
        cout << "Phone       : " << client.Phone << endl;
        cout << "Acc. Number : " << client.AccountNumber() << endl;
        cout << "Password    : " << client.PinCode << endl;
        cout << "Balance     : " << client.AccountBalance << endl;
        cout << "-------------------------------------------\n";
    }
public:
    // Method to add a new client
    static void ShowAddNewClientScreen()
    {
        if (!CheckAccessRights(clsUser::enPermissions::pAddNewClient))
        {
            return; // This will exit the function and it will not continue
        }
		_DrawScreenHeader("Add New Client Screen");
        string accountNumber = "";
        cout << "Please enter New Account Number: ";
        accountNumber = clsInputValidate::ReadString();
        while (clsBankClient::IsClientExist(accountNumber))
        {
            cout << "Client with Account Number " << accountNumber << " already exists, Enter another Account Number: ";
            accountNumber = clsInputValidate::ReadString();
        }
        clsBankClient newClient = clsBankClient::GetAddNewClientObject(accountNumber);
        _ReadClientInfo(newClient);
        clsBankClient::enSaveResults saveResult;
        saveResult = newClient.Save();
        switch (saveResult)
        {
        case clsBankClient::enSaveResults::svSucceeded:
        {
            cout << "New Client info saved successfully! :-)\n";
            newClient.Print();
            break;
        }
        case clsBankClient::enSaveResults::svFaildEmptyObject:
        {
            cout << "Failed to save New Client info because the object is empty! :-(\n";
            break;
        }
        case clsBankClient::enSaveResults::svFaildAccountNumberExists:
        {
            cout << "\nError account was not saved because account number is used!\n";
            break;
        }
        }
    }
};