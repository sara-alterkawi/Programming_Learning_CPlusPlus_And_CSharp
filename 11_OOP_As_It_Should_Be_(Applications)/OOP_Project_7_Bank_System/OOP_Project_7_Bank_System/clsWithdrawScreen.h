#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsBankClient.h"
#include "clsInputValidate.h"
#include <iomanip>

// Deposit Screen Class
class clsWithdrawScreen : protected clsScreen
{
private:
    // Method to print client information
    static void _PrintClient(clsBankClient client)
    {
        cout << "Client Card    :" << endl;
        cout << "-------------------------------------------\n";
        cout << "FirstName      : " << client.FirstName << endl;
        cout << "LastName       : " << client.LastName << endl;
        cout << "Full Name      : " << client.FullName() << endl;
        cout << "Email          : " << client.Email << endl;
        cout << "Phone          : " << client.Phone << endl;
        cout << "Acc. Number    : " << client.AccountNumber() << endl;
        cout << "Password       : " << client.PinCode << endl;
        cout << "Balance        : " << client.AccountBalance << endl;
        cout << "-------------------------------------------\n";
    }
    // Method to read Account Number
    static string _ReadAccountNumber()
    {
        string accountNumber = "";
        cout << "Please enter AccountNumber? ";
        cin >> accountNumber;
        return accountNumber;
    }
public:
    // Method to update client information
    static void ShowWithdrawScreen()
    {
        _DrawScreenHeader("Withdraw Screen");
        string accountNumber = _ReadAccountNumber();
        while (!clsBankClient::IsClientExist(accountNumber))
        {
            cout << "\nClient with [" << accountNumber << "] does not exist.\n";
            accountNumber = _ReadAccountNumber();
        }
        clsBankClient client1 = clsBankClient::Find(accountNumber);
        _PrintClient(client1);
        double amount = 0;
        cout << "\nPlease enter Withdraw amount?\n ";
        amount = clsInputValidate::ReadDblNumber();
        cout << "Are you sure you want to perform this transaction? (Y/N):";
        char answer = 'n';
        cin >> answer;
        if (answer == 'Y' || answer == 'y')
        {
            client1.Withdraw(amount);
            cout << "\nAmount Withdraw Successfully.\n";
            cout << "New Balance Is: " << client1.AccountBalance;
        }
        else
        {
			cout << "\nAmount Withdraw Cancelled.\n";
        }
    }
};