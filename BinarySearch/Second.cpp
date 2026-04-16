// Binary Search using Recursion

#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int> &nums,int low,int high,int target){
    if(low>high)return -1;
    int mid=(low+high)/2;

    if(nums[mid]==target){
        return 1;
    }
    else if(nums[mid]>target){
        return BinarySearch(nums,low,mid-1,target);
    }
    else{
        return BinarySearch(nums,mid+1,high,target);
    }
    
}
int main(){
    vector<int> nums={1,2,3,4,5,6};
    int target;
    cin>>target;
    int low=0;
    int high=nums.size()-1;
    int result=BinarySearch(nums,low,high,target);
    if(result==1){
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }
}

// Time Complexity :- O(logn)
//Overflow case:- mid = low+(high-low)/2