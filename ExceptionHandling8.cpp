#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"ENter the first number: ";
    cin>>x;
    try{
        if(cin.fail()){
            throw "Enter Integer value only: ";
        } 
        }catch(const char *e){
        cout<<e;
        return 1;
        }

        cout<<"Enter second numner: ";
        cin>>y;
        try{
        if (cin.fail())
        {
            throw " Enter integer value input: ";
        }
        }catch(const char *e){
        cout<<e;
        return 1;
        }
        try{
            if(y == 0){
                throw "can not divide by 0";
            }
        }catch(const char *e){
            cout<<e;
        }

        cout<<"the dividion of two number"<<x /y<<endl;
        }
