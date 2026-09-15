// Ciecle Area Inscribed in an Isoscales Triangle.
// Example input 20, 10 Output 47.1239

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

float CircleArea(int A, int B)
{
    float Area = (M_PI * pow(B, 2) / 4.0) * ((2.0 * A - B) / (2.0 * A + B));

    return Area;
}

int main()
{
    int A;
    cout << "Please enter the length of the equal sides A" << endl;
    cin >> A;

    int B;
    cout << "Please enter the length of the base" << endl;
    cin >> B;


    cout << endl << "Ciecle Area = " << CircleArea(A, B) << endl;

    return 0;
}
