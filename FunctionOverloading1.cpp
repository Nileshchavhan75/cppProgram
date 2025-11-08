#include<iostream>
using namespace std;
int multiply(int a, int b){
    return a*b;
}
int multiply(int a, int b, int d){
return a*b*d; 
}
float multiply(float a, float b){
    return a*b;
}
int main(){
int x = 10;
int y = 20;
int z = 30;
cout<<multiply(x,y)<<endl;
cout<<multiply(x,y,z)<<endl;
float f = 10.12f;
float g = 11.12f;
cout<<multiply(f,g);
return 0;
}