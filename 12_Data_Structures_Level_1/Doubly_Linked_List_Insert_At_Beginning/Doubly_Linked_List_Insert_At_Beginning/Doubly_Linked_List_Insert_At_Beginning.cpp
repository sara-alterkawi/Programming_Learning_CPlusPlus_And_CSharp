// C++ program to demonstrate doubly linked list
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
// Print the linked list
void PrintListDetails(Node* head)
{
    cout << "\nLinked List Details:\n";
    while (head != NULL) {
        PrintNodeDetails(head);
        head = head->next;
    }
}
// Print the linked list
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
// Main function
int main()
{
	// Initialize the head of the list
    Node* head = NULL;
	// Insert nodes at the beginning of the list
    InsertAtBeginning(head, 5);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);
	// Print the linked list
    PrintList(head);
	// Print the linked list details
    PrintListDetails(head);
    system("pause>0");
}