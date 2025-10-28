#include<iostream>
using namespace std;
class Test{
    int a;
public:
    Test(int a) : a(a){

    }
void display(){
    cout<<"value of a: "<<a<<endl;
}
Test operator++(){
    a = a + 1;
}
Test operator--(){
    a -= 1;
}
};
int main(){
    Test t1(5);
    t1.display();
    cout<<"After incremnet: ";
    ++t1;
    t1.display();
    --t1;
    t1.display(); 
    return 0;

}