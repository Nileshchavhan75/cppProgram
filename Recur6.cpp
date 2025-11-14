#include<iostream>
using namespace std;
    int pow(int num, int n){
        if(n == 1){
            return num;
        }
       return num * pow(num, n-1);
    }
int main(){
    int n = 3;
    cout<<"Power: "<<pow(2,n);
}