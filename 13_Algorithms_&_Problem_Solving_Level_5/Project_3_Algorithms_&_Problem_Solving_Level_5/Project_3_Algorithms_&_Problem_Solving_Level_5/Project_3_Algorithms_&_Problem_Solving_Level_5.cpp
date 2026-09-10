/*
Project: Stack Using Queue and Doubly Linked List

The goal of this project is to practice implementing and using
a Stack in C++ by building it on top of a Queue.

In this project, we will:
1. Create a Stack of integers.
2. Add elements to the Stack using the push() function.
3. Remove the top element from the Stack using the pop() function.
4. Print all elements of the Stack.
5. Display the current size of the Stack.
6. Get the top element using the Top() function.
7. Get the bottom element using the Bottom() function.
8. Use a Queue internally to manage the Stack elements.
9. Use a Doubly Linked List indirectly through the Queue.
10. Print the Stack after performing different operations to verify the result.

The purpose is to understand how a Stack works using the
LIFO (Last In, First Out) principle, where the last element
added to the Stack is the first element removed.
This project also demonstrates how one data structure can be
built on top of another data structure. The Stack inherits
from the Queue, while the Queue uses a Doubly Linked List
internally to store and manage its elements.
*/
/*
Extension1:
In this extension, we added the GetItem() function to return
the value of an item at a specified index in the Stack.
The function uses the GetItem() function inherited from
the Queue class.
*/
/*
Extension2:
In this extension, we added the Reverse() function to reverse
the order of the elements in the Stack.
The function uses the Reverse() function inherited from
the Queue class.
*/
/*
Extension3:
In this extension, we added the UpdateItem() function to update
the value of an item at a specified index in the Stack.
The function uses the UpdateItem() function inherited from
the Queue class.
*/
/*
Extension4:
In this extension, we added the InsertAfter() function to insert
a new item after a specified index in the Stack.
The function uses the InsertAfter() function inherited from
the Queue class.
*/
/*
Extension5:
In this extension, we added the InsertAtFront() function to insert
a new item at the top of the Stack.
The function uses the InsertAtFront() function inherited from
the Queue class.
*/
/*
Extension6:
In this extension, we added the InsertAtBack() function to insert
a new item at the bottom of the Stack.
The function uses the InsertAtBack() function inherited from
the Queue class.
*/
/*
Extension7:
In this extension, we added the Clear() function to remove all
items from the Stack and make it empty.
The function uses the Clear() function inherited from
the Queue class.
*/
#include <iostream>
#include "clsMyStack.h"
using namespace std;
// main function
int main() {
    // Create an integer Stack.
    clsMyStack<int> MyStack;
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
    // Test Extension1: GetItem()
    /*
    cout << "\n\nItem(2): " << MyStack.GetItem(2);
    */
    // Test Extension2: Reverse()
    /*
    MyStack.Reverse();
    cout << "\n\nStack after Reverse(): \n";
    MyStack.Print();
    */
    // Test Extension3: UpdateItem()
    /*
    MyStack.UpdateItem(2, 600);
    cout << "\n\nStack after updating Item(2) to 600: \n";
    MyStack.Print();
    */
    // Test Extension4: InsertAfter()
    /*
    MyStack.InsertAfter(2, 800);
    cout << "\n\nStack after inserting 800 after Item(2): \n";
    MyStack.Print();
    */
    // Test Extension5: InsertAtFront()
    /*
    MyStack.InsertAtFront(1000);
    cout << "\n\nStack after inserting 1000 at top: \n";
    MyStack.Print();
    */
    // Test Extension6: InsertAtBack()
    /*
    MyStack.InsertAtBack(2000);
    cout << "\n\nStack after inserting 2000 at bottom: \n";
    MyStack.Print();
    */
    // Test Extension7: Clear()
    /*
    MyStack.Clear();
    cout << "\n\nStack after Clear(): \n";
    MyStack.Print();
    */
    return 0;
}