// Simple code to print S letter by using stars.

#include <iostream>
using namespace std;

int main()
{
    cout << " ****" << endl;
    cout << "*" << endl;
    cout << " ****" << endl;
    cout << "     *" << endl;
    cout << " ****" << endl;

    return 0;
}


/*
#include <iostream>
using namespace std;

int main() {
    for (int row = 1; row <= 5; row++) {
        if (row == 1 || row == 3 || row == 5) { // For the first, third, and fifth rows
            cout << " ****";
        }
        else if (row == 2) { // For the second row
            cout << "*";
        }
        else if (row == 4) { // For the fourth row
            cout << "     *";
        }
        cout << endl;
    }

    return 0;
}
*/