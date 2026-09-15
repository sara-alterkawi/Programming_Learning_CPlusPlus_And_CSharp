// Ciecle Area Described Around an arbitary Triangle.
// Example input 5, 6, 7 Output 40.088

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

float CircleArea(int A, int B, int C)
{
    float P = (A + B + C) / 2;
    float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

    float Area = M_PI * pow(T, 2);

    return Area;
}

int main()
{
    int A;
    cout << "Please enter the length of the first triangle side A" << endl;
    cin >> A;

    int B;
    cout << "Please enter the length of the second triangle side B" << endl;
    cin >> B;

    int C;
    cout << "Please enter the length of the therd triangle side C" << endl;
    cin >> C;

    cout << endl << "Ciecle Area = " << CircleArea(A, B, C) << endl;

    return 0;
}
