// for all problems 1)try to represent the problem interms of index 2)do all possible stuffs on that index according to problem stattements 3)sum of all stuffs->count all ways, min of all stuffs->find min or max
// convert all the problems into recursion,then convert into dynamic programming
// Q>u have been given a no of staires,initially u r at the 0th stair, and u need to reach nth stair.each time u can either climb one step or two steps,u r supposed to return the no of distinct ways in which u can climb from 0th step to nth step
// 1d recurence relation

#include <bits/stdc++.h>
using namespace std;
long long solve(int n, vector<long long> &dp){
    if(n<=1)return 1;
    if(dp[n]!=-1)return dp[n];
    else{
        dp[n]=(solve(n-1,dp)+solve(n-2,dp))%1000000007;
    }
    return dp[n];

}
int countDistinctWays(int n) {
    //  Write your code here
    vector<long long> dp(n+1,-1);
    return solve(n,dp);
    
}
// sc=o(1)