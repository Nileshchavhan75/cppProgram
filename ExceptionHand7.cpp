#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"Enter first number: ";
    cin>>x;
    try{
        if(cin.fail()){
            throw "Invalid input, not an integer!";
        }
    }catch(const char *e){
        cout<<e;
        return 1;
    }

    cout<<"Enter second number: ";
    cin>>y;

    try{
        if(cin.fail()){
            throw "Invalid input, not an integer!";
        }
    }catch(const char *e){
        cout<<e;
        return 1;
    }
    cout<<"the Addtion of two number: "<<x + y;
}