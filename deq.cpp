#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d = {10, 20, 30};
    d.push_front(5);
    d.push_back(40);

    for(int p : d){
        cout<<p<<" ";
    }
    cout<<endl;
    cout<<d.at(1);
}