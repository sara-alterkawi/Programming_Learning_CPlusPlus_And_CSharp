// A stack is a container that supports last in first out (LIFO) semantics for inserts and deletes.
#include <iostream>
#include <stack>
using namespace std;
// Main function
int main()

{
    // Create a stack of ints
    stack <int> stkNumbers;
    // Push into stack
    stkNumbers.push(10);
    stkNumbers.push(20);
    stkNumbers.push(30);
    stkNumbers.push(40);
    stkNumbers.push(50);

    // We can access the element by getting the top and popping
    // Until the stack is empty
    cout << "Count = " << stkNumbers.size() << endl;
    cout << "Numbers are:\n";
	// Loop until stack is empty
    while (!stkNumbers.empty()) {
        // print top element
        cout << stkNumbers.top() << "\n";
        // pop top element from stack
        stkNumbers.pop();
    }
    system("pause>0");
    return 0;
}