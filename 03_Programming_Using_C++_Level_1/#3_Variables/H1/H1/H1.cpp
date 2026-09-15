// Simple code to test variable types.

#include <iostream>
using namespace std;

int main()
{
    string Name = "Sara Alterkawi";
    int Age = 43;
    string City = "Perstorp";
    string Country = "Sweden";
    float MonthlySalary = 40000;
    char Gender = 'F';
    bool isMarried = true;
    float YearlySalary = MonthlySalary * 12;

    cout << "*************************" << endl;
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << " years." << endl;
    cout << "City: " << City << endl;
    cout << "Country: " << Country << endl;
    cout << "Monthly Salary: " << MonthlySalary << endl;
    cout << "Yearly Salary: " << YearlySalary << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Married: " << isMarried << endl;
    cout << "*************************" << endl;

    return 0;
}
