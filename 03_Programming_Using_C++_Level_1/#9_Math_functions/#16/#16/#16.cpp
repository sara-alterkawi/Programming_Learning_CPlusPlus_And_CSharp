// Rectangle Area through Diagonal and Side Area.
// Example input 5, 40 Output 198.431

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A;
    cout << "Please enter number A" << endl;
    cin >> A;

    int D;
    cout << "Please enter number D" << endl;
    cin >> D;

    float Area = A *sqrt(pow(D,2)-pow(A,2));

    cout << endl << "Rectangle Area = " << Area << endl;

    return 0;
}
