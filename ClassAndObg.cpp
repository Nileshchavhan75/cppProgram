#include<iostream>
using namespace std;
class Student{
    string name;
    int age;
    int roll_no;
    public:
    void setname(string n){
        name = n;
    }
    void setage(int a){
        age = a;
    }
    void setroll_no(int b){
        roll_no = b;
    }
    void getname(){
        cout<<"name: "<<name<<endl;
    }
    void getage(){
        cout<<"age: "<<age<<endl;
    }
    void getroll_no(){
        cout<<"roll_no: "<<roll_no<<endl;
    }
};
int main(){
    Student S1;
    S1.setname("Falguni");
    S1.setage(21);
    S1.setroll_no(101);
    S1.getname();
    S1.getage();
    S1.getroll_no();

    return 0;
}