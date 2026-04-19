#include<bits/stdc++.h>
using namespace std;

class Queue {
public:
    int size;
    int* q;
    int currSize;
    int front;
    int rear;

    Queue(int s = 10) {
        size = s;
        q = new int[size];
        currSize = 0;
        front = -1;
        rear = -1;
    }

    ~Queue() {
        delete[] q;
    }

    bool isEmpty() {
        return currSize == 0;
    }

    bool isFull() {
        return currSize == size;
    }

    void push(int item) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        q[rear] = item;
        currSize++;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int item = q[front];
        if (currSize == 1) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % size;
        }
        currSize--;
        return item;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return q[front];
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return q[rear];
    }

    int getSize() {
        return currSize;
    }
};

int main() {
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
    cout << "Size: " << q.getSize() << endl;

    cout << "Popped: " << q.pop() << endl;
    cout << "Popped: " << q.pop() << endl;

    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
    cout << "Size: " << q.getSize() << endl;

    q.push(60);
    q.push(70);

    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;
    cout << "Size: " << q.getSize() << endl;

    return 0;
}