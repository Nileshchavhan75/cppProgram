#include<iostream>
using namespace std;
class Human{
    public:
            virtual void display(){
                cout<<"Human speaks"<<endl;
            }
};
class boy : public Human {
    public: 
            void display(){
                cout<<"Boy speaks"<<endl;
            }
};
int main(){
    Human *p;
    boy obj;
    p = &obj;
    p->display();
}