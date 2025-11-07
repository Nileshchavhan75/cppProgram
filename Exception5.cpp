#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter two integer number: ";
    cin>>num1>>num2;
    try{
        if(num2 == 0){
            throw " can not divide by 0";
        }
        else if (num1 < 1 || num2 < 1){
            throw " Either number is negative.";
        }
        int result = num1 /num2;
            cout<<result;

        }catch(const char *e){
            cout<<"Exception ocuured"<<e;
        }
        
    }
    