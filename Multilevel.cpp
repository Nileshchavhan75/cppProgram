#include<iostream>
using namespace std;
class Human{
    protected:
        string name;
        string gender;
 public:
        Human(){
        cout<<"this will execute frist; "<<endl;
 }

};
class Student : public Human{
    protected:
        int roll_num;
        int id;
    public:
           Student(){
            cout<<"This will execute second: "<<endl;
           }

};
class Teacher : public Student{
string subject;
public: 
     Teacher(string name, string gender, int roll_num, int id,string subject){
       this->name = name;
       this->gender = gender;
       this->roll_num = roll_num;
       this->id = id;
       this->subject = subject;
     }
     void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"gender: "<<gender<<endl;
       // cout<<"roll_num: "<<roll_num<<endl;
        cout<<"id: "<<id<<endl;
        cout<<"subject: "<<subject;
     }
};
int main(){
    Teacher t1("Nilesh","Male",12,07,"DSA with C++");
    t1.display();
    return 0;
}