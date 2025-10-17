#include<iostream>
using namespace std;
class Binary{
    int num1;
    int num2;
            public:
                 Binary(){

                }
                Binary(int num1, int num2) :num1(num1), num2(num2){

                }
            void display(){
                cout<<num1<<" "<<num2;
        }
        Binary operator+(const Binary &n4){
            Binary temp;
            temp.num1 = num1 + n4.num1;
            temp.num2 = num2+ n4.num2;
            return temp;

        }
};
int main(){
    Binary n1(45,55);
    Binary n2(40,35);
    cout<<"Addition of two object: ";
    Binary b3;
    b3 = n1 + n2;
    b3.display();
    return 0;
}