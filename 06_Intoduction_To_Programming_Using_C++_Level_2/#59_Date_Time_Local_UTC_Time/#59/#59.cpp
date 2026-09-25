// Date-time LocalUTC Time
// This program uses the C++ standard library to get and display the current local date and time as well as the UTC date and time.

#pragma warning(disable : 4996)

#include <ctime>
#include <iostream>

using namespace std;

int main() {
    time_t t = time(0); // get time Now

    char* dt = ctime(&t); // convert to string form
    cout << "Local date and time is: " << dt << "\n";

    tm* gmt = gmtime(&t);
    dt = asctime(gmt);
    cout << "UTC date and time is:   " << dt;

    return 0;
}