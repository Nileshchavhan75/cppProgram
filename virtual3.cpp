#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void displayArea(){
        cout<<"Shape class"<<endl;
    }
};
class circle : public Shape{
    public:
    int redius;
    circle(int r){
        redius = r;
    }
    void displayArea(){
        cout<<"Area of circle: "<< redius * redius *3.14;

    }
};
class rectangle : public Shape{
    public:
    int lenght, breadth;
    rectangle(int l, int b){
        lenght = l;
        breadth = b;
        
    }
    void displayArea(){
        cout<<"Area of RectAngle: "<< lenght * breadth;
    }
};
int main(){
    Shape *s1;
    circle c1(5);
    rectangle r1(12, 5);

    s1 = &c1;
    s1->displayArea();
    cout<<endl;
    s1 = &r1;
    s1->displayArea();
    return 0;


}