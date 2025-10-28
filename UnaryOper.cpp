#include<iostream>
using namespace std;
class Unary{
    int a;
    public:
    Unary(int x){
        a = x;
    }
    void display(){
        cout<<" A: "<<a<<endl;
    }
    Unary operator++(int){
        a = a + 1;
        return *this;
    }
};
int main(){
    Unary u(10);
    u.display();
    u++;
    u.display();
    

}