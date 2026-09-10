// Static/Early Binding vs Dynamic/Late Binding
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
public:
	// Override Function
	void Print()
	{
		cout << "Hi, I'm an Employee!" << endl;
	}
};
// Derived Classes
class clsStudent : public clsPerson
{
public:
	// Override Function
	void Print()
	{
		cout << "Hi, I'm a Student!" << endl;
	}
};
// Main Function
int main()
{
	clsEmployee Employee1;
	clsStudent Student1;
	// Early-Static Binding: at compilation time
	Employee1.Print();
	Student1.Print();

	clsPerson* Person1 = &Employee1;
	clsPerson* Person2 = &Student1;

	// Late-Dynamic Binding: at runtime
	Person1->Print();
	Person2->Print();

	return 0;
}