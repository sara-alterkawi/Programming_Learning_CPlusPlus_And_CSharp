// Function swap using call by reference
// Reference operator (&) is used in the function parameter to indicate that the parameter is passed by reference
#include <iostream>
#include <string>

using namespace std;

// Function
void Swap(int &A, int &B)
{
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
	cout << "After Swap inside function A= " << A <<", B= "<< B << endl;
}

int main()
{
	int A , B;
	cout << "Please enter A value: \n";
	cin >> A;
	cout << "Please enter B value: \n";
	cin >> B;
	cout << "Before Swap A= " << A << ", B= " << B << endl;
	// Function Call
	Swap(A, B);
	cout << "After Swap inside main A= " << A << ", B= " << B << endl;
    return 0;
}
