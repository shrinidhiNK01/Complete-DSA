#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* insert_before_k(Node* head, int val, int k) {
    Node* new_Node = new Node(val);

    // ❗ invalid position
    if (k <= 0) {
        cout << "Invalid position\n";
        return head;
    }

    // ❗ insert before 1st position → becomes new head
    if (k == 1) {
        new_Node->next = head;
        return new_Node;
    }

    Node* temp = head;
    int cnt = 1;

    // move to (k-2)th node
    while (temp != NULL && cnt < k - 1) {
        temp = temp->next;
        cnt++;
    }

    // ❗ if position doesn't exist
    if (temp == NULL) {
        cout << "Position out of bounds\n";
        return head;
    }

    new_Node->next = temp->next;
    temp->next = new_Node;

    return head;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    int val = 50;
    head = insert_before_k(head, val, 3);

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}