#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int &a = x;

    a += 10;
    cout<<"Value of x: "<<x;

}