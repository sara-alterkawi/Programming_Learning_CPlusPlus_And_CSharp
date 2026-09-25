// Some CCTYPE Functions
// CCTYPE functions are used to test characters and to convert characters from upper case to lower case and vice versa.
// The functions are defined in the header file <cctype>.
// The following table lists some of the commonly used CCTYPE functions.

#include <iostream>
#include <string> 
#include <cctype>

using namespace std;

int main()
{
    char x;
    char w;

    x = toupper('a');
    w = tolower('A');

    cout << "converting a to A: " << x << endl;
    cout << "converting A to a: " << w << endl;

    // upper case (A to Z)
    // returns zero if not, and non zero if yes    
    cout << "isupper('A') " << isupper('A') << endl;

    // lower case (a to z)
    // returns zero if not, and non zero if yes 
    cout << "islower('A') " << islower('A') << endl;

    // Digits (0 to 9)
    // returns zero if not, and non zero if yes    
    cout << "isdigit('A') " << isdigit('A') << endl;

    // punctuation characters are !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~
    // returns zero if not, and non zero if yes
    cout << "ispunct('A') " << ispunct('A') << endl;

    return 0;
}