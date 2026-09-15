// Ciecle Area Inscribed in Square.
// Example input 10 Output 78.5398

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

int main()
{
    int A;
    cout << "Please enter Square length A" << endl;
    cin >> A;

    float Area = (M_PI * pow(A,2))/ 4;

    cout << endl << "Ciecle Area = " << ceil(Area) << endl;

    return 0;
}
