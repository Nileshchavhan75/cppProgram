#include<iostream>
using namespace std;
class Test{
        int a;
        int b;

public:
        Test(){

            }
        Test(int a, int b) :  a(a), b(b){

        }
    void display(){
        cout<<"Sum of two object: "<<a <<" "<<b<<endl;
        }
   Test operator-(Test &dy){
        Test obj;
                obj.a = a - dy.a;
                obj.b = b  - dy.b;
                return obj;
   }
};
int main(){
    Test t1(110, 50);
    Test t2(12,14);
    Test t3 = t1 - t2;
    t3.display();
    return 0;
}