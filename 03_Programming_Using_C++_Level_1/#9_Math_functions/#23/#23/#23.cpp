// Ciecle Area Described Around an arbitary Triangle.
// Example input 5, 6, 7 Output 40.088

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

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

    float P = (A+B+C)/2;
    float T = (A*B*C)/(4*sqrt(P*(P-A)*(P-B)*(P-C)));

    float Area = M_PI * pow(T,2);

    cout << endl << "Ciecle Area = " << round(Area) << endl;

    return 0;
}
