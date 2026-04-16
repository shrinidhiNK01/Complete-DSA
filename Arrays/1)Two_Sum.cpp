#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int h=target-nums[i];
            if(mp.count(h)==1){
                return {mp[h],i};
            }
            else{
                mp.insert({nums[i],i});
            }
        }
        return {};
    }
};
