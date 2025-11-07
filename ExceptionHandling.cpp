#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number for divigon: ";
    cin>>y;


    try{
        if(y == 0){
            throw "Can divide by 0";
        }

        int result = x/y;
        cout<<"Divigon of two number: "<<result<<endl;
        
        }catch(const char *e){
            cout<<e;
        }
}