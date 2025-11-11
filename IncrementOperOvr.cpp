#include<iostream>
using namespace std;
class Test{
 int a;
 public:
 void getdata(){
    cout<<"Enter the number: ";
    cin>>a;

 }
 void putdata(){
    cout<<"Value of a: "<<a<<endl;
 }
 void operator++(int){
    a = a + 1;
 }

};
int main(){
    Test t1;
    t1.getdata();
    cout<<"origanal value: ";
    t1.putdata();
    cout<<"After increment: "<<endl;
    t1++;
    t1.putdata();
}