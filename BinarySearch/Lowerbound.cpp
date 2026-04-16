// Lowerbound=smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.

#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int low = 0;
        int high = nums.size() - 1;
        int ans = nums.size();   // if no element >= x

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] >= x){
                ans = mid;       // possible answer
                high = mid - 1;  // search left for smaller index
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};

// OR

// lb=lower_bound(arr.begin(),arr.end(),n)-arr.begin();
                // arr+2      arr+4