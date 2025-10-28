#include<iostream>
using namespace std;
class Number{
    int a;
public:
    Number(int a): a(a){

    }
    void display(){
        cout<<"Multiplication of two object: "<<a<<endl;
    }

 Number operator*(const Number &dx ){
    Number temp(a * dx.a);
      return temp;
 }
};
int main(){
    Number n1(15), n2(3);
    Number n3 = n1 * n2;
    n3.display();
    return 0;

}
