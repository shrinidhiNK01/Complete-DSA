#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int minsum=arr[0];
        int maxsum=arr[0];
        int result=maxsum;

        for(int i=1;i<arr.size();i++){
            int current=arr[i];
            int temp=max(current,max(current*maxsum,current*minsum));
            minsum=min(current,min(current*maxsum,current*minsum));
            maxsum=temp;
            result=max(maxsum,result);
        }
        return result;
    }
};