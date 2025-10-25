#include<iostream>
using namespace std;
class Unary{
    int a;
    public:
           Unary(int x) : a(x){

           }
           void display(){
             cout<<"value of a: "<<a<<endl;
           }
    Unary operator++(){
        ++a;
        return *this;
    }
};
int main(){
    Unary u1(10);
    u1.display();
    ++u1;
    u1.display();
    return 0;
}
