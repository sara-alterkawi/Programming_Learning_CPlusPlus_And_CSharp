// Swap Numbers:

#include <iostream>
using namespace std;

int main()
{
    int Num1;
    cout << "Please enter your first Number" << endl;
    cin >> Num1;

    int Num2;
    cout << "Please enter your second Number" << endl;
    cin >> Num2;

    cout << endl << "You entered " << Num1 << " , "<< Num2 << endl;

    int Temp = Num1;
    Num1 = Num2;
    Num2 = Temp,

    cout << endl << "After swaping " << Num1 << " , " << Num2 << endl;

    return 0;
}
