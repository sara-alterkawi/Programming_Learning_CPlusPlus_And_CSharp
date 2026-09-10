// Doubly Linked List Add After A Specific Node
#include <iostream>
using namespace std;
// Create a node
class Node
{
public:
    int value;
    Node* next;
    Node* prev;
};
// Function to insert a node at the beginning of the list
void InsertAtBeginning(Node*& head, int value)
{
    /*
       1-Create a new node with the desired value.
       2-Set the next pointer of the new node to the current head of the list.
       3-Set the previous pointer of the current head to the new node.
       4-Set the new node as the new head of the list.
   */
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = head;
    newNode->prev = NULL;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}
// Function to print the linked list
void PrintNodeDetails(Node* head)
{
    if (head->prev != NULL)
        cout << head->prev->value << " <- ";
    else
        cout << "NULL <- ";
    // Print the current node value
    cout << head->value;
    // Print the next node value
    if (head->next != NULL)
        cout << " -> " << head->next->value << "\n";
    else
        cout << " -> NULL\n";
}
// Function to print the linked list
void PrintListDetails(Node* head)
{
    cout << "\nLinked List Details:\n";
    while (head != NULL) {
        PrintNodeDetails(head);
        head = head->next;
    }
}
// Function to print the linked list
void PrintList(Node* head)
{
    cout << "\nLinked List Contenet:\n";
    cout << "NULL <- ";
    while (head != NULL) {
        cout << head->value;
        if (head->next != NULL)
            cout << " -> <- ";
        head = head->next;
    }
    cout << " -> NULL\n";
}
// Function to find a node with a specific value
Node* Find(Node* head, int Value)
{
    while (head != NULL) {

        if (head->value == Value)
            return head;
        head = head->next;
    }
    return NULL;
}
// Function to insert a node after a specific node
void InsertAfter(Node* current, int value)
{
    /*  1 - Create a new node with the desired value.
         2-Set the next pointer of the new node to the next node of the current node.
         3-Set the previous pointer of the new node to the current node.
         4-Set the next pointer of the current node to the new node.
         5-Set the previous pointer of the next node to the new node(if it exists).
    */
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = current->next;
    newNode->prev = current;
    if (current->next != NULL) {
        current->next->prev = newNode;
    }
    current->next = newNode;
}
// Main function
int main()
{
    // Create an empty linked list
    Node* head = NULL;
	// Insert nodes at the beginning of the list
    InsertAtBeginning(head, 5);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);
	// Print the linked list
    cout << "\nLinked List Contenet:\n";
    PrintList(head);
    PrintListDetails(head);
    Node* N1 = Find(head, 2);
	// Insert a new node with value 500 after the node with value 2
    InsertAfter(N1, 500);
	// Print the linked list after insertion
    cout << "\n\n\nLinked List Contenet after InsertAfter:\n";
    PrintList(head);
    PrintListDetails(head);
    system("pause>0");
}