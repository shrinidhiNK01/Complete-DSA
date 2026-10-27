#include<bits/stdc++.h>
using namespace std;
void func(int n){
    int cnt=0;
    if(n==0)return;
    cout<<"Shrinidhi"<<endl;
    func(n-1);

}
int main(){
    int n;
    cin>>n;
    func(n);
}

// Due to Stack space
// ===================
// TC:-O(N)
// SC:-O(N)