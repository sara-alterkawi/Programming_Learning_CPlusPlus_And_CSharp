// Power of 2, 3, 4.

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

int Power_2(int Num)
{
    int Result = pow(Num, 2);
    return Result;
}

int Power_3(int Num)
{
    int Result = pow(Num, 3);
    return Result;
}

int Power_4(int Num)
{
    int Result = pow(Num, 4);
    return Result;
}

int main()
{
    int Num;
    cout << "Please enter a number" << endl;
    cin >> Num;

    cout << endl << Num << " to the Power 2 = " << Power_2(Num) << endl;
    cout << endl << Num << " to the Power 3 = " << Power_3(Num) << endl;
    cout << endl << Num << " to the Power 4 = " << Power_4(Num) << endl;

    return 0;
}
