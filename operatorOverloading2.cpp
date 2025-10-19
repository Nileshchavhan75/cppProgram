#include<iostream>
using namespace std;
class Substraction{
    int a;
    int b;

    public:
    Substraction(){}
    Substraction(int a, int b){
        this->a = a;
        this->b = b;

    }
    void display(){
        cout<<"after Substraction of 20 - 15 number: "<<a<<endl;
        cout<<"After Substraction of 30 - 20 number : "<<b<<endl;
    }

    friend Substraction operator+(Substraction const &n, Substraction const &r);
    
};
    Substraction operator+(Substraction const &n, Substraction const &r){
        Substraction temp;
        temp.a = n.a + r.a;
        temp.b = n.b + r.b;
        return temp;
    }
   
int main(){
    Substraction s(15,20);
    Substraction s1(20,30);
    Substraction s2;
    s2 = s1 + s;
    s2.display();

}