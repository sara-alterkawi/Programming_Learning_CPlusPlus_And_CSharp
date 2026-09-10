// Static Methods (Functions)
#include <iostream>
using namespace std;

// A static method (function) belongs to the class rather than any object of the class.
class clsA
{
	// Static method
public:
	// Static method
	static int Function1()
	{
		return 10;
	}
	// Non-static method
	int Function2()
	{
		return 20;
	}
};

// Main function
int main()
{
	// The following line calls static function directly via class not through the object
	// At class level you can call only static methods and static members
	cout << clsA::Function1() << endl;

	// Static methods can also be called throught the object.
	clsA A1, A2;
	cout << A1.Function1() << endl;
	cout << A1.Function2() << endl;
	cout << A2.Function1() << endl;
}