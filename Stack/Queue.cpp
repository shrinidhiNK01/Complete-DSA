#include<bits/stdc++.h>
using namespace std;
class MyQueue{
    public:
    int q[10];
    int front=-1;
    int rear=-1;
    int cursize=0;
    int size=10;
    int enqueue(int n){ //O(1)
        if(cursize==size)return 0;
        if(cursize==0){
            front=0;
            rear=0;
        }
        else{
            rear=(rear+1)%size;
        }
        q[rear]=n;
        cursize++;
        return 0;
    }
    int dequeue(){ //O(1)
        if(cursize==0)return -1;
        int ans=q[front];
        if(cursize==1){
            front=-1;
            rear=-1;
        }
        else
        front=(front+1)%size;
        cursize--;
        return ans;
    }
    int top(){ //O(1)
        if(cursize==0)return -1;
        return q[front];
    }
    int back(){ //O(1)
        if(cursize==0)return -1;
        return q[rear];
    }
    int size2(){ //O(1)
        return cursize;
    }

};

int main(){
    MyQueue q1;

    //Dynamic Queue
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.front();
    cout<<q.back();
    q.pop();
    cout<<q.front();
    cout<<q.size();
    q.emplace(40);
    cout<<q.back();
    cout<<q.empty();
    queue<int> q2;
    q2.push(50);
    q2.push(60);
    q2.swap(q);
    q.swap(q2);


    //Static Queue
    cout<<"Enter the size of queue: ";
    int n;
    cin>>n;
    cout<<q1.enqueue(n)<<endl;
    cout<<q1.dequeue()<<endl;
    cout<<q1.top()<<endl;
    cout<<q1.size2()<<endl;
    cout<<q1.back()<<endl;


}