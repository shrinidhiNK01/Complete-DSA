#include<bits/stdc++.h>
using namespace std;
class InsertionSort{
    public:
    void is(vector<int>& arr,int n){
            for(int i=0;i<n-1;i++){
                for (int j =i;j>0 && arr[j - 1] > arr[j]; j--) {
                        swap(arr[j - 1], arr[j]); 
                }
            }
    }
};
int main(){
    InsertionSort s;
    vector<int> arr={5,4,3,2,1};
    int n=arr.size();
    s.is(arr,n);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// TC:= O(N^2) , BestCase=O(N)