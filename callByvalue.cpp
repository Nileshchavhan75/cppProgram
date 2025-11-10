#include<iostream>
using namespace std;
void modifyValue(int x){
    x = x + 10;
    cout<<"the modify value in the function: "<<x<<endl;
}
int main(){
    int num = 20;
    modifyValue(num);

    cout<<"the original value of num is: "<<num<<endl;
    return 0;
}