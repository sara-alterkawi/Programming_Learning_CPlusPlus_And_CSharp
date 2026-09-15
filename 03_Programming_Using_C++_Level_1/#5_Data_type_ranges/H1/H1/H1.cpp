// Simple code to make the user inter the variable values.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Name;
    //int Age;
    unsigned short Age;
    string City;
    string Country;
    float MonthlySalary;
    char Gender;
    bool isMarried;

    cout << "Please enter your Name:" << endl;
    getline(cin, Name);

    cout << "Please enter your Age:" << endl;
    cin >> Age;

    cin.ignore();

    cout << "Please enter your City:" << endl;
    getline(cin, City);

    cout << "Please enter your Country:" << endl;
    getline(cin, Country);

    cout << "Please enter your Monthly Salary:" << endl;
    cin >> MonthlySalary;

    cout << "Please enter your Gender (M/F):" << endl;
    cin >> Gender;

    cout << "Are you married? 1/0:" << endl;
    cin >> isMarried;

    float YearlySalary = MonthlySalary * 12;

    cout << endl << "*************************" << endl;
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << " years." << endl;
    cout << "City: " << City << endl;
    cout << "Country: " << Country << endl;
    cout << "Monthly Salary: " << MonthlySalary << endl;
    cout << "Yearly Salary: " << YearlySalary << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Married: " << (isMarried ? "Yes" : "No") << endl;
    cout << "*************************" << endl;

    return 0;
}
