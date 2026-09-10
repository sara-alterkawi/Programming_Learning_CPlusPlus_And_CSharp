#pragma once
#include <iostream>
using namespace std;
// Dynamic Array class template.
template <class T>
class clsDynamicArray {
protected:
    int _Size = 0;
    T* _TempArray;
public:
    // Pointer to the dynamically allocated array.
    T* OriginalArray;
    // Constructor that creates a Dynamic Array with the specified size.
    clsDynamicArray(int Size = 0) {
        // Prevent creating an array with a negative size.
        if (Size < 0)
            Size = 0;
        _Size = Size;
        // Dynamically allocate memory for the array.
        OriginalArray = new T[_Size];
    }
    // Destructor that releases the dynamically allocated memory.
    ~clsDynamicArray() {
        delete[] OriginalArray;
    }
    // Sets a value at the specified index.
    // Returns false if the index is out of range.
    bool SetItem(int index, T Value) {
        if (index < 0 || index >= _Size)
            return false;
        OriginalArray[index] = Value;
        return true;
    }
    // Returns the current size of the array.
    int Size() {
        return _Size;
    }
    // Checks whether the array is empty.
    bool IsEmpty() {
        return _Size == 0;
    }
    // Prints all elements currently stored in the array.
    void PrintList() {
        for (int i = 0; i < _Size; i++) {
            cout << OriginalArray[i] << " ";
        }
        cout << "\n";
    }
    // Resizes the Dynamic Array while preserving the existing elements.
    void Resize(int NewSize) {
        if (NewSize < 0) {
            NewSize = 0;
        };
        _TempArray = new T[NewSize];
        // Limit the original size to the new size if it is less.
        if (NewSize < _Size)
            _Size = NewSize;
        // Copy all data from original array until the size
        for (int i = 0; i < _Size; i++) {
            _TempArray[i] = OriginalArray[i];
        }
        _Size = NewSize;
        delete[] OriginalArray;
        OriginalArray = _TempArray;
    }
    // Returns the value stored at the specified index.
    T GetItem(int index) {
        return OriginalArray[index];
    }
    // Reverses the order of the elements in the Dynamic Array.
    void  Reverse() {
        _TempArray = new T[_Size];
        int counter = 0;
        for (int i = _Size - 1; i >= 0; i--) {
            _TempArray[counter] = OriginalArray[i];
            counter++;
        }
        delete[] OriginalArray;
        OriginalArray = _TempArray;
    }
    // Removes all elements from the Dynamic Array and makes it empty.
    void Clear() {
        _Size = 0;
        _TempArray = new T[0];
        delete[] OriginalArray;
        OriginalArray = _TempArray;
    }
    // Deletes the item at the specified index.
    // Returns false if the index is out of range.
    bool DeleteItemAt(int index) {
        if (index >= _Size || index < 0) {
            return false;
        }
        _Size--;
        _TempArray = new T[_Size];
        //copy all before index
        for (int i = 0; i < index; i++) {
            _TempArray[i] = OriginalArray[i];
        }
        //copy all after index
        for (int i = index + 1; i < _Size + 1; i++) {
            _TempArray[i - 1] = OriginalArray[i];
        }
        delete[] OriginalArray;
        OriginalArray = _TempArray;
        return true;
    }
    // Deletes the first item from the Dynamic Array.
    void DeleteFirstItem() {
        DeleteItemAt(0);
    }
    // Deletes the last item from the Dynamic Array.
    void DeleteLastItem() {
        DeleteItemAt(_Size - 1);
    }
    // Searches for a specific value and returns its index.
    // Returns -1 if the value is not found.
    int Find(T Value) {
        for (int i = 0; i < _Size; i++) {
            if (OriginalArray[i] == Value) {
                return i;
            }
        }
        return -1;
    }
    // Deletes the first item with the specified value.
    // Returns false if the value is not found.
    bool DeleteItem(T Value) {
        int index = Find(Value);
        if (index == -1) {
            return false;
        }
        DeleteItemAt(index);
        return true;
    }
    // Inserts a new item at the specified index.
    // Returns false if the index is out of range.
    bool InsertAt(T index, T value) {
        if (index > _Size || index < 0) {
            return false;
        }
        _Size++;
        _TempArray = new T[_Size];
        //copy all before index
        for (int i = 0; i < index; i++) {
            _TempArray[i] = OriginalArray[i];
        }
        _TempArray[index] = value;
        //copy all after index
        for (int i = index; i < _Size - 1; i++) {
            _TempArray[i + 1] = OriginalArray[i];
        }
        delete[] OriginalArray;
        OriginalArray = _TempArray;
        return true;
    }
    // Inserts a new item at the beginning of the Dynamic Array.
    // Returns false if the insertion fails.
    void InsertAtBeginning(T value) {
        InsertAt(0, value);
    }
    // Inserts a new item before the specified index.
    // Returns false if the index is out of range.
    bool InsertBefore(T index, T value) {
        if (index < 1)
            return InsertAt(0, value);
        else
            return InsertAt(index - 1, value);
    }
    // Inserts a new item after the specified index.
    // Returns false if the index is out of range.
    bool InsertAfter(T index, T value) {
        if (index >= _Size)
            return InsertAt(_Size - 1, value);
        else
            return InsertAt(index + 1, value);
    }
    // Inserts a new item at the end of the Dynamic Array.
    bool InsertAtEnd(T value) {
        return InsertAt(_Size, value);
    }
};