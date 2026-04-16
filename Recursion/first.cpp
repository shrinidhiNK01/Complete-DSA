#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void func(){
    
    if(cnt==4)return; //base condition
    cout<<"Hello World!"<<endl;
    cnt++;
    func();
    
}
int main(){
    func();
    return 0;
}
// Note:- Recursion is Algo it uses Stack as Data Structure