#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> mp;
    mp[0] = 80;
    mp[1] = 10;
    mp[2] = 20;
    mp[3] = 30;
    mp[4] = 40;
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    mp.erase(2);
    cout<<"Size of the map is: "<<mp.size()<<endl;
    mp.insert({5,50}); //key,value
    mp.at(1) = 100;
    mp.at(2) = 200;
    if(mp.count(2)){
        cout<<"Key 2 is present in the map"<<endl;
    }
    else{
        cout<<"Key 2 is not present in the map"<<endl;
    }

}