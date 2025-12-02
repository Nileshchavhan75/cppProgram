#include<iostream>
using namespace std;
class shape{
    public:
    virtual void getArea(){
        cout<<" shape class method: "<<endl;
    }
};
class circle : public shape{
    float radius;
    public:
    circle(float radius){
        this->radius = radius;
    }
    void getArea(){
        cout<<"Into the Circle class: "<<radius * radius* 3.14<<endl;
    }
};
class RectAngle : public shape{

    int lenght;
    int breadth;
    public:
    RectAngle(int lenght, int breadth){
        this->lenght = lenght;
        this->breadth = breadth;
    }
    void getArea(){
        cout<< "Into the Rectangle: "<<lenght * breadth<<endl;

    }
};
int main(){
    shape *p;
    circle c(12.2);
    p = &c;
    p->getArea();

    RectAngle r(10,20);
    p = &r;
    p->getArea();

}