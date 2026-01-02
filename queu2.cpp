#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;

    int n;
    for(int i = 0; i<5; i++){
        cin>>n;
        q.push(n);
    }


    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;
}