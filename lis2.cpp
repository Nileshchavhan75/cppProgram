#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l = {4, 8, 12, 16};
    l.pop_back();
    for(int i : l){
        cout<<i<<" ";
    }

}