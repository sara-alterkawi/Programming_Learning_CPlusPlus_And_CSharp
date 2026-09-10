#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"
#include <iomanip>
// Currencies List Screen Class
class clsCurrenciesListScreen :protected clsScreen
{
	private:
	// Method to display currencies list screen
	static void _PrintCurrencyRecordLine(clsCurrency currency)
	{
		cout << "| " << left << setw(25) << currency.Country();
		cout << "| " << left << setw(15) << currency.CurrencyCode();
		cout << "| " << left << setw(40) << currency.CurrencyName();
		cout << "| " << left << setw(15) << currency.Rate();
	}
public:
	// Method to show currencies list screen
	static void ShowCurrenciesListScreen()
	{
		vector <clsCurrency> vCurrencies = clsCurrency::GetCurrenciesList();
		string title = "Currencies List Screen";
		string subTitle = "(" + to_string(vCurrencies.size()) + ") Currency.";
		_DrawScreenHeader(title, subTitle);
		cout << "---------------------------------------------------------------------------------------\n";
		cout << "| " << left << setw(25) << "Country";
		cout << "| " << left << setw(15) << "Currency Code";
		cout << "| " << left << setw(40) << "Currency Name";
		cout << "| " << left << setw(15) << "Rate";
		cout << "\n---------------------------------------------------------------------------------------\n";
		if (vCurrencies.size() == 0)
		{
			cout << "No Currencies Available In The System!\n";
		}
		for (clsCurrency currency : vCurrencies)
		{
			_PrintCurrencyRecordLine(currency);
			cout << endl;
		}
		cout << "---------------------------------------------------------------------------------------\n";
	}
};