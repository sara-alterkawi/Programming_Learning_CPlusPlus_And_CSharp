// Circle Area.
// Example input 5 Output 78.54

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

int main()
{
    int R;
    cout << "Please enter Circle radius R" << endl;
    cin >> R;

    float Area = M_PI *pow(R, 2);

    cout << endl << "Circle Area = " << ceil(Area) << endl;

    return 0;
}
