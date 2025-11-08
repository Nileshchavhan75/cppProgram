#include <iostream>
using namespace std;
int add(int x, int y){
    return x + y;
}
int main (){
    int a, b;
    cout<<"enter your value: ";
    cin>>a;
    cout<<"enter the value: ";
    cin>>b;
    cout<<"the sum of two number: "<<add(a,b);
    return 0;
}