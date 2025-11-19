#include<iostream>
using namespace std;
class ArithOp{
 int a;
 public:
       void getdata(){
        cout<<"Enter number: ";
        cin>>a;
        cout<<endl;
       }
       void putdata(){
        cout<<"Her is the sum of object: "<<a<<" "<<endl;
       }
    ArithOp operator+(ArithOp &bb){
        ArithOp temp;
        temp.a = a + bb.a;
        return temp;
    }
     

};
int main(){
    ArithOp aa, bb, cc;
    aa.getdata();
    bb.getdata();
    cc = aa + bb;
    cc.putdata();
    return 0;

}