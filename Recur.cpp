#include<iostream>
using namespace std;
    void fun3(int n){
        if(n == 1){
            return;
        }
        if(n%2 == 0){
            cout<<n<<endl;
        }
        fun3(n-1);
    }
int main(){
    int n = 50;
    fun3(n);
}