#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, int>m;
    m["Nilesh"] = 90;
    m["Rutuja"] = 85;
    m["Niru"] = 88;

    for(auto i : m){
        cout<<i.first<<"->"<<i.second<<endl;
    }
}