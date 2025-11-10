#include<iostream>
using namespace std;
class EqualOperator{
    int num;
    int num2;
    public:
    EqualOperator(int x, int y){
        num = x;
        num2 = y;
    }
    friend bool operator==(const EqualOperator &obj, const EqualOperator &obj2 );

};
bool operator==(const EqualOperator &obj, const EqualOperator &obj2){
    return(obj.num == obj2.num && obj.num2 == obj2.num2);
}
int main(){
    EqualOperator e(10, 20);
    EqualOperator e2(10,20);

    if(e == e2){
        cout<<"e and e2 are Equal"<<endl;
    }else{
        cout<<"e and e2 are not Equal"<<endl;
    }
}