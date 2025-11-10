#include<iostream>
using namespace std;
class Employee{
 string name;
 int id;
 float salary;

 public:
 void setname(string n){
    name =n;
 }
 void setid(int a){
    id = a;
 }
 void setsalary(float f){
    salary =f;

 }
 void getname(){
    cout<<"Name: "<<name<<endl;
    
 }
 void getid(){
    cout<<"id: "<<id<<endl;
 }
 void getsalary(){
    cout<<"salary: "<<salary<<endl;
 }

};
int main(){
    Employee e1;
    e1.setname("Arjun");
    e1.setid(20);
    e1.setsalary(25000.0);
    e1.getname();
    e1.getid();
    e1.getsalary();
    return 0;
}