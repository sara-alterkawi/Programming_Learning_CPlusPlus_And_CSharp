// Access specifiers in C++ are keywords that define the accessibility of class members (variables and functions). There are three main access specifiers: private, protected, and public. Each specifier determines how the members can be accessed from outside the class or from derived classes.
#include <iostream>
using namespace std;

class clsPerson
{
private:
	// This variable and function are accessable inside this calass
	int Variabl1 = 5;
	int Function1()
	{
		return 40;
	}

protected:
	// This variable and function are accessable inside this calass and all classes inhirets this calss
	int Variabl2 = 100;
	int Function2()
	{
		return 50;
	}

public:
	// This variable and function are accessable for everyone outside/inside/and classes inherits this class
	string FirstName;
	string LastName;
	string FullName()
	{
		return FirstName + " " + LastName;
	}
	float Function3()
	{
		return Function1() * Variabl1 * Variabl2;
	}
};

int main()
{
	clsPerson Person1;
	Person1.FirstName = "Sara";
	Person1.LastName = "Alterkawi";

	cout << "Person1: " << Person1.FullName() << endl;
	cout << Person1.Function3();
}