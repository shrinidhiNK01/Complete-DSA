#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
            if(cost.size()==1){return cost[0];}
            if(cost.size()==2){min(cost[1],cost[0]);}
            int prev1=cost[1];
            int prev2=cost[0];
            for(int i=2;i<cost.size();i++){
                int current=min(prev2+cost[i],prev1+cost[i]);
                prev2=prev1;
                prev1=current;
            }
        return min(prev1,prev2);
    }
};

int main(){
    Solution s;
    vector<int> cost={1,100};
    cout<<s.minCostClimbingStairs(cost);
}