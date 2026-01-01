#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d = {2, 4, 6, 8, 10};
    d.pop_back();
    d.pop_front();

    for(int i: d){
        cout<<i<<" ";
    }
}