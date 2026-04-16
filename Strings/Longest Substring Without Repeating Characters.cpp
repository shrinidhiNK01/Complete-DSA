#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int ans=0;
        set<char> s1;
        while(right<s.size()){
            char c=s[right];
            while(s1.count(c)==1){
                s1.erase(s[left]);
                left++;
            }
            s1.insert(c);
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};