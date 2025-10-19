#include<iostream>
using namespace std;
class Addition{
    int a;
    int b;

    public:
    Addition(){}
    Addition(int a, int b){
        this->a = a;
        this->b = b;
    }

    void Display(){
        cout<<"Addition of A: "<<a<<endl;
        cout<<"Addition of b: "<<b<<endl;
    }

    Addition operator+(Addition &c){
        Addition temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }

};
int main(){
    Addition a(10,20);
    Addition b(20,30);
    Addition c;
    c = a + b;
    c.Display();
}