#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsBankClient.h"
#include <iomanip>
// Client List Screen Class
class clsClientListScreen : protected clsScreen
{
private:
	// Method to print all clients
	static void _PrintClientRecordLine(clsBankClient client)
	{
		cout << "| " << setw(15) << left << client.AccountNumber();
		cout << "| " << setw(20) << left << client.FullName();
		cout << "| " << setw(12) << left << client.Phone;
		cout << "| " << setw(30) << left << client.Email;
		cout << "| " << setw(10) << left << client.PinCode;
		cout << "| " << setw(12) << left << client.AccountBalance;
	}
public:
    // Method to show all client list
	static void ShowClientsList()
    {
        if (!CheckAccessRights(clsUser::enPermissions::pListClients))
        {
            return; // This will exit the function and it will not continue
        }
        vector <clsBankClient> vClients = clsBankClient::GetClientsList();
		string title = "Client List Screen";
        string subTitle = "(" + to_string(vClients.size()) + ") Client(s).";
		_DrawScreenHeader(title, subTitle);
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        cout << "| " << setw(15) << left << "Accout Number";
        cout << "| " << setw(20) << left << "Client Name";
        cout << "| " << setw(12) << left << "Phone";
        cout << "| " << setw(30) << left << "Email";
        cout << "| " << setw(10) << left << "Pin Code";
        cout << "| " << setw(12) << left << "Balance" << endl;
        cout << "-----------------------------------------------------------------------------------------------------------\n";
        if (vClients.size() == 0)
            cout << "No Clients Available In the System!" << endl;
        else
            for (clsBankClient client : vClients)
            {
                _PrintClientRecordLine(client);
                cout << endl;
            }
        cout << "-----------------------------------------------------------------------------------------------------------\n";
    }
};