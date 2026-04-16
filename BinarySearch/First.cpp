#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> &nums, int target) {
   int low=0;
   int high=nums.size()-1;

   while(low<=high){
       int mid=(low+high)/2;
       if(target<nums[mid]){
           high=mid-1;
       }
       else if(target>nums[mid]){
           low=mid+1;
       }
       else if(target==nums[mid]){
           return mid;
       }
   }
   return -1;
}

int main(){
    vector<int> n={1,2,3,4,5,6};
    int target;
    cin>>target;
    int result=BinarySearch(n,target);
    if(result!=-1){
        cout<<"The number is present";
    }
    else{
        cout<<"Not Present";
    }
}
// Used for Sorted Array