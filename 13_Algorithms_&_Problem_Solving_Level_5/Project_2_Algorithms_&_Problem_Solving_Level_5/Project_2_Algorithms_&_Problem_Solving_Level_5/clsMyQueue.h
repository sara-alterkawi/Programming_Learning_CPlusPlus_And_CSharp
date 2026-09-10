#pragma once
#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;
// Queue class implemented using a Doubly Linked List
template <class T>
// 
class clsMyQueue {
protected:
    // Stores the queue elements using a Doubly Linked List
    clsDblLinkedList <T> _MyList;
public:
    // Adds a new item to the end of the queue
    void push(T Item) {
        _MyList.InsertAtEnd(Item);
    }
    // Removes the first item from the queue
    void pop() {
        _MyList.DeleteFirstNode();
    }
    // Prints all items currently stored in the queue
    void Print() {
        _MyList.PrintList();
    }
    // Returns the number of items in the queue
    int Size() {
        return _MyList.Size();
    }
    // Checks whether the queue is empty
    bool IsEmpty() {
        return _MyList.IsEmpty();
    }
    // Returns the first item in the queue
    T front() {
        return _MyList.GetItem(0);
    }
    // Returns the last item in the queue
    T back() {
        return _MyList.GetItem(Size() - 1);
    }
    // Returns the value of an item at the specified index
    T GetItem(int Index) {
        return _MyList.GetItem(Index);
    }
    // Reverses the order of the items in the queue
    void Reverse() {
        _MyList.Reverse();
    }
    // Updates the value of an item at the specified index
    void UpdateItem(int Index, T NewValue) {
        _MyList.UpdateItem(Index, NewValue);
    }
    // Inserts a new item after the specified index
    void InsertAfter(int Index, T Value) {
        _MyList.InsertAfter(Index, Value);
    }
    // Inserts a new item at the front of the queue
    void InsertAtFront(T Value) {
        _MyList.InsertAtBeginning(Value);
    }
    // Inserts a new item at the back of the queue
    void InsertAtBack(T Value) {
        _MyList.InsertAtEnd(Value);
    }
    // Removes all items from the queue
    void Clear() {
        _MyList.Clear();
    }
};