#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int a = 0;
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j <=n; j++){
            cout<<" ";
        }
        a++;
        for (int j = 1; j <=i; j++){
            cout<<(a);
        }
        
        cout<<endl;
    }
    return 0;
}