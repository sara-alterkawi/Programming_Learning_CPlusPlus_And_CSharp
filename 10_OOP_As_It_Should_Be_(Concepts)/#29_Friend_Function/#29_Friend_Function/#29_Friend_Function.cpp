// Friend Function

#include<iostream>
using namespace std;
// Define a class
class clsA
{
	// Members
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
	// Friend function
	friend int MySum(clsA A1);
};

// This function is a normal function and not a member of any class
int MySum(clsA A1)
{
	return A1._Var1 + A1.Var2 + A1._Var3;
}

// This function will generate an error because it is not a friend function
//int Fun2(clsA A1)
//{
// return A1._Var1 + A1.Var2 + A1._Var3;
//}

// Main function
int main()
{
	clsA A1;
	cout << MySum(A1);
	system("pause>0");
	return 0;
};