#include<iostream>
using namespace std;
class Example1;
class Example{
    int a;
    int b;

    public:
        Example(int x, int y){
            a = x; 
            b = y;
        }
        friend int Addtion(Example, Example1);
};
class Example1{
    int a;
    int b;

    public:
        Example1(int y, int z){
            a = y;
            b = z;
        }
        friend int Addtion(Example, Example1);

};
int Addtion(Example e, Example1 e1){
    int sum = e.a + e.b + e1.a +e1.b;
    return sum;
}

int main(){
    Example e(5,10);
    Example1 e1(10,20);
    cout<<"The addition of two number: "<< Addtion(e, e1);
    return 0;
    
}