#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"
#include "clsInputValidate.h"
#include <iomanip>
// Currency rate class
class clsUpdateCurrencyRateScreen :protected clsScreen
{
private:
	// Method to read new rate
	static float _ReadRate()
	{
		cout << "\nEnter New Rate: ";
		float newRate = 0;
		newRate = clsInputValidate::ReadNumber<short>();
		return newRate;
	}
	// Method to display currency card line
	static void _PrintCurrency(clsCurrency currency)
	{
		cout << "Currency Card:\n";
		cout << "-------------------------------------------\n";
		cout << "Country    : " << currency.Country() << endl;
		cout << "Code       : " << currency.CurrencyCode() << endl;
		cout << "Name       : " << currency.CurrencyName() << endl;
		cout << "Rate(1$) = : " << currency.Rate() << endl;
		cout << "-------------------------------------------\n";
	}
public:
	// Method to find currency screen
	static void ShowUpdateCurrencyRateScreen()
	{
		_DrawScreenHeader("Update  Currency Screen\n");
		string currencyCode = "";
		cout << "\nPlease Enter Currency Code: ";
		currencyCode = clsInputValidate::ReadString();
		while (!clsCurrency::IsCurrencyExist(currencyCode))
		{
			cout << "\nCurrency is not found, choose another one: ";
			currencyCode = clsInputValidate::ReadString();
		}
		clsCurrency currency = clsCurrency::FindByCode(currencyCode);
		_PrintCurrency(currency);
		cout << "Are you sure you want to update the rate of this Currency y/n? ";
		char answer = 'n';
		cin >> answer;
		if (answer == 'y' || answer == 'Y')
		{
			cout << "Update Currency Rate:\n";
			cout << "-------------------------------------------\n";
			currency.UpdateRate(_ReadRate());
			cout << "Currency Rate Updated Successfully :-)\n";
			_PrintCurrency(currency);
		}
	}
};