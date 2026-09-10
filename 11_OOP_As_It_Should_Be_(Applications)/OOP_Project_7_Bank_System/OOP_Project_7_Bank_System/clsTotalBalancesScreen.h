#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsBankClient.h"
#include <iomanip>
#include "clsUtil.h"
// Total Balances Screen Class
class clsTotalBalancesScreen : protected clsScreen
{
private:
	// Method to print a single client's balance line
    static void _PrintClientRecordBalanceLine(clsBankClient client)
    {
        cout << "| " << setw(15) << left << client.AccountNumber();
        cout << "| " << setw(40) << left << client.FullName();
        cout << "| " << setw(12) << left << client.AccountBalance;
    }
public:
	// Method to show the total balances screen
    static void ShowTotalBalancesScreen()
    {
        vector <clsBankClient> vClients = clsBankClient::GetClientsList();
        string title = "Balances List Screen";
        string subTitle = "(" + to_string(vClients.size()) + ") Client(s).";
        _DrawScreenHeader(title, subTitle);
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        cout << "| " << left << setw(15) << "Accout Number";
        cout << "| " << left << setw(40) << "Client Name";
        cout << "| " << left << setw(12) << "Balance\n";
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        double totalBalances = clsBankClient::GetTotalBalances();
        if (vClients.size() == 0)
        {
            cout << "No Clients Available In the System!";
        }
        else
        {
            for (clsBankClient client : vClients)
            {
                _PrintClientRecordBalanceLine(client);
                totalBalances += client.AccountBalance;
                cout << endl;
            }
        }
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        cout << setw(37) << left << "" << "\t    Total Balances = " << totalBalances << endl;
        cout << setw(37) << left << "" << "\t    ( " << clsUtil::NumberToText(totalBalances) << ")\n";
    }
};