#include<iostream>
using namespace std;
int main(){
int num1, num2, choice; 
cout<<"Enter two number: ";
cin>>num1>>num2;
cout<<endl;
cout<<"For Calculation, press\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n" ;
cin>>choice;
switch (choice)
{
case 1: cout<<"Addition of two number: "<<num1 + num2;
    break;
case 2: cout<<"Subtraction of two number: "<<num1 - num2;
    break;
case 3: cout<<"Multification of two number: "<<num1 * num2;
    break;
case 4: cout<<"Division of two number: "<<num1 / num2;
    break;
default:cout<<"Please Enter valid number";
    break;
}
return 0;
}