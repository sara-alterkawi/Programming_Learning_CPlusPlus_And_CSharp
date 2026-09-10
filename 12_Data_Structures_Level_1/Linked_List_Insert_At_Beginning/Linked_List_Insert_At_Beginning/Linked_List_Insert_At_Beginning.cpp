// Linked List Insert At Beginning
#include <iostream>
using namespace std;
// Create a node
class Node
{
public:
    int value;
    Node* next;
};
// Insert a node at the beginning of the linked list
void InsertAtBeginning(Node*& head, int value)
{
    // Allocate memory to a node
    Node* new_node = new Node();
    // Insert the data
    new_node->value = value;
    new_node->next = head;
    // Move head to new node
    head = new_node;
}
// Print the linked list
void PrintList(Node* head)
{
    while (head != NULL) {
        cout << head->value << " ";
        head = head->next;
    }
}
// Main function
int main()
{
	// Start with the empty list
    Node* head = NULL;
	// Insert 5. So linked list becomes 5->NULL
    InsertAtBeginning(head, 1);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 5);
	// Print the linked list
    PrintList(head);
    system("pause>0");
}