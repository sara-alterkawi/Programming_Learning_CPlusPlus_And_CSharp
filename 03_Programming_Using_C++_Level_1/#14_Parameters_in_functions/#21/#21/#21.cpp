// Ciecle Area Along the Circumference.
// Example input 20 Output 31.831

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

float CircleArea(int L)
{
    float Area = pow(L, 2) / (4 * M_PI);

    return Area;
}

int main()
{
    int L;
    cout << "Please enter Square Circumference L" << endl;
    cin >> L;

    cout << endl << "Ciecle Area = " << CircleArea(L) << endl;

    return 0;
}
