#include<iostream>
using namespace std;
class Unary{
    int a;
    public:
    Unary(int x): a(x){}

    void show(){
        cout<<" value of A: "<<a<<endl;
    }
    friend Unary operator--( Unary &j);
};
Unary operator--( Unary &j){
    j.a = j.a - 1;
    return j;
}
int main(){
    Unary u(10);
    u.show();
    --u;
    u.show();
}