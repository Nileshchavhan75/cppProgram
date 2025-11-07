#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter number: ";
    cin>>num1;
    try
    {
        if(num1 <= 0){
            throw "Square root of a negative number is not allowed";
        }
        int square = num1 * num1;
        cout<<"square of number: "<<square;
    }
    catch(const char *e)
    {
        cout<<"Exception occured: "<<e;
    }
    
}