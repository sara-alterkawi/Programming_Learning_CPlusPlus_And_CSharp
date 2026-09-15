// Relational Operators.

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int A;
    cout << "Please enter the first number A" << endl;
    cin >> A;

    int B;
    cout << "Please enter the second number B" << endl;
    cin >> B;

    cout << A << " = " << B << " is " << (A==B) << endl;
    cout << A << " != " << B << " is " << (A != B) << endl;
    cout << A << " > " << B << " is " << (A > B) << endl;
    cout << A << " < " << B << " is " << (A < B) << endl;
    cout << A << " >= " << B << " is " << (A >= B) << endl;
    cout << A << " <= " << B << " is " << (A <= B) << endl;

    return 0;
}
