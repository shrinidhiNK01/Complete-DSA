#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int low=0;
        int high=arr.size()-1;

        while(low<high){
            if(arr[low]+arr[high]==target){
                return {low+1,high+1};
            }
            else if(arr[low]+arr[high]>target){
                high--;
            }
            else if(arr[low]+arr[high]<target){
                low++;
            }
        }
        return {};

    }
};
int main(){
    Solution s;
    vector<int> arr={2,7,11,15};
    int target=9;
    vector<int> result = s.twoSum(arr,target);
    for(int num : result) {
        cout << num << " ";
    }
}