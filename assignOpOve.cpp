#include<iostream>
using namespace std;
class Assign{
    int a;
    public:
          //Assign (){}
          Assign(int a): a(a){

          }
        void display(){
            cout<<a<<endl;
        }
    Assign operator=( const Assign &a3){
        a = a3.a;
        return *this;

    }
        
};
int main(){
    Assign a1(0);
    Assign a2(50);
    a1 = a2;
    a1.display();
    return 0;


}