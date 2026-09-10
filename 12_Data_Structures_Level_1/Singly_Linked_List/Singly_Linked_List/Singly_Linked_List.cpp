// Singly Linked List implementation in C++
#include <iostream>
using namespace std;

// Creating a node
class Node
{
public:
    int value;
    Node* next;
};
// Main function
int main()
{
	// Head of the list
    Node* head;
	// Three nodes in the linked list
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
    Node2->next = Node3;
    Node3->next = NULL;
    head = Node1;
    // Print the linked list value
    while (head != NULL) {
		cout << "Node value: ";
        cout << head->value << endl;
        head = head->next;
    }
    system("pause>0");
    return 0;
}
