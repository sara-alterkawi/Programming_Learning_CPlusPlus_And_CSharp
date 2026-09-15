// Circle Area.
// Example input 5 Output 78.5398

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

float CircleArea(int R)
{
    float Area = M_PI * pow(R, 2);

    return Area;
}

int main()
{
    int R;
    cout << "Please enter Circle radius R" << endl;
    cin >> R;

    cout << endl << "Circle Area = " << CircleArea(R) << endl;

    return 0;
}
