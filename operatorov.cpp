#include<iostream>
using namespace std;
class Mul{
    int n;
    public:
    Mul(int x){
        n = x;

    }
    void display(){
        cout<<" N = "<<n<<endl;
    }
    friend Mul operator*(Mul &z, Mul &x);
};
Mul operator*(Mul &z, Mul &x){
    return(z.n * x.n);
}
int main(){
    Mul x(5);
    Mul y(10);
    Mul a = x * y;
    a.display();
}