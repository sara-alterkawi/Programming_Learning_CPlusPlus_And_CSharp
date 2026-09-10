// Virtual Functions
#include <iostream>
using namespace std;
// Base Class
class clsPerson
{
	// Virtual Function
public:
	virtual void Print()
	{
		cout << "Hi, I'm a Person!" << endl;
	}
};
// Derived Classes
class clsEmployee : public clsPerson
{
	// Override Function
public:
	void Print()
	{
		cout << "Hi, I'm an Employee!" << endl;
	}
};
// Derived Classes
class clsStudent : public clsPerson
{
	// Override Function
public:
	void Print()
	{
		cout << "Hi, I'm a Student!" << endl;
	}
};
// Main Function
int main()
{
	// Base Class Object
	clsEmployee Employee1;
	Employee1.Print();
	clsStudent Student1;
	Student1.Print();
	// Base Class Pointer to Derived Class Object
	clsPerson * Person1 = &Employee1;
	clsPerson * Person2 = &Student1;
	Person1->Print();
	Person2->Print();
	return 0;
}