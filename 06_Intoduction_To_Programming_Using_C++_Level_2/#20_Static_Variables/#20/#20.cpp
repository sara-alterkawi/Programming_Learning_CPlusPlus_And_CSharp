// Static Variables
// Demonstrates the use of static variables in a function
// to maintain state between function calls.

#include <iostream>
using namespace std;

void MyFunc() {
    int Number = 1;
    cout << "Value of Number: " << Number << "\n";
    Number++;
}

int main() {
    MyFunc();
    MyFunc();
    MyFunc();
    return 0;
}