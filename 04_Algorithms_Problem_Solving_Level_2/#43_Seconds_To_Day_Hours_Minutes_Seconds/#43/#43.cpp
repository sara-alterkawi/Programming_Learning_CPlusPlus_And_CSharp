// Write a program that inputs the NumberOfSeconds and change it into Days, Hours, Minutes and Seconds
// Example input 193535 Output 2 Days, 5 Hours, 45 Minutes, 35 Seconds

#include <iostream>
using namespace std;

// 
struct strTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

// Function to read total seconds
int ReadTotalSeconds()
{
    int TotalSeconds;
    cout << "Please enter Number Of Total Seconds: ";
    cin >> TotalSeconds;
    return TotalSeconds;
}

// Function to convert total seconds into Days, Hours, Minutes, Seconds
strTaskDuration TaskSecondsDuration(int TotalSeconds)
{
    int SecondsPerDay = 24 * 60 * 60;
    int SecondsPerHour = 60 * 60;
    int SecondsPerMinute = 60;

    strTaskDuration TaskDuration;
    
    TaskDuration.NumberOfDays = TotalSeconds / SecondsPerDay;
    int remainder = TotalSeconds % SecondsPerDay;
    
    TaskDuration.NumberOfHours = remainder / SecondsPerHour;
    remainder %= SecondsPerHour;

    TaskDuration.NumberOfMinutes = remainder / SecondsPerMinute;
    TaskDuration.NumberOfSeconds = remainder % SecondsPerMinute;
    
    return TaskDuration;
}

// Function to print the results
void Printresult(int TotalSeconds)
{
    strTaskDuration TaskDuration = TaskSecondsDuration(TotalSeconds);

    cout << "The result is "
        << TaskDuration.NumberOfDays << " Days, "
         << TaskDuration.NumberOfHours << " Hours, "
         << TaskDuration.NumberOfMinutes << " Minutes and "
         << TaskDuration.NumberOfSeconds << " Seconds." << endl;
}

// Main Function
int main()
{
    Printresult(ReadTotalSeconds());
    return 0;
}
