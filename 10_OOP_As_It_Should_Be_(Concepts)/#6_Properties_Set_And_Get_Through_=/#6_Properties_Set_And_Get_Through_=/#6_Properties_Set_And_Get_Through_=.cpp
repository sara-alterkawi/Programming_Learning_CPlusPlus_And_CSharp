// Properties Set And Get Through =
#include <iostream>
using namespace std;

// Define a class with a property using __declspec(property)
class clsPerson
{
	// Private member variable
private:
	string _FirstName;

	// Public setter and getter methods
public:
	void SetFirstName(string FirstName) {
		_FirstName = FirstName;
	}

	string GetFirstName() {
		return _FirstName;
	}

	// Define the property using __declspec
	__declspec(property(get = GetFirstName, put = SetFirstName))
		string FirstName;
};

// Main function to demonstrate the usage of the property
int main()
{
	clsPerson Person1;
	Person1.SetFirstName("Sara");
	cout << Person1.GetFirstName() << endl;

	//instead of the above we only write this
	Person1.FirstName = "Sara";
	cout << Person1.FirstName;

	return 0;
};