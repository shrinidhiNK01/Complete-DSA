#include<bits/stdc++.h>
using namespace std;
void func(int i,int n){
    if(n<i)return;
    
    cout<<n<<endl;
    func(i,n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"==============="<<endl;
    func(1,n);
}