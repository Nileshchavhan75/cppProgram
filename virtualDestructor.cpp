#include<iostream>
using namespace std;
class Base{
    public:
        virtual ~Base(){
            cout<<"Base class Destructor: "<<endl;
        }
};
class child:public Base{
    public:
        ~child(){
            cout<<"child class destructor"<<endl;
        } 
};
int main(){
    Base *base = new child();
    delete base;
    return 0;
}