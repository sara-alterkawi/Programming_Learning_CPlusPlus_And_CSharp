#pragma once
#include <iostream>
using namespace std;

class clsPerson
{
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;
public:
	// Parameterized Constructor
	clsPerson(int ID, string FirstName, string LastName, string	Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}

	// Read Only Property
	int ID()
	{
		return _ID;
	}

	// Setter and Getter for FirstName
	// Setter
	void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
	// Getter
	string FirstName()
	{
		return _FirstName;
	}

	// Setter and Getter for LastName
	// Setter
	void setLastName(string LastName)
	{
		_LastName = LastName;
	}
	// Getter
	string LastName()
	{
		return _LastName;
	}

	// Setter and Getter for Email
	// Setter
	void setEmail(string Email)
	{
		_Email = Email;
	}
	// Getter
	string Email()
	{
		return _Email;
	}

	// Setter and Getter for Phone
	// Setter
	void setPhone(string Phone)
	{
		_Phone = Phone;
	}
	// Getter
	string Phone()
	{
		return _Phone;
	}

	// Method to get Full Name
	string FullName()
	{
		return _FirstName + " " + _LastName;
	}

	// Method to print Person's information
	void Print()
	{
		cout << "Info:" << endl;
		cout << "------------------------------------------" << endl;
		cout << "ID : " << _ID << endl;
		cout << "FirstName: " << _FirstName << endl;
		cout << "LastName : " << _LastName << endl;
		cout << "Full Name: " << FullName() << endl;
		cout << "Email : " << _Email << endl;
		cout << "Phone : " << _Phone << endl;
		cout << "------------------------------------------" << endl;
	}

	// Method to send an email
	void SendEmail(const string& Subject, const string& Body) {
		cout << "The following message sent successfully to email : " << _Email << endl;
		cout << "Subject :" << Subject << endl;
		cout << "Body :" << Body << endl << endl;
	}

	// Method to send an SMS
	void SendSMS(const string& TextMessage) {
		cout << "The following SMS sent successfully to phone : " << _Phone << endl;
		cout << TextMessage << endl;
	}
};
