#include<iostream>
using namespace std;
class Calculate{
    public:
        virtual void area(){
            cout<<"Calculate class function";
        }
};
class Rectangle:public Calculate{
    public:
    int lenght;
    int breadth;
    Rectangle(int lenght, int breadth){
        this->lenght = lenght;
        this->breadth = breadth; 
    }
    void area(){
        cout<<"Area of Rectangle: "<<lenght * breadth <<endl;
    }
};
class Circle : public Calculate{
    public:
    float radius;
    Circle(float radius){
        this->radius = radius;
    }
    void area(){
        cout<<radius * radius * 3.14;
    }
};
int main(){
    Calculate *calculate;
    Rectangle r(15,20);
    Circle c(5);

    calculate = &r;
    calculate->area();
    calculate = &c;
    calculate->area();
    return 0 ;
}