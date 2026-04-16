#include <bits/stdc++.h>
using namespace std;

class st {
public:
    int stackArr[10];
    int top;

    st() {
        top = -1;
    }

    int push(int n) { // O(1)
        if (top == 9) {
            cout << "Stack overflow" << endl;
            return -1;
        }
        stackArr[++top] = n;
        return stackArr[top];
    }

    int pop() { // O(1)
        if (top == -1) {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return stackArr[top--];
    }

    int peek() { // O(1)
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return stackArr[top];
    }

    int size() { // O(1)
        return top + 1;
    }

    bool empty() {
        return top == -1;
    }
};

int main() {
    st s1;

    // 🔹 Static Stack (Your implementation)
    cout << "Static Stack Operations:\n";
    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << "Top: " << s1.peek() << endl;
    cout << "Popped: " << s1.pop() << endl;
    cout << "Size: " << s1.size() << endl;

    // 🔹 STL Stack (Dynamic)
    cout << "\nSTL Stack Operations:\n";
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.top() << endl;
    s.pop();
    cout << "Top after pop: " << s.top() << endl;
    cout << "Size: " << s.size() << endl;
    cout << "Is Empty: " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}