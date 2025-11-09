#include<iostream>
using namespace std;
int foo(int x,int y =5,float z = 5){
    return ++x * ++y + (int)++z;
}
int main(){
    cout<<"Returned Value = "<<foo(5,8);
    return 0;
}