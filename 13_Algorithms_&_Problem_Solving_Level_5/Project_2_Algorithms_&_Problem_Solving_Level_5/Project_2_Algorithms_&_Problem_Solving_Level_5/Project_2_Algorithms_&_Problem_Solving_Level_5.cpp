/*
Project: Queue Using Doubly Linked List
The goal of this project is to practice implementing and using
a Queue in C++ by building it on top of a Doubly Linked List.
In this project, we will:
1. Create a Queue of integers.
2. Add elements to the Queue using the push() function.
3. Remove the first element from the Queue using the pop() function.
4. Print all elements of the Queue.
5. Display the current size of the Queue.
6. Get the first element using the front() function.
7. Get the last element using the back() function.
8. Check whether the Queue is empty using the IsEmpty() function.
9. Use a Doubly Linked List internally to manage the Queue elements.
10. Print the Queue after performing different operations to verify the result.

The purpose is to understand how a Queue works using the
FIFO (First In, First Out) principle, where the first element
added to the Queue is the first element removed.
This project also demonstrates how one data structure can be
built using another data structure. The Queue uses the
Doubly Linked List to handle insertion, deletion, and access
to its elements.
*/
/*
Extension1:
In this extension, we added the GetItem() function to return
the value of an item at a specified index in the Queue.
The index starts from 0, where index 0 represents the first item.
If the index is out of range, the function returns the default
value of the data type.
*/
/*
Extension2:
In this extension, we added the Reverse() function to reverse
the order of the elements in the Queue.
The function uses the Reverse() function of the
Doubly Linked List.
*/
/*
Extension3:
In this extension, we added the UpdateItem() function to update
the value of an item at a specified index in the Queue.
The function uses the UpdateItem() function of the
Doubly Linked List.
*/
/*
Extension4:
In this extension, we added the InsertAfter() function to insert
a new item after a specified index in the Queue.
The function uses the InsertAfter() function of the
Doubly Linked List.
*/
/*
Extension5:
In this extension, we added the InsertAtFront() function to insert
a new item at the front of the Queue.
The function uses the InsertAtBeginning() function of the
Doubly Linked List.
*/
/*
Extension6:
In this extension, we added the InsertAtBack() function to insert
a new item at the back of the Queue.
The function uses the InsertAtEnd() function of the
Doubly Linked List.
*/
/*
Extension7:
In this extension, we added the Clear() function to remove all
items from the Queue and make it empty.
The function uses the Clear() function of the
Doubly Linked List.
*/
#include <iostream>
#include "clsMyQueue.h"
using namespace std;
// Main function
int main() {
    // Create an integer queue.
    clsMyQueue<int> MyQueue;
    // Add items to the queue.
    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);
    // Display the queue elements.
    cout << "\nQueue: \n";
    MyQueue.Print();
    // Display basic queue information.
    cout << "\nQueue Size: " << MyQueue.Size();
    cout << "\nQueue Front: " << MyQueue.front();
    cout << "\nQueue Back: " << MyQueue.back();
    // Remove the first item from the queue.
    MyQueue.pop();
    // Display the queue after removing the first item.
    cout << "\n\nQueue after pop(): \n";
    MyQueue.Print();

    // Test Extension1:
    /*
    cout << "\n\n Item(2) : " << MyQueue.GetItem(2);
    */
    // Test Extension2:
    /*
    MyQueue.Reverse();
    cout << "\n\nQueue after reverse() : \n";
    MyQueue.Print();
    */
    // Test Extension3:
    /*
    MyQueue.UpdateItem(2, 600);
    cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueue.Print();
    */
    // Test Extension4:
    /*
    MyQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyQueue.Print();
    */
    // Test Extension5:
    /*
    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyQueue.Print();
    */
    // Test Extension6:
    /*
    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at back: \n";
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