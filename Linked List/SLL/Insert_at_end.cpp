#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* insert_tail(Node *head,int val){
    Node* new_Node=new Node(val);
    if(head==NULL){
        return new Node(val);
    }

    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_Node;
    return head;
}
int main(){
Node* head=new Node(10);
head->next=new Node(20);
head->next->next=new Node(30);
head->next->next->next=new Node(40);
int val=50;
head=insert_tail(head,val);
while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
}
}