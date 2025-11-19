#include<iostream>
using namespace std;
class number{
    int a;
public:
    number(int x): a(x){

    }
    void display(){
        cout<<a<<endl;
    }

    number operator=(const number &dx){
        a = dx.a;
        return *this;
    }     
};
int main(){
    number n1(0);
    number n2(10);
    cout<<"This is the value of n2: ";
    n2.display();
    n1 =  n2;
    cout<<"This is the value of n1: ";
    n1.display();
    return 0;
    

}