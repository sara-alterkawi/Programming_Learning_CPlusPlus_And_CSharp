#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"
#include <iomanip>
// Find Currency Screen Class
class clsFindCurrencyScreen :protected clsScreen
{
private:
	// Method to display currency card line
	static void _PrintCurrency(clsCurrency currency)
	{
		cout << "nCurrency Card:\n";
		cout << "-------------------------------------------\n";
		cout << "Country    : " << currency.Country() << endl;
		cout << "Code       : " << currency.CurrencyCode() << endl;
		cout << "Name       : " << currency.CurrencyName() << endl;
		cout << "Rate(1$) = : " << currency.Rate() << endl;
		cout << "-------------------------------------------\n";
	}
	// Method to print currency record line
	static void _ShowResults(clsCurrency currency)
	{
		if (!currency.IsEmpty())
		{
			cout << "\nCurrency Found :-)\n";
			_PrintCurrency(currency);
		}
		else
		{
			cout << "\nCurrency Was not Found :-(\n";
		}
	}
public:
	// Method to find currency screen
	static void ShowFindCurrencyScreen()
	{
		_DrawScreenHeader("Find Currency Screen");
		cout << "Find By: [1] Code or [2] Country ? ";
		short answer = 1;
		cin >> answer;
		if (answer == 1)
		{
			string currencyCode;
			cout << "\nPlease Enter CurrencyCode: ";
			currencyCode = clsInputValidate::ReadString();
			clsCurrency currency = clsCurrency::FindByCode(currencyCode);
			_ShowResults(currency);
		}
		else
		{
			string country;
			cout << "\nPlease Enter Country Name: ";
			country = clsInputValidate::ReadString();
			clsCurrency currency = clsCurrency::FindByCountry(country);
			_ShowResults(currency);
		}
	}
};