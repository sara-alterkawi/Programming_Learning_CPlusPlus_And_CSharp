// Power of 2, 3, 4.
// example input 3
// output 9 27 81

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

// Function to read input from user
int ReadNum()
{
    int number;
    cout << "Enter a number to calculate it to the power of 2, 3, and 4: ";
    cin >> number;
    return number;
}


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

void printResult(int Num)
{
    cout << endl << Num << " to the Power 2 = " << Power_2(Num) << endl;
    cout << endl << Num << " to the Power 3 = " << Power_3(Num) << endl;
    cout << endl << Num << " to the Power 4 = " << Power_4(Num) << endl;
}
int main()
{
    printResult(ReadNum());
    return 0;
}
