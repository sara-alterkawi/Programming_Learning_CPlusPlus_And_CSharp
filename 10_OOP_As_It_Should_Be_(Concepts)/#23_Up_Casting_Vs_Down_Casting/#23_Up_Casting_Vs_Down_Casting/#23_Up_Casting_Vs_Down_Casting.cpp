// Up Casting Vs Down Casting

#include <iostream>
using namespace std;
// Person Class
class clsPerson
{
public:
	string FullName = "Sara Alterkawi";
};
// Employee Class
class clsEmployee : public clsPerson
{
public:
	string Title = "CEO";
};

// Main Function
int main()
{
	clsEmployee Employee1;
	cout << Employee1.FullName << endl;

	// Upcasting
	// This will convert employee to person.
	clsPerson* Person1 = &Employee1;
	cout << Person1->FullName << endl;

	// Downcasting
	clsPerson Person2;
	cout << Person2.FullName << endl;
	// Downcasting : you cannot convert person to employee
	//clsEmployee* Employee2 = &Person2;
	return 0;
}