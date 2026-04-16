#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data,Node* next=NULL,Node* prev=NULL){
        this->data=data;
        this->next=next;
        this->prev=prev;
    }
};

Node* ConvertArr2DLL(vector<int> &arr){
     Node* head=new Node(arr[0]);
     Node* prev=head;
     for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],NULL,prev);
        prev->next=temp;
        prev=temp;
     } 
     return head;
}
Node* InsertTail(Node* head,int val){
    Node* temp=head;
    Node* newNode=new Node(val,NULL,temp);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    return head;
}
int main(){
    vector<int> arr={10,20,30,40};
    int val=820;
    Node* head=InsertTail(ConvertArr2DLL(arr),val);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}