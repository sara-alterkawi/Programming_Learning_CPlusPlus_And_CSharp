#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsBankClient.h"
#include "clsInputValidate.h"
#include "clsDepositScreen.h"
#include "clsWithdrawScreen.h"
#include "clsTotalBalancesScreen.h"
#include "clsTransferScreen.h"
#include "clsTransfersRegisterScreen.h"
#include <iomanip>

// Transaction Screen Class
class clsTransactionsScreen :protected clsScreen
{
private:
	// Enum for transactions menu options
    enum enTransactionsMenueOptions
    {
        eDeposit = 1,
        eWithdraw = 2,
        eShowTotalBalance = 3,
        eTransfer = 4,
        eTransferRegister = 5,
		eShowMainMenue = 6
	};
	// Method to display deposit screen
    static void _ShowDepositScreen()
    {
        clsDepositScreen::ShowDepositScreen();
    }
    // Method to display Withdraw screen 
    static void _ShowWithdrawScreen()
    {
        clsWithdrawScreen::ShowWithdrawScreen();
    }
	// Method to display total balances screen
    static void _ShowTotalBalancesScreen()
    {
        clsTotalBalancesScreen::ShowTotalBalancesScreen();
    }
	// Method to display transfer screen
    static void _ShowTransferScreen()
    {
        clsTransferScreen::ShowTransferScreen();
	}
	// Method to display tranfers register screen
    static void _ShowTransfersRegisterScreen()
    {
        clsTransfersRegisterScreen::ShowTransferRegisterScreen();
	}
    
    // Method to go back to transactions menu
    static void _GoBackToTransactionsMenue()
    {
        cout << "Press any key to go back to Transactions Menu...";
        system("pause>0");
        ShowTransactionsMenu();
    }
	// Method to read and validate the transactions menu option
    static short _ReadTransactionsMenueOption()
    {
        cout << "Choose what do you want to do? [1 to 6? ";
        short choice = clsInputValidate::ReadShortNumberBetween(1, 6, "Enter Number between 1 to 6? ");
        return choice;
    }
	// Method to perform the selected transactions menu option
    static void _PerformTransactionsMenueOption(enTransactionsMenueOptions TransactionsMenueOption)
    {
        switch (TransactionsMenueOption)
        {
        case enTransactionsMenueOptions::eDeposit:
        {
            system("cls");
            _ShowDepositScreen();
            _GoBackToTransactionsMenue();
            break;
        }
        case enTransactionsMenueOptions::eWithdraw:
        {
            system("cls");
            _ShowWithdrawScreen();
            _GoBackToTransactionsMenue();
            break;
        }
        case enTransactionsMenueOptions::eShowTotalBalance:
        {
            system("cls");
            _ShowTotalBalancesScreen();
            _GoBackToTransactionsMenue();
            break;
        }
        case enTransactionsMenueOptions::eTransfer:
        {
            system("cls");
            _ShowTransferScreen();
            _GoBackToTransactionsMenue();
            break;
		}
        case enTransactionsMenueOptions::eTransferRegister:
        {
            system("cls");
            _ShowTransfersRegisterScreen();
            _GoBackToTransactionsMenue();
            break;
		}
        case enTransactionsMenueOptions::eShowMainMenue:
        {
            //do nothing here the main screen will handle it :-) ;
        }
    }
}
public:
    // Method to show transactions menu
    static void ShowTransactionsMenu()
    {      
        if (!CheckAccessRights(clsUser::enPermissions::pTranactions))
        {
            return; // This will exit the function and it will not continue
        }
        system("cls");
        _DrawScreenHeader("Transactions Screen");
        cout << "===========================================\n";
        cout << "\t[1] Deposit.\n";
        cout << "\t[2] Withdraw.\n";
        cout << "\t[3] Show Total Balances.\n";
        cout << "\t[4] Transfer.\n";
        cout << "\t[5] Transfer Register.\n";
        cout << "\t[6] Main Menue.\n";
        cout << "===========================================\n";
        _PerformTransactionsMenueOption((enTransactionsMenueOptions)_ReadTransactionsMenueOption());
	}
};

