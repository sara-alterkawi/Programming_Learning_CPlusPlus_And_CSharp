// Classes and Objects in C++
#include <iostream>
using namespace std;
class clsPerson
{
	// Private by default in classes will not be accessed from outside the class
	// So we need to make them public
public:
	string FirstName;
	string LastName;
	string FullName()
	{
		return FirstName + " " + LastName;
	}
};

int main()
{
	clsPerson Person1;
	Person1.FirstName = "Sara";
	Person1.LastName = "Alterkawi";

	cout << Person1.FullName() << endl;
}