#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, int> m;
    m[1] = 10;
    m[2] = 20;
    m[3] = 30;

    for(auto p : m){
        cout<<p.first<<"->"<<p.second<<endl;
    }
}