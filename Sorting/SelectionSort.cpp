#include<bits/stdc++.h>
using namespace std;
class SelectionSort{
    public:
    void ss(vector<int>& arr){
        for(int i=0;i<arr.size()-1;i++){
            int min=i;
            for(int j=i;j<arr.size()-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            }
            swap(arr[min],arr[i]);
        }

    }
};
int main(){
    SelectionSort s;
    vector<int> arr={5,4,3,2,1};
    s.ss(arr);
    for(int x : arr){
        cout<<x<<" ";
    }
}

// Note:- TC:-O(N^2)
//Select Minimum and swap
