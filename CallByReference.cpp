#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
            a = b;
            b = temp;
    cout<<"The value of x: "<<a<<endl;
    cout<<"The value of y: "<<b;

}
int main(){
    int x = 10;
    int y = 20;

    cout<<"This the value of X is before swap: "<<x<<endl;
    cout<<"This the value of y is before swap: "<<y<<endl;
    cout<<"this the after Swap: "<<endl;
    swap(x, y);
    return 0;


}