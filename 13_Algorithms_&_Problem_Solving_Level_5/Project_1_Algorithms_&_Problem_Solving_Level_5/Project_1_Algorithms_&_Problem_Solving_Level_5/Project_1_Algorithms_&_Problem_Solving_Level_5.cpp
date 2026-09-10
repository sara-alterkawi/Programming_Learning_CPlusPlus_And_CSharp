/*
Project: Doubly Linked List
The goal of this project is to practice implementing and using
a Doubly Linked List in C++.
In this project, we will:
1. Create a Doubly Linked List of integers.
2. Insert nodes at the beginning of the list.
3. Print all elements of the list.
4. Search for a specific value using the Find() function.
5. Insert a new node after a specific node.
6. Insert a new node at the end of the list.
7. Delete a specific node from the list.
8. Delete the first node.
9. Delete the last node.
10. Print the list after each operation to verify the result.
The purpose is to understand how nodes are connected using
both Next and Prev pointers, and how insertion and deletion
operations affect the structure of a Doubly Linked List.
*/
/*
Extension1:
In this extension, we added Size() function to display the current number of nodes
in the linked list before and after inserting elements.
*/
/*
Extension2:
In this extension, we added the IsEmpty() function to check whether
the linked list contains any nodes.
*/
/*
Extension3:
In this extension, we added the Clear() function to remove all nodes
from the linked list and make the list empty.
*/
/*
Extension4:
In this extension, we added the Reverse() function to reverse the order
of the nodes in the linked list by swapping their Next and Prev pointers.
*/
/*
Extension5:
In this extension, we added the GetNode() function to return a pointer
to the node at a specified index in the linked list.
The index starts from 0, where index 0 represents the first node.
*/
/*
Extension6:
In this extension, we added the GetItem() function to return the value
of a node at a specified index in the linked list.
The index starts from 0, where index 0 represents the first node.
If the index is out of range, the function returns the default value
of the data type.
*/
/*
Extension7:
In this extension, we added the UpdateItem() function to update
the value of a node at a specified index in the linked list.
The function returns true if the item is successfully updated,
and false if the specified index is out of range.
*/
/*
Extension8:
In this extension, we added an overloaded InsertAfter() function
that allows us to insert a new node after a specified index.
The function first uses GetNode() to find the node at the given index.
If the node exists, the new value is inserted after that node
using the existing InsertAfter(Node*, Value) function.
The function returns true if the insertion is successful,
and false if the specified index is out of range.
*/

#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;
// Main function
int main() {
    clsDblLinkedList <int> MydblLinkedList;
    // Test Extension2:
    /*
    if (MydblLinkedList.IsEmpty())
        cout << "\n\nYes List is empty.\n";
    else
        cout << "\n\nNo List is not Empty.\n";
    */

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size();
    // Test Extension3:
    /*
    cout << "\nExecuting .Clear()";
    MydblLinkedList.Clear();
    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size();
    */
    // Test Extension4:
    /*
    MydblLinkedList.Reverse();
    cout << "\nLinked List Contenet after reverse:\n";
    MydblLinkedList.PrintList();
    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size();
    */
    // Test Extension5:
    /*
    clsDblLinkedList <int> ::Node *N;
    N = MydblLinkedList.GetNode(2);
    cout << "\nNode Value is: " << N->value ;
    */
    // Test Extension6:
    /*
        cout << "\nItem(2) Value is: " << MydblLinkedList.GetItem(2);
    */
    // Test Extension7:
    /*
    MydblLinkedList.UpdateItem(2, 500);
    cout << "\nAfter Updating Item(2): " <<"\n";
    MydblLinkedList.PrintList();
    */
    // Test Extension8:
    /*
    MydblLinkedList.InsertAfter(1, 500);
    cout << "\nAfter Insert: " <<"\n";
    MydblLinkedList.PrintList();
    */
    // Test all function the project requirements
    /*
    clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);

    if (N1 != NULL)
        cout << "\nNode with value 2 is Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";

    MydblLinkedList.InsertAfter(N1, 500);
    cout << "\nAfter Inserting 500 after 2:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAtEnd(700);
    cout << "\nAfter Inserting 700 at end:\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
    MydblLinkedList.DeleteNode(N2);
    cout << "\nAfter Deleting 4:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.DeleteFirstNode();
    cout << "\nAfter Deleting First Node:\n";
    MydblLinkedList.PrintList();

    cout << "\nAfter Deleting Last Node:\n";
    MydblLinkedList.DeleteLastNode();
    MydblLinkedList.PrintList();

    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size();

*/
    return 0;
}