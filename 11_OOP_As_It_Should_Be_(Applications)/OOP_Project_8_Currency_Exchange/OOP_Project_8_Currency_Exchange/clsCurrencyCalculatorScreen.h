#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"
#include "clsInputValidate.h"
#include <iomanip>
// Currencies List Screen Class
class clsCurrencyCalculatorScreen :protected clsScreen
{
private:
	// Method to read new rate
	static float _ReadAmount()
	{
		cout << "Enter Amount to Exchange: ";
		float amount = 0;
		amount = clsInputValidate::ReadNumber<short>();
		return amount;
	}
	// Method to read new rate
	static clsCurrency _GetCurrency(string message)
	{
		string currencyCode;
		cout << message << endl;
		currencyCode = clsInputValidate::ReadString();
		while (!clsCurrency::IsCurrencyExist(currencyCode))
		{
			cout << "\nCurrency is not found, choose another one: ";
			currencyCode = clsInputValidate::ReadString();
		}
		clsCurrency currency = clsCurrency::FindByCode(currencyCode);
		return currency;
	}
	// Method to display currency card line
	static void _PrintCurrencyCard(clsCurrency currency, string title = "Currency Card:")
	{
		cout << title << "\n";
		cout << "-------------------------------------------\n";
		cout << "Country    : " << currency.Country() << endl;
		cout << "Code       : " << currency.CurrencyCode() << endl;
		cout << "Name       : " << currency.CurrencyName() << endl;
		cout << "Rate(1$) = : " << currency.Rate() << endl;
		cout << "-------------------------------------------\n";
	}
	// Method to display currency card line with title
	static void _PrintCalculationsResults(float amount, clsCurrency currency1, clsCurrency currency2)
	{
		_PrintCurrencyCard(currency1, "Convert From:");
		float amountInUSD = currency1.ConvertToUSD(amount);
		cout << amount << " " << currency1.CurrencyCode() << " = " << amountInUSD << " USD\n";
		if (currency2.CurrencyCode() == "USD")
		{
			return;
		}
		cout << "\nConverting from USD to:\n";
		_PrintCurrencyCard(currency2, "To:");
		float AmountInCurrrency2 = currency1.ConvertToOtherCurrency(amount, currency2);
		cout << amount << " " << currency1.CurrencyCode()
			<< " = " << AmountInCurrrency2 << " " << currency2.CurrencyCode();
	}
public:
	// Method to find currency screen
	static void ShowCurrencyCalculatorScreen()
	{
		char answer = 'y';
		while (answer == 'y' || answer == 'Y')
		{
			system("cls");
			_DrawScreenHeader("Calculate Currency Screen");
			clsCurrency currencyFrom = _GetCurrency("\nPlease Enter Currency1 Code: ");
			clsCurrency currencyTo = _GetCurrency("\nPlease Enter Currency2 Code: ");
			float amount = _ReadAmount();
			_PrintCalculationsResults(amount, currencyFrom, currencyTo);
			cout << "\n\nDo you want to perform another calculation? y/n? ";
			cin >> answer;
		}
	}
};