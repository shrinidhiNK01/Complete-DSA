#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};
class Works{
    public:
    Node* printAll(Node* head){
        Node *temp=head;

        while(temp->next!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;

        }
    }
};
int main(){
    Works w;
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    w.printAll(head);

}