// How to define and use Structures.
#include <iostream>
#include <string>

using namespace std;

struct StAddress
{
    string Street;
    string PostNumber;
    string City;
    string Country;
};

struct StName
{
    string FirstName;
    string LastName;
    StAddress Address;
};

int main()
{
    StName Name;
    int Age;
    float MonthlySalary;
    char Gender;
    bool isMarried;

    cout << "Please enter your First Name:" << endl;
    getline(cin, Name.FirstName);

    cout << "Please enter your Last Name:" << endl;
    getline(cin, Name.LastName);

    cout << "Please enter your Age:" << endl;
    cin >> Age;

    cin.ignore();

    cout << "Please enter your Street:" << endl;
    getline(cin, Name.Address.Street);

    cout << "Please enter your Post Number:" << endl;
    getline(cin, Name.Address.PostNumber);

    cout << "Please enter your City:" << endl;
    getline(cin, Name.Address.City);

    cout << "Please enter your Country:" << endl;
    getline(cin, Name.Address.Country);

    cout << "Please enter your Monthly Salary:" << endl;
    cin >> MonthlySalary;

    cout << "Please enter your Gender (M/F):" << endl;
    cin >> Gender;

    cout << "Are you married? 1/0:" << endl;
    cin >> isMarried;

    float YearlySalary = MonthlySalary * 12;

    cout << endl << "*************************" << endl;
    cout << "Name: " << Name.FirstName + " " << Name.LastName << endl;
    cout << "Age: " << Age << " years." << endl;
    cout << "Address: " << Name.Address.Street + " " << Name.Address.PostNumber +" " << Name.Address.City + " " << Name.Address.Country << endl;
    cout << "Monthly Salary: " << MonthlySalary << endl;
    cout << "Yearly Salary: " << YearlySalary << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Married: " << (isMarried ? "Yes" : "No") << endl;
    cout << "*************************" << endl;

    return 0;
}
