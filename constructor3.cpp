#include<iostream>
using namespace std;
class Student{
    string name;
    int age;
    public:
    Student(string name, int age): name(name),age(age){

    }
    Student(const Student &s){
        name = s.name;
        age = s.age;
    }

    void display(){
        cout<<"Name of Student: "<<name<<endl;
        cout<<"Age of Student: "<<age<<endl;
    }
};
int main(){
    Student s1("Nilesh", 22);
    s1.display();

    Student s2 = s1;
    s2.display();
    return 0;



}