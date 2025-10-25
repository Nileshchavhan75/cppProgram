#include<iostream>
using namespace std;
class Unary{
    int value;
    public:
    Unary(int x): value(x){

    }
    void show(){
        cout<<"Value: "<<value<<endl;
    }
    friend Unary operator--(Unary &obj,int);
};
Unary operator--(Unary &obj,int){
    obj.value--;
    return obj;
}
int main(){
    Unary u(10);
    u.show();
    u--;
    u.show();
}