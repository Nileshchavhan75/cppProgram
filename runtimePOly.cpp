#include<iostream>
using namespace std;
class Animal{
    public: 
            virtual void Display(){
                cout<<"Base class Animal"<<endl;
            }
};
class Dog : public Animal{
    public:
            void Display(){
                cout<<"Dog class Animal"<<endl;
            }
};
class Cat : public Animal{
    public:
            void Display(){
                cout<<"Cat class Animal"<<endl;
            }
};
int main(){
    Animal *a;
    Dog d1;
    Cat c1;

    a = &d1;
    a->Display();
    a = &c1;
    a->Display();

    return 0;

}