#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> occurence(26);
        int left=0;
        int right=0;
        int maxOccurence=0;
        int ans=0;
        int length=0;
        for(int right=0;right<s.size();right++){
            maxOccurence=max(maxOccurence,++occurence[s[right]-'A']);
            if(right-left + 1-maxOccurence>k){
                occurence[s[left]-'A']--;
                left++;
            }
            ans=max(ans,right-left + 1);
        }
        return ans;

    }
};