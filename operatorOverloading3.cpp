#include<iostream>
using namespace std;
class EqualOperator{
    int a;
    int b;
    public:
    EqualOperator(int a, int b){
        this->a = a;
        this->b = b;
    }
    bool operator ==(EqualOperator const &c){
        return (a == c.a && b == c.b);
    }
};
int main(){
    EqualOperator q(45, 50);
    EqualOperator q1(45, 50);
    EqualOperator q3(12,56);

    if(q == q1){
        cout<<"q and q1 are Equal: "<<endl;
    }else{
        cout<<"q and q1 are not Equal: "<<endl;
    }

    if(q1 == q3){
        cout<<"q and q3 are equal: "<<endl;
    }else{
        cout<<"q and q3 are not qual: "<<endl;
    }
    return 0;
}