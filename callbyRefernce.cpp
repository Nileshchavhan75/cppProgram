#include<iostream>
using namespace std;
void Refernce(int &x){
    x = x + 10;
    cout<<"value inside the function: "<<x<<endl;
}
int main(){
    int num = 10;
    Refernce(num);
    cout<<"the original value of num: "<<num<<endl;
    return 0;

}