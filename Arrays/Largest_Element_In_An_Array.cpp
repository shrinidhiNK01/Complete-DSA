#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[20]={69,453,2,3,4,21,45,32,3,6,9,2399,43,67};
    int max=arr[0];
    for(int i=1;i<=20;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;

}