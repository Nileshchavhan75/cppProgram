#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void makeSound()=0;
};
class Dog:public Animal{
    public:
    void makeSound(){
        cout<<"Dog Bark: "<<endl;
    }
};
class cat : public Animal{
    public:
    void makeSound(){
        cout<<"Cat meows: "<<endl;
    }
};
int main(){
    Animal *p;
    Dog d;
    p = &d;
    p->makeSound();

    cat c;
    p = &c;
    p->makeSound();

    return 0;
}