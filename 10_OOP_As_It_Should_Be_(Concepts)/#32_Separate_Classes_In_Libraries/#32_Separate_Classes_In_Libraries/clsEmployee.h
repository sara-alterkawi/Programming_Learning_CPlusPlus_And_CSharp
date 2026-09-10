#pragma once
#include <iostream>
#include "clsPerson.h"
using namespace std;

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
