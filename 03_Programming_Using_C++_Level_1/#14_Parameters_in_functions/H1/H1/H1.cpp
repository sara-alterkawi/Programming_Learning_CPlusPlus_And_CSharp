// Actual use of Functions
#include <iostream>
using namespace std;

// Function
int MySumFunction(int Num1, int Num2)
{
    return Num1 + Num2;
}

int main()
{
    int Num1, Num2;
    cout << "Please enter Number1:" << endl;
    cin >> Num1;

    cout << "Please enter Number2:" << endl;
    cin >> Num2;

    cout << "************************" << endl;
    cout << "The sum is: " << MySumFunction(Num1, Num2) << endl;

    cout << endl;
 
    return 0;
}
