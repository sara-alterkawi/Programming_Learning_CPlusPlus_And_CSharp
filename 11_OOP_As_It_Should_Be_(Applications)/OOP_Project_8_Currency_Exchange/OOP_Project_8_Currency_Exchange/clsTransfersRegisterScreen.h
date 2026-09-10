#pragma once
#include <iostream>
#include "clsScreen.h"
#include <iomanip>
#include <fstream>
#include "clsBankClient.h"
// Login Register Screen Class
class clsTransfersRegisterScreen :protected clsScreen
{
private:
    // Method to print a transfer register record line
    static void PrintTransferRegisterRecordLine(clsBankClient::stTransferRegisterRecord transferRegisterRecord)
    {
        cout << "| " << setw(20) << left << transferRegisterRecord.DateTime;
        cout << "| " << setw(15) << left << transferRegisterRecord.SourceAccountNumber;
        cout << "| " << setw(15) << left << transferRegisterRecord.DestinationAccountNumber;
        cout << "| " << setw(8) << left << transferRegisterRecord.Amount;
        cout << "| " << setw(15) << left << transferRegisterRecord.srcBalanceAfter;
        cout << "| " << setw(15) << left << transferRegisterRecord.destBalanceAfter;
        cout << "| " << setw(15) << left << transferRegisterRecord.UserName;
    }
public:
    // Method to show the transfer register screen
    static void ShowTransferRegisterScreen()
    {
        vector <clsBankClient::stTransferRegisterRecord> vTransferRegisterRecord = clsBankClient::GetTransferRegisterList();
        string title = "Login Register List Screen";
        string subTitle = "(" + to_string(vTransferRegisterRecord.size()) + ") Record(s).";
        _DrawScreenHeader(title, subTitle);
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        cout << "| " << left << setw(20) << "Date/Time";
        cout << "| " << left << setw(15) << "S.Acc.Number";
        cout << "| " << left << setw(15) << "D.Acc.Number";
        cout << "| " << left << setw(8) << "Amount";
        cout << "| " << left << setw(15) << "S.Balance";
        cout << "| " << left << setw(15) << "D.Balance";
        cout << "| " << left << setw(15) << "UserName\n";
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        if (vTransferRegisterRecord.size() == 0)
        {
            cout << "No Logins Available In the System!";
        }
        else
        {
            for (clsBankClient::stTransferRegisterRecord record : vTransferRegisterRecord)
            {
                PrintTransferRegisterRecordLine(record);
                cout << endl;
            }
        }
        cout << "-----------------------------------------------------------------------------------------------------------\n";
    }
};