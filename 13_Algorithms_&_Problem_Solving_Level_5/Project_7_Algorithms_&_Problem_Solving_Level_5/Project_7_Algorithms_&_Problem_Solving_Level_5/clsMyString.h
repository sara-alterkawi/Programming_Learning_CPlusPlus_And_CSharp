#pragma once
#include <stack>
using namespace std;
class clsMyString {
private:
    // Stores previous values for Undo operations.
    stack<string> _Undo;
    // Stores undone values for Redo operations.
    stack<string> _Redo;
    // Stores the current String value.
    string _Value;
public:
    // Sets a new String value and saves the current value
    // in the Undo Stack.
    void Set(string value) {
        _Undo.push(_Value);
        _Value = value;
    }
    // Returns the current String value.
    string Get() {
        return _Value;
    }
    // Allows the Value property to use Get() and Set().
    __declspec(property(get = Get, put = Set)) string Value;
    // Restores the previous String value.
    void Undo() {
        if (!_Undo.empty()) {
            _Redo.push(_Value);
            _Value = _Undo.top();
            _Undo.pop();
        }
    }
    // Restores a previously undone String value.
    void Redo() {
        if (!_Redo.empty()) {
            _Undo.push(_Value);
            _Value = _Redo.top();
            _Redo.pop();
        }
    }
};