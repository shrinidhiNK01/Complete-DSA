#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void func(){
    if(cnt==4) return; //base condition
    cout<<cnt<<endl;
    cnt++;
    func();
}
int main(){
    func();
    return 0;
}
// Note:- Recursion is Algo it uses Stack as Data Structure
// Recursion is a programming technique in which a function calls itself in order to solve a problem. It typically involves a base case that stops the recursion and a recursive case that breaks the problem into smaller subproblems. In the provided code, the function `func()` calls itself until the counter `cnt` reaches 4, at which point it stops the recursion.
// When there is no base case or the base case is never reached, it leads to infinite recursion, which can cause a stack overflow error. In this code, if we remove the base condition `if(cnt==4) return;`, the function will keep calling itself indefinitely, resulting in a stack overflow.
// When a function called itself untill a specified condition is met 
// Segmentation or stack overflow 
