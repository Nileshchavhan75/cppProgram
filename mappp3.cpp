#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, int>m;
    string s;
    int n;
    for(int i = 0; i<5; i++){
        cout<<"Enter a name: ";
        cin>>s;
        cout<<"Enter marks: ";
        cin>>n;
        m[s] = n;
    }
    cout<<"-----------------------------"<<endl;
     for(auto i : m){
        cout<<i.first<<"->"<<i.second<<endl;
    }
}