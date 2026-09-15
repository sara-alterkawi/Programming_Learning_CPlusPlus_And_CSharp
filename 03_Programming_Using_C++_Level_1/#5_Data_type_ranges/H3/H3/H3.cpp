// Simple code to make the user inter variables values.

#include <iostream>
using namespace std;

int main()
{
    //int Age;
    unsigned short Age;
    cout << "Please enter your Age" << endl;
    cin >> Age;
    //int YourAgeAfter5Years = Age + 5;
    unsigned short YourAgeAfter5Years = Age + 5;
    cout << endl << "After 5 years you will be " << YourAgeAfter5Years << " years old." << endl;
    return 0;
}
