// Structure Inside Class

#include<iostream>
using namespace std;
// Person Class
class clsPerson {
	// Structure Definition
	struct stAddress
	{
		string AddressLine1;
		int PBox;
		string City;
		string Country;
	};
public:
	string FullName;
	stAddress Address;
	// Constructor
	clsPerson()
	{
		FullName = "Sara Alterkawi";
		Address.AddressLine1 = "Kolarevägen 5";
		Address.PBox = 28434;
		Address.City = "Perstorp";
		Address.Country = "Sweden";
	}
	// Print Address
	void PrintAddress()
	{
		cout << "\nAddress:\n";
		cout << Address.AddressLine1 << endl;
		cout << Address.PBox << endl;
		cout << Address.City << endl;
		cout << Address.Country << endl;
	}
};
// Main Function
int main()
{
	clsPerson Person1;
	Person1.PrintAddress();
	system("pause>0");
	return 0;
}