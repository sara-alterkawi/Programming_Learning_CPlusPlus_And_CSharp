// Period Library
// This project is intended to create a Period Library with the following requirements:
// 1. Create a class named clsPeriod.
// 2. The class should represent a time period defined by:
//    - A start date.
//    - An end date.
// 3. The class should use the clsDate class to represent dates.
// 4. Provide a parameterized constructor that accepts:
//    - Start date (clsDate).
//    - End date (clsDate).
// 5. Ability to check whether two periods overlap with each other.
// 6. Ability to check whether the current period overlaps with another period.
// 7. Ability to print the period start and end dates in a readable format.

#include <iostream>
#include "clsPeriod.h"

int main()

{

    clsPeriod Period1(clsDate(1, 1, 2022), clsDate(10, 1, 2022));
    Period1.Print();
    cout << "------------------------------------------------" << endl;

    clsPeriod Period2(clsDate(3, 1, 2022), clsDate(5, 1, 2022));
    Period2.Print();
    cout << "------------------------------------------------" << endl;

    //You can check like this
    cout << Period1.IsOverLapWith(Period2) << endl;
    cout << "------------------------------------------------" << endl;

    // Also you can call the static method and send period 1 and period 2
    cout << clsPeriod::IsOverlapPeriods(Period1, Period2) << endl;
    cout << "------------------------------------------------" << endl;

    return 0;
}