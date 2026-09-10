// Nested Classes
#include<iostream>
using namespace std;
// Person Class
class clsPerson {
	// Address Nested Class
	class  clsAddress
	{
	public:
		string AddressLine1;
		int PBox;
		string City;
		string Country;
		// Print Address
		void Print()
		{
			cout << "\nAddress:\n";
			cout << AddressLine1 << endl;
			cout << PBox << endl;
			cout << City << endl;
			cout << Country << endl;
		}
	};
	// Data Members
public:
	string FullName;
	clsAddress Address;
	// Constructor
	clsPerson()
	{
		FullName = "Sara Alterkawi";
		Address.AddressLine1 = "Kolarevägen 5";
		Address.PBox = 28434;
		Address.City = "Perstorp";
		Address.Country = "Sweden";
	}
};
// Main Function
int main()
{
	clsPerson Person1;
	Person1.Address.Print();
	system("pause>0");
	return 0;
}