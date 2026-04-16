#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};
void inorder(Node * root){
    if(root==NULL)return ;
    inorder(root->left);
    cout<<" ";
    cout<<root->data<<"";
    cout<<" ";
    inorder(root->right);
}
void preorder(Node * root){
    if(root==NULL)return ;
    cout<<root->data<<"";
    cout<<" ";
    preorder(root->left);
    cout<<" ";
    preorder(root->right);
}
void postorder(Node * root){
    if(root==NULL)return ;
    postorder(root->left);
    cout<<" ";
    postorder(root->right);
    cout<<" ";
    cout<<root->data<<"";
}
int main(){
Node *root=new Node(10);
root->left=new Node(20);
root->right=new Node(30);
root->left->left=new Node(40);
// root->left->right=new Node(50);
// root->right->left=new Node(60);
// root->right->right=new Node(70);
// root->left->left->left=new Node(80);
// root->left->left->right=new Node(90);
// root->left->right->left=new Node(100);
// root->left->right->right=new Node(110);


inorder(root);
cout<<endl;
preorder(root);
cout<<endl;
postorder(root);
}