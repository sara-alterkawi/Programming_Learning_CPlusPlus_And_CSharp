// C++ program to insert a node after a given node in a linked list
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
// Search a node in the linked list
Node* Find(Node* head, int Value)
{
    while (head != NULL) {
        if (head->value == Value)
            return head;
        head = head->next;
    }
    return NULL;
}
// Insert a node after a node
void InsertAfter(Node* prev_node, int Value)
{
    if (prev_node == NULL) {
        cout << "the given previous node cannot be NULL";
        return;
    }
    Node* new_node = new Node();
    new_node->value = Value;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
// Print the linked list
void PrintList(Node* head)
{
    cout << "\n";
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
	// Insert 6. So linked list becomes 6->5->NULL
    PrintList(head);
    Node* N1 = NULL;
	// Insert 500 after 2. So linked list becomes 6->5->4->3->2->500->NULL
    N1 = Find(head, 2);
    InsertAfter(N1, 500);
	// Print the linked list
    PrintList(head);
    /* N1 = Find(head, 500);
     InsertAfter(N1, 600);
     PrintList(head);*/
    system("pause>0");
}