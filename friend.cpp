#include<iostream>
using namespace std;
class Circle {
    int redius;
                public: 
                Circle(int redius): redius(redius){

                }
                friend float calculateArea(Circle r);
};
float calculateArea(Circle r){
    return 3.14 * r.redius * r.redius;
}
int main(){
    Circle c1(5);
    cout<<calculateArea(c1);
    return 0;
}