#pragma once
#include<iostream>
#include<string>
#include "clsString.h"
#include <vector>
#include <fstream>
using namespace std;
// Currency Class
class clsCurrency
{
private:
	// Enumeration for Mode
    enum enMode
    {
        EmptyMode = 0,
        UpdateMode = 1
    };
    enMode _Mode;
    string _Country;
    string _CurrencyCode;
    string _CurrencyName;
    float _Rate;
	// Method to convert line to Currency object
    static clsCurrency _ConvertLinetoCurrencyObject(string line, string seperator = "#//#")
    {
        vector<string> vCurrencyData;
        vCurrencyData = clsString::Split(line, seperator);
		string country = vCurrencyData[0];
		string currencyCode = vCurrencyData[1];
		string currencyName = vCurrencyData[2];
		float rate = stod(vCurrencyData[3]);
		return clsCurrency(enMode::UpdateMode, country, currencyCode, currencyName, rate);
    }
	// Method to convert Currency object to line
    static string _ConverCurrencyObjectToLine(clsCurrency currency, string seperator = "#//#")
    {
        string stCurrencyRecord = "";
        stCurrencyRecord += currency.Country() + seperator;
        stCurrencyRecord += currency.CurrencyCode() + seperator;
        stCurrencyRecord += currency.CurrencyName() + seperator;
        stCurrencyRecord += to_string(currency.Rate());
        return stCurrencyRecord;
    }
	// Method to load Currency data from file
    static  vector <clsCurrency> _LoadCurrencysDataFromFile()
    {
        vector <clsCurrency> vCurrencys;
        fstream myFile;
        myFile.open("Currencies.txt", ios::in);//read Mode
        if (myFile.is_open())
        {
            string line;
            while (getline(myFile, line))
            {
                clsCurrency Currency = _ConvertLinetoCurrencyObject(line);
                vCurrencys.push_back(Currency);
            }
            myFile.close();
        }
        return vCurrencys;
    }
	// Method to save Currency data to file
    static void _SaveCurrencyDataToFile(vector <clsCurrency> vCurrencys)
    {
        fstream myFile;
        myFile.open("Currencies.txt", ios::out);//overwrite
        string dataLine;
        if (myFile.is_open())
        {
            for (clsCurrency currency : vCurrencys)
            {
                dataLine = _ConverCurrencyObjectToLine(currency);
                myFile << dataLine << endl;
            }
            myFile.close();
        }
    }
	// Method to update Currency data
    void _Update()
    {
        vector <clsCurrency> vCurrencys;
        vCurrencys = _LoadCurrencysDataFromFile();
        for (clsCurrency& currency : vCurrencys)
        {
            if (currency.CurrencyCode() == CurrencyCode())
            {
                currency = *this;
                break;
            }
        }
        _SaveCurrencyDataToFile(vCurrencys);
    }
	// Method to get empty Currency object
    static clsCurrency _GetEmptyCurrencyObject()
    {
        return clsCurrency(enMode::EmptyMode, "", "", "", 0);
    }
public:
	// Parameterized Constructor
    clsCurrency(enMode mode, string country, string currencyCode, string currencyName, float rate)
    {
        _Mode = mode;
        _Country = country;
        _CurrencyCode = currencyCode;
        _CurrencyName = currencyName;
        _Rate = rate;
    }
	// Method to get all USD rates
    static vector <clsCurrency> GetAllUSDRates()
    {
        return _LoadCurrencysDataFromFile();
    }
	// Method to check if Currency object is empty
    bool IsEmpty()
    {
        return (_Mode == enMode::EmptyMode);
    }
	// Getter for Country
    string Country()
    {
        return _Country;
    }
	// Getter for CurrencyCode
    string CurrencyCode()
    {
        return _CurrencyCode;
    }
	// Getter for CurrencyName
    string CurrencyName()
    {
        return _CurrencyName;
    }
	// Method to update Rate
    void UpdateRate(float newRate)
    {
        _Rate = newRate;
        _Update();
    }
	// Getter for Rate
    float Rate()
    {
        return _Rate;
    }
	// Method to find Currency by code
    static clsCurrency FindByCode(string currencyCode)
    {
        currencyCode = clsString::UpperAllString(currencyCode);
        fstream myFile;
        myFile.open("Currencies.txt", ios::in); // Read Mode
        if (myFile.is_open())
        {
            string Line;
            while (getline(myFile, Line))            {
                clsCurrency currency = _ConvertLinetoCurrencyObject(Line);
                if (currency.CurrencyCode() == currencyCode)
                {
                    myFile.close();
                    return currency;
                }
            }
            myFile.close();
        }
        return _GetEmptyCurrencyObject();
    }
    // Method to find Currency by country
    static clsCurrency FindByCountry(string country)
    {
        country = clsString::UpperAllString(country);
        fstream myFile;
        myFile.open("Currencies.txt", ios::in); // Read Mode

        if (myFile.is_open())
        {
            string Line;
            while (getline(myFile, Line))
            {
                clsCurrency currency = _ConvertLinetoCurrencyObject(Line);
                if (clsString::UpperAllString(currency.Country()) == country)
                {
                    myFile.close();
                    return currency;
                }
            }
            myFile.close();
        }
        return _GetEmptyCurrencyObject();
    }
	// Method to check if Currency exists by code
    static bool IsCurrencyExist(string currencyCode)
    {
        clsCurrency C1 = clsCurrency::FindByCode(currencyCode);
        return (!C1.IsEmpty());

    }
	// Method to get list of all Currencies
    static vector <clsCurrency> GetCurrenciesList()
    {
        return _LoadCurrencysDataFromFile();
    }
	// Method to convert to USD
    float ConvertToUSD(float amount)
    {
        return (float)(amount / Rate());
    }
	// Method to convert to other currency
    float ConvertToOtherCurrency(float amount, clsCurrency currency2)
    {
        float AmountInUSD = ConvertToUSD(amount);

        if (currency2.CurrencyCode() == "USD")
        {
            return AmountInUSD;
        }

        return (float)(AmountInUSD * currency2.Rate());

    }
};