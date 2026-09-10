// Friend Classes

#include<iostream>
using namespace std;
// Class A
class clsA
{
	// Private, Protected and Public members
private:
	int _Var1;
protected:
	int _Var3;
public:
	int Var2;
	// Constructor
	clsA()
	{
		_Var1 = 10;
		Var2 = 20;
		_Var3 = 30;
	}
	// This will grant access for everything to class B
	friend class clsB; // Friend class
};

// Class B
class clsB
{
	// A member function to access members of class A
public:
	void display(clsA A1)
	{
		cout << endl << "The value of Var1= " << A1._Var1;
		cout << endl << "The value of Var2= " << A1.Var2;
		cout << endl << "The value of Var3= " << A1._Var3;
	}
};

// The main function
int main()
{
	clsA A1;
	clsB B1;
	B1.display(A1);
	system("pause>0");
	return 0;
};