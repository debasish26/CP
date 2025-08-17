#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'

const int MAX = 100;
int stackArr[MAX];
int topIndex = -1; // -1 means empty stack

void push(int elem) {
    if (topIndex == MAX - 1) {
        cout << "Stack Overflow" << nl;
        return;
    }
    topIndex++;
    stackArr[topIndex] = elem;
    cout << "Element " << elem << " inserted successfully" << nl;
}

void pop() {
    if (topIndex == -1) {
        cout << "Stack Underflow" << nl;
        return;
    }
    cout << "Element " << stackArr[topIndex] << " removed successfully" << nl;
    topIndex--;
}

void peek() {
    if (topIndex == -1) {
        cout << "Stack is empty" << nl;
        return;
    }
    cout << "The top element is " << stackArr[topIndex] << nl;
}

bool is_empty() {
    return (topIndex == -1);
}

bool is_full() {
    return (topIndex == MAX - 1);
}

void display() {
    if (is_empty()) {
        cout << "Stack is empty" << nl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = topIndex; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
    cout << nl;
}

void solve() {
    int choice, elem;
    cout << "\n1. Push\n2. Pop\n3. Peek\n4. Check Empty\n5. Check Full\n6. Display\nEnter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter element to push: ";
            cin >> elem;
            push(elem);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            cout << (is_empty() ? "Stack is empty" : "Stack is not empty") << nl;
            break;
        case 5:
            cout << (is_full() ? "Stack is full" : "Stack is not full") << nl;
            break;
        case 6:
            display();
            break;
        default:
            cout << "Invalid choice!" << nl;
    }
}

int main() {
    fast_io;
    int t;
    cin >> t; // number of operations
    while (t--) {
        solve();
    }
    return 0;
}
