#include<bits/stdc++.h>
using namespace std;

class Stack {
public:
    class Node {
    public:
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };

    Node* top;
    int size;

    Stack() {
        top = nullptr;
        size = 0;
    }

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        size++;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        Node* temp = top;
        int val = temp->data;
        top = top->next;
        delete temp;
        size--;
        return val;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    int getSize() {
        return size;
    }
};

int main() {
    Stack s;

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