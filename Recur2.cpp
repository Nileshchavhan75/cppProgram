#include<iostream>
using namespace std;
    void fun(int n,int N){
        if(n==N){
            cout<<n<<endl;
            return;
        }
        cout<<n<<endl;
        fun(n+2, N);
    }
int main(){
    int n = 51;
    if(n%2==1){
        n--;
    }
    fun(2,n);
}