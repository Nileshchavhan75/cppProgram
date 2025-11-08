#include<iostream>
using namespace std;
int Fact(int &n){
    int b = n++;
    return b;
    }
int main(){
    int a;
    cout<<"Enter the number for factorial: ";
    cin>>a;
    cout<<"this the value of a"<<a<<endl;
    cout<<Fact(a);
    return 0;

}