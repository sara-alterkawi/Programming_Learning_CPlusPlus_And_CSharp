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
#include "clsCurrenciesListScreen.h"
#include "clsFindCurrencyScreen.h"
#include "clsUpdateCurrencyRateScreen.h"
#include "clsCurrencyCalculatorScreen.h"
#include <iomanip>
// Currency Exchange Screen Class
class clsCurrencyExchangeScreen :protected clsScreen
{
private:
    // Enum for Currency Exchange menu options
    enum enCurrenciesMainMenuOptions
    {
        eListCurrencies = 1,
        eFindCurrency = 2,
        eUpdateCurrencyRate = 3,
        eCurrencyCalculator = 4,
        eShowMainMenu = 5
    }; 
	// Method to display Currencies List screen
    static void _ShowCurrenciesListScreen()
    {
        clsCurrenciesListScreen::ShowCurrenciesListScreen();
    }
	// Method to display find currency screen
    static void _ShowFindCurrencyScreen()
    {
        clsFindCurrencyScreen::ShowFindCurrencyScreen();
    }
	// Method to display update currency rate screen
    static void _ShowUpdateCurrencyRateScreen()
    {
        clsUpdateCurrencyRateScreen::ShowUpdateCurrencyRateScreen();
    }
	// Method to display currency calculator screen
    static void _ShowCurrencyCalculatorScreen()
    {
        clsCurrencyCalculatorScreen::ShowCurrencyCalculatorScreen();
    }
	// Method to go back to currencies menu
    static void _GoBackToCurrenciesMenu()
    {
        cout << "Press any key to go back to Currencies Menu...";
        system("pause>0");
        ShowTransactionsMenu();
    }
	// Method to read currencies main menu options
    static short _ReadCurrenciesMainMenuOptions()
    {
        cout << "Choose what do you want to do? [1 to 5]? ";
        short choice = clsInputValidate::ReadNumberBetween(1, 5, "Enter Number between 1 to 5? ");
        return choice;
    }
	// Method to perform currencies main menu options
    static void _PerformCurrenciesMainMenuOptions(enCurrenciesMainMenuOptions currenciesMainMenuOptions)
    {
        switch (currenciesMainMenuOptions)
        {
        case enCurrenciesMainMenuOptions::eListCurrencies:
        {
            system("cls");
            _ShowCurrenciesListScreen();
            _GoBackToCurrenciesMenu();
            break;
        }
        case enCurrenciesMainMenuOptions::eFindCurrency:
        {
            system("cls");
            _ShowFindCurrencyScreen();
            _GoBackToCurrenciesMenu();
            break;
        }
        case enCurrenciesMainMenuOptions::eUpdateCurrencyRate:
        {
            system("cls");
            _ShowUpdateCurrencyRateScreen();
            _GoBackToCurrenciesMenu();
            break;
        }
        case enCurrenciesMainMenuOptions::eCurrencyCalculator:
        {
            system("cls");
            _ShowCurrencyCalculatorScreen();
            _GoBackToCurrenciesMenu();
            break;
        }
        case enCurrenciesMainMenuOptions::eShowMainMenu:
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
        _DrawScreenHeader("Currency Exhange Menu Screen");
        cout << "===========================================\n";
        cout << "\t[1] List Currencies.\n";
        cout << "\t[2] Find Currency.\n";
        cout << "\t[3] Update Rate.\n";
        cout << "\t[4] Currency Calculator.\n";
        cout << "\t[5] Main Menu.\n";
        cout << "===========================================\n";
        _PerformCurrenciesMainMenuOptions((enCurrenciesMainMenuOptions)_ReadCurrenciesMainMenuOptions());
    }
};