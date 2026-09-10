// Program to demonstrate the use of constructors in C++
#include <iostream>
using namespace std;
// Address Class
class clsAddress
{
	// Private Members
private:
	string _AddressLine1;
	string _AddressLine2;
	string _POBox;
	string _City;

	// Public Members
public:
	// Constructor
	clsAddress(string AddressLine1, string AddressLine2, string
		POBox, string City)
	{
		_AddressLine1 = AddressLine1;
		_AddressLine2 = AddressLine2;
		_POBox = POBox;
		_City = City;
	}

	/* Copy Constructor
	clsAddress(clsAddress& Old_Address)
	{
		_AddressLine1 = Old_Address.AddressLine1();
		_AddressLine2 = Old_Address.AddressLine2();
		_POBox = Old_Address.POBox();
		_City = Old_Address.City();
	}
	*/

	// Setters and Getters for AddressLine1
	// Setter
	void SetAddressLine1(string AddressLine1)
	{
		_AddressLine1 = AddressLine1;
	}
	// Getter
	string AddressLine1()
	{
		return _AddressLine1;
	}

	// Setter and Getter for AddressLine2
	// Setter
	void SetAddressLine2(string AddressLine2)
	{
		_AddressLine2 = AddressLine2;
	}
	// Getter
	string AddressLine2()
	{
		return _AddressLine2;
	}

	// Setter and Getter for POBox
	// Setter
	void SetPOBox(string POBox)
	{
		_POBox = POBox;
	}
	// Getter
	string POBox()
	{
		return _POBox;
	}

	// Setter and Getter for City
	// Setter
	void SetCity(string City)
	{
		_City = City;
	}
	// Getter
	string City()
	{
		return _City;
	}

	// Print Address Details
	void Print()
	{
		cout << "\nAddress Details:\n";
		cout << "------------------------";
		cout << "\nAddressLine1: " << _AddressLine1 << endl;
		cout << "AddressLine2: " << _AddressLine2 << endl;
		cout << "POBox : " << _POBox << endl;
		cout << "City : " << _City << endl;
	}
};

// Main Function
int main()
{
	clsAddress Address1("Kolarevägen", "5", "284 34", "Perstorp");
	clsAddress Address2 = Address1;
	Address1.Print();
	Address2.Print();
	return 0;
}