// Simple code to make the user inter variables values.

#include <iostream>
using namespace std;

int main()
{
    //int Num1 = 20;
    int Num1;
    cout << "Please enter your first number" << endl;
    cin >> Num1;

    //int Num2 = 30;
    int Num2;
    cout << "Please enter your second number" << endl;
    cin >> Num2;

    //int Num3 = 10;
    int Num3;
    cout << "Please enter your third number" << endl;
    cin >> Num3;

    int sum = Num1 + Num2 + Num3;

    cout << endl << Num1 << " +" << endl;
    cout << Num2 << " +" << endl;
    cout << Num3 << endl;
    cout << "------------------" << endl;
    cout << "Total = " << sum << endl;

    return 0;
}
