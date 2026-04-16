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
        this->prev=next;
    }
};
Node* deleteHead(Node* head){
    if(head==NULL||head->next==NULL)return NULL;
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    head->prev=NULL;
    delete temp;
    return head;
}
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
int main(){
    vector<int> arr={10,20,30,40};
    Node* head=deleteHead(ConvertArr2DLL(arr));
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;

}