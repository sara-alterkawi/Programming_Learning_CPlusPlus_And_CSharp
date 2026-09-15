// Swap Numbers:

#include <iostream>
#include <string>

using namespace std;

void SwapNumbers(int& Num1, int& Num2)
{
    int Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}

int main()
{
    int Num1;
    cout << "Please enter your first Number" << endl;
    cin >> Num1;

    int Num2;
    cout << "Please enter your second Number" << endl;
    cin >> Num2;

    SwapNumbers(Num1, Num2);

    cout << endl << "You entered: " << Num1 << " , "<< Num2 << endl;

    cout << endl << "After swapping: " << Num1 << " , " << Num2 << endl;

    return 0;
}
