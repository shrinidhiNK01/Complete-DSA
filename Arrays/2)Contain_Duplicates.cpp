#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i])==1){
                return true;
            }
            else{
                s.insert(nums[i]);
            }
        }
        return {};
        
    }
};


int main(){
    Solution s;
    vector<int> nums = {1,2,3,1};
    cout<<s.containsDuplicate(nums)<<endl;
    return 0;
}
