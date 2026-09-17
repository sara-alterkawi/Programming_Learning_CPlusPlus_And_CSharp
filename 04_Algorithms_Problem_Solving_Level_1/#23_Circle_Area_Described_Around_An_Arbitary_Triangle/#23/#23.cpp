// Ciecle Area Described Around an arbitary Triangle.
// Example input 5, 6, 7 Output 40.088

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>
using namespace std;

// 
void readTriangleData(float& A, float& B, float& C)
{
    cout << "Please enter the length of the first triangle side A" << endl;
    cin >> A;
    cout << "Please enter the length of the second triangle side B" << endl;
    cin >> B;
    cout << "Please enter the length of the therd triangle side C" << endl;
    cin >> C;
}

// 
float CircleAreaByArbitaryTriangle(float A, float B, float C)
{
    float P = (A + B + C) / 2;
    float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
    return M_PI * pow(T, 2);
}

// 
void printResult(float Area)
{
    cout << "--------------------------" << endl;
    cout << "Circle Area = " << Area << endl;
    cout << "--------------------------" << endl;
}
int main()
{
    float A, B, C;
    readTriangleData(A, B, C);
    printResult(CircleAreaByArbitaryTriangle(A, B, C));
    return 0;
}
