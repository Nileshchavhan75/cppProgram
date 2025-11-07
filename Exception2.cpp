#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter two integer number: ";
    cin>>a>>b;
    try{
        if(b == 0){
            throw "can not divide by 0";
        }
        cout<<"Result: "<<a / b;
    }catch(const char *e){
        cout<<"Exception occured: "<<e<<endl;
    }
    return 0;
}