/*
Project: Dynamic Array
The goal of this project is to practice creating and using
a Dynamic Array in C++.
In this project, we will:
1. Create a Dynamic Array with a specified size.
2. Set values using the SetItem() function.
3. Check whether the array is empty using IsEmpty().
4. Display the array size using Size().
5. Print all elements using PrintList().

The purpose is to understand dynamic memory allocation
and how a class can manage a dynamically allocated array.
*/
/*
Extension1:
In this extension, we added the Resize() function to change
the size of the Dynamic Array while preserving its existing data.
*/
/*
Extension2:
In this extension, we added the GetItem() function to return
the value of an item at a specified index in the Dynamic Array.
*/
/*
Extension3:
In this extension, we added the Reverse() function to reverse
the order of the elements in the Dynamic Array.
*/
/*
Extension4:
In this extension, we added the Clear() function to remove
all elements from the Dynamic Array and make it empty.
*/
/*
Extension5:
In this extension, we added the DeleteItemAt() function to delete
an item at a specified index from the Dynamic Array.
*/
/*
Extension6:
In this extension, we added the DeleteFirstItem() function to
delete the first item from the Dynamic Array.
*/
/*
Extension7:
In this extension, we added the DeleteLastItem() function to
delete the last item from the Dynamic Array.
*/
/*
Extension8:
In this extension, we added the Find() function to search for
a specific value in the Dynamic Array and return its index.
*/
/*
Extension9:
In this extension, we added the DeleteItem() function to delete
an item by its value from the Dynamic Array.
*/
/* Extension10: In this extension, we added the InsertAt() function
to insert a new item at a specified index in the Dynamic Array. */
/*
Extension11:
In this extension, we added the InsertAtBeginning() function
to insert a new item at the beginning of the Dynamic Array.
*/
/*
Extension12:
In this extension, we added the InsertBefore() function to insert
a new item before a specified index in the Dynamic Array.
*/
/*
Extension13:
In this extension, we added the InsertAfter() function to insert
a new item after a specified index in the Dynamic Array.
*/
/*
Extension14:
In this extension, we added the InsertAtEnd() function to insert
a new item at the end of the Dynamic Array.
*/
#include <iostream>
#include "clsDynamicArray.h"
using namespace std;
// Main function
int main() {
    // Create a Dynamic Array with 5 elements.
    clsDynamicArray<int> MyDynamicArray(5);
    // Set values for the array elements.
    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);
    // Check whether the array is empty.
    cout << "\nIs Empty? " << MyDynamicArray.IsEmpty();
    // Display the current size of the array.
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    // Display all elements stored in the array.
    cout << "\nArray Items: \n";
    MyDynamicArray.PrintList();
    // Test Extension1:
    /*
    MyDynamicArray.Resize(2);
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items after resize to 2 : \n";
    MyDynamicArray.PrintList();

    MyDynamicArray.Resize(10);
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items after resize to 10 : \n";
    MyDynamicArray.PrintList();
    */
    // Test Extension2:
    /*
    cout << "\nItem(2): " << MyDynamicArray.GetItem(2) << "\n";
    */
    // Test Extension3:
    /*
    MyDynamicArray.Reverse();
    cout << "\nArray Items after reverse: \n";
    MyDynamicArray.PrintList();
    */
    // Test Extension4:
    /*
    MyDynamicArray.Clear();
    cout << "\nArray Items after clear: \n";
    MyDynamicArray.PrintList();
    */
    // Test Extension5:
    /*
    MyDynamicArray.DeleteItemAt(2);
    cout << "\nArray Items after deleting item(2): \n";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();
    */
    // Test Extension6:
    /*
    MyDynamicArray.DeleteFirstItem();
    cout << "\nArray Items after deleting FirstItem: \n";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();
    */
    // Test Extension7:
    /*
    MyDynamicArray.DeleteLastItem();
    cout << "\nArray Items after deleting LastItem: \n";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();
    */
    // Test Extension8:
    /*
    int Index = MyDynamicArray.Find(30);
    if (Index == -1)
        cout << "\nItem was not Found :-(\n ";
    else
    cout << "\n30 is found at index : " << Index;
    */
    // Test Extension9:
    /*
    MyDynamicArray.DeleteItem(30);
    cout << "\n\nArray Items after deleting 30:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();
    */
    // Test Extension10:
    /*
    MyDynamicArray.InsertAt(2, 500);
    cout << "\n\nArray after insert 500 at index 2:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();
    */
    // Test Extension11:
    /*
    MyDynamicArray.InsertAtBeginning(400);
    cout << "\n\nArray after insert 400 at beginning:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();
    */
    // Test Extension12:
    /*
    MyDynamicArray.InsertBefore(2, 500);
    cout << "\n\nArray after insert 500 before index 2:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();
    */
    // Test Extension13:
    /*
    MyDynamicArray.InsertAfter(2, 600);
    cout << "\n\nArray after insert 600 after index 2:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();
    */
    // Test Extension14:
    /*
    MyDynamicArray.InsertAtEnd(800);
    cout << "\n\nArray after insert 800 at End:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();
    */
    return 0;
}