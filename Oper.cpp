#include<iostream>
using namespace std;
class Test{
    int a;
    int b;
        public:
                Test(){

                }
                Test(int a, int b){
                    this->a = a;
                    this->b = b;
                }
                void display(){
                    cout<<"the sum of two object: "<<a <<" and "<<b<<endl;

                }
                Test operator+(Test Tx){
                    Test temp;
                    temp.a = a + Tx.a;
                    temp.b = b + Tx.b;
                    return temp;
                }
                
};
int main(){
    Test t1(5,10), t2(15, 6),t4(30, 60);
    Test t3 = t1 + t2 + t4;
    t3.display();
    return 0;


}