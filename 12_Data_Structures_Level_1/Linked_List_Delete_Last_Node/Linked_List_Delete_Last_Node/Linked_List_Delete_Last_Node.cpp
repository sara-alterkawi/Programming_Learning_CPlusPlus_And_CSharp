// C++ program to Delete Last Node
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
// Insert at the end
void InsertAtEnd(Node*& head, int Value)
{
    Node* new_node = new Node();
    new_node->value = Value;
    new_node->next = NULL;
    if (head == NULL) {
        head = new_node;
        return;
    }
    Node* LastNode = head;
    while (LastNode->next != NULL)
    {
        LastNode = LastNode->next;
    }
    LastNode->next = new_node;
    return;
}
// Delete a node
void DeleteNode(Node*& head, int Value)
{
    Node* Current = head, * Prev = head;
    if (head == NULL)
    {
        return;
    }
    if (Current->value == Value) {
        head = Current->next;
        delete Current;//free from memory
        return;
    }
    // Find the key to be deleted
    while (Current != NULL && Current->value != Value) {
        Prev = Current;
        Current = Current->next;
    }
    // If the value is not present
    if (Current == NULL) return;
    // Remove the node
    Prev->next = Current->next;
    delete Current;//free from memory
}
// Delete First Node node
void DeleteFirstNode(Node*& head)
{
    Node* Current = head;
    if (head == NULL)
    {
        return;
    }
    head = Current->next;
    delete Current;//free from memory
    return;
}
// Delete Last node
void DeleteLastNode(Node*& head)
{
    Node* Current = head, * Prev = head;
    if (head == NULL)
    {
        return;
    }
    if (Current->next == NULL) {
        head = NULL;
        delete Current; // Free from memory
        return;
    }
    // Find the key to be deleted
    while (Current != NULL && Current->next != NULL) {
        Prev = Current;
        Current = Current->next;
    }
    // Remove the node
    Prev->next = NULL;
    delete Current; // Free from memory
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
    // Insert values in the linked list
    InsertAtEnd(head, 1);
    InsertAtEnd(head, 2);
    InsertAtEnd(head, 3);
    InsertAtEnd(head, 4);
    InsertAtEnd(head, 5);
    InsertAtEnd(head, 6);
    // Print the linked list
    PrintList(head);
    // Delete the first node
    DeleteLastNode(head);
    PrintList(head);
    system("pause>0");
}