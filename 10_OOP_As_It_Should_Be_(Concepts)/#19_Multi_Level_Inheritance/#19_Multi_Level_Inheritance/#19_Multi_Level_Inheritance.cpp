// OOP_Project_3_Employee.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Define a class named ClsEmployee to represent an employee in a company. The class should have private attributes for the employee's ID, first name, last name, email, phone number, job title, department, and salary. Implement public methods to set and get each attribute, as well as a method to calculate the employee's full name by concatenating the first and last names. Additionally, include a method to send an email to the employee (simulated by printing a message to the console) and a method to send an SMS (also simulated). Finally, create a method to print all the employee's information in a formatted manner.
// Implement a main function to create an instance of the ClsEmployee class, set its attributes, and demonstrate the functionality of the methods by printing the employee's information, sending an email, and sending an SMS.
// ________________________________________
// Employee Info		:
// ________________________________________
// ID		: 10
// Name		: Sara Alterkawi
// Email	: sara.omar.alterkawi@gmail.com
// Phone	: 0706357155
// Title	: Software Engineer
// Department	: IT
// Salary	: 6000
// Main Programming Language	: Java
// ________________________________________
// The following message sent successfully to email : sara.omar.alterkawi@gmail.com
// Subject	: Hi
// Body		: How are you ?
// ________________________________________
// The following SMS sent successfully to phone : 0706357155
// How are you ?
// ________________________________________

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
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

// Define the ClsEmployee class that inherits from ClsPerson
class clsEmployee : public clsPerson
{
	// Private attributes
private:
	string _Title;
	string _Department;
	string _Salary;

	// Public methods
public:
	// Parameterized Constructor
	clsEmployee(int ID, string FirstName, string LastName, string
		Email, string Phone, string Title, string Department, string Salary)
		: clsPerson(ID, FirstName, LastName, Email, Phone)
	{
		_Title = Title;
		_Department = Department;
		_Salary = Salary;
	}

	// Setter and Getter for Title
	// Setter
	void setTitle(string Title)
	{
		_Title = Title;
	}
	// Getter
	string Title()
	{
		return _Title;
	}

	// Setter and Getter for Department
	// Setter
	void setDepartment(string Department)
	{
		_Department = Department;
	}
	// Getter
	string Department()
	{
		return _Department;
	}

	// Setter and Getter for Salary
	// Setter
	void setSalary(string Salary)
	{
		_Salary = Salary;
	}
	// Getter
	string Salary()
	{
		return _Salary;
	}

	// Override Print method to include Employee's information
	void Print()
	{
		cout << "Employee Info:" << endl;
		cout << "------------------------------------------" << endl;
		cout << "ID : " << ID() << endl;
		cout << "Name : " << FullName() << endl;
		cout << "Email : " << Email() << endl;
		cout << "Phone : " << Phone() << endl;
		cout << "Title : " << _Title << endl;
		cout << "Department : " << _Department << endl;
		cout << "Salary : " << _Salary << endl;
		cout << "------------------------------------------" << endl;
	}
};

// Define clsDeveloper class that inherits from clsEmployee
class clsDeveloper : public clsEmployee
{
	// Private attributes
private:
	string _MainProgrammingLanguage;
	// Public methods
public:
	// Parameterized Constructor
	clsDeveloper(int ID, string FirstName, string LastName, string
		Email, string Phone, string Title, string Department, string Salary,
		string MainProgrammingLanguage)
		: clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Department, Salary)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}

	// Setter and Getter for MainProgrammingLanguage
	// Setter
	void setMainProgrammingLanguage(string MainProgrammingLanguage)
	{
		_MainProgrammingLanguage = MainProgrammingLanguage;
	}
	// Getter
	string MainProgrammingLanguage()
	{
		return _MainProgrammingLanguage;
	}

	// Override Print method to include Programmer's information
	void Print()
	{
		cout << "Employee Info:" << endl;
		cout << "------------------------------------------" << endl;
		cout << "ID : " << ID() << endl;
		cout << "Name : " << FullName() << endl;
		cout << "Email : " << Email() << endl;
		cout << "Phone : " << Phone() << endl;
		cout << "Title : " << Title << endl;
		cout << "Department : " << Department << endl;
		cout << "Salary : " << Salary << endl;
		cout << "Main Programming Language : " << _MainProgrammingLanguage << endl;
		cout << "------------------------------------------" << endl;
	}
};


int main()
{
	clsDeveloper Developer1(10, "Sara", "Alterkawi", "sara.omar.alterkawi@gmail.com", "0706357155", "Software Engineer", "IT", "6500$", "Java");
	Developer1.Print();
	Developer1.SendEmail("Hi Developer", "How are you?");
	Developer1.Print();
	return 0;
}