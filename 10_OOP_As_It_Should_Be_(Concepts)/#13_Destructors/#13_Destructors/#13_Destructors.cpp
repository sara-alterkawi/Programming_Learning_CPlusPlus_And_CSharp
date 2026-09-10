// Destructors in C++
#include <iostream>
using namespace std;

// Define a class
class clsPerson
{
	// Members Methods 
public:
	string FullName;

	// This is Instructor will be called when object is built.
	clsPerson()
	{
		FullName = "Sara Alterkawi";
		cout << "\nHi, I'm Constructor";
	}

	// This is destructor will be called when object is destroyed.
	~clsPerson()
	{
		cout << "\nHi, I'm Destructor";
	}
};

void Fun1()
{
	clsPerson Person1;
	// After exiting from function, person1 will be destroyed and destructor will be called.
}

void Fun2()
{
	clsPerson* Person2 = new clsPerson;
	// Always use delete whenever you use new, otherwise object will remain in memory
	delete Person2;
}

int main()
{
	Fun1();
	Fun2();
	return 0;
}