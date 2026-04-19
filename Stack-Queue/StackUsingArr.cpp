#include<bits/stdc++.h>
using namespace std;

class Stack {
public:
    int size;
    int* st;
    int top;

    Stack(int s = 10) {
        size = s;
        st = new int[size];
        top = -1;
    }
    
    ~Stack() {
        delete[] st;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void push(int item) {
        if (isFull()) {
            cout << "Stack is full!" << endl;
            return;
        }
        st[++top] = item;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return st[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return st[top];
    }

    int getSize() {
        return top + 1;
    }
};

int main() {
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Top: " << s.peek() << endl;
    cout << "Size: " << s.getSize() << endl;

    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;

    cout << "Top: " << s.peek() << endl;
    cout << "Size: " << s.getSize() << endl;

    s.push(60);
    s.push(70);

    cout << "Top: " << s.peek() << endl;
    cout << "Size: " << s.getSize() << endl;

    return 0;
}