// Write a Program to ask user to enter as many Employees as s/he wants,
// each time an Employee entered add it to your vector and ask the user it s/he wants to add more Employees until s/he says No,
// then print all vector elements on the screen.

#include<vector>
#include<iostream>
using namespace std;

// Employee Structure
struct stEmployee
{
 string firstName; 
 string lastName; 
 float salary;
};

// Function to read employees
void ReadEmployees(vector <stEmployee>& vEmployees)
{
    char answer = 'Y';
    stEmployee tempEmployee;
    while (answer == 'Y' || answer == 'y')
    {
        cout << "Enter FirstName? ";
        cin >> tempEmployee.firstName;
        cout << "Enter LastName? ";
        cin >> tempEmployee.lastName;
        cout << "Enter Salary? ";
        cin >> tempEmployee.salary; 
        vEmployees.push_back(tempEmployee);
        cout << "\nDo you want to read more employees? Y/N ?";
        cin >> answer;
    }
}

// Function to print employees
void PrintEmployees(vector <stEmployee>& vEmployees)
{
    cout << "\nEmployees Vector: \n";
    // ranged loop
    for (stEmployee& employee : vEmployees)
    {
        cout << "FirstName: " << employee.firstName << endl;
        cout << "LastName : " << employee.lastName << endl;
        cout << "Salary   : " << employee.salary << endl;
        cout << endl;
    }
    cout << endl;
}

// Main function
int main()
{
    // std::vector<T> vector_name;
    vector <stEmployee> vEmployees;
    ReadEmployees(vEmployees);
    PrintEmployees(vEmployees);
    return 0;
}