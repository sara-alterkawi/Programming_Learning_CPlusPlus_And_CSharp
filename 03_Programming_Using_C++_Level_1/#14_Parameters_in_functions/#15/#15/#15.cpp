// Rectangle Area.

#include <iostream>
#include <string>

using namespace std;

int RectangleArea(int A, int B)
{
    int Area = A * B;

    return Area;
}

int main()
{
    int A;
    cout << "Please enter number A" << endl;
    cin >> A;

    int B;
    cout << "Please enter number B" << endl;
    cin >> B;

    cout << endl << "Rectangle Area = " << RectangleArea(A, B) << endl;

    return 0;
}
