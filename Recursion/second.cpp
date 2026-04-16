// Print a name 'n' times
#include<bits/stdc++.h>
using namespace std;
int backtrack(int n){
int i=0;
if(i>n) return;
cout<<backtrack(n+1);
}

int main(){
    int n;
    cin>>n;
    backtrack(n);
}