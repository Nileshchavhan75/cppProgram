#include<iostream>
using namespace std;
class Unary{
    int value;
    public:
    Unary(int x):value(x){

    }
    void display(){
        cout<<"Value: "<<value<<endl;
    }
    Unary operator--(){
        --value;
        return *this;
    }

};
int main(){
    Unary u(47);
    u.display();
    --u;
    u.display();
    
}