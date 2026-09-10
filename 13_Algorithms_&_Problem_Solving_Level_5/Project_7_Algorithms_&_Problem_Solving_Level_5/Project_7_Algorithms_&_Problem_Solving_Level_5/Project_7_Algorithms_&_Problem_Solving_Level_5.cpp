/*
Project: Undo/Redo Using Stack

The goal of this project is to practice implementing an Undo/Redo
system in C++ using two Stacks.

In this project, we will:
1. Create a custom String class.
2. Store the current string value.
3. Use an Undo Stack to store previous values.
4. Use a Redo Stack to store undone values.
5. Undo changes using the Undo() function.
6. Redo changes using the Redo() function.
7. Test multiple changes and Undo/Redo operations.

The purpose is to understand how two Stacks can be used together
to implement the Undo/Redo functionality commonly used in
text editors and other applications.
*/
/*
Extension1:
In this extension, we added the Set() and Get() functions to
manage the current String value.
*/
/*
Extension2:
In this extension, we added the Undo() function to restore
the previous String value and store the current value in
the Redo Stack.
*/
/*
Extension3:
In this extension, we added the Redo() function to restore
a previously undone String value and store the current value
in the Undo Stack.
*/
#include <iostream>
#include "clsMyString.h"
using namespace std;
// Main function
int main() {
    // Display the project title.
    cout << "\n\n\t\t\t\t\t Undo/Redo Project\n\n";
    // Create a String object.
    clsMyString S1;
    // Display the initial value.
    cout << "\nS1 = " << S1.Value << "\n";
    // Set the first value.
    S1.Value = "Sara";
    cout << "S1 = " << S1.Value << "\n";
    // Change the String value.
    S1.Value = "Sara2";
    cout << "S1 = " << S1.Value << "\n";
    // Change the String value again.
    S1.Value = "Sara3";
    cout << "S1 = " << S1.Value << "\n";
    // Test Undo operations.
    cout << "\n\nUndo: ";
    S1.Undo();
    cout << "\nS1 after Undo = " << S1.Value << "\n";
    S1.Undo();
    cout << "S1 after Undo = " << S1.Value << "\n";
    // Test Redo operations.
    cout << "\n\nRedo: ";
    S1.Redo();
    cout << "\nS1 after Redo = " << S1.Value << "\n";
    S1.Redo();
    cout << "S1 after Redo = " << S1.Value << "\n";
    S1.Redo();
    cout << "S1 after Redo = " << S1.Value << "\n";

    return 0;
}