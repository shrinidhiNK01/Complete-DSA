#include<bits/stdc++.h>
using namespace std;

class Queue {
public:
    class Node {
    public:
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };

    Node* front;
    Node* rear;
    int size;

    Queue() {
        front = nullptr; 
        rear = nullptr;
        size = 0;
    }

    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        size++;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        Node* temp = front;
        int val = temp->data;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
        size--;
        return val;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return front->data;
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return rear->data;
    }

    int getSize() {
        return size;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
    cout << "Size: " << q.getSize() << endl;

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
    cout << "Size: " << q.getSize() << endl;

    q.enqueue(60);
    q.enqueue(70);

    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
    cout << "Size: " << q.getSize() << endl;

    return 0;
}
