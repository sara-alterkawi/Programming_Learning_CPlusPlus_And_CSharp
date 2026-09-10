#pragma once
#include <iostream>
#include <string>
#include "InterfaceCommunication.h"
using namespace std;
// Person Class
class clsPerson : public InterfaceCommunication
{
	// Data Members
private:
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;
	// Methods
public:
	// Constructor
    clsPerson(string firstName, string lastName, string email, string phone)
    {
        _FirstName = firstName;
        _LastName = lastName;
        _Email = email;
        _Phone = phone;
    }
    // Setter and Getter for FirstName
    // Property Set
    void SetFirstName(string firstName)
    {
        _FirstName = firstName;
    }
    // Property Get
    string GetFirstName()
    {
        return _FirstName;
    }
	// Property declaration
    __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
    // Setter and Getter for LastName
    // Property Set
    void SetLastName(string lastName)
    {
        _LastName = lastName;
    }
    // Property Get
    string GetLastName()
    {
        return _LastName;
    }
	// Property declaration
    __declspec(property(get = GetLastName, put = SetLastName)) string LastName;
    // Setter and Getter for Email
    //Property Set
    void SetEmail(string email)
    {
        _Email = email;
    }
    //Property Get
    string GetEmail()
    {
        return _Email;
    }
	// Property declaration
    __declspec(property(get = GetEmail, put = SetEmail)) string Email;
    // Setter and Getter for Phone
    //Property Set
    void SetPhone(string phone)
    {
        _Phone = phone;
    }
    //Property Get
    string GetPhone()
    {
        return _Phone;
    }
	// Property declaration
    __declspec(property(get = GetPhone, put = SetPhone)) string Phone;
    // Method to get Full Name
    string FullName()
    {
        return _FirstName + " " + _LastName;
    }
    // Method to print Person's information
    void Print()
    {
        cout << "Info:\n";
        cout << "-------------------------------------------\n";
        cout << "FirstName  : " << _FirstName << endl;
        cout << "LastName   : " << _LastName << endl;
        cout << "Full Nam   : " << FullName() << endl;
        cout << "Email      : " << _Email << endl;
        cout << "Phone      : " << _Phone << endl;
        cout << "-------------------------------------------\n";
    }
	// Implementing InterfaceCommunication methods
	// Override methods to send Email
    void SendEmail(string title, string body) override
    {
        cout << "Sending Email to " << _Email << "...\n";
        cout << "Title: " << title << endl;
        cout << "Body: " << body << endl;
        cout << "Email sent successfully!\n";
    }
	// Override methods to send Fax
    void SendFax(string title, string body) override
    {
        cout << "Sending Fax to " << _Phone << "...\n";
        cout << "Title: " << title << endl;
        cout << "Body: " << body << endl;
        cout << "Fax sent successfully!\n";
    }
	// Override methods to send SMS
    void SendSMS(string title, string body) override
    {
        cout << "Sending SMS to " << _Phone << "...\n";
        cout << "Title: " << title << endl;
        cout << "Body: " << body << endl;
        cout << "SMS sent successfully!\n";
	}
};