#pragma once
#include <iostream>
#include <string>
#include "clsPerson.h"
#include "clsString.h"
#include "clsDate.h"
#include "clsUtil.h"
#include <vector>
#include <fstream>
using namespace std;
// User Class
class clsUser : public clsPerson
{
private:
	// Enum for User Mode
    enum enMode
    {
        EmptyMode = 0,
        UpdateMode = 1,
        AddNewMode = 2
    };
    enMode _Mode;
    string _UserName;
    string _Password;
    int _Permissions;
    bool _MarkedForDelete = false;
	// Method to Convert Line to User Object
    static clsUser _ConvertLineToUserObject(string line, string seperator = "#//#")
    {
        vector<string> vUserData;
        vUserData = clsString::Split(line, seperator);
        string firstName = vUserData[0];
		string lastName = vUserData[1];
		string email = vUserData[2];
		string phone = vUserData[3];
		string userName = vUserData[4];
		string password = clsUtil::DecryptText(vUserData[5]);
		string permissions = vUserData[6];
        return clsUser(enMode::UpdateMode, firstName, lastName, email, phone, userName, password, stoi(permissions));
	}        
	// Method to Convert User Object to Line
    static string _ConverUserObjectToLine(clsUser user, string seperator = "#//#")
    {
        string userRecord = "";
        userRecord += user.FirstName + seperator;
        userRecord += user.LastName + seperator;
        userRecord += user.Email + seperator;
        userRecord += user.Phone + seperator;
        userRecord += user.UserName + seperator;
        userRecord += clsUtil::EncryptText(user.Password) + seperator;
        userRecord += to_string(user.Permissions);
        return userRecord;
    }
	// Method to Get Empty User Object
    static clsUser _GetEmptyUserObject()
    {
        return clsUser(enMode::EmptyMode, "", "", "", "", "", "", 0);
    }
	// Method to Save Users Data to File
    static void _SaveUsersDataToFile(vector <clsUser> vUsers)
    {
        fstream myFile;
        myFile.open("Users.txt", ios::out); // Overwrite
        string DataLine;
        if (myFile.is_open())
        {
            for (clsUser user : vUsers)
            {
                if (user.MarkedForDeleted() == false)
                {
                    // We only write records that are not marked for delete.  
                    DataLine = _ConverUserObjectToLine(user);
                    myFile << DataLine << endl;
                }
            }
            myFile.close();
        }
    }
	// Method to Load Users Data from File
    static  vector <clsUser> _LoadUsersDataFromFile()
    {
        vector <clsUser> vUsers;
        fstream myFile;
        myFile.open("Users.txt", ios::in);//read Mode
        if (myFile.is_open())
        {
            string line;
            while (getline(myFile, line))
            {
                clsUser user = _ConvertLineToUserObject(line);
                vUsers.push_back(user);
            }
            myFile.close();
        }
        return vUsers;
    }
	// Method to Update User Data
    void _Update()
    {
        vector <clsUser> _vUsers;
        _vUsers = _LoadUsersDataFromFile();
        for (clsUser& user : _vUsers)
        {
            if (user.UserName == UserName)
            {
                user = *this;
                break;
            }
        }
        _SaveUsersDataToFile(_vUsers);
    }
	// Method to Append Data Line to File
    void _AddDataLineToFile(string  stDataLine)
    {
        fstream myFile;
        myFile.open("Users.txt", ios::out | ios::app);
        if (myFile.is_open())
        {
            myFile << stDataLine << endl;
            myFile.close();
        }
    }
    // Method to Add New User Data
    void _AddNew()
    {
        _AddDataLineToFile(_ConverUserObjectToLine(*this));
    }
	// Method to Prepare Login Record
    string _PrepareLogInRecord(string seperator = "#//#")
    {
		string loginRecord = "";
		loginRecord += clsDate::GetSystemDateToString() + seperator;
        loginRecord += _UserName + seperator;
        loginRecord += clsUtil::EncryptText(_Password) + seperator;
		loginRecord += to_string(_Permissions);
		return loginRecord;
	}
    struct stLoginRegisterRecord;
    // Method to Convert Login Register Line to Record
    static stLoginRegisterRecord _ConvertLoginRegisterLineToObject(string line, string seperator = "#//#")
    {
        clsUser::stLoginRegisterRecord record;
        vector <string> LoginRegisterDataLine = clsString::Split(line, seperator);
        record.DateTime = LoginRegisterDataLine[0];
        record.UserName = LoginRegisterDataLine[1];
        record.Password = clsUtil::DecryptText(LoginRegisterDataLine[2]);
        record.Permissions = stoi(LoginRegisterDataLine[3]);
        return record;
    }
public:
    // Enum to define Permissions
    enum enPermissions
    {
        eAll = -1,
        pListClients = 1,
        pAddNewClient = 2,
        pDeleteClient = 4,
        pUpdateClient = 8,
        pFindClient = 16,
        pTranactions = 32,
        pManageUsers = 64,
        pShowLogInRegister = 128
    };
    // Structure to hold Login Register Record
    struct stLoginRegisterRecord
    {
        string DateTime;
        string UserName;
        string Password;
        int Permissions;
    };
    // Constructor
    clsUser(enMode mode, string firstName, string lastName,
        string email, string phone, string userName, string password,
        int permissions) :
        clsPerson(firstName, lastName, email, phone)
    {
        _Mode = mode;
        _UserName = userName;
        _Password = password;
        _Permissions = permissions;
    }
	// Check if User Object is Empty
    bool IsEmpty()
    {
        return (_Mode == enMode::EmptyMode);
    }
	// Getter and Setter for UserName
	// Property Get
    string GetUserName()
    {
        return _UserName;
    }
	// Property Set
    void SetUserName(string userName)
    {
        _UserName = userName;
    }
	// Property declaration
    __declspec(property(get = GetUserName, put = SetUserName)) string UserName;
	// Getter and Setter for Password
	// Property Set
    void SetPassword(string password)
    {
        _Password = password;
    }
	// Property Get
    string GetPassword()
    {
        return _Password;
    }
	// Property declaration
    __declspec(property(get = GetPassword, put = SetPassword)) string Password;
	// Getter and Setter for Permissions
	// Property Set
    void SetPermissions(int permissions)
    {
        _Permissions = permissions;
    }
	// Property Get
    int GetPermissions()
    {
        return _Permissions;
    }
	// Property declaration
    __declspec(property(get = GetPermissions, put = SetPermissions)) int Permissions;
    // Method to Find User by UserName
    static clsUser Find(string userName)
    {
        fstream myFile;
        myFile.open("Users.txt", ios::in); // Read Mode

        if (myFile.is_open())
        {
            string line;
            while (getline(myFile, line))
            {
                clsUser user = _ConvertLineToUserObject(line);
                if (user.UserName == userName)
                {
                    myFile.close();
                    return user;
                }
            }
            myFile.close();
        }
        return _GetEmptyUserObject();
    }
	// Method to Find User by UserName and Password
    static clsUser Find(string userName, string password)
    {
        fstream myFile;
        myFile.open("Users.txt", ios::in); // Read Mode

        if (myFile.is_open())
        {
            string line;
            while (getline(myFile, line))
            {
                clsUser user = _ConvertLineToUserObject(line);
                if (user.UserName == userName && user.Password == password)
                {
                    myFile.close();
                    return user;
                }
            }
            myFile.close();
        }
        return _GetEmptyUserObject();
    }
    // Method to Check if User Exists
    static bool IsUserExist(string userName)
    {
        clsUser user = clsUser::Find(userName);
        return (!user.IsEmpty());
    }
    // Enumeration for Save Results
    enum enSaveResults
    {
        svFaildEmptyObject = 0,
        svSucceeded = 1,
        svFaildUserExists = 2
    };
	// Method to Save User Data
    enSaveResults Save()
    {
        switch (_Mode)
        {
        case enMode::EmptyMode:
        {
            if (IsEmpty())
            {
				return enSaveResults::svFaildEmptyObject;
            }
            break;
        }
        case enMode::UpdateMode:
        {
            _Update();
            return enSaveResults::svSucceeded;
            break;
        }            
        case enMode::AddNewMode:
        {
            // This will add new record to file or database
            if (clsUser::IsUserExist(_UserName))
            {
                return enSaveResults::svFaildUserExists;
            }
            else
            {
                _AddNew();
                // We need to set the mode to update after add new
                _Mode = enMode::UpdateMode;
                return enSaveResults::svSucceeded;
            }
            break;
        }
        }
    }
    // Method to Get New User Object
    static clsUser GetAddNewUserObject(string userName)
    {
        return clsUser(enMode::AddNewMode, "", "", "", "", userName, "", 0);
    }
	// Method to Delete User
    bool Delete()
    {
        vector <clsUser> _vUsers;
        _vUsers = _LoadUsersDataFromFile();
        for (clsUser& user : _vUsers)
        {
            if (user.UserName == _UserName)
            {
                user._MarkedForDelete = true;
                break;
            }
        }
        _SaveUsersDataToFile(_vUsers);
        *this = _GetEmptyUserObject();
        return true;
    }
	// Method to Get List of All Users
    static vector <clsUser> GetUsersList()
    {
        return _LoadUsersDataFromFile();
    }
    // Method to check if User is Marked for Deletion
    bool MarkedForDeleted()
    {
        return _MarkedForDelete;
    }
    // Method to check if user has acsess permission
    bool CheckAcsessPermission(enPermissions permissions)
    {
        if (this->Permissions == enPermissions::eAll)
        {
			return true;
        }
        if ((permissions & this->Permissions) == permissions)
        {
            return true;
        }
        else
        {
			return false;
        }
    }
	// Method to register user login
    void RegisterLogin()
    {
        string stDataLine = _PrepareLogInRecord();
        fstream myFile;
        myFile.open("LoginRegister.txt", ios::out | ios::app);
        if (myFile.is_open())
        {
            myFile << stDataLine << endl;
            myFile.close();
        }
	}   
    // Method to Get Login Register List
    static vector <stLoginRegisterRecord> GetLoginRegisterList()
    {
        vector <stLoginRegisterRecord> vLoginRegisterRecord;
        fstream myFile;
        myFile.open("LoginRegister.txt", ios::in);//read Mode
        if (myFile.is_open())
        {
            string line;
            stLoginRegisterRecord loginRegisterRecord;
            while (getline(myFile, line))
            {
                loginRegisterRecord = _ConvertLoginRegisterLineToObject(line);
                vLoginRegisterRecord.push_back(loginRegisterRecord);
            }
            myFile.close();
        }
        return vLoginRegisterRecord;
	}
};