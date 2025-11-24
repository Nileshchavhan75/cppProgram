#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cout<< j;
        }
        for (int j = 0; j < n-i; j++)
        {
            cout<<(i+1);
        }
        cout<<endl;
        cout<<endl;
        
    }
    return 0;
}