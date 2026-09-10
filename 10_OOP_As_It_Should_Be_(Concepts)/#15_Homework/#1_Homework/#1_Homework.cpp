// Program to demonstrate a simple Person class with attributes and methods
// for sending email and SMS messages.
// ________________________________________
// Info		:
// ________________________________________
// ID		: 10
// Name		: Sara Alterkawi
// Email	: sara.omar.alterkawi@gmail.com
// Phone	: 0706357155
// ________________________________________
// The following message sent successfully to email : sara.omar.alterkawi@gmail.com
// Subject	: Hi
// Body		: How are you ?
// ________________________________________
// The following SMS sent successfully to phone : 0706357155
// How are you ?
// ________________________________________

#include <iostream>
#include <string>
using namespace std;
// Person class definition
class clsPerson
{
private:
	// Attributes
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:
	// Constructor
	clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}
	// Read-only properties
	int ID()
	{
		return _ID;
	}

	// Properties Setters and Getters for FirstName
	// Setter
	void FirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
	// Getter
	string FirstName()
	{
		return _FirstName;
	}

	// Properties Setters and Getters for LastName
	// Setter
	void LastName(string LastName)
	{
		_LastName = LastName;
	}
	// Getter
	string LastName()
	{
		return _LastName;
	}

	// Method to get full name
	string FullName() {
		return _FirstName + " " + _LastName;
	}

	// Properties Setters and Getters for Email
	// Setter
	void Email(string Email)
	{
		_Email = Email;
	}
	// Getter
	string Email()
	{
		return _Email;
	}

	// Properties Setters and Getters for Phone
	// Setter
	void Phone(string Phone)
	{
		_Phone = Phone;
	}
	// Getter
	string Phone()
	{
		return _Phone;
	}

	// Method to print person's information
	void Print() {
		cout << "Info:" << endl;
		cout << "___________________" << endl;
		cout << "ID : " << _ID << endl;
		cout << "FirstName: " << _FirstName << endl;
		cout << "LastName : " << _LastName << endl;
		cout << "Full Name: " << FullName() << endl;
		cout << "Email : " << _Email << endl;
		cout << "Phone : " << _Phone << endl;
		cout << "___________________" << endl;
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

// Main function
int main() {
	// Create a Person object
	clsPerson Person1(10, "Sara", "Alterkawi", "sara.omar.alterkawi@gmail.com", "0706357155");
	// Display person's information
	Person1.Print();
	// Send an email
	Person1.SendEmail("Hi", "How are you ?");
	// Send an SMS
	Person1.SendSMS("How are you ?");
	return 0;
}