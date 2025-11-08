#include<iostream>
using namespace std;
int add(int a, int b){
    return a + b;
}
double add(double x,double y){
  return x + y;
}
int main(){
    int num1 = 5, num2 = 10;
    double num3 = 4.5, num4 = 5.5;
    cout<<"sum of integer: "<<add(num1,num2)<<endl;
    cout<<"Sum of double: "<<add(num3,num4);
    return 0;

}
