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
Node* delete_head(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* temp=head;
    head=head->next;
    delete temp;    //in java there is garbage collector so we don't need to delete temp
    return head;
}
Node* delete_kth_element(Node* head,int k){
   if(head==NULL){
       return head;
   }
   else if(k==1){
       return delete_head(head);
   }
   
   Node* temp=head,*prev=NULL;
   int cnt=0;
   while(temp!=NULL){
    cnt++;
    if(cnt==k){
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
int k=4;
head=delete_kth_element(head,k);
while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
}
}