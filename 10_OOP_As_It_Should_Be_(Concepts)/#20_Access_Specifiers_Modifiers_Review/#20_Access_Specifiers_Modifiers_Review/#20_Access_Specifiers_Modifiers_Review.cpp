// Access Specifiers/Modifiers Review
#include <iostream>
using namespace std;

// Class definition
class clsA
{
	// Access specifiers/modifiers
private:
	// Only accessible inside this class, neither derived classes nor outside class.
	int _Var1;
	// Private member function
	void _Fun1()
	{
		cout << "Function 1";
	}

	// Protected member
protected:
	// Only accessible inside this class and all derived classes, but not outside class
	int Var2;
	// Protected member function
	void Fun2()
	{
		cout << "Function 1";
	}

	// Public member
public:
	// Accessible inside this class, all derived classes, and outside class
	int Var3;
	// Public member function
	void Fun3()
	{
		cout << "Function 1";
	}
};

// Derived class
class clsB : public clsA
{
	// Public member function
public:
	// Accessing protected member of base class
	void Func1()
	{
		cout << clsA::Var2;
	}
};

// Main function
int main()
{
	clsA A;
	// Accessing public member of clsA
	//A.Fun1(); // Error: Cannot access private member of clsA
	//A.Var1 = 10; // Error: Cannot access private member of clsA
	//A.Fun2(); // Error: Cannot access protected member of clsA
	A.Fun3(); // Accessing public member of clsA
	A.Var3 = 10; // Accessing public member of clsA
	clsB B;
	// Accessing public member of clsB
	B.Func1(); // Accessing protected member of clsA through derived class clsB
	system("pause>0");
	return 0;
}