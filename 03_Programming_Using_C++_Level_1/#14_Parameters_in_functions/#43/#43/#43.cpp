// Seconds to Days Hours Minutes Seconds.
// Example input 193535 Output 2 Days, 5 Hours, 45 Minutes, 35 Seconds

#include <iostream>
#include <cmath>
#include <corecrt_math_defines.h>

using namespace std;

struct TimeComponents {
    int days;
    int hours;
    int minutes;
    int seconds;
};

TimeComponents TaskSecondsConversion(int TotalSeconds) {
    int SecondsPerDay = 24 * 60 * 60;
    int SecondsPerHour = 60 * 60;
    int SecondsPerMinute = 60;

    TimeComponents result;

    result.days = TotalSeconds / SecondsPerDay;
    int remainder = TotalSeconds % SecondsPerDay;

    result.hours = remainder / SecondsPerHour;
    remainder = remainder % SecondsPerHour;

    result.minutes = remainder / SecondsPerMinute;
    result.seconds = remainder % SecondsPerMinute;

    return result;
}

int main()
{
    int TotalSeconds;
    cout << "Please enter Number Of Total Second" << endl;
    cin >> TotalSeconds;

    TimeComponents time = TaskSecondsConversion(TotalSeconds);

    cout << time.days << " Days, "
        << time.hours << " Hours, "
        << time.minutes << " Minutes, "
        << time.seconds << " Seconds." << endl;
    return 0;
}
