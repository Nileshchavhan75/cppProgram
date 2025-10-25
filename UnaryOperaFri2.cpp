#include<iostream>
using namespace std;
class Unary{
    int value;
    public:
    Unary(int x){
        value =x;
    }
    void display(){
        cout<<"Value: "<<value<<endl;
    }

    friend Unary operator++(Unary &obj,int);
    friend Unary operator--(Unary &obj,int);


};
Unary operator++(Unary &obj,int){
    obj.value++;
    return obj;
}
Unary operator--(Unary &obj,int){
    obj.value--;
    return obj;
}
int main(){
    Unary u(50);
    u.display();
    u++;
    u.display();
    u--;
    u.display();
}