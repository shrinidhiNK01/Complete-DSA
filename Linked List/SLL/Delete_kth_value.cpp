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
Node* delete_kth_value(Node* head,int k){
    if(head==NULL){
        return head;
    }
    Node* temp=head,*prev =NULL;
    while(temp!=NULL){
        if(temp->data==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
    
}
int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    int k=30;
    head=delete_kth_value(head,k);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}