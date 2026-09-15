// Seconds to Days Hours Minutes Seconds.
// Example input 193535 Output 2 Days, 5 Hours, 45 Minutes, 35 Seconds

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

int main()
{
    int TotalSeconds;
    cout << "Please enter Number Of Total Second" << endl;
    cin >> TotalSeconds;

    int SecondsPerDay = 24 * 60 * 60;
    int SecondsPerHour = 60 * 60;
    int SecondsPerMinute = 60;

    int NumberOfDays = TotalSeconds / SecondsPerDay;
    int Reminder = TotalSeconds % SecondsPerDay;

    int NumberOfHours = Reminder / SecondsPerHour;
    Reminder = Reminder % SecondsPerHour;

    int NumberOfMinutes = Reminder / SecondsPerMinute;
    Reminder = Reminder % SecondsPerMinute;

    int NumberOfSeconds = Reminder;

    cout << NumberOfDays << " Days, " <<  NumberOfHours << " Hours, " << NumberOfMinutes << " Minutes, " <<  NumberOfSeconds << " Seconds." << endl;
    return 0;
}
