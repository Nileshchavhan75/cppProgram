#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int i = 0;
    while (i < n)
    {
        i++;
        int j = 0;
        while ( j < i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        
    }
    return 0;
    
}