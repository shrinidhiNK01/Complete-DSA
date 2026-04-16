#include<bits/stdc++.h>
using namespace std;
bool check_array_is_sorted(vector<int> arr){
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> arr={19,2,3,4,5};
    if(check_array_is_sorted(arr)){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
}