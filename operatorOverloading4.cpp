#include<iostream>
using namespace std;
class Assign{
    int a; 
    public: 
    Assign(){}
    Assign(int b){
        a = b;
    }
    void display(){
        cout<<"the valur of a "<<a<<endl;
    }
};
int main(){
    Assign a(10);
    Assign b;

    b = a;
    b.display();



}