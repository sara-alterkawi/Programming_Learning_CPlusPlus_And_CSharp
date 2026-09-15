// Power of 2, 3, 4.

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

int main()
{
    int Num;
    cout << "Please enter a number" << endl;
    cin >> Num;

    cout << endl << Num << " to the Power 2 = " << pow(Num,2) << endl;
    cout << endl << Num << " to the Power 3 = " << pow(Num, 3) << endl;
    cout << endl << Num << " to the Power 4 = " << pow(Num, 4) << endl;

    return 0;
}
