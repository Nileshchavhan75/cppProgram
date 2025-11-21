#include<iostream>
using namespace std;
class Unary{
 int a;
 public:
       Unary(int x) : a(x){
          
       }
    void display(){
        cout<<"Value of: "<<a<<endl;
    }
    friend Unary operator++(Unary &obj,int);
};
Unary operator++(Unary &obj,int){
        Unary temp = obj;
        obj.a = obj.a + 1;
        return temp;
    }
int main(){
    Unary u1(5);
    u1.display();
    u1++;
    u1.display();
    return 0;
}
