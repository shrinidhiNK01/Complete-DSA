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
Node* delete_head(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* temp=head;
    head=head->next;
    delete temp;    //in java there is garbage collector so we don't need to delete temp
    return head;
}
int main(){
Node* head=new Node(10);
head->next=new Node(20);
head->next->next=new Node(30);
head->next->next->next=new Node(40);
head=delete_head(head);
while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;

}

}