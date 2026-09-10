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
// Main function
int main()
{
	// Create nodes
    Node* head;
    Node* Node1 = NULL;
    Node* Node2 = NULL;
    Node* Node3 = NULL;
    // Allocate 3 nodes in the heap
    Node1 = new Node();
    Node2 = new Node();
    Node3 = new Node();
    // Assign value values
    Node1->value = 1;
    Node2->value = 2;
    Node3->value = 3;
    // Connect nodes
    Node1->next = Node2;
    Node1->prev = NULL;
    Node2->next = Node3;
    Node2->prev = Node1;
    Node3->next = NULL;
    Node3->prev = Node2;
    // Print the linked list value
    head = Node1;
    while (head != NULL) {
        cout << head->value << endl;
        head = head->next;
    }
    system("pause>0");
    return 0;
}