#include<iostream>
using namespace std;
class RectAngle{
int length;
int width;
public:
    RectAngle(){

    }   
    RectAngle(int lenght, int width){
        this ->length = lenght;
        this ->width = width;
    }
    void show(){
        cout<<"lenght: "<<length<<endl;
        cout<<"width: "<<width<<endl;
    }
    RectAngle operator+(RectAngle &dx){
        RectAngle temp;
        temp.length = length + dx.length;
        temp.width = width  + dx.width;
        return temp;
    }
};
int main(){
    RectAngle R1(5,6), R2(15, 2);
    RectAngle R3 = R1 + R2;
    R3.show();
    return 0;
}