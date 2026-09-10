// C++ program to demonstrate the swap() function of stack
#include <stack>
#include <iostream>
using namespace std;
// Main function
int main()
{
    // Stack container declaration
    stack<int> MyStack1;
    stack<int> MyStack2;
    // Pushing elements into first stack
    MyStack1.push(10);
    MyStack1.push(20);
    MyStack1.push(30);
    MyStack1.push(40);
    // Pushing elements into 2nd stack
    MyStack2.push(50);
    MyStack2.push(60);
    MyStack2.push(70);
    MyStack2.push(80);
    // Using swap() function to swap elements of stacks
    MyStack1.swap(MyStack2);
    // Printing the first stack
    cout << "MyStack1 = ";
    while (!MyStack1.empty()) {
        cout << MyStack1.top() << " ";
        MyStack1.pop();
    }
    // Printing the second stack
    cout << endl << "MyStack2 = ";
    // 
    while (!MyStack2.empty()) {
        cout << MyStack2.top() << " ";
        MyStack2.pop();
    }
    system("pause>0");
    return 0;
}