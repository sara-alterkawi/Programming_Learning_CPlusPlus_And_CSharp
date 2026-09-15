// Ciecle Area through diameter.
// Example input 10 Output 78.5398

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

int main()
{
    int D;
    cout << "Please enter Ciecle Diameter D" << endl;
    cin >> D;


    const float PI = 3.14;


    float Area = M_PI * pow(D, 2)/4;

    cout << endl << "Ciecle Area = " << ceil(Area) << endl;

    return 0;
}
