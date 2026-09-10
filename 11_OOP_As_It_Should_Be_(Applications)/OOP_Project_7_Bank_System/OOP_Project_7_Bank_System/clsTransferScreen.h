#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsPerson.h"
#include "clsBankClient.h"
#include "clsInputValidate.h"
// Transfer Screen Class
class clsTransferScreen :protected clsScreen
{

private:
    // Method to print client information
    static void _PrintClient(clsBankClient client)
    {
        cout << "Client Card :" << endl;
        cout << "-------------------------------------------\n";
        cout << "Full Name   : " << client.FullName() << endl;
        cout << "Acc. Number : " << client.AccountNumber() << endl;
        cout << "Balance     : " << client.AccountBalance << endl;
        cout << "-------------------------------------------\n";
    }
	// Method to read and validate account number
    static string _ReadAccountNumber()
    {
        string accountNumber;
        cout << "\nPlease Enter Account Number to Transfer From: ";
        accountNumber = clsInputValidate::ReadString();
        while (!clsBankClient::IsClientExist(accountNumber))
        {
            cout << "\nAccount number is not found, choose another one: ";
            accountNumber = clsInputValidate::ReadString();
        }
        return accountNumber;
    }
	// Method to read and validate transfer amount
    static float ReadAmount(clsBankClient sourceClient)
    {
        float amount;
        cout << "\nEnter Transfer Amount? ";
        amount = clsInputValidate::ReadFloatNumber();
        while (amount > sourceClient.AccountBalance)
        {
            cout << "\nAmount Exceeds the available Balance, Enter another Amount ? ";
            amount = clsInputValidate::ReadDblNumber();
        }
        return amount;
    }
public:
	// Method to display transfer screen
    static void ShowTransferScreen()
    {
        _DrawScreenHeader("Transfer Screen");
        clsBankClient sourceClient = clsBankClient::Find(_ReadAccountNumber());
        _PrintClient(sourceClient);
        clsBankClient destinationClient = clsBankClient::Find(_ReadAccountNumber());
        _PrintClient(destinationClient);
        float amount = ReadAmount(sourceClient);
        cout << "\nAre you sure you want to perform this operation? y/n? ";
        char answer = 'n';
        cin >> answer;
        if (answer == 'Y' || answer == 'y')
        {
            if (sourceClient.Transfer(amount, destinationClient, CurrentUser.UserName))
            {
                cout << "\nTransfer done successfully\n";
            }
            else
            {
                cout << "\nTransfer Faild \n";
            }
        }
        _PrintClient(sourceClient);
        _PrintClient(destinationClient);
    }
};