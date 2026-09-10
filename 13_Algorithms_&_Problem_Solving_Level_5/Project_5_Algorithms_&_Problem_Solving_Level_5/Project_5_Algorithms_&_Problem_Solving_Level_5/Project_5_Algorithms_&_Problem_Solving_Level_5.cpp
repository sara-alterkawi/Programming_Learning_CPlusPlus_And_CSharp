/*
Project: Queue Using Dynamic Array

The goal of this project is to practice implementing and using
a Queue in C++ by building it on top of a Dynamic Array.

In this project, we will:
1. Create a Queue of integers.
2. Add items using the push() function.
3. Remove the first item using the pop() function.
4. Display the Queue elements.
5. Display the Queue size.
6. Access the first and last items using front() and back().
7. Access an item using its index.
8. Reverse the order of the Queue items.
9. Update an item at a specified index.
10. Insert items at different positions.
11. Clear all Queue items.

The purpose is to understand how a Queue can be implemented
using another data structure, in this case a Dynamic Array.
*/
/*
Extension1:
In this extension, we added the GetItem() function to return
the value of an item at a specified index.
*/
/*
Extension2:
In this extension, we added the Reverse() function to reverse
the order of the Queue items.
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
a new item at the front of the Queue.
*/
/*
Extension6:
In this extension, we added the InsertAtBack() function to insert
a new item at the back of the Queue.
*/
/*
Extension7:
In this extension, we added the Clear() function to remove
all items from the Queue and make it empty.
*/
#include <iostream>
#include "clsMyQueueArr.h"
using namespace std;

// Main function
int main() {
    // Create an integer Queue.
    clsMyQueueArr<int> MyQueue;
    // Add items to the Queue.
    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);
    // Display the Queue elements.
    cout << "\nQueue: \n";
    MyQueue.Print();
    // Display basic Queue information.
    cout << "\nQueue Size: " << MyQueue.Size();
    cout << "\nQueue Front: " << MyQueue.front();
    cout << "\nQueue Back: " << MyQueue.back();

    // Remove the first item from the Queue.
    MyQueue.pop();
    // Display the Queue after removing the first item.
    cout << "\n\nQueue after pop(): \n";
    MyQueue.Print();
    // Test Extension1:
    /*
    cout << "\n\nItem(2): " << MyQueue.GetItem(2);
    */
    // Test Extension2:
    /*
    MyQueue.Reverse();
    cout << "\n\nQueue after Reverse(): \n";
    MyQueue.Print();
    */
    // Test Extension3:
    /*
    MyQueue.UpdateItem(2, 600);
    cout << "\n\nQueue after updating Item(2) to 600: \n";
    MyQueue.Print();
    */
    // Test Extension4:
    /*
    MyQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after inserting 800 after Item(2): \n";
    MyQueue.Print();
    */
    // Test Extension5:
    /*
    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after inserting 1000 at front: \n";
    MyQueue.Print();
    */
    // Test Extension6:
    /*
    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after inserting 2000 at back: \n";
    MyQueue.Print();
    */
    // Test Extension7:
    /*
    MyQueue.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyQueue.Print();
    */
    return 0;
}