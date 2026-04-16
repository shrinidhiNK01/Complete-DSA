#include<bits/stdc++.h>
using namespace std;

class Animal{
    //Access Modifiers
    //a) public: members are accessible from outside the class
    //b) private: members are not accessible from outside the class
    //c) protected: members are accessible in derived classes 
    public:
    
    //properties/Attributes
    string name;
    string sound;
    int body_counts;
    int murders;
    
    //methods/functions
    void changeName(string new_name){
        name=new_name;
    }
};
int main(){
    Animal dog;
    Animal cat;
    Animal bird;
    Animal fish;
    Animal horse;

    dog.name="Rockky";
    dog.sound="Wow Wow";
    dog.body_counts=10;
    dog.murders=34;

    cout<<dog.name<<endl;
    dog.changeName("Tommy");
    cout<<dog.name<<endl;

}