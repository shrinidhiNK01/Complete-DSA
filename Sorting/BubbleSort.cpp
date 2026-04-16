#include<bits/stdc++.h>
using namespace std;
class BubbleSort{
    public:
    void bs(vector<int>& arr){
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }   

    }
};
int main(){
    BubbleSort s;
    vector<int> arr={5,4,3,2,1};
    s.bs(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// TC:= O(N^2) , BestCase=O(N)