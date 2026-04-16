#include<bits/stdc++.h>
using namespace std;
int func(vector<int>& dp,int n){
     if(n<=1) return n;
     if(dp[n]!= -1)return dp[n];
     return dp[n]=func(dp,n-1)+func(dp,n-2); 
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<func(dp,n);
}
//TC:- O(N) , SC:-O(N)+O(N)