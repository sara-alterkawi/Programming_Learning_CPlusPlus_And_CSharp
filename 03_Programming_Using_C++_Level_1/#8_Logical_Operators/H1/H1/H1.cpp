// Logical Operators.

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    bool Result;
    // NOT(5 > 6 OR 7=7) AND NOT (1 Or false)
    Result = !(5 > 6 || 7 == 7) && !(1 || 0);
    cout << Result << endl;

    // NOT(7 = 7) AND (7 > 5)
    Result = (7 == 7) && (7 > 5);
    cout << Result << endl;

    return 0;
}