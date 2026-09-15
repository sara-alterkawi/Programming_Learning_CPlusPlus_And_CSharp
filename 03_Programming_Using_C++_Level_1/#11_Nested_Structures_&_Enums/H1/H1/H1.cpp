// How to define and use Enum.
#include <iostream>
#include <string>

using namespace std;

enum enColor
{
    Red, Green, Blue
};

enum enGender
{
    Male, Female
};

enum enMaritalStatus
{
    Single, Married,
};

struct stAddress
{
    string Street;
    string PostNumber;
    string City;
    string Country;
};

struct stContactInfo
{
    string Phone;
    string Mail;
    stAddress Address;
};

struct stName
{
    string FirstName;
    string LastName;
    stContactInfo ContactInfo;
};

int main()
{
    stName Name;
    int Age;
    float MonthlySalary;
    enGender Gender;
    enMaritalStatus Status;
    enColor Color;

    cout << "Please enter your First Name:" << endl;
    getline(cin, Name.FirstName);

    cout << "Please enter your Last Name:" << endl;
    getline(cin, Name.LastName);

    cout << "Please enter your Age:" << endl;
    cin >> Age;

    cin.ignore();

    cout << "Please enter your Phone:" << endl;
    getline(cin, Name.ContactInfo.Phone);

    cout << "Please enter your Mail:" << endl;
    getline(cin, Name.ContactInfo.Mail);

    cout << "Please enter your Street:" << endl;
    getline(cin, Name.ContactInfo.Address.Street);

    cout << "Please enter your Post Number:" << endl;
    getline(cin, Name.ContactInfo.Address.PostNumber);

    cout << "Please enter your City:" << endl;
    getline(cin, Name.ContactInfo.Address.City);

    cout << "Please enter your Country:" << endl;
    getline(cin, Name.ContactInfo.Address.Country);

    cout << "Please enter your Monthly Salary:" << endl;
    cin >> MonthlySalary;

    cout << "Please enter your Gender (Male = 0, Female = 1):" << endl;
    cin >> reinterpret_cast<int&>(Gender);

    cout << "Your social status (Single = 0, Married =1):" << endl;
    cin >> reinterpret_cast<int&>(Status);

    cout << "Choose your favorit color (Red = 0, Green = 1, Blue = 2):" << endl;
    cin >> reinterpret_cast<int&>(Color);

    float YearlySalary = MonthlySalary * 12;

    cout << endl << "*************************" << endl;
    cout << "Name: " << Name.FirstName + " " << Name.LastName << endl;
    cout << "Age: " << Age << " years" << endl;
    cout << "Phone: " << Name.ContactInfo.Phone << endl;
    cout << "Mail: " << Name.ContactInfo.Mail << endl;
    cout << "Address: "
        << Name.ContactInfo.Address.Street + ", "
        << Name.ContactInfo.Address.PostNumber + ", "
        << Name.ContactInfo.Address.City + ", "
        << Name.ContactInfo.Address.Country << endl;
    cout << "Monthly Salary: " << MonthlySalary << endl;
    cout << "Yearly Salary: " << YearlySalary << endl;
    cout << "Gender: " << (Gender == Male ? "Male" : "Female") << endl;
    cout << "Marital Status: " << (Status == Married ? "Married" : "Single") << endl;
    cout << "Favorite Color: " << (Color == Red ? "Red" : Color == Green ? "Green" : "Blue") << endl;
    cout << "*************************" << endl;

    return 0;
}
