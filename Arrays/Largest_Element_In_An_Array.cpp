#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={3,2,1,5,2};
    int n=arr.size();
    int maxi=arr[0];
    for(int i=1;i<n-1;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    cout<<maxi;
}