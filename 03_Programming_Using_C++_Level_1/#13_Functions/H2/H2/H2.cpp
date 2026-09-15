// Procedure and Function use.
#include <iostream>
#include <string>

using namespace std;

// Procedure 
void MySumProsedure()
{
    int Num1,Num2;

    cout << "Please enter Number1:" << endl;
    cin>> Num1;

    cout << "Please enter Number2:" << endl;
    cin >> Num2;

    cout << "************************" << endl;
    cout << "The sum returned by MySumProsedure is: " << Num1 + Num2 << endl;
}

// Function
int MySumFunction()
{
    int Num1, Num2;

    cout << "Please enter Number1:" << endl;
    cin >> Num1;

    cout << "Please enter Number2:" << endl;
    cin >> Num2;

    cout << "************************" << endl;
    
    return Num1 + Num2;
}

int main()
{
    MySumProsedure();
    cout << endl;

    cout << "The sum returned by MySumFunction is: " << MySumFunction() << endl;

    return 0;
}
