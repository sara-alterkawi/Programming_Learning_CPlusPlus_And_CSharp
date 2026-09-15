// Rectangle Area through Diagonal and Side Area.
// Example input 5, 40 Output 198.431

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float RectangleArea(int A, int D)
{
    float Area = A * sqrt(pow(D, 2) - pow(A, 2));

    return Area;
}

int main()
{
    int A;
    cout << "Please enter number A" << endl;
    cin >> A;

    int D;
    cout << "Please enter number D" << endl;
    cin >> D;

    cout << endl << "Rectangle Area = " << RectangleArea(A, D) << endl;

    return 0;
}
