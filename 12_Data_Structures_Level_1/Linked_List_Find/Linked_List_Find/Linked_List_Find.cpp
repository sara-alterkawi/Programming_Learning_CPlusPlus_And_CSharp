// Linked_List_Find
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
// Find a node in the linked list
Node* Find(Node* head, int Value)
{
    while (head != NULL) {
        if (head->value == Value)
            return head;
        head = head->next;
    }
    return NULL;
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
	// Create an empty linked list
    Node* head = NULL;
	// Insert some nodes at the beginning of the linked list
    InsertAtBeginning(head, 1);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 5);
	// Print the linked list
    PrintList(head);
	// Find a node in the linked list
    Node* N1 = Find(head, 2);
    if (N1 != NULL)
        cout << "\nNode Found :-)\n";
    else
        cout << "\nNode Is not found :-(\n";
    system("pause>0");
}