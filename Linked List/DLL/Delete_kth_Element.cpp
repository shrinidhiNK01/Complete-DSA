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
Node* delete_kth_element(Node* head,int k){
    if(head==NULL)return NULL;
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL&&cnt<k-1){
        temp=temp->next;
        cnt++;
    }
    if(temp==NULL)return head;
    if(temp->prev==NULL){
        head=temp->next;
        if(head!=NULL) head->prev=NULL;
    }
    else{
        temp->prev->next=temp->next;
        if(temp->next!=NULL){
            temp->next->prev=temp->prev;
        }
    }
    delete temp;

    return head;

}
int main(){
    vector<int> arr={10,20,30,40};
    int k=2;
    Node* head=delete_kth_element(ConvertArr2DLL(arr),k);
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;

}