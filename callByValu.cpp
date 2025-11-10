#include<iostream>
using namespace std;

  void swap(int a, int b){
    int temp = a;
        a = b;
        b = temp;
    cout<<"the Value of A: "<<a<<endl;
    cout<<"the Value of B: "<<b<<endl;
  }
int main(){
    int x = 10;
    int y = 20;
    swap(x, y);
    return 0;

}