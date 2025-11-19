#include<iostream>
using namespace std;
class Binary{
    int a;
    int b;
        public:
               Binary(){

               }
               Binary(int c, int d) : a(c), b(d){

               }
               void display(){
                cout<<"sum of two object: "<<a<<" "<<b<<endl;
               }

               Binary operator +(const Binary &dz){
                Binary temp;
                temp.a = a + dz.a;
                temp.b = b + dz.b;
                return temp;
               }
                
};
                
int main(){
    Binary b1(45,65);
    Binary b2(23,46);
    Binary b3 = b1 + b2;
    b3.display();
    return 0;
}