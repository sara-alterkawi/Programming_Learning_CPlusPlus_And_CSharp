/*
Project: Stack Using Dynamic Array
The goal of this project is to practice implementing and using
a Stack in C++ by building it on top of a Dynamic Array.
In this project, we will:
1. Create a Stack of integers.
2. Add items using the push() function.
3. Remove the top item using the pop() function.
4. Display the Stack elements.
5. Display the Stack size.
6. Access the top and bottom items using Top() and Bottom().
7. Access an item using its index.
8. Reverse the order of the Stack items.
9. Update an item at a specified index.
10. Insert items at different positions.
11. Clear all Stack items.

The purpose is to understand how a Stack works using the
LIFO (Last In, First Out) principle and how a Stack can be
implemented using another data structure, in this case a Dynamic Array.
*/
/*
Extension1:
In this extension, we added the GetItem() function to return
the value of an item at a specified index.
*/
/*
Extension2:
In this extension, we added the Reverse() function to reverse
the order of the Stack items.
*/
/*
Extension3:
In this extension, we added the UpdateItem() function to update
the value of an item at a specified index.
*/
/*
Extension4:
In this extension, we added the InsertAfter() function to insert
a new item after a specified index.
*/
/*
Extension5:
In this extension, we added the InsertAtFront() function to insert
a new item at the top of the Stack.
*/
/*
Extension6:
In this extension, we added the InsertAtBack() function to insert
a new item at the bottom of the Stack.
*/
/*
Extension7:
In this extension, we added the Clear() function to remove
all items from the Stack and make it empty.
*/
#include <iostream>
#include "clsMyStackArr.h"
using namespace std;
// Main function
int main() {
    // Create an integer Stack.
    clsMyStackArr<int> MyStack;
    // Add items to the Stack.
    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);
    // Display the Stack elements.
    cout << "\nStack: \n";
    MyStack.Print();
    // Display basic Stack information.
    cout << "\nStack Size: " << MyStack.Size();
    cout << "\nStack Top: " << MyStack.Top();
    cout << "\nStack Bottom: " << MyStack.Bottom();
    // Remove the top item from the Stack.
    MyStack.pop();
    // Display the Stack after removing the top item.
    cout << "\n\nStack after pop(): \n";
    MyStack.Print();
    // Test Extension1:
    /*
    cout << "\n\nItem(2): " << MyStack.GetItem(2);
    */
    // Test Extension2:
    /*
    MyStack.Reverse();
    cout << "\n\nStack after Reverse(): \n";
    MyStack.Print();
    */
    // Test Extension3:
    /*
    MyStack.UpdateItem(2, 600);
    cout << "\n\nStack after updating Item(2) to 600: \n";
    MyStack.Print();
    */
    // Test Extension4:
    /*
    MyStack.InsertAfter(2, 800);
    cout << "\n\nStack after inserting 800 after Item(2): \n";
    MyStack.Print();
    */
    // Test Extension5:
    /*
    MyStack.InsertAtFront(1000);
    cout << "\n\nStack after inserting 1000 at top: \n";
    MyStack.Print();
    */
    // Test Extension6:
    /* *
    MyStack.InsertAtBack(2000);
    cout << "\n\nStack after inserting 2000 at bottom: \n";
    MyStack.Print();
    */
    // Test Extension7:
    /*
    MyStack.Clear();
    cout << "\n\nStack after Clear(): \n";
    MyStack.Print();
    */
    return 0;
}