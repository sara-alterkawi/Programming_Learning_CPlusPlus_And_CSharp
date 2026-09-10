#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "clsPerson.h"
#include "clsString.h"
#include "clsDate.h"
#include <vector>
#include <fstream>
using namespace std;
// Bank Client Class
class clsBankClient : public clsPerson
{
	// Data Members
    private:
		// Enum to define the mode of the object
        enum enMode
        {
            EmptyMode = 0,
            UpdateMode = 1,
            AddNewMode = 2
        };
        enMode _Mode;
        string _AccountNumber;
        string _PinCode;
        float _AccountBalance;
		bool _MarkedForDelete = false;
        // Methods for File Operations
        static clsBankClient _ConvertLinetoClientObject(string line, string seperator = "#//#")
        {
            vector<string> vClientData;
            vClientData = clsString::Split(line, seperator);
            string firstName = vClientData[0];
            string lastName = vClientData[1];
            string email = vClientData[2];
            string phone = vClientData[3];
            string accountNumber = vClientData[4];
            string pinCode = vClientData[5];
            double accountBalance = stod(vClientData[6]);
            return clsBankClient(enMode::UpdateMode, firstName, lastName, email, phone, accountNumber, pinCode, accountBalance);
        }
        // Methods to convert a Client object to a line for the file
        static string _ConverClientObjectToLine(clsBankClient client, string seperator = "#//#")
        {
            string stClientRecord = "";
            stClientRecord += client.FirstName + seperator;
            stClientRecord += client.LastName + seperator;
            stClientRecord += client.Email + seperator;
            stClientRecord += client.Phone + seperator;
            stClientRecord += client.AccountNumber() + seperator;
            stClientRecord += client.PinCode + seperator;
            stClientRecord += to_string(client.AccountBalance);
            return stClientRecord;
        }
        // Methods to get an empty Client object
        static clsBankClient _GetEmptyClientObject()
        {
            return clsBankClient(enMode::EmptyMode, "", "", "", "", "", "", 0);
        }   
        // Methods to save all Clients data to the file
        static void _SaveCleintsDataToFile(vector <clsBankClient> vClients)
        {
            fstream myFile;
            myFile.open("Clients.txt", ios::out); // Overwrite
            if (myFile.is_open())
            {
                for (clsBankClient client : vClients)
                {
                    if (!client._MarkedForDelete)
                    {
                        myFile << _ConverClientObjectToLine(client) << endl;
                    }
                }
                myFile.close();
            }
        }    
        // Methods to load all Clients data from the file
        static  vector <clsBankClient> _LoadClientsDataFromFile()
        {
            vector <clsBankClient> vClients;
            fstream myFile;
            myFile.open("Clients.txt", ios::in);// Read Mode
            if (myFile.is_open())
            {
                string line;
                while (getline(myFile, line))
                {
                    clsBankClient Client = _ConvertLinetoClientObject(line);
                    vClients.push_back(Client);
                }
                myFile.close();
            }
            return vClients;
        }
        // Update the current Client object in the file
        void _Update()
        {
            vector <clsBankClient> _vClients;
            _vClients = _LoadClientsDataFromFile();
            for (clsBankClient& client : _vClients)
            {
                if (client.AccountNumber() == AccountNumber())
                {
                    client = *this;
                    break;
                }
            }
            _SaveCleintsDataToFile(_vClients);
        }
		// Add a data line to the file
        void _AddDataLineToFile(string  stDataLine)
        {
            fstream myFile;
            myFile.open("Clients.txt", ios::out | ios::app);
            if (myFile.is_open())
            {
                myFile << stDataLine << endl;
                myFile.close();
            }
        }
        // Add a new Client object to the file
        void _AddNew()
        {
            _AddDataLineToFile(_ConverClientObjectToLine(*this));
        }
		// Method to prepare transfer log record
        string _PrepareTransferLogRecord(double amount, clsBankClient& toClient, string userName, string separator = "#//#")
        {
            string transferLogRecord = "";
            transferLogRecord += clsDate::GetSystemDateToString() + separator;
            transferLogRecord += AccountNumber() + separator;
            transferLogRecord += toClient.AccountNumber() + separator;
            transferLogRecord += to_string(amount) + separator;
            transferLogRecord += to_string(AccountBalance) + separator;
            transferLogRecord += to_string(toClient.AccountBalance) + separator;
            transferLogRecord += userName;
            return transferLogRecord;
		}
		// Method to register transfer log
        void _RegisterTransferLog(double amount, clsBankClient& toClient, string userName)
        {
            string stDataLine = _PrepareTransferLogRecord(amount, toClient, userName);
            fstream myFile;
            myFile.open("TransferLog.txt", ios::out | ios::app);
            if (myFile.is_open())
            {
                myFile << stDataLine << endl;
                myFile.close();
            }
		}
		// Structure Declaration for Transfer Register Record
        struct stTransferRegisterRecord;
        // Method to Convert Login Register Line to Record
        static stTransferRegisterRecord _ConvertTransferRegisterLineToObject(string line, string seperator = "#//#")
        {
            clsBankClient::stTransferRegisterRecord record;
            vector <string> LoginRegisterDataLine = clsString::Split(line, seperator);
            record.DateTime = LoginRegisterDataLine[0];
            record.SourceAccountNumber = LoginRegisterDataLine[1];
            record.DestinationAccountNumber = LoginRegisterDataLine[2];
			record.Amount = stod(LoginRegisterDataLine[3]);
			record.srcBalanceAfter = stod(LoginRegisterDataLine[4]);
			record.destBalanceAfter = stod(LoginRegisterDataLine[5]);
			record.UserName = LoginRegisterDataLine[6];
            return record;
        }
public:
		// Constructor
        clsBankClient(enMode mode, string firstName, string lastName,
            string email, string phone, string accountNumber, string pinCode,
            float accountBalance) :
            clsPerson(firstName, lastName, email, phone)
        {
            _Mode = mode;
            _AccountNumber = accountNumber;
            _PinCode = pinCode;
            _AccountBalance = accountBalance;
        }
        // Structure to hold Transfer Register Record
        struct stTransferRegisterRecord
        {
            string DateTime;
            string SourceAccountNumber;
			string DestinationAccountNumber;
            double Amount;
			double srcBalanceAfter;
			double destBalanceAfter;
            string UserName;
        };
		// Method to check if the object is empty
        bool IsEmpty()
        {
            return (_Mode == enMode::EmptyMode);
        }
		// Getter for AccountNumber reading only
        string AccountNumber()
        {
            return _AccountNumber;
        }
		// Setter and Getter for PinCode
		// Property Set
        void SetPinCode(string PinCode)
        {
            _PinCode = PinCode;
        }
		// Property Get
        string GetPinCode()
        {
            return _PinCode;
        }
		// Property declaration
        __declspec(property(get = GetPinCode, put = SetPinCode)) string PinCode;
		// Setter and Getter for AccountBalance
		// Property Set
        void SetAccountBalance(float accountBalance)
        {
            _AccountBalance = accountBalance;
        }
		// Property Get
        float GetAccountBalance()
        {
            return _AccountBalance;
        }
		// Property declaration
        __declspec(property(get = GetAccountBalance, put = SetAccountBalance)) float AccountBalance;
        // Method to print Client's information
        void Print()
        {
            cout << "Client Card:\n";
            cout << "-------------------------------------------\n";
            cout << "FirstName  : " << FirstName << endl;
            cout << "LastName   : " << LastName << endl;
            cout << "Full Nam   : " << FullName() << endl;
            cout << "Email      : " << Email << endl;
            cout << "Phone      : " << Phone << endl;
            cout << "Acc.Number : " << _AccountNumber << endl;
            cout << "Password   : " << _PinCode << endl;
            cout << "Balance    : " << _AccountBalance << endl;
            cout << "-------------------------------------------\n";
        }
        // Static Method to find Client by Account Number
        static clsBankClient Find(string accountNumber)
        {
            fstream myFile;
            myFile.open("Clients.txt", ios::in); // Read Mode
            if (myFile.is_open())
            {
                string line;
                while (getline(myFile, line))
                {
                    clsBankClient Client = _ConvertLinetoClientObject(line);
                    if (Client.AccountNumber() == accountNumber)
                    {
                        myFile.close();
                        return Client;
                    }
                }
                myFile.close();
            }
            return _GetEmptyClientObject();
        }
		// Static Method to find Client by Account Number and Pin Code
        static clsBankClient Find(string accountNumber, string pinCode)
        {
            fstream myFile;
            myFile.open("Clients.txt", ios::in);// Read Mode
            if (myFile.is_open())
            {
                string line;
                while (getline(myFile, line))
                {
                    clsBankClient Client = _ConvertLinetoClientObject(line);
                    if (Client.AccountNumber() == accountNumber && Client.PinCode == pinCode)
                    {
                        myFile.close();
                        return Client;
                    }
                }
                myFile.close();
            }
            return _GetEmptyClientObject();
        }
        // Static Method to check if a Client exists by Account Number
        static bool IsClientExist(string accountNumber)
        {
            clsBankClient client1 = clsBankClient::Find(accountNumber);
            return (!client1.IsEmpty());
        }
		// Enum to define save results
        enum enSaveResults
        {
            svFaildEmptyObject = 0,
            svSucceeded = 1,
            svFaildAccountNumberExists = 2
        };
		// Method to save the Client object
        enSaveResults Save()
        {
            switch (_Mode)
            {
            case enMode::EmptyMode:
                return enSaveResults::svFaildEmptyObject;
            case enMode::UpdateMode:
            {
                _Update();
                return enSaveResults::svSucceeded;
                break;
            }
            case enMode::AddNewMode:
            {
                if (clsBankClient::IsClientExist(_AccountNumber))
                    return enSaveResults::svFaildAccountNumberExists;
                else
                {
                    _AddNew();
                    _Mode = enMode::UpdateMode;
                    return enSaveResults::svSucceeded;
                }
                break;
            }
            }
        }
		// Static Method to get a new Client object for adding
        static clsBankClient GetAddNewClientObject(string accountNumber)
        {
            return clsBankClient(enMode::AddNewMode, "", "", "", "", accountNumber, "", 0);
		}
		// Method to delete the Client object
        bool Delete()
        {
            if (_Mode == enMode::EmptyMode)
                return false;
            vector <clsBankClient> _vClients;
            _vClients = _LoadClientsDataFromFile();
            for (clsBankClient& client : _vClients)
            {
                if (client.AccountNumber() == _AccountNumber)
                {
                    client._MarkedForDelete = true;
                    break;
                }
            }
            _SaveCleintsDataToFile(_vClients);
			*this = _GetEmptyClientObject();
            return true;
		}
		// Static Method to get the list of all Clients
        static vector <clsBankClient> GetClientsList()
        {
            return _LoadClientsDataFromFile();
		}
        // Static Method to get the total balances of all Clients
        static double GetTotalBalances()
        {
            vector <clsBankClient> vClients = clsBankClient::GetClientsList();
            double totalBalances = 0;
            for (clsBankClient Client : vClients)
            {
                totalBalances += Client.AccountBalance;
            }
            return totalBalances;
        }
		// Method to deposit an amount to the account
        void Deposit(double amount)
        {
            _AccountBalance += amount;
            Save();
        }
		// Method to withdraw an amount from the account
        void Withdraw(double amount)
        {
            _AccountBalance -= amount;
            Save();
        }	
		// Method to transfer an amount to another account
        bool Transfer(double amount, clsBankClient& toClient, string userName)
        {
            if (amount > _AccountBalance)
            {
                cout << "Transfer Failed, Insufficient Balance." << endl;
				return false;
            }
			Withdraw(amount);
            toClient.Deposit(amount);
            _RegisterTransferLog(amount, toClient, userName);
            return true;
		}
        // Method to Get Transfer Register List
        static vector <stTransferRegisterRecord> GetTransferRegisterList()
        {
            vector <stTransferRegisterRecord> vTransferRegisterRecord;
            fstream myFile;
			myFile.open("TransferLog.txt", ios::in); // Read Mode
            if (myFile.is_open())
            {
                string line;
                stTransferRegisterRecord transferRegisterRecord;
                while (getline(myFile, line))
                {
                    transferRegisterRecord = _ConvertTransferRegisterLineToObject(line);
                    vTransferRegisterRecord.push_back(transferRegisterRecord);
                }
                myFile.close();
            }
            return vTransferRegisterRecord;
        }
};