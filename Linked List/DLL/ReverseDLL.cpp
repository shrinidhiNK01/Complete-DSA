#include <iostream>
using namespace std;

// Node structure for the Doubly Linked List
struct Node {
    int data;
    Node* next;
    Node* prev;
    
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

// Function to reverse the doubly linked list
Node* reverseList(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head; // List is empty or has only one node
    }

    Node* current = head;
    Node* temp = nullptr;

    // Traverse and swap next and prev pointers for every node
    while (current != nullptr) {
        // Swap pointers
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to the next node (which is now current->prev due to the swap)
        current = current->prev;
    }

    // After the loop, temp points to the node that was the original head's predecessor.
    // The new head is the node that was the original tail.
    if (temp != nullptr) {
        head = temp->prev;
    }

    return head;
}

// Utility function to insert a node at the front
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);
    new_node->next = (*head_ref);
    if ((*head_ref) != nullptr) {
        (*head_ref)->prev = new_node;
    }
    (*head_ref) = new_node;
}

// Utility function to print the list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Create a list: 10 <-> 8 <-> 4 <-> 2
    push(&head, 2);
    push(&head, 4);
    push(&head, 8);
    push(&head, 10);

    cout << "Original List: ";
    printList(head);

    head = reverseList(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}
