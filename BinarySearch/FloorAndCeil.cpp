// /Floor and Ceil, Floor:- Longest num in array <=x , Ceil:- Smallest num in array >=x , =====>Lowerbound
#include<bits/stdc++.h>
using namespace std;
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int low=0;
	int high=n-1;
	int ceil=-1;
	int floor=-1;

	while(low<=high){
		int mid=low+(high-low)/2;
		if(a[mid]<x){
			floor=a[mid];
			low=mid+1;
		}
		else if(a[mid]==x){
			floor=ceil=a[mid];
			return {floor,ceil};
		}
		else if(a[mid]>x){
			ceil = a[mid];       // possible ceil
            high = mid - 1;
		}
	}
	return {floor,ceil};
}
int main(){

}