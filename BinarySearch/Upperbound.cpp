// The upper bound in a sorted array is the index of the first value that is greater than a given value. 
// smallest index such that arr[ind]>x
#include<bits/stdc++.h>
using namespace std;
class Upperbound{
    public:
    int upperBound(vector<int>& nums,int x){
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<=x){
                low=mid+1;
            }
            else if(nums[mid]>x){
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};
int main(){
    Upperbound u;
    vector<int> v={2,4,6,7};
    int x=5;
    cout<<u.upperBound(v,x);

}
//OR

// lb=upper_bound(arr.begin(),arr.end(),n)-arr.begin();
                // arr+2      arr+4