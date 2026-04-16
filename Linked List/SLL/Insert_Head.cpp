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
Node* insert_head(Node* head,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    return new_node;
}
int main(){
    int val=90;
    Node* head=new Node(100);
    head->next=new Node(200);
    head->next->next=new Node(300);
    head->next->next->next=new Node(400);
    head=insert_head(head,val);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}