#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n=arr.size();
        int arr1=1;
        int arr2=1; 
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr1==0)arr1=1;
            if(arr2==0)arr2=1;
            arr1=arr1*arr[i];
            arr2=arr2*arr[n-i-1];
            maxi=max(maxi,max(arr1,arr2));
        }
        return maxi;
    }
};
int main(){

}