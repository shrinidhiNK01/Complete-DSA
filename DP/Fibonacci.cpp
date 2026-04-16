#include<bits/stdc++.h>
using namespace std;
class fibo{
    public:
    int fibonacchi(int n){
        if(n<=1)return n;
        return fibonacchi(n-1)+fibonacchi(n-2);

    }
};

int main(){
    fibo f;
    cout<<"Enter number:"<<endl;
    int n;
    cin>>n;
    cout<<f.fibonacchi(n)<<endl;



}