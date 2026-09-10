// Static members in C++ are shared among all instances of a class. They belong to the class itself rather than any particular object. This means that there is only one copy of a static member, regardless of how many objects of the class are created. Static members can be accessed using the class name or through an object of the class.
#include <iostream>
#include <string>
using namespace std;

// Class definition
class clsA
{
	// Data members
public:
	int var;
	static int counter;

	// Constructor
	clsA()
	{
		counter++;
	}

	// Member function to print values
	void Print()
	{
		cout << "\nvar = " << var << endl;
		cout << "counter = " << counter << endl;
	}
};

int clsA::counter = 0; // Static variable initialisation outside the class

//main function
int main()
{
	clsA A1;
	A1.var = 10;
	A1.Print();
	clsA A2;
	A2.var = 20;
	A2.Print();
	clsA A3;
	A3.var = 30;
	A3.Print();

	// Changing the static member using one object
	A1.counter = 500;
	cout << "\nafter chaning the static member counter in one object:\n";
	A1.Print();
	A2.Print();
	A3.Print();

	return 0;
}