// M Power of Number.

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

int main()
{
    int Num;
    cout << "Please enter a number" << endl;
    cin >> Num;

    int M;
    cout << "Please enter a power for number" << endl;
    cin >> M;

    cout << endl << Num << " to the Power " << M <<" = " << pow(Num, M) << endl;
    
    return 0;
}
