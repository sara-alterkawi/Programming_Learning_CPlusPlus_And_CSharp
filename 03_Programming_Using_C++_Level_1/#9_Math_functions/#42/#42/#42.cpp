// Task Duration in seconds.
// Example input 2, 5, 45, 35 Output 193535 seconds

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

int main()
{
    int NumberOfDays;
    cout << "Please enter Number Of Days" << endl;
    cin >> NumberOfDays;

    int NumberOfHours;
    cout << "Please enter Number Of Hours" << endl;
    cin >> NumberOfHours;

    int NumberOfMinutes;
    cout << "Please enter Number Of Minutes" << endl;
    cin >> NumberOfMinutes;

    int NumberOfSeconds;
    cout << "Please enter Number Of Seconds" << endl;
    cin >> NumberOfSeconds;

    int TotalSecond = (NumberOfDays*24*60*60) + (NumberOfHours*60*60) + (NumberOfMinutes*60) + NumberOfSeconds;

    cout << endl << "Total Task duration in second = " << TotalSecond << " Seconds" << endl;

    return 0;
}
