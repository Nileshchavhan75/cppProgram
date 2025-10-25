#include<iostream>
using namespace std;
class Unaryy{
    int a;
        public:
                Unaryy(int x): a(x){

                }
                void show(){
                    cout<<"the value of obj: "<<a<<endl;
                }
                Unaryy operator++(int){
                    Unaryy temp = *this;
                    a = a + 1;
                    return temp;
                }
};
int main(){
    Unaryy u1(5);
    u1.show();
    u1++;
    u1.show();
    return 0;


}