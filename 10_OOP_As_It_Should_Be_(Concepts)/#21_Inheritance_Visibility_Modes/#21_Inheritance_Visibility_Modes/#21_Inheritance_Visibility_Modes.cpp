// Inheritance Visibility Modes
#include <iostream>
using namespace std;
// Base class
class clsA
{
	// Members visibility
private:
	int V1;
	int Fun1()
	{
		return 1;
	}
	// Protected members
protected:
	int V2;
	int Fun2()
	{
		return 2;
	}
	// Public members
public:
	int V3;
	int Fun3()
	{
		return 3;
	}
};

// Try to change visibility mode public/private/protected
// and see in the main what will happen iside objects.
class clsB : private clsA
{
public:
	int Fun4()
	{
		return 4;
	}
};

class clsC : public clsB
{
public:
	int Fun5()
	{
		return 5;
	}
};

// Main function
int main()
{
	// Try B1 after you change visibility mode in clsB. and see what you can see.
	clsB B1;
	//B1.Fun3(); // Accessible because Fun3 is public in clsA and clsB inherits clsA publicly
	B1.Fun4(); // Accessible because Fun4 is public in clsB

	// Try C1 after you change visibility mode in clsB. and see what you can see.
	clsC C1;
	C1.Fun4(); // Accessible because Fun4 is public in clsB
	C1.Fun5(); // Accessible because Fun5 is public in clsC
}