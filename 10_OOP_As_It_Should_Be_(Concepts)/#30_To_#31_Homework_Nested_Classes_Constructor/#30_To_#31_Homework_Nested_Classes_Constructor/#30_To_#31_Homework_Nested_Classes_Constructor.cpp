// 
#include<iostream>
using namespace std;
// Person Class
class clsPerson {
	string _FullName;
	// Address Nested Class
	class  clsAddress
	{
		// Data Members
	private:
		string _AddressLine1;
		int _PBox;
		string _City;
		string _Country;
	public:
		// Constructor
		clsAddress(string AddressLine1, int PBox,
			string City, string Country)
		{
			_AddressLine1 = AddressLine1;
			_PBox = PBox;
			_City = City;
			_Country = Country;
		}
		// Setter for Address line 1
		string setAddressLine1(string AddressLine1)
		{
			_AddressLine1 = AddressLine1;
		}
		// Getter for Address line 1
		string AddressLine1()
		{
			return _AddressLine1;
		}
		// Setter and Getter for PBox
		int setPBox(int PBox)
		{
			_PBox = PBox;
		}
		// Getter for PBox
		int PBox()
		{
			return _PBox;
		}
		// Setter and Getter for City
		string setCity(string City)
		{
			_City = City;
		}
		// Getter for City
		string City()
		{
			return _City;
		}
		// Setter and Getter for Country
		string setCountry(string Country)
		{
			_Country = Country;
		}
		// Getter for Country
		string Country()
		{
			return _Country;
		}
		// Print Function
		void Print()
		{
			cout << "Address Line 1 : " << _AddressLine1 << endl;
			cout << "P.O. Box       : " << _PBox << endl;
			cout << "City           : " << _City << endl;
			cout << "Country        : " << _Country << endl;
		}
	};
	// Data Members
public:
	// Setter for Full Name
	string setFullName(string FullName)
	{
		_FullName = FullName;
	}
	// Getter for Full Name
	string FullName1()
	{
		return _FullName;
	}
	// Address Object
	clsAddress Address = clsAddress("", 0, "", "");
	// Constructor
	// Initialize Full Name and Address Object
	clsPerson(string FullName, string AddressLine1, int PBox, string City, string Country)
	{
		_FullName = FullName;
		//initiate address class by it's constructor
		Address = clsAddress(AddressLine1, PBox, City,
			Country);
	}
};
// Main Function
int main()
{
	// Create Person Object
	clsPerson Person1("Sara Alterkawi", "Kolarevägen 5", 28434, "Perstorp", "Sweden");
	Person1.Address.Print();
	system("pause>0");
	return 0;
}