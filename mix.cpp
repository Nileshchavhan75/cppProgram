#include<iostream>
using namespace std;
int findMax(int a , int b){
    if (a > b)
    {
        return a;
    }else{
        return b;
    }
}
int main(){
    int x, y;
    cout<<"Enter the to number to check miximum value: ";
    cin>>x>>y;
    cout<<"The maximum number is: "<< findMax(x,y);
    return 0;
}