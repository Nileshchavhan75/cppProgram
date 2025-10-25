#include<iostream>
using namespace std;
class Unary{
    int a;
    public:
    Unary(int b): a(b){

    }
    void display(){
        cout<<" A: "<<a<<endl;
    }
    Unary operator--(int){
        Unary temp = *this;
        a--;
        return temp;
    }
};
int main(){
    Unary u(10);
    u.display();
    u--;
    u.display();

}