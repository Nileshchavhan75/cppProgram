#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, int>m;
    m[1] = 100;
    m[2] = 200;
    m[3] = 300;
    m[4] = 400;

    if(m.find(3) != m.end()){
        cout<<"Found";
    }else{
        cout<<"Not found";
    }
    for(auto it : m){
        cout<<it.first<<endl;
    }
    for(auto i : m){
        cout<<i.second<<endl;
    }

}