// Ciecle Area Along the Circumference.
// Example input 20 Output 31.831

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

int main()
{
    int L;
    cout << "Please enter Square Circumference L" << endl;
    cin >> L;

    float Area = pow(L,2) / (4 * M_PI);

    cout << endl << "Ciecle Area = " << floor(Area) << endl;

    return 0;
}
