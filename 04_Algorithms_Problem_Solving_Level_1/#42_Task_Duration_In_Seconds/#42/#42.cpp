// Write a program to calculate the Task Duration in seconds and print it on screen.
// Given time duration of task in the number of Days, Hours, Minutes and Seconds.
// Example input 2, 5, 45, 35 Output 193535 seconds

#include <iostream>
using namespace std;

// 
struct strTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

// Function to ask user to enter duration in Days, Hours, Minutes and Seconds
strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration;
    cout << "Please enter Number Of Days ";
    cin >> TaskDuration.NumberOfDays;
    cout << "Please enter Number Of Hours ";
    cin >> TaskDuration.NumberOfHours;
    cout << "Please enter Number Of Minutes ";
    cin >> TaskDuration.NumberOfMinutes;
    cout << "Please enter Number Of Seconds ";
    cin >> TaskDuration.NumberOfSeconds;
    return TaskDuration;
}

// Function to Calculate total Seconds
int TaskTotalSecond(strTaskDuration TaskDuration)
{
    int TotalSecond = (TaskDuration.NumberOfDays * 24 * 60 * 60)
                    + (TaskDuration.NumberOfHours * 60 * 60)
                    + (TaskDuration.NumberOfMinutes * 60)
                    + TaskDuration.NumberOfSeconds;
    return TotalSecond;
}

// Function to print the results
void Printresult(strTaskDuration TaskDuration)
{
    cout << endl << "Total Task duration in seconds = " << TaskTotalSecond(TaskDuration) << " Seconds" << endl;
}

// Main Function
int main()
{
    Printresult(ReadTaskDuration());
    return 0;
}
