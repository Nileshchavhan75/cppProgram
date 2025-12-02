#include<iostream>
using namespace std;
class Vahicle{
    public:
    virtual void displaySpeed(){
        cout<<"Base class Speed:"<<endl;
    }
};
class Car : public Vahicle{
    public:
    void displaySpeed(){
        cout<<"Car class Speed"<<endl;
    }
};
class Bike : public Vahicle{
    public:
    void displaySpeed(){
        cout<<"Bike class Speed"<<endl;
    }
};
class Truct : public Vahicle{
    public:
    void displaySpeed(){
        cout<<"Truct class Speed";
    }
};
int main(){
    Vahicle *V;

    Car c;
    Bike b;
    Truct t;
    V = &c;
    V->displaySpeed();
    V = &b;
    V->displaySpeed();
    V = &t;
    V->displaySpeed();

}