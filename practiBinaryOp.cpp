#include<iostream>
using namespace std;
class Binary{
    int a;
    int b;
    public:
           Binary (int a = 0, int b = 0): a(a),b(b){

           }
           void display(){
            cout<<"Addition of two obj: "<<a<<" "<<b<<endl;
           }
       
       friend Binary operator+(const Binary &dx, const Binary &dy);
       };

Binary operator+(const Binary &dx, const Binary &dy){
    Binary temp;
       temp.a = dx.a + dy.a;
       temp.b = dx.b + dy.b;
       return temp;
}
int main(){
    Binary b1(5, 6),b2(10,20);
    Binary b3 = b1 + b2;
    b3.display();
    return 0;
}