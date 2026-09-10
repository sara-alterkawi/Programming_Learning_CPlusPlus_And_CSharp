// What is ‘this’ pointer?
#include <iostream>  
using namespace std;
// 'this' is a special pointer available in all non-static member functions of a class.
class clsEmployee
{
	// Data Members
public:
    int ID;
    string Name;
    float Salary;
	// Constructor
    clsEmployee(int ID, string Name, float Salary)
    {
        this->ID = ID;
        this->Name = Name;
        this->Salary = Salary;
    }
	// Static Member Function
    static void Func1(clsEmployee Employee)
    {
        Employee.Print();
    }
	// Non-Static Member Function
    void Func2()
    {
        Func1(*this);
    }
	// Print Function
    void Print()
    {
        cout << ID << "  " << Name << "  " << Salary << endl;
        // cout << this->ID << "  " << this->Name << "  " << this->Salary << endl;
    }
};
// Main Function
int main(void)
{
    clsEmployee Employee1(101, "Ali", 5000);
    Employee1.Print();
    Employee1.Func2();
    return 0;
}