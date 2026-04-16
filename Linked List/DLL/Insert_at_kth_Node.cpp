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
Node* Insert_at_kth_node(Node* head,int val,int k){
   
    Node* temp=head;
    Node* newNode=new Node(val);
     if(temp == NULL){
        return head;
    }
    if(k==1){
        newNode->next=head;
        if(head!=NULL){
            head->prev=newNode;
        }
        return newNode;
    }
    int cnt=1;
    while(temp!=NULL&&cnt<k-1){
        temp=temp->next;
        cnt++;
    }
    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next != NULL){
        temp->next->prev = newNode;
    }

    temp->next = newNode;

    return head;
}
int main(){
    vector<int> arr={10,20,30,40};
    int val=820;
    int k=3;
    Node* head=Insert_at_kth_node(ConvertArr2DLL(arr),val,k);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}