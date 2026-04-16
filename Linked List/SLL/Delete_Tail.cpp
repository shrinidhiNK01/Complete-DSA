#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node (int data){
        this->data=data;
        this->next=NULL;
    }
};

Node* delete_tail(Node* head){
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
    temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;
    
}

int main(){
Node* head=new Node(10);
head->next=new Node(20);
head->next->next=new Node(30);
head->next->next->next=new Node(40);
head=delete_tail(head);
while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
}

}