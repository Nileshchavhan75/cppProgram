#include<iostream>
using namespace std;
class Assign{
    int a;
    public:
           // Assign(){}
           Assign(int x):a(x){
            
           }
           void display(){
            cout<<"Enter number: "<<a<<endl;
           }

};
int main(){
    Assign A1(0);
    Assign A2(10);
    A1 = A2;
    A1.display();
    return 0;

}